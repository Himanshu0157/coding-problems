
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> TriplateSum(vector<int>arr, int n, int s)
{
    vector<vector<int>>ans;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1; j<arr.size(); j++)
        {
            for(int k=j+1; k<arr.size(); k++)
            {
                if(arr[i]+arr[j]+arr[k] == s)
                {
                    vector<int>temp;
                    // temp.push_back(min(arr[i],min(arr[j],arr[k])));
                    // temp.push_back(max(arr[i],max(arr[j],arr[k])));
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    ans.push_back(temp);
                }
            }
        }
    }
    // sort(ans.begin(),ans.end());
    return ans;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    int s=12;
    vector<vector<int>>www=TriplateSum(arr,5,s);
    
    for(int i=0; i<www.size(); i++)
    {
        for(int j=0; j<www[i].size(); j++)
        {
            cout<<www[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;

}