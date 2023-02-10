#include<iostream>
using namespace std ;

//using single array

int lengthofarr(char arr[100]){
    // int i = 0 ; 
    int countofchar = 0 ;
    
    while(arr[countofchar]!='\0'){//arr[i]!='\0'
    countofchar++;
    // i++;
    }
    return countofchar;
}

void reversestring(char arr[100]){
    int i = 0 ; 
    int j = lengthofarr(arr) - 1; 
    
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
   
}

int main(){
    char arr[100];
    cin.getline(arr,100);
    
    reversestring(arr);
    cout<<arr<<endl;
}
