/*Write a program to reverse a string using stack. You can use only push and pop operations in this implementation.
Sample input: I am here
Output: ereh ma I */


#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>res;
    string input, temp="";
    cout<<"Enter something "<<endl;
    cin>>input;

    for(int i=0; i<input.size(); i++)
    {
        temp=temp+input[i];
        res.push(temp);
        temp="";


    }
    for(int i=0; i<input.size(); i++)
    {
        cout<<res.top();
        res.pop();
    }
}
