// return the minimum time difference between two intervals.         leetcode : 539

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>
using namespace std;

    int findMinDifference(vector<string>& timePoints) {
        int len = timePoints.size();
        vector<int> ans;

        // convert hours formate to minutes 

        for(int i=0 ; i<len ;i++){
            int hours = stoi( timePoints[i].substr(0,2) ) ;
            int minutes = stoi( timePoints[i].substr(3,2)) ;


            int time = hours*60 + minutes;
            ans.push_back(time);
        }
        
        for(auto value : ans){
            cout<<value<<" ";
        }

        // sort the ans vector
        sort(ans.begin() , ans.end());

        // find minimun
        int mini = INT_MAX;

        for(int i=0 ; i<len-1 ; i++){
            int diff = ans[i+1] - ans[i];
            mini = min(mini , diff);
        }
        
        mini = min(mini , (ans[0]+1440) - ans[len-1] );

        return mini;       
    }

int main(){
    vector<string> timePoints = {"00:00","23:59" , "01:32" , "11:21" , "03:55" , "07:32" , "09:21"};
    cout<<endl<<"Ans : "<<findMinDifference(timePoints);


    return 0 ;
}