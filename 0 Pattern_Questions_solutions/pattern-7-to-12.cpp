/*
Print the following patterns

7. Number Half Pyramid

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

8. Number Inverted half pyramid

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 


9. Hollow num half pyramid

1         
1 2       
1   3     
1     4   
1 2 3 4 5

10.  pattern 10

        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5

11. Hollow num full pyramid

    1     
   1 2    
  1   3   
 1     4  
1 2 3 4 5 

12 hollow num inverted half pyramid

1 2 3 4 5 
2     5 
3   5 
4 5 
1 

*/

#include<iostream>
using namespace std;

void num_half_pyramid(int n ){
    for(int row =0 ; row<n ; row++){
        for(int col=0 ; col<row+1 ; col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}

void inverted_num_half_pyramid(int n ){
    for(int row=0 ; row<n ; row++){
        for(int col=0 ; col<n-row ;col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
}

void hollow_num_half_pyramid(int n ){
    for(int row=0 ; row<n ; row++){
        if(row==0 || row== n-1){
            for(int col=0 ; col<row+1 ; col++){
                cout<<col+1<<" ";
            }
        }
        else{
            cout<<"1 ";
            for(int sp=0 ; sp<row-1 ;sp++){
                cout<<"  ";
            }
            cout<<row+1<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    for(int row=0 ; row<n ;row++){
        //initial spaces 
        for(int sp=0 ; sp<n-1-row ; sp++){
            cout<<"  ";
        }
        //increasing numbers 
        for(int i=0 ; i<row+1 ; i++){
            cout<<row+1+i<<" ";
        }

        //decreasing numbers
        for(int j=0 ; j<row ; j++){
            cout<<2*row-j<<" ";
        }
        //entering into new row
        cout<<endl;
    }
}

void hollow_num_full_pyramid(int n){
    for(int row=0 ; row<n ; row++){
        // initial spaces 
        for(int space=0 ; space<n-row-1 ; space++){
            cout<<" ";
        }
        
        // for the first and last row 
        if(row==0 || row== n-1){
            for(int i =0 ; i<row+1 ; i++){
                cout<<i+1<<" ";
            }
        } 

        // for the 2 to n-1 rows 
        else{
            cout<<"1";
            for(int sp = 0 ; sp< 2*row -1; sp++){
                cout<<" ";
            }
            cout<<row+1;
        }
        cout<<endl;
    }
}

void hollow_num_inverted_half_pyramid(int n ){
    for(int row=0 ; row<n ;row++){
        //for first and last row
        if(row==0 || row== n-1){
            
            for(int col=0 ; col<n-row ; col++){
                // extra space is just for formatting only , 
                cout<<col+1<<" ";
            }
        }
        else{
            // for 2nd to n-1 row 
            cout<<row+1<<" ";

            // spaces inside the pyramid
            for(int sp=0 ; sp<n-2-row ;sp++){
                cout<<"  ";
            }
            cout<<"5"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n ;
    cout<<"No. of rows (height) : ";
    cin>>n;
    
    num_half_pyramid(n);                    cout<<"\n\n";
    inverted_num_half_pyramid(n);           cout<<"\n\n";
    hollow_num_half_pyramid(n);             cout<<"\n\n";
    pattern10(n);                           cout<<"\n\n";
    hollow_num_full_pyramid(n);             cout<<"\n\n";
    hollow_num_inverted_half_pyramid(n);    cout<<"\n\n";


}