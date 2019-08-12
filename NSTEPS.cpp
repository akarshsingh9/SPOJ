/*
* Problem: NSTEPS - Number Steps
* Link: https://www.spoj.com/problems/NSTEPS/ 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(y==x-2 || y==x)
        {
            if(x % 2 == 0 && y % 2 == 0)
            {
            cout<< x + y<<endl;
            }
            else if(x % 2 != 0 && y % 2 != 0)
            {
            cout<<((x + y) - 1)<<endl;
            }
        }    
        else
        {
            cout<<"No Number"<<endl;
        }
      
    }
	return 0;
}
