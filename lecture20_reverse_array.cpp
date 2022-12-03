// #include <iostream>
// using namespace std;


// void reverse(int arr[],int n){
//    int i=0; 
//    int j= n-1;
//    while(i<j){
//        swap(arr[i++],arr[j--]);
//    }
// }


// int main() {
//    int n;
//    cin>>n;

//    int arr[n];
//    for(int i=0; i<n; i++){
//        cin>>arr[i];
//    }
   
//    reverse(arr,n);
   
//    for(int i=0; i<n; i++){
//        cout<<arr[i]<<" ";
//    }
 
//    return 0;
// }


/* IN VECTOR FORM*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>reverse(vector<int>v)
{
    int s=0;
    int e=v.size()-1;

    while(s<=e)
    {
        swap(v[s],v[e]);
        s++;e--;
    }
    return v;
}

void print(vector<int>v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v;

    v.push_back(9);
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    v.push_back(90);

    vector<int>ans=reverse(v);

    print(ans);

    return 0;
}