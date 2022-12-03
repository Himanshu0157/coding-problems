#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row,int col )
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            if(arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row,int  col)
{
    cout<<"Printing the sum->"<<endl;
    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<4; col++)
        {
            sum=sum+arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[3][4];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the target value:";
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4))
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is not present"<<endl;
    }


    cout<<" print ing the sum :";
    printSum(arr,3,4);

    return 0;
}