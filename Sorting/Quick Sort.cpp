#include<iostream>
using namespace std;

// partition function that returns the pi
int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left-1;

    for(int j=left; j<right; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[right]);
    return i+1;
}


void quicksort(int arr[], int left, int right)
{
    if(left >= right)
    {
        return;
    }

    int pi = partition(arr,left,right);  // Ekhan Theke Pivot element er Index paua jabe

    quicksort(arr, left, pi-1);
    quicksort(arr, pi+1, right);
}

int main()
{
    int n;
    cout<<"Enter The Number Of Elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter " <<n<< " Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }



}

/*

int main()
{
    int arr[] = {6, 2, 9, 1, 5, 12, 10, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

*/
