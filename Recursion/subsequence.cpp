#include<iostream>
using namespace std;

void subsequences(char inp[10000],int i , char out[10000], int j ){
    //base case 
    if(inp[i]=='\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return ; 
    }
    
    //rec case 
    //with a 
    out[j] = inp[i];
    subsequences(inp,i+1,out,j+1);

    //without a 
    subsequences(inp,i+1,out,j);

}

int main(){

    char inp[10000];
    char out[10000];
    cin>>inp;
    subsequences(inp,0,out,0);

    return 0;
}
