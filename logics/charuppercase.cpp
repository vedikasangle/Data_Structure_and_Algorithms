#include<iostream>
using namespace std ; 

int main (){
    // char ch ; 
    // cin>>ch ;
    
    //1st way
    // if(ch>='A' and ch<='Z'){  //implicit type conversion 
    //     cout<<"UPPERCASE"<<endl;
    // }
    // else if(ch>='a' and ch<='z'){
    //     cout<<"LOWERCASE"<<endl;
    // }
    // else{
    //     cout<<"some other character"<<endl;
    // }
    

    //2nd way 
    // if(ch>=65 and ch<=90){  //implicit type conversion 
    //     cout<<"UPPERCASE"<<endl;
    // }
    // else if(ch>=97 and ch<=122){
    //     cout<<"LOWERCASE"<<endl;
    // }
    // else{
    //     cout<<"some other character"<<endl;
    // }


    //3rd WAY ===>using inbuilt functions
    //islower(a)  ---> true
    //islower(T)  ---> false
    //isupper(y)  ---> false
    //isupper(A)  ---> true
    
    char ch ; 
    cin>>ch;

    if(isupper(ch)){
        cout<<"UPPERCASE"<<endl;
    } 
    else if(islower(ch)){
        cout<<"Lowercase"<<endl;
    }
    else{
        cout<<"some other character"<<endl;
    }


    
    }