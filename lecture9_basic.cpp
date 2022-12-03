#include<iostream>
#include<array>
using namespace std;

// int main()
// {
//     int arr[14];
//     cout<<" value at index 11"<<arr[11]<<endl;
    
//     int array[3]={3,6,9};
//     cout<<"index in array:"<<array[2]<<" ";
//     cout<<endl;

//     int loop[11]={2,5,7};
//     int n=11;
//     cout<<" printing a 11 array#:";
//     for(int i=0; i<n;i++)
//     {
//         cout<<loop[i]<<" ";
//     }

//     cout<<endl;

// //PRINT ZERO
//     int www[7]={0};
//     int k=7;
//     cout<<"print ZERO index:#";
//     for(int j=0; j<k; j++)
//     {
//         cout<<www[j]<<" ";
//     }
//     cout<<endl;    
    
// //PRINT ONE
//     int nxt[7]={1};
//     int z=7;
//     cout<<"print ONE index:#";
//     for(int l=0; l<z; l++)
//     {
//         cout<<nxt[l]<<" ";
//     }
//     cout<<endl;

// // //PRINT one
//     int arrr[10];
//     fill_n(arrr, 10, 1);
//     cout<<" print whoale arrr";
//     for(int i=0; i<10; i++)
//     {
//         cout<<arrr[i];
//     }
    
// }

/*SECOND PART*/

void printArray(int arr[], int size)
{
    cout<<"PRINTING THE ARRAY%%%%%   :- ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"/////PRINTING DONE///////"<<endl;
}

int main()
{
    int arr[15]={3,5,4,6,7};
    int n=15;
    printArray(arr,15);
    int arrsize=sizeof(arr)/sizeof(int);
    cout<<" SIZE OF ARR IS:-"<<arrsize<<endl;

}