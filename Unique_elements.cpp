#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> arr)
{
    int ans = 0;
    for(int i = 0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector <int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int unique_element = find(arr);
    cout<<"Unique element : "<<unique_element<<endl;
   
    return 0;
}
