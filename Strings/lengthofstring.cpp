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
    // cin>>arr; //but in case of cin, how is it knowing that '\0' has occured => okay it is actually not seeking it, it is seeking space or '\n'
    cout<<"Length of array is "<<lengthofarr(arr)<<endl;

    //getline working 
    // char arr[100];
    // char ch ; 
    // ch = cin.get();
    // int i = 0; 
    // while(ch!='$'){
    //     arr[i] = ch;
    //     i++; 
    //     ch = cin.get();
    // }
    // arr[i] = '\0'; //cin or even cin.getline puts \0 at the end 
    // cout<<arr<<endl;
    
    return 0 ; 

}
