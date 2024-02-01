// find the length of the character array

#include<iostream>
#include<cstring>
using namespace std;

int getLength(char* str){
    int i =0 , count =0;
    while(str[i++]  != '\0'){
        count++;
    }
    return count;
}

void reverse(char* arr){
    int start =0 , end = strlen(arr) -1;

    while(start <= end){
        swap(arr[start++] , arr[end--]);
    }
}

bool isPalindrom(char* arr){
    int s = 0 , e = strlen(arr) -1;
    
    while(s <= e){
        if(arr[s++] != arr[e--]){
            return false;
        }
    }

    return true;
}

void replaceSpaces(char* arr){
    int len = strlen(arr) ;    // O(n) time complexity

    for(int i=0 ; i<len ; i++){
        if(arr[i] == ' '){
            arr[i] = '@';
        }
    }
}

void lower(char * arr){
    int len = strlen(arr);
    for(int i=0 ; i<len ; i++){
        if(arr[i]>='A' && arr[i] <= 'Z'){
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

void upper(char * arr){
    int len = strlen(arr);
    for(int i=0 ; i<len ; i++){
        if(arr[i]>='a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}



int main(){
    char word[100];
    cout<<"enter a word :";
    cin.getline(word, 100);
    cout<<"Length : "<<getLength(word)<<endl;
 
    
    cout<<"Reverse a word : ";
    reverse(word);
    cout<<word <<endl;
    reverse(word);


    cout<<"word is palindrome or not: " ;
    isPalindrom(word)? cout<<"Yes "<<endl : cout<<" No "<<endl;
 

    cout<<"Replacing spaces with '@'  : ";
    replaceSpaces(word);
    cout<<word<<endl;

    cout<<"The sentence in Lowercase only  : ";
    lower(word);
    cout<<word<<endl;

    cout<<"The sentence in Upper case only : ";
    upper(word);
    cout<<word<<endl;

    
    return 0 ;
}