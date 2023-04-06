#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,2,4,3,4,5};
    vector<int> brr{4,5,6,4,7,7};
    vector<int> ans;

    for(int i = 0;i<arr.size();i++){
        int element = arr[i];
        for(int j = 0;j<brr.size();j++){
            if(element == brr[j]){
                brr[j] = INT_MIN;        // MARK THE ELEMENT 
                ans.push_back(element);
            }
        }
    }

    cout<<"duplicate elements : ";
    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}