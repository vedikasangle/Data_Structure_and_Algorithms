#include<iostream>
using namespace std;

int co = 0 ; 

void permutation(char inp[10000],int i ){

    //base case 
    if(inp[i]=='\0'){
        cout<<inp<<endl;//abc
        co++;
        return ; 
    }

    //rec case 
    for(int j = i ; inp[j] != '\0'; j++){
    swap(inp[i],inp[j]);//swap 
    permutation(inp,i+1);//abc acb
    swap(inp[i],inp[j]);//unswap //!backtracking
    }
}


int main(){
    char inp[10000];
    cin>>inp;//"abc"

    permutation(inp,0);

    cout<<"Total Permutation v"<<co<<endl;

    return 0;
}
