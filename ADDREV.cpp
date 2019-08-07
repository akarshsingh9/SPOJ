/*
* Problem: ADDREV - Adding Reversed Numbers
* Link: https://www.spoj.com/problems/ADDREV/
* reverse(v.begin(),v.end()) - reverse string, vector, collections
* stoi(num) - convert string to integer, check stof
* to_string(var) - convert it to string
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long int t,x1,x2,add;
	string n1,n2,rev;
	cin>>t;
	while(t--)
	{
	    cin>>n1>>n2;
	    reverse(n1.begin(),n1.end());
	    reverse(n2.begin(),n2.end());
	    x1 = stoi(n1);
	    x2 = stoi(n2);
	    add = x1 + x2;
	    rev = to_string(add);
	    reverse(rev.begin(),rev.end());
	    cout<<stoi(rev)<<endl;
	}
	
	return 0;
}
