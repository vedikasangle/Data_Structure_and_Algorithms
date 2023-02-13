#include<iostream>
using namespace std ;

int lengthofarr(char arr[100]){
    int countofchar = 0 ;
    
    while(arr[countofchar]!='\0'){
    countofchar++;
    }
    return countofchar;
}


void append(char arr1[100], char arr2[100]){
    int i = lengthofarr(arr1);
    int j = 0 ; 


    while(j<=lengthofarr(arr2)){
    arr1[i] = arr2[j];
    i++;
    j++;
    }

    cout<<arr1<<endl;//HelloCoding
    cout<<arr2<<endl;//Coding
}


int main(){
    char arr1[100];
    char arr2[100];


    cin.getline(arr1,100);//Hello
    cin.getline(arr2,100);//coding  
    
    //output should be ==>
    // arr1-->Hellocoding
    // arr2 -->coding

    append(arr1,arr2);

    return 0 ; 
}
