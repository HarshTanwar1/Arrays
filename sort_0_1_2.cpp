#include<iostream>
#include<vector>
using namespace std;


class Solution{
    public :
        void setValues(vector<int> &v, int n){
            int x;
            cout<<"Enter the elements :: ";
                for(int i = 0;i<n;i++){
                    cin>>x;
                    v.push_back(x);
                }
            }

        void arrange(vector <int> &v){
            int s = 0, m = 0,e = (v.size() - 1);
            while(s<=e){
                if(v[m] == 0){
                    swap(v[s],v[m]);
                    ++m;
                    ++s;
                }

                else if (v[m] == 1){
                    ++m;
                }

                else if (v[m] == 2){
                    swap(v[m],v[e]);
                    --e;
                }
            }
        }


        void show(vector <int> &v){
            cout<<"Your vector of integers :: ";
            for(int i = 0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

};

int main(){

    vector <int> arr;
    int n;
    cout<<"Enter number of elements :: ";
    cin>>n;
    Solution obj;
    obj.setValues(arr,n);
    obj.show(arr);
    obj.arrange(arr);
    obj.show(arr);

    return 0;
}