#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
    // // WITHOUT DUPLICATES
    // vector <int> a(5);
    // vector<int> b(4);
    // vector<int> ans;
    // cout<<"Enter the elements of a : ";
    // for(int i = 0;i<a.size();i++){
    //     cin>>a[i];
    // }
    // cout<<"Enter the elements of b : ";
    // for(int i = 0;i<b.size();i++){
    //     cin>>b[i];
    // }

    // for(auto i : a){
    //     ans.push_back(i);
    // }
    // for(auto i : b){
    //     ans.push_back(i);
    // }

    // cout<<"union : ";
    // for(auto i : ans){
    //     cout<<i<<" ";
    // }

    

    // WITH DUPLICATES
    cout<<"Enter the size of the arr : ";
    int a;cin>>a;
    cout<<"Enter the size of the brr : ";
    int b;cin>>b;
    vector<int> arr(a);
    vector<int> brr(b);
    cout<<"enter the elements of arr : ";
    for(int i = 0;i<a;i++){
        cin>>arr[i];
    }
   

    cout<<"enter the elements of brr : ";
     for(int i = 0;i<b;i++){
        cin>>brr[i];
    }

    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j] = INT_MIN;
            }
        }
    }
    vector<int> ans;
    for(int i = 0;i<arr.size();i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
        if(brr[i]==INT_MIN){
            continue;
        }
        else{
            ans.push_back(brr[i]);
        }
    }

    cout<<"Union is => ";
    for(auto i : ans)
    cout<<i<<" ";
    


    return 0;
}