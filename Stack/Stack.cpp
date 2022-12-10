#include<iostream>
using namespace std;

#define n 100

class stack{

int *arr;
int top;

public:
    stack(){
       arr=new int[n];
       top=-1;
    }

// Push Operation
void push(int x){

   if(top==n-1){
    cout<<"Stack Overflow"<<endl;
    return;
   }

   top++;
   arr[top]=x;
}

// Pop Operation
void pop()
{
    if(top==-1)
    {
      cout<<"No Element to Pop"<<endl;
      return;
    }

     top--;
}

// Top Operation
int Top()
 {
     if(top==-1)
     {
        cout<<"No Element in Stack"<<endl;
        return -1;
     }

      return arr[top];

  }

// Empty Operation
bool empty()
 {
     return top == -1;
 }

};

int main()
{
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.Top()<<endl;  // 3 is the top most element

    st.pop();    // 3 Removed
    cout<<st.Top()<<endl;   // Now 2 is the top

    st.pop(); // 2 Removed
    st.pop(); // 1 Removed
    st.pop(); // No element to pop

    cout<<st.empty()<<endl; // Now the stack is empty so it returns True(1)
}
