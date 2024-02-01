// We have given a steam of string , we have to return an answer which contains the first non repeating character 

/* str = "aabc"
   ans = "a#bb"
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    string str = "aabc";
    queue<char>q;
    string  ans="";
    vector<int>freq(26,0);

    for(int i =0 ; i<str.length() ;i++){
        // take an character
        char ch = str[i];
        // increase it's count ,and store it in queue
        freq[ch-'a']++;
        q.push(ch);

        //store first non repeating character
    
        while(!q.empty()){
            if(freq[q.front()-'a'] >1){
                q.pop();
            }
            else{
                ans = ans+q.front();
                break;
            }
        }
        
        if(q.empty()){
            ans = ans+'#';
        }
    }

    cout<<ans;   
    return 0 ;
}