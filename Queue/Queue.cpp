#include<iostream>
using namespace std;

#define n 20

class queue{

  int *arr;
  int front;
  int back;

  public:
      queue(){

      arr=new int[n];
      front=-1;
      back=-1;

      }

    void push(int x)
    {
        if(back ==n-1)
        {
            cout<<"Queue is Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front ==-1)
        {
            front++;
        }
    }

    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"No elements in queue"<<endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if(front==-1 || front>back)
        {
            cout<<"No elements in queue"<<endl;
            return true;
        }
        return false;
    }

};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl; // 1 is the Front
    q.pop();  // 1 Removed

    cout<<q.peek()<<endl;  // 2 is the Front
    q.pop();  // 2 Removed

    cout<<q.peek()<<endl;  // 3 is the Front
    q.pop();  // 3 Removed

    cout<<q.peek()<<endl;  // 4 is the Front
    q.pop();  // 4 Removed

    cout<<" "<<endl;

    cout<<q.empty()<<endl; // There is no element, so it returns True(1)
}
