#include<iostream>
#include<conio.h>

using namespace std;

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

    // Syntex For Bubble Sort
    int counter = 1;
    while(counter < n)
    {
        for(int i=0; i< n - counter; i++)
     {
         if(arr[i] > arr[i+1])
             {
                 int temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
             }

     }
     counter++;

    }


     cout<<"Sorted Array : ";
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }


    getch();
}


