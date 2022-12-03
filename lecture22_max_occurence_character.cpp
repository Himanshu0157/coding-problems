#include<iostream>
using namespace std;

char maxOccurenceChar(string s)
{
    int arr[26]={0};

    for(int i=0; i<s.length(); i++)
    {
        char ch=s[i];
        int number =0;
        if(ch>='a' && ch<='z')                      //lower case
        {
            number=ch-'a';
        }
        else                                        //upper case
        {
            number=ch-'A';
        }
        arr[number]++;
    }

    int maxi=-1;
    int ans=0;
    for(int i=0; i<26; i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}

int main()
{
    string n;
    cout<<"enter the value of n:";
    cin>>n;                                                         //output,goodnight,

    cout<<maxOccurenceChar(n)<<endl;

    return 0;
}