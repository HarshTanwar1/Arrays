// #include <iostream>
// using namespace std;

// int main() {
//   int row,col;
//   cin>>row>>col;
//   int arr[row][col];

//   for(int i = 0;i<row;i++)
//   {
//     for(int j = 0;j<col;j++)
//     {
//       cin>>arr[i][j];
//     }
//   }

//   cout<<"Row wise access (row not equal to col)\n";
//   for(int i = 0;i<row;i++)
//   {
//     for(int j = 0;j<col;j++)
//     {
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }

//   cout<<endl<<endl<<"Column wise access (row not equal to col)\n";
//   for(int i = 0;i<row;i++)
//   {
//     for(int j = 0;j<col;j++)
//     {
//       cout<<arr[j][i]<<" ";
//     }
//     cout<<endl;
//   }

//   return 0;
// }





#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cout<<"Enter row and column number :: ";
  cin>>n>>m;
  int arr[n][m];
  cout<<"Enter the elements :: ";
  for(int i = 0;i<n;i++)
    for(int j = 0;j<m;j++)
    {
      cin>>arr[i][j];
    }

  cout<<"Row wise access ::\n";
  for(int i = 0;i<n;i++)
  {
    for(int j = 0;j<m;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl;
  cout<<"\n Column wise access :: \n";
  for(int i = 0;i<n;i++)
  {
    for(int j = 0;j<m;j++)
    {
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }

}