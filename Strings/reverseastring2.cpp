#include<iostream>
using namespace std ;

//using two arrays 

int lengthofarr(char arr[100]){
    int countofchar = 0 ;
    
    while(arr[countofchar]!='\0'){
    countofchar++;
    }
    return countofchar;
}


void reversestring(char arr[100]){
    char temp[100];
    int i = lengthofarr(arr) - 1; 
    int j = 0 ; 

    while(i>=0){
        temp[j] = arr[i];
        i--;
        j++; 
    }
    temp[j] = '\0';
    cout<<temp<<endl;
    
}


int main(){
    char arr[100];
    // char temp[100];

    cin.getline(arr,100);

    reversestring(arr);
  
}
