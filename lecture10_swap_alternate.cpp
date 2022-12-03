#include<iostream>
using namespace std;

void PrintArray(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void SwapAlternate(int arr[],int size)
{
    for(int i=0; i<size; i=i+2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int even[6]={32,1,5,9,11,07};
    int odd[5]={3,01,34,66,1};

    SwapAlternate(even,6);
    PrintArray(even,6);

    SwapAlternate(odd,5);
    PrintArray(odd,5);
}