#include<iostream>
using namespace std ;

int lengthofarr(char arr[100]){
    // int i = 0 ; 
    int countofchar = 0 ;
    
    while(arr[countofchar]!='\0'){//arr[i]!='\0'
    countofchar++;
    // i++;
    }
    return countofchar;
}

int main(){
    char arr[100];
    cin.getline(arr,100);
    cout<<"Length of array is "<<lengthofarr(arr)<<endl;
 

    


}