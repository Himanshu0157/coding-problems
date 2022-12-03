#include <bits/stdc++.h> 
using namespace std;

bool isPossible(int *arr, int n, int m,int mid)
{
    int Painter=1;
    int pageSum=0;
    for(int i=0; i<n; i++)
    {
        if(pageSum+arr[i] <= mid)
        {
            pageSum=pageSum+arr[i];
        }
        else
        {
            Painter++;
            if(Painter > m || arr[i]>mid)
            {
                return false;
            }
            pageSum=arr[i];
        }
        if(Painter>m)
        {
            return false;
        }        
    }
    return true;
}

int avilablePainter(int *arr, int n, int m) 
{
    // Write your code here.
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[4]={5,5,5,5};
    int outcome=avilablePainter(arr,4,2);
    cout<<"Book allocate to m person is :"<<outcome<<endl;
    return 0;

}