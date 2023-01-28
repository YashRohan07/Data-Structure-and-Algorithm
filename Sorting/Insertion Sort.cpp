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

    // Syntex For Insertion Sort
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;

        while(arr[j] > temp   &&   j >= 0)
        {
            arr[j+1] = arr[j];
            j--; // j=i-1
        }
        arr[j+1] = temp;
    }

     cout<<"Sorted Array : ";
     for(int i=0; i<n; i++)
     {
         cout<<arr[i]<<" ";
     }


    getch();
}


