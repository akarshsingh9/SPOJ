/*
* Problem: FCTRL - Factorial
* Link: https://www.spoj.com/problems/FCTRL/
* To find number of traling zeros. you will have to find number of 5 and 2 in factorial.
* Eg: 5! one 5 aqnd 2 and 1 trailing zero. 11! have two 5's and three 2's hence 2 trailing zeros
* In any situation number of 2's in prime factors is always more than or equal to the number of 5s. 
* Sol: count 5s in prime factors. 
* Trailing 0s in n! = Count of 5s in prime factors of n! = floor(n/5) + floor(n/25) + floor(n/125) + ....
*/

#include <bits/stdc++.h>

using namespace std;

long long int countfact(long long int n)
{
    long long int zerocount=0, count =1,i;
    while(1)
    {
        if(pow(5,count) < n)
            count++;
        else
            break;
    }
    for(i=1;i<=count;i++)
    {
        zerocount+=floor(n/pow(5,i));
    }
    return zerocount;
}

int main() {
    
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<countfact(n)<<endl;
    }
    
	return 0;
}
