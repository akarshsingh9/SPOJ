/*
* Problem: ONP - Transform the Expression
* Link: https://www.spoj.com/problems/ONP/
* Transform infix expression to postfix expression using stack stl
* take input using string class - no char array decay issue, iterate through each char using s.begin(), s.end()
* if char is (,+,-,/,*,^ 
    push into stack
* else 
    if its a number that is it is not ')' then print it
    else pop until '(' is reached, then pop rest of the stack if not empty

*/
#include <bits/stdc++.h>
using namespace std;

void postfix(string s)
{
    stack<char> ch;
    for(auto it = s.begin();it!=s.end();it++)
    {
        if(*it == '(' || *it == '+' || *it == '-' || *it == '*' || *it == '/' || *it == '^')
        {
            ch.push(*it);
        }
        else
        {
            //if numbers print it
            if(*it!=')')
            {
                cout<<*it;
            }
            // it ')' is encountered, start popping stack
            else
            {
                while(ch.top() != '(')
                {
                    cout<<ch.top();
                    ch.pop();
                }
                ch.pop();
            }
        }
    }
    // if stack is not empty.
    if(!ch.empty())
    {
        while(!ch.empty())
        {
            cout<<ch.top();
            ch.pop();
        }
    }
    
}

int main() {
    int t;
    
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        postfix(s);
        cout<<endl;
    }
	
	
	return 0;
}
