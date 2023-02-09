#include<iostream>
using namespace std ;

//using pointers
void f(int* aptr){//int *aptr = &a   //this star is pointer creation star
    *aptr = *aptr + 30;//120         //this star is dereference star
    cout<<*aptr<<endl;//120
    // cout<<aptr;
}

// //using reference variable
// void f1(int &aptr){//int *aptr = a   
//     aptr = aptr + 30;         
//     cout<<aptr<<endl;
// }

int main(){
    int a = 90;
    cout<<a<<endl;

    
    f(&a);//0x....987
    //int *aptr = &a;


    // f1(a);
    //int &aptr = &a;



    cout<<a<<endl;//changes made above are reflected below, hence it is call by reference 
     

    return 0;
}