#include<iostream>
using namespace std;

int BinarySearch(int *arr,int size ,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] < key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int even[8]={2,3,5,7,9,11,22,45};
    int odd[5]={2,4,6,8,9};

    int evenindex=BinarySearch(even,8,11);
    int oddindex=BinarySearch(odd,5,6);

    cout<<"key present at index : ->"<<evenindex<<endl;
    cout<<"key present at index : ->"<<oddindex<<endl;

    return 0;

}