// Write a code to sort an array using merge sort and also find the number of division of the array.

#include <iostream>

using namespace std;

int divisions = 0;

// Conquer Part
void merge(int arr[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = 0;
    int temp[right - left + 1];

    while (i <= mid && j <= right)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else{
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

     for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i-left];
    }

}

// Divide Part
void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;     //When the array has one element
    }

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);       // For 1st step
    mergeSort(arr, mid + 1, right);  // For 2nd step

    merge(arr, left, mid, right);    // For Sorting the array

    divisions++; // increment the number of divisions
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Number of divisions: " << divisions << endl;

    return 0;
}

