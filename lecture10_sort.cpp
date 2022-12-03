//sort 0&1
#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void SortOne(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<end) 
    {
        while(arr[start]==0 && start<end)
        {
            start++;
        }
        while(arr[end]==1 && start<end)
        {
            end--;
        }
        if(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }        
    }   
}

int main()
{
    int arr[7]={1,2,1,1,0,1,0};

    SortOne(arr,7);
    printArray(arr,7);

    cout<<" hello"<<endl;
}



       /*SORT 0,1,2 */
// void Sort(int arr[],int size)
// {
//     int zero=0;
//     int one=0; 
//     int two=size-1;
    
//     while(one<two)
//     {
//         if(arr[one]==2)
//         {
//             swap(arr[one],arr[two]);
//             two--;
//         }
//         if(arr[one]==0)
//         {
//             swap(arr[one],arr[zero]);
//             one++;zero++;
//         }
//         if(arr[two]==1)
//         {
//             two++;
//         }         
//     }
// }
     /*BU TTHIS IS NOT RIGHT */