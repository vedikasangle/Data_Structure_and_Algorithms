#include<iostream>
using namespace std ;

//using single array

int lengthofarr(char arr[100]){ 
    int countofchar = 0 ;
    
    while(arr[countofchar]!='\0'){
    countofchar++;
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
        //swap(arr[i++],arr(j--)); =>same as above 
    }
   
}

int main(){
    char arr[100];
    cin.getline(arr,100);//he llo
    
    reversestring(arr);
    cout<<arr<<endl;
}
