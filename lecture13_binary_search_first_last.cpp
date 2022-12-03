// FIRST AND LAST OCCURRENCE 
#include<iostream>
using namespace std;

int lastSearch(int *arr,int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    int ans=-22;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans= mid;
            start=mid+1;

        }
        else if(arr[mid] < key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int firstSearch(int *arr,int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    int ans=-11;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid] < key)
        {
            start=mid+1;
        }
        else if(arr[mid]> key)
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[8]={2,3,4,5,11,11,11,13};    

    cout<<"key present at last index : ->"<<lastSearch(arr,8,11)<<endl;
    cout<<"key present at first index : ->"<<firstSearch(arr,8,11)<<endl;
    
    int TotalOccurence=(lastSearch(arr,8,11)-firstSearch(arr,8,11))+1;
    cout<<TotalOccurence<<endl;

    return 0;

}