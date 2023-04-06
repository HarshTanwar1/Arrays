#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,20,30,40,50};
    for(int i = 0;i<arr.size();i++){
        int element = arr[i];
        for(int j = i+1;j<arr.size();j++){
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    }
    cout<<"Enter the sum whose pair you want : ";
    int key;cin>>key;
    cout<<"Your pairs are :: ";
    for(int i = 0;i<arr.size();i++){
        int element = arr[i]; 
        for(int j = i+1;j<arr.size();j++){
            if((element + arr[j]) == key){
                cout<<"("<<element<<","<<arr[j]<<")";
            }
        }
    }

    return 0;
}