#include <bits/stdc++.h>
using namespace std;

int i, j;

//For changing contents in array too
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

//Bubble sort checks if the current element is greater than the next element, then swap them
void bubblesort(int arr[], int n)
{
    for (i = 0; i < n; i++)
    {
        int flag, temp = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            flag = 1;
        }
        if (flag == 0)
        { //If no swapping then array has been already sorted
            break;
        }
    }
}

void display(int arr[], int n)
{
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Bubble sort" << endl;
    bubblesort(arr, n);
    cout << "Array after sorting" << endl;
    display(arr, n);
}