/*
* Problem: TEST - Life, the Universe, and Everything. 
* Link: https://www.spoj.com/problems/TEST/
* To stop printing after number 42 is read.
*/
#include <iostream>
using namespace std;

int main() {
	int x;
	while(x!=42)
	{
	    cin>>x;
	    if(x != 42)
	        cout<<x<<endl;
	    else
	        break;
	}
	return 0;
}
