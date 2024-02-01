// calculate the number of lindromic substring in a given string

#include<iostream>
using namespace std;

int expandAroundIndex(string str , int i , int j){
    int count = 0 ;
    while( i >= 0 && j < str.length()  && str[i] == str[j] ){
        i--;
        j++;
        count++;
        
    }
    return count;
}

int main(){
    string str;
    cin>>str;

    int n = str.length();
    int count = 0 ;

    for(int i=0 ; i<n ;i++){
        // odd palindromic substrings 
        count  += expandAroundIndex(str, i ,i);

        //even palindromic substrings
        count += expandAroundIndex(str, i , i+1);

    }
    cout<<count;
    return 0 ;
}
