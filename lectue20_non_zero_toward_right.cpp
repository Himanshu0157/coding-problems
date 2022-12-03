#include<iostreaM>
#include<bits/stdc++.h>
using namespace std;

void nonZero(int *arr, int n)
{
    int i=0;
    for(int j=0; j<n; j++)
    {
        if( j != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void print (int arr[], int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6]={0,0,3,0,2,12};

    nonZero(arr,6);
    
    print(arr, 6);
    return 0;

}

//LITTLE MISTAKE