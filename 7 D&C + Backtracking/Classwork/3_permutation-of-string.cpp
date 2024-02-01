// permutation of the string 


#include<iostream>
using namespace std;

void permutation(string& str , int size, int i,int& count){
    if(i >= size){
        cout<<str<<" ";
        return;
    }
    
    count++;
    for(int j=i; j<size ; j++){
        swap(str[j],str[i]);
        permutation(str,size,i+1 , count);

        //backtracking
        swap(str[j],str[i]);
    }
}

int main(){
    string str = "abcde";
    int size=str.length();
    int index=0 ;
    int count =0 ;

    permutation(str,size,index, count);
    cout<<"\n\nTotal function call "<<count<<endl;
    return 0 ;
}