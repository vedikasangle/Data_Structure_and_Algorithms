#include<iostream>
using namespace std;

int stringtoint(string s,int l  ){//"639" ,3 length
    //base case (on length)
    if(l==0){//null string 
        return 0;
    }
    //rec case
    char ch = s[l-1]; //9
    int ele = ch-'0';//'9' -'0' //58-49 --> 9
    int chotans = stringtoint(s,l-1);//"639" , 2 length ->63
    
    int fnas = chotans*10 + ele;
    return fnas ; 

}


int main(){
    string s ; 
    cin>>s;//"639" ->639

    int l = s.length();//3

    cout<<stringtoint(s,l);



    return 0;
}