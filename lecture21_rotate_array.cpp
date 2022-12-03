#include<iostreaM>
#include<bits/stdc++.h>
using namespace std;

void rotateArray( int arr[], int n ,int k)
{    
    for(int i=0; i<n; i++)
    {
        int temp=0;
        int c=(i+k)%n;
        temp[c]=arr[i];
    }
    arr=temp;

}

void print (int ans[], int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5]={3,5,8,0,1};

    int k=2;
    // cout<<"Enter the value of k:";
    // cin>>k;

    rotateArray(arr,5 ,2);

    print(arr,5);
    
    return 0;
}

//some problem