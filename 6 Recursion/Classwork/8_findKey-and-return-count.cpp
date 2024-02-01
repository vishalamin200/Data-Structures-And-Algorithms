// find key and return the count of the occurence of the key

//find the key in an array , and return index;

#include<iostream>
#include<vector>
using namespace std;



void searchKey(string& name , int& size , int index , char& key , int& count){
    //base condition
    if(index >= size){
        return ;
    }

    // ek solve karo 
    if(name[index] == key){
        count++;
    }

    searchKey(name, size ,index+1 , key, count);
}



int main(){
    string name = "vishalAmin";
    int size = name.length();
    int index = 0;


    char key;
    cout<<"enter key : ";
    cin>>key;
    int count =0 ;
    searchKey(name , size , index , key , count);

    cout<<"count : "<<count<<endl;
    return 0 ;
}