#include <iostream>
#include<vector>
using namespace std;

void missingElement(vector<int> v){
  // // visiting method
  // for(int i = 0;i<v.size();i++){
  //   int index = abs(v[i]);
  //   if(v[index-1]>0){
  //     v[index-1] *= -1;
  //   }
    
  // }
  // cout<<"missing element :: ";
  // for(int i= 0;i<v.size();i++){
  //   if(v[i]>0){
  //     cout<<i+1<<" ";
  //   }
  // }
  // cout<<endl;  

  // sorting and swapping method
  int i = 0;
  while(i<v.size()){
  int index = v[i] - 1;
    if(v[index] != v[i]){
       swap(v[index],v[i]);
    }
    else{
      ++i;
    }
  }
  cout<<"Missing element :: ";
  for(int i = 0;i<v.size();i++){
    if(v[i] != i+1){
      cout<<i+1<<" ";
    }
  }
  cout<<endl;

}

int main() {
  vector<int> v = {4,3,5,3,1};
  cout<<"array :: ";
  for(auto i : v){
    cout<<i<<" ";
  }
  cout<<endl;
  missingElement(v);
  return 0;
}


