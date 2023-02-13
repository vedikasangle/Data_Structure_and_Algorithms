#include<iostream>
using namespace std ; 

int lengthofarr(char arr[100]){
    int countofchar = 0 ;
    
    while(arr[countofchar]!='\0'){
    countofchar++;
    }
    return countofchar;
}


void copy(char arr1[100],char arr2[100]){
    int i = 0 ; 
    int j = 0 ; 
    
    while(j<=lengthofarr(arr2)){
    arr1[i]=arr2[j];
    i++;
    j++;
    }

    //we can print arr1 and arr2 here as well as down in main function, as value remains same as arrays are passed by reference always 

}


int main(){
    char arr1[100];
    char arr2[100];

    cin.getline(arr2,100);

    copy(arr1,arr2);
    cout<<arr1<<endl;
    cout<<arr2<<endl;
}
