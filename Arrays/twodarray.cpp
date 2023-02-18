#include<iostream>
using namespace std ;

int main(){
    //different ways of declaring 2d array

    //? For Integer Array
    //! 1st way of declaring ->giving row and col number
    // syntax = datatype arrayname [rowno] [col];
    // int arr[3][4]= {
    //     {3,4,1,5},
    //     {6,7,2,8},
    //     {9,0,2,3}
    // };

    //row 0 
    // cout<<arr[0][0]<<" ";
    // cout<<arr[0][1]<<" ";
    // cout<<arr[0][2]<<" ";
    // cout<<arr[0][3]<<" ";

    //same can be done with loop
    //printing 2d array ==>
    //this is called as nested loop
    // for(int i = 0; i<=2 ;i++){
    // for(int j = 0; j<=3 ; j++){
    //     cout<<arr[i][j]<<" ";
    // }
    // cout<<endl;
    // }
    

    //row 1
    // cout<<arr[1][0]<<" ";
    // cout<<arr[1][1]<<" ";
    // cout<<arr[1][2]<<" ";
    // cout<<arr[1][3]<<" ";

    //same can be done with loop
    // for(int j = 0; j<=3 ; j++){
    //     cout<<arr[1][j]<<" ";
    // }
    // cout<<endl;

    //row 2
    // cout<<arr[2][0]<<" ";
    // cout<<arr[2][1]<<" ";
    // cout<<arr[2][2]<<" ";
    // cout<<arr[2][3]<<" ";

    //same can be done with loop
    // for(int j = 0; j<=3 ; j++){
    //     cout<<arr[2][j]<<" ";
    // }
    // cout<<endl; 

    //!2nd way of declaring --> by ignoring the rowno if we are creating the array and putting the values at the time of declaration 
    // int arr[3][4]= {
    //     {3,4,1,5},
    //     {6,7,2,8},
    //     {9,0,2,3}
    // };
    // TODO -->Column number cannot be ignored 

    //!user input 
    // int arr[100][100];
    // int rowno, colno; //because this is 2d array
    // cin>>rowno>>colno;//3,4
    
    //this is called as nested loop
    //using loop for taking input
    // for(int i = 0; i<=rowno-1 ;i++){
    // for(int j = 0; j<= colno-1 ; j++){
    //     cin>>arr[i][j];
    // }
    // }

    //? For Character Array

    //! 1st way
    //datatype arrayname[rowno][col]
    // char arr[3][4]{
    //     {'D','O','G','T'},
    //     {'P','E','N','T'},
    //     {'R','A','T','T'}
    // };

    //printing the arr
    // for(int i = 0; i<=2 ;i++){
    // for(int j = 0; j<=3 ; j++){
    //     cout<<arr[i][j]<<" ";
    // }
    // cout<<endl;
    // }

    //! 2nd way ->by ignoring number of rows
    // char arr[][4]{
    //     {'D','O','G','T'},
    //     {'P','E','N','T'},
    //     {'R','A','T','T'}
    // };

    // for(int i = 0; i<=2 ;i++){
    // for(int j = 0; j<=3 ; j++){
    //     cout<<arr[i][j]<<" ";
    // }
    // cout<<endl;
    // }

    //! user input 
    char arr[100][100];
    int rowno, colno; //because this is 2d array
    cin>>rowno>>colno;//3,4
    
    //this is called as nested loop
    //using loop for taking input
    for(int i = 0; i<=rowno-1 ;i++){
    for(int j = 0; j<= colno-1 ; j++){
        cin>>arr[i][j];
    }
    }

    //using loop for giving the output
    for(int i = 0; i<=2 ;i++){
    for(int j = 0; j<=3 ; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }

 






    
   
    return 0 ; 
}