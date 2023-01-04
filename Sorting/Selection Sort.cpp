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

    // Syntex For Selection Sort
     for(int i=0; i<n-1; i++)
     {
         for(int j=i+1; j<n; j++)
         {
             if(arr[j] < arr[i])
             {
                 int temp = arr[j];
                 arr[j] = arr[i];
                 arr[i] = temp;
             }
         }
     }

     cout<<"Sorted Array : ";
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }


    getch();
}

