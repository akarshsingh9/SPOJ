/*
* Problem: SAMER08F - Feynman
* Link: https://www.spoj.com/problems/SAMER08F/
* No. of squares in N x N square is sum of squares 1^2 + 2^2 + 3^2 + ... + n^2 = (n*(n+1)*(2n+1))/6 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,sumq;
    do{
        cin>>x;
        if(x!=0)
        {
        sumq = (x*(x+1)*(2*x+1))/6;
        cout<<sumq<<endl;
        }
    }while(x!=0);
	return 0;
}
