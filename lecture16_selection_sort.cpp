#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[minIndex] > arr[j])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main()
{
    int arr[7]={5,1,4,9,2,0,3};
    SelectionSort(arr, 7);
    cout << endl;

    for(int i=0; i < 7; i++)
        cout << arr[i] << " ";


}