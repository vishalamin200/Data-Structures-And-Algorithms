//find the maximum number of segment  you can make of the rod of length x ,y,z;


#include<iostream>
#include<climits>
using namespace std;

int maxSeg(int n , int x, int y , int z){
    //base case 
    if(n==0){
        return 0;
    }
    // if(n < 0){
    //     return INT_MIN;
    // }

    //recursive relation
    int ans ,ans1, ans2,ans3;
    ans = ans1 = ans2 = ans3 =INT_MIN;
    
    if(n-x >= 0){
         ans1 = 1 +  maxSeg(n-x,x,y,z);
    }
    if(n-y >= 0){
         ans2 =1 + maxSeg(n-y,x,y,z);
    }
    if(n-z >= 0){
         ans3 =1+ maxSeg(n-z,x,y,z);
    }

    ans = max(ans1 , max(ans2,ans3));

    return ans;
}

int main(){
    int n , x,y,z;

    cout<<"Enter n,x,y,z : ";
    cin>>n;
    cin>>x>>y>>z;

    cout<<"Maximum no. of segments : "<<maxSeg(n,x,y,z);


    return 0 ;
}


