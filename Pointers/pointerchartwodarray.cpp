#include<iostream>
using namespace std ;

int main(){
    
    // char arr[3][4]={
    //     {'D','O','G','T'},
    //     {'P','E','N','T'},
    //     {'R','A','T','T'}
    // };
    //name of the arr gives address of first bucket in 2d array   
    // cout<<arr<<endl;

    //this will give value of the bucket till we get null
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;

    //hence we modify our array, we put
    char arr[3][5]={
        {'D','O','G','T','\0'},
        {'P','E','N','T','\0'},
        {'R','A','T','T','\0'}
    };

    //we get desired output using this 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    //!WE CAN ALSO DECLARE IN THIS WAY 
    //!writing string directly
    char arrr[3][5] = {"DOGT","PENY","RATT"};
    cout<<arrr[0]<<endl;
    cout<<arrr[1]<<endl;
    cout<<arrr[2]<<endl;
}