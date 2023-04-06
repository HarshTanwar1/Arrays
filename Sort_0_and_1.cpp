#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    vector<int> arr;
    int x;
    cout<<"Enter the elements : ";

    for(int i = 0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    
    int start = 0,end = arr.size()-1,i = 0;
    while(i != end)
    {
        if(arr[i] == 0)
        {
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else
        {
            swap(arr[end],arr[i]);
               end--;
        }
    }


    cout<<"After sorting 0's and 1's :: ";
    for(auto i : arr)
    {
        cout<<i<<" ";
    }



    return 0;
}