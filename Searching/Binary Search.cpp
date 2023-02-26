#include<iostream>
#include<conio.h>

using namespace std;

int BinarySearch(int Array[], int n, int key)
{
    int left, right, mid;

    left = 0;
    right = n;

    while(left <= right)
    {
        mid = (left+right)/2;
        if(Array[mid] == key)
        {
            return mid;       //If the item to be searched is present at middle
        }

        else if(Array[mid] < key)
        {
            left = mid + 1;        //If the item to be searched is greater than mid, then it can only be in right subarray.
        }

        else{
            right = mid - 1;       //If the item to be searched is less than mid, then it can only be in left subarray.
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
    cout<< BinarySearch(arr,n,key)<<endl;


    getch();
}

