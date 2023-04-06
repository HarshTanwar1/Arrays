#include<iostream>
#include<climits>
/*YOU CAN ALSO USE limits.h TO USE THE INT_MIN AND INT_MAX VALUES*/
using namespace std;

int main(){
    int arr[] = {12,32,44,2,23,45,3};
    int size = 7;
    int maxi = INT_MIN , mini = INT_MAX;        // IT IS A GOOD PRACTICE 
    for(int i = 0;i<size;i++){
        if(maxi < arr[i]){
            maxi = arr[i];
        }
        if(mini > arr[i]){
            mini = arr[i];
        }
    }
    cout<<"Maximum element of this array :: "<<maxi<<endl;
    cout<<"Minimum element of this array :: "<<mini<<endl;
    return 0;
}