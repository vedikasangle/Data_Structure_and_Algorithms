#include<iostream>
using namespace std;

string arr[] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phonekeypad( char inp[100],int i , char out[100], int j  ){
    if(inp[i] =='\0'){
        out[j] = '\0';
        cout<<endl;
        return ; 
    }
    char ch = inp[i];//'2'
    int index = ch - '0';//'2' -'0' -->2

    for(int l = 0;arr[index][l] != '\0'; l++){
    out[j] = arr[index][l]; //'A'
    phonekeypad(inp,i+1,out,j+1);
    }
}
   

int main(){
    // string inp ;
    char inp[100];
    char out[100];
    cin>>inp ; //"23"

   
    phonekeypad(inp,0,out,0);


    return 0;
}

//output not displayed 
