//find the key in an array , and return index;

#include<iostream>
#include<vector>
using namespace std;

// int searchKey(vector<int>&vect , int& size , int index , int& key ){
//     //base condition
//     if(index >= size){
//         return -1;
//     }

//     // ek solve karo 
//     if(vect[index] == key){
//         return index;
//     }

//     return searchKey(vect, size ,index+1 , key);
// }



int searchKey(string name , int& size , int index , char& key ){
    //base condition
    if(index >= size){
        return -1;
    }

    // ek solve karo 
    if(name[index] == key){
        return index;
    }

    return searchKey(name, size ,index+1 , key);
}



int main(){
    // vector<int> vect = {12,13,15,17,19,23,54,32,21,76,55,12,12};
    // int size = vect.size();
    // int index = 0;

    string name = "vishalAmin";
    int size = name.length();
    int index = 0;


    char key;
    cout<<"enter key : ";
    cin>>key;

    // int keyIndex = searchKey(vect, size ,index, key );
    int keyIndex = searchKey(name,size , index , key );

    if(keyIndex < 0){
        cout<<"Key not found "<<endl;
    }
    else{
        cout<<"Key found at Index : "<<keyIndex<<endl;
    }

    return 0 ;
}