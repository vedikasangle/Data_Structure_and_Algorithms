#include<iostream>
using namespace std ;

int main(){
    // int a = 10;
    // float f =  56.78;
    // double d = 56.2453;
    // bool b = true;

    // cout<<a<<endl;
    // cout<<f<<endl;
    // cout<<d<<endl;
    // cout<<b<<endl;//this will not print true but will print 1

    //&a -> starting byte ka value/address
    // cout<<&a<<endl;//0x...
    // cout<<&f<<endl;//0x...
    // cout<<&d<<endl;//0x...
    // cout<<&b<<endl;//0x....
    
    //same values ==> pointers take 4 bytes in my laptop
    //and 8 bytes in ma'am laptop 
    // cout<<sizeof(&a)<<endl;
    // cout<<sizeof(&f)<<endl;
    // cout<<sizeof(&d)<<endl;
    // cout<<sizeof(&b)<<endl;


    //datatype*nameofbucket = &varaiblename
    // int*aptr = &a;  //pointer creation
    // float*fptr = &f;
    // double*dptr = &d;
    // bool*bptr = &b;  //single pointer

    //&a is same as aptr
    // cout<<aptr<<endl;
    // cout<<fptr<<endl;
    // cout<<dptr<<endl;
    // cout<<bptr<<endl;

    //to get the starting address byte of aptr
    // cout<<&aptr<<endl;
    // cout<<&fptr<<endl;
    // cout<<&dptr<<endl;
    // cout<<&bptr<<endl;


    //datatype*nameofbucket = &varaiblename
    //to store address of first byte of aptr,
    //syntax for that is ==> datatype*nameofbucket = &varaiblename
    // datatype of aptr is int*
    // int* *xptr = &aptr;
    // double* *qptr = &dptr;//double pointer

    // //to store ths starting byte address of qptr
    // double** *mptr=&qptr;//triple pointer

    // double*** *gptr=&mptr;//four pointer

    //we can form any number of pointer

    //for character
    // char ch = 'A';

    // cout<<ch<<endl;//'A'
    // cout<<sizeof(ch)<<endl;//1
    // cout<<sizeof(&ch)<<endl;//8 (because hexadecimal value) (4 in my case)
    
    //compilers treat characters differently.
    //it does not give address of ch on &ch 
    // cout<<&ch<<endl; //gives value at ch that is 'A'

    //but what if I want to print address of c -->fooling of compiler 
    // cout<<(int*)&ch<<endl;
    // cout<<(float*)&ch<<endl;
    // cout<<(double*)&ch<<endl;
    // cout<<(bool*)&ch<<endl;

    // cout<<(void*)&ch<<endl;//fooling of compiler
     
    //to create multiple pointers
    // int *aptr,*bptr,*cptr;

    // cout<<*aptr<<endl; //dereference wala star ==>wapas bucket milega 
    
    // int a = 10;
    // int*aptr = &a;//pointer creation
    // int* *xptr = &aptr;//double pointer
    // int* **mptr = &xptr;//triple pointer 
    
    // cout<<*xptr<<endl;//aptr
    // cout<<*(*xptr)<<endl;//a 
    
    // cout<<*mptr<<endl;//xptr
    // cout<<*(*mptr)<<endl;//aptr
    // cout<<*(*(*mptr))<<endl;//a 

    int a = 10 ; 
    int *aptr = &a;

    cout<<aptr<<endl;
    cout<<aptr+1<<endl;
    cout<<aptr+2<<endl;
    cout<<aptr+3<<endl; 
    //ans
    // 0x61ff08
    // 0x61ff0c
    // 0x61ff10
    // 0x61ff14 

    bool b = true; 
    bool* bptr = &b ;
    cout<<bptr<<endl; 
    cout<<bptr+1<<endl;//starting address of next bucket
    cout<<bptr+2<<endl;
    cout<<bptr+3<<endl;

   



    return 0 ;
}
