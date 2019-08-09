/*
* Problem: FCTRL2 - Small factorials
* Link: https://www.spoj.com/problems/FCTRL2/
* find factorial of numbers returning big numbers like 100!. Array method in c++
* store digits in int array, 100! has only 158 digits. Code does normal multiplication with carry and all
* result array stores 1 in beginning and we iterate from 2 to n (number given)
* result[i] has last digit of prod where as carry has remaining digits. then remaining carry is processed
* result is stored backwards in array so iterate backwards to display output.
*/
#include <bits/stdc++.h>
#define MAX 500
using namespace std;

int multiply(int result[], int result_size, int x)
{
    int carry = 0,prod;
    for(int i=0;i<result_size;i++)
    {
        prod = result[i]*x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }
    while(carry)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }
    return result_size;
}

void fact(int n)
{
    int result[MAX];
    result[0] = 1;
    int result_size = 1;
    for(int x = 2; x<=n; x++)
    {
        result_size = multiply(result,result_size,x);
    }
    for(int z=result_size-1; z>=0; z--)
    {
        cout<<result[z];
    }
    cout<<endl;
}


int main() {
    
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fact(n);
    }
    
	return 0;
}
