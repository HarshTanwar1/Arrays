#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    cout<<"Enter the elements :: ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }   

    cout<<"Reverse :: ";
    int start = 0,end = n-1;

    while(true)
    {
        if(start>end)
        {
            break;
        }
        else
        {
            swap(arr[start],arr[end]);          // THIS IS THE TWO POINTER APPROACH 
        }
        start++;
        end--;
    }

    for(auto i: arr)
    {
        cout<<i<<" ";
    }

    return 0;
}