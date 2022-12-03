#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int *arr, int n)
{
    for(int i=1; i<n; i++)
    { 
        bool swapped=false;                    //used for best time complexity for best case
        for(int j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped == false)
            break;
        
    }
}

int main()
{
    int arr[7]={5,1,4,9,2,0,3};
    BubbleSort(arr, 7);

    for(int i=0; i < 7; i++)
        cout << arr[i] << " ";


}