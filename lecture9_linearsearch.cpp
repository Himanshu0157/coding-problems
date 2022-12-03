#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[11]={3,2,5,1,6,3,76,80,7,6,11};
    cout<<"enter the element to search for:"<<endl;
    int key;
    cin>>key;

    bool found=search(arr,11,key);
    if (found)
    {
        cout<<"ELEMENT IS PRESENT"<<endl;
    }    
    else 
    {
        cout<<"element is not found"<<endl;
    }
    return 0;
}