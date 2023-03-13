#include<iostream>
using namespace std;

int c = 0 ;

bool ratinamaze(char maze[4][5], int sol[4][4],int i,int j,int rows,int cols){
    //base case 

    if(i==rows-1 and j==cols-1){
        sol[i][j] = 1 ; 

        //print my solution matrix
        for(int l = 0 ; l<rows;l++){
            for(int m = 0 ; m<cols; m++){
                cout<<sol[l][m]<<" ";
            }
            cout<<endl;
        }
        // return true ; 
        c++;
        
        //multiple paths
        sol[i][j] = 0 ;  
        return false; //path mila, but we say solution hi nahi mila(type of fooling)
    } 


    //rec case 

    sol[i][j] = 1 ;//src will be unblocked

    //forward 
    if(j<=cols-2 and maze[i][j+1] != 'B'){
        bool kya_aage_ka_ans_mila = ratinamaze(maze,sol,i,j+1,rows,cols);
        if(kya_aage_ka_ans_mila == true){
            return true ; 
        }
    }

    //downward
    if(j<=rows-2 and maze[i+1][j] != 'B'){
    bool kya_aage_ka_ans_mila = ratinamaze(maze,sol,i,j+1,rows,cols);
    if(kya_aage_ka_ans_mila == true){
        return true ; 
        }
    }

    sol[i][j] = 0; //backtracking step(imp) 
    return false ;  
}

int main(){
    char maze[4][5] = {
        "UUUU",
        "UUUU",
        "BBUU",
        "UBUU"
    };

    int sol[4][4] = {0};

    ratinamaze(maze,sol,0,0,4,4);
    cout<<"Total Paths: "<<c<<endl;
    
    return 0;
}
