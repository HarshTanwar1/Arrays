#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Your elements :: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }  

    cout<<"Extreme print of array :: ";
    int start = 0,end = n-1;
    for(;start<=end;){
        if(start == end){
            cout<<arr[start++]<<" ";
        }
        else{
        cout<<arr[start++]<<" "<<arr[end--]<<" ";
        }
    }

    return 0;
}