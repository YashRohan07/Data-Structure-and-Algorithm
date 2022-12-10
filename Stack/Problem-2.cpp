/* Write a program which stores some numbers in a stack and in a queue. The stack and the queue will have same
number of elements. Now perform necessary operations to add the numbers elementwise from both stack and queue
and store the result in another queue. Finally show the stored number on screen. You are allowed to use only push,
pop, enqueue and deque operations.
Sample input:
Stack→ 5, 9, 7, 3, 4 (top)
Queue→ (front) 8, 6, 4, 2, 3 (rear)
Output: 12, 9, 11, 11, 8 */


#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){

    stack<int>st;
    queue<int>qe ;
    queue<int>qe2;

    int size,value,sum=0;

    cout<<"Enter the size of stack and Queue : ";
    cin>>size;

    cout<<" Enter some Value for Stack : "<<endl;
    for(int i=0;i<size;i++){
        cin>>value;
        st.push(value);
    }
    cout<<"Enter some Value for Queue : "<<endl;
    for(int i =0;i<size;i++){
        cin>>value;
        qe.push(value);
    }
    for(int i=0;i<size;i++){
        sum = st.top()+qe.front();
        qe2.push(sum);
        sum=0;
        st.pop();
        qe.pop();
    }
    for(int i=0;i<size;i++){
        cout<<qe2.front()<<" ";
        qe2.pop();
    }
}
