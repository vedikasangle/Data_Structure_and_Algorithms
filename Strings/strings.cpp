#include<iostream>
#include<cstring>

using namespace std ;

int main(){
    //string is a char array terminated by null
    //spaces - 6 but length - 5 
    //! declaration of string
    // //? 1st way 
    // string s = "hello";
    // cout<<s<<endl;
    // {'h','e','l','l','o','\0'}

    //? second way 
    // string r ("hello world");
    // cout<<r<<endl;

    //?third way - user input 
    // string a;
    // cin>>a; //cin ignores white space 
    //to take input with spaces :
    // getline(cin, stringname)
    // getline(cin,a); //hence here white spaces are not ignored 
    // cout<<a<<endl;

    //todo : IN CASE OF CHAR ARRAY - cin.getline(arr,100)
    //todo : IN CASE OF STRING - getline(cin,a)


    //properties of a string 

    //? 1]
    // string s1 = "pen";
    // string s2 = "dog";

    //if i want to append  strings ==> + 
    //s3 = s1 + s2 ; 
    // cout<<s1 + s2<<endl;
    // cout<<s2 + s1 <<endl;

    //? 2] 
    //operators can be used on string 
    // pen>cat pen ==cat pen1=cat pen<cat

    //perference is given to s2 
    // string s1 = "pencil";
    // string s2 = "rat";
    // if(s1>s2){
    //     cout<<"hello";
    // }
    // else{
    //     cout<<"world";
    // }

    //perference is given to s1 ==> chars are same, then length is given prefernce 
    // string s1 = "pencil";
    // string s2 = "pen";
    // if(s1>s2){
    //     cout<<"hello"<<endl;
    // }
    // else{
    //     cout<<"world"<<endl;
    // } 

    //subtring 
    // string st = "elephant";
    
    //! stringname.substr(index); ==>for getting till last 
    // cout<<st.substr(4)<<endl;
    
    //! stringname.substr(index); ==>for getting output till particular index 
    // cout<<st.substr(2,4)<<endl;

    //push_back and pop_back 
    string s10 = "penc";
    s10.push_back('i');
    s10.push_back('l');
    cout<<s10<<endl;  

    s10.pop_back();
    s10.pop_back();
    cout<<s10<<endl; 

    //inbuilt funcrtions
    cout<<s10.length()<<endl;
    cout<<s10.front()<<endl;
    cout<<s10.back()<<endl;



    return 0 ;  



    
}