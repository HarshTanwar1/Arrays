/*ONLY CHECK THAT ELEMENT PRESENT OR ABSENT*/

// #include<iostream>
// using namespace std;

// bool linear_search(int arr[],int size,int key){
//     for(int i = 0;i<size;++i){
//         if(key == arr[i])
//         return true;
//     }
//     return false;

// }


// int main(){
//     int arr[10] = {12,23,32,323,33,11};
//     cout<<"Enter the element :: ";
//     int key ;
//     cin>>key;
//     int size = 6;
//     if (linear_search(arr,size,key)){
//         cout<<"present"<<endl;
//     }
//     else{
//         cout<<"absent"<<endl;
//     }
//     return 0;
// }


/*IT RETURN THE POSITION OF THAT ELEMENT */

// #include<iostream>
// using namespace std;

// int linear_search(int arr[],int size,int key){
//     for(int i = 0;i<size;++i){
//         if(key == arr[i])
//         return (i+1);
//     }
//     return -1;

// }


// int main(){
//     int arr[10] = {12,23,32,323,33,11};
//     cout<<"Enter the element :: ";
//     int key ;
//     cin>>key;
//     int size = 6;
//     int position = linear_search(arr,size,key);
//     cout<<"Element present at position :: "<<position<<endl;
//     return 0;
// }



/*FIND ELEMENT WITHOUT MAKING FUNCTION USING FLAG VARIABLE*/
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10] = {12,23,32,323,33,11}; 
//     cout<<"Enter the element :: ";
//     int key ;
//     cin>>key;
//     int size = 6;
//     int flag = 1;
//     for(int i = 0;i<size;i++){
//         if(arr[i]==key){
//             cout<<"FOUND\n";
//             flag = 0;
//             break;
//         }
//     }

//     if(flag){
//         cout<<"NOT FOUND\n";
//     }
//     return 0;
// }