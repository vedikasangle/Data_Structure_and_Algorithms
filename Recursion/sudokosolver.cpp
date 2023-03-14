#include<iostream>
#include<cmath>
using namespace std;

bool kyamainumdaalsaktihu(int mat[9][9],int i ,int j , int num,int n ){
    //vertical check - row no change 
    for(int k = 0 ; k<n ; k++){
        if(mat[k][j] == num){
            return false ;
        }
    } 

    //horizontal check 
    for(int k = 0 ; k<n ; k++){
        if(mat[i][k] == num){
            return false ;
        }
    } 
    //3 cross 3 check
    int sn = sqrt(n);//3
    int si = (i/sn)*sn;
    int sj = (j/sn)*sn;

    for(int l = si; l<si+sn ; l++){
    for(int m = sj;m<sj+sn;m++){
        if(mat[l][m]==num){
        return false ; 
    }
    }
    }
    return true; 

}



bool sudukosolver(int mat[9][9],int i ,int j , int n){
    //!base case 
    if(i==n){
        //suduko print
           for(int l = 0 ; l<n;l++){
            for(int m = 0 ; m<n; m++){
                cout<<mat[l][m]<<" ";
            }
            cout<<endl;
        }
        return true ; //suduko solver generally has only one solution 
    }


    //!rec case 

    if(j==n){
        return sudukosolver(mat,i+1,0,n);
    }

    //agar wo filled hai toh seedha aage badho 
    if(mat[i][j] !=0){
        return sudukosolver(mat,i,j+1,n);
    } 


    //agar wo filled nahi hai toh fill kardo 
    else{
        for(int num = 1;num<=n;num++) {

        if(kyamainumdaalsaktihu(mat,i,j,num,n)){
            mat[i][j] = num;

            bool bakicellskaans = sudukosolver(mat,i,j+1,n);
            
            if(bakicellskaans==true){
                return true; 
            }
            
            mat[i][j] = 0 ; //backtracking (since baki cells ka ans hai false) 
        }

        }
        return false ; 
    }
   
}


int main(){
    int mat[9][9] ={
        {0,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    sudukosolver(mat,0,0,9);



    
    
    
    
    return 0;
}