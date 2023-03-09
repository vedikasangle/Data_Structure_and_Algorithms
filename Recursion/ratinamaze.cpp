#include<iostream>
using namespace std;

bool ratinamaze(char maze[4][5], int sol[4][4],int i , int j,int rows,int cols){
    //base case 
    if(i == rows-1 and j ==cols-1){
        sol[i][j] = 1 ; 

        //print my solution matrix
        for(int l = 0 ; l<rows;l++){
            for(int m = 0 ; m<cols; m++){
                cout<<sol[l][m]<<" ";
            }
            cout<<endl;
        }
        return true ; 
    } 


    //rec case 
    sol[i][j] = 1 ;

    //forward 
    if(j<=cols-2 and maze[i][j+1] != 'B'){
        bool kyaaagrkaansmila = ratinamaze(maze,sol,i,j+1,rows,cols);
        if(kyaaagrkaansmila == true){
            return true ; 
        }
    }

    //downward
        if(j<=rows-2 and maze[i+1][j] != 'B'){
        bool kyaaagrkaansmila = ratinamaze(maze,sol,i,j+1,rows,cols);
        if(kyaaagrkaansmila == true){
            return true ; 
        }
        }

        sol[i][j] = 0; //backtracking step 
        return false ;  

}

int main(){
    char maze[4][5] = {
        "UBUU",
        "UUUU",
        "BBBU",
        "UBBU"
    };

    int sol[4][4] = {0};

    // if(ratinamaze(maze,sol,0,0,4,4) == true){
    //     cout<<"True";
    // }
    // else{
    //     cout<<"False";
    // }

    ratinamaze(maze,sol,0,0,4,4);




    
    
    return 0;
}
