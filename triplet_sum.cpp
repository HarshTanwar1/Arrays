#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements :: ";
    cin>>n;
    vector<int> arr;
    for(int i = 0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<"All Triplet Pairs : \n";
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            for(int k = j+1;k<n;k++)
            {
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            }
        }
    }
    cout<<"Enter the sum whose pair you want to find :: ";
    int key ;cin>>key;
    cout<<"Your pairs are : ";
        for(int i = 0;i<arr.size();i++)
    {
        for(int j = i+1;j<arr.size();j++)
        {
            for(int k = j+1;k<arr.size();k++)
            {
                if(arr[i]+arr[j]+arr[k] == key)
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
            }
        }
    }

    return 0;
}