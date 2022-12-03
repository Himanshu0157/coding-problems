#include<iostreaM>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr1 , int m, int *arr2, int n , int *arr3)
{
    int i=0,j=0;
    int k=0;
    while( i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }
    while(i<m)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n)
    {
        arr3[k++]=arr2[j++];
    }
}

void print( int ans[], int n )
{
    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr1[5]={3,5,8,9,11};
    int arr2[3]={1,2,6};

    int arr3[8]={0};

    merge(arr1 , 5 ,arr2 , 3 , arr3);

    print(arr3 , 8);

    return 0;
}