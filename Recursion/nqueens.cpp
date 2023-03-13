#include<iostream>
using namespace std;

int c = 0; 

bool kyamairakhuyanahi(int solboard[100][100],int n, int i,int j ){
    //no neec to check horizontally
    
    //vertical check
    for(int m = i-1;m>=0;m--){
        if(solboard[m][j] == 1 ){
            return false ;  
        }
    }
    //diagonally right  
    //j++ and i --
    int u = i-1;//1
    int v = j+1;//3 //j-1 ->by ma'am 
    while(u>=0 and v<n )
    if(solboard[u][v] == 1){
        return false;
    }
    u--;//0
    v++;//4

    //diagonally left 
    //i-- and j--
    int p = i-1;
    int q = j-1;
     while(p>=0 and q>=0 ){
    if(solboard[p][q] == 1){
        return false;
    }
    p--;
    q--;
    }
    return true; 
}

bool nqueens(int solboard[100][100],int n, int i ){
    //base case 
    if(i==n){
        //print matrix 
           for(int l = 0 ; l<n;l++){
            for(int m = 0 ; m<n; m++){
                cout<<solboard[l][m]<<" ";
            }
            cout<<endl;
        }
        c++;
        // return true ; //only one sol 

        return false; //multiple sol  

    }


    // rec case
    //loop 
    for(int j = 0 ;j<=n-1 ;  j++){
        //pehle check fir kaam
    //pehle check - kya mai rakh sakti hu? 
    if(kyamairakhuyanahi(solboard,n,i,j)){ //horizontal, vertical, diagonal check 
        solboard[i][j] = 1 ;
        bool aagekaans = nqueens(solboard,n,i+1);
        if(aagekaans == true){
            return true ; //from whole function 
        }
        solboard[i][j] = 0 ;//baki ki queens place nahi ho rahi! 
    }
    }
    return false ;  
}


int main(){

    int solboard[100][100] = {0};

    int n ;
    cin>>n; //4

    nqueens(solboard,n,0);
    cout<<"Total Solutions : "<<c<<endl;

    return 0;
}
