// here we are going to discuss the inbuilt funtion of the character array :

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char word[100];
    char sentence[100];
    char duplicate[100];
    cout<<"Enter word : ";
    cin.getline(word,100);

    cout<<"Enter a sentence : ";
    cin.getline(sentence , 100);


    // for length of the character array
    cout<<"Length : "<<strlen(word)<<endl;

    // for comparison of the two character array 
    // strcmp will return 0 if strings are equal 
    // return -1 if first element of the string 1 is less than the first element of the second array
    // return 1 if the first element of the string 1 is large in ascii value than the second 
    cout<<"strcmp(string_one, string_two) : "<<strcmp(word, sentence)<<endl;


   // copy the element of the second array into the first
   strcpy(duplicate,word);
   cout<<"After copy elements in duplicate array : "<<duplicate<<endl;


   //  for concatenation of the two string in one 
   cout<<"after concatenate word and sentence : "<<strcat(word, sentence); 
  
    return 0 ;
}