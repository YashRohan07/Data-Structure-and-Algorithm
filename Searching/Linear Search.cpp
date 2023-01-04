#include<iostream>
#include<conio.h>

using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;

    cout<<"Enter Elements for the array : ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"What you wanna Search ? "<<endl;
    int key;
    cin>>key;

    cout<<"The Index Of the key : ";
    cout<< LinearSearch(arr,n,key)<<endl;


    getch();
}
