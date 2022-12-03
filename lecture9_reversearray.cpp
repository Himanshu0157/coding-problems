#include<iostream>
using namespace std;

void Reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;end--;
    }
}

void printArray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6]={4,1,8,33,0,11};
    int brr[5]={37,55,1,423,01};

    Reverse(arr,6);
    Reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}