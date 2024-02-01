// check whether a string is palindrome or not, by removing atmost 1 character.

#include<iostream>
#include<string.h>
using namespace std;


bool check_palindrome(string s , int start , int end){
    while(start <= end){
    cout<<"Start = "<<start<<" "<<"end = "<<end <<" ";
        if(s[start] == s[end]){
            start++ ;
            end--;
        }
        else {
            cout<<false<<endl;
            return false ;
        }
    }
    cout<<true<<endl;
    return true;
}

int main(){
    bool flag = 1;
    string s;
    cout<<"Enter string : ";
    cin>>s;

    int i=0 , j = s.length()-1;
    while(i<j){
        if(s[i] == s[j] ){
            i++;
            j--;
        }
        else{
            int start = i;
            int end = j;
            flag = (check_palindrome(s,start, end-1)) || (check_palindrome(s,start+1 , end));
        }
    }

    cout<<flag;


    
    return 0 ;
}




class Solution {
public:
    
    bool check_palindrome(string s, int start , int end){
        while(start < end){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {

       int i =0 , j = s.length() -1 ;
       while(i<j){
           if(s[i] == s[j]){
               i++;
               j--;
           }
           else{
               return (check_palindrome(s,i,--j)  || check_palindrome(s,++i,j));
           }
       }
       return true;   
    }
};