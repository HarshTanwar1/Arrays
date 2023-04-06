#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array :: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of element you want to enter :: ";
    int size;
    cin>>size;
    cout<<"Enter the number (only 0 or 1) :: ";
    int zero  = 0,one = 0;

    for(int i = 0;i<size;i++){
        cin>>arr[i];
        if(arr[i]==0){
            ++zero;
        }
        else{
            ++one;
        }
    }
    cout<<"Number of zero's :: "<<zero<<endl;
    cout<<"Number of one's :: "<<one<<endl;
    

    return 0;
}