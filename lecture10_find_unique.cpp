#include<iostream>
using namespace std;
int FindUnique(int *arr ,int size)
{
    int ans=0;
    for(int i=0; i<size; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[7]={3,2,3,2,1,4,1};
    
    cout<<" Unique element present in arr: "<<FindUnique(arr,7)<<endl;
}