#include<iostream>
using namespace std;

void permutation(char inp[10000],int i ){

    //base case 
    if(inp[i]=='\0'){
        cout<<inp<<endl;//abc
        return ; 
    }

    //rec case 
    for(int j = i ; inp[j] != '\0'; j++){
    swap(inp[i],inp[j]);//swap 
    permutation(inp,i+1);//abc acb
    swap(inp[i],inp[j]);//unswap 
    }
}


int main(){
    char inp[10000];
    cin>>inp;//"abc"

    permutation(inp,0);

    return 0;
}
