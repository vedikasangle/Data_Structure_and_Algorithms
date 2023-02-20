#include<iostream>
using namespace std ; 

int lengthofarr(char arr[100]){
    int countofchar = 0 ;
    
    while(arr[countofchar]!='\0'){
    countofchar++;
    }
    return countofchar;
}

bool palindromeornot(char arr[100]){
    int i = 0 ; 
    int j = lengthofarr(arr) - 1 ;
    
    //loop
    while(i<j){
    if(arr[i] == arr[j]){
        i++;
        j--;
    }
    else{
        return false ; 
    }
    }

    return true ; 
}

int main (){
    char arr[100];
    cin.getline(arr,100);

    if(palindromeornot(arr) == true){
        cout<<"Yes Palindrome"<<endl;
    }
    else{
        cout<<"No Palindrome"<<endl;   
    }
    
    return 0 ; 

}
