/*
* Problem: PRIME1 - Prime Generator
* Link: https://www.spoj.com/problems/PRIME1/
* To find if number is prime and print it. O(n*sqrt(n)) solution. Iteration only sqrt(n) times for prime number.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(long int num)
{
    if(num < 2)
        return false;
        
    for(long int i =2; i<=sqrt(num);i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
	long int t,m,n,i=0,j=0,k;
	cin>>t;
	while(t--)
	{
	    cin>>m>>n;
	    for(long int i = m; i<=n; i++)
	    {
	        if(isPrime(i))
	            cout<<i<<endl;
	    }
	    cout<<endl;
	}
	
	return 0;
}
