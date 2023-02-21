//Write a code to sort an array in insertion sort and count the number of swaps and comparisons.

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

    int swaps = 0;
    int comparisons = 0;

    // Syntex For Insertion Sort
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
            swaps++;
            comparisons++;
        }
        arr[j+1] = temp;
        swaps++;
    }

    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nNumber of swaps: "<<swaps<<endl;
    cout<<"Number of comparisons: "<<comparisons<<endl;

    getch();
}

