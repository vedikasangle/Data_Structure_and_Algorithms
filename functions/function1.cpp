#include<iostream>
using namespace std ;

// returntype containerkanaam(){
//     //task
// }

void x(){
    cout<<"helloo"<<endl;
    cout<<"hiiii"<<endl;
    cout<<"heyyy"<<endl;

}

//no arguments no return type
void sum(){
    int a, b ;
    cin>>a>>b ; 

    int s = a+b ;
    cout<<s<<endl;
    //void because return is not written here;
}

//no arguments but return 
int suum(){
    int a, b ; 
    cin>>a>>b ;
    int s = a+b ; 
    // float sum = a + b ;
    return s;
}

//argument with return 
int multi(int p , int q){
    int m = p*q;
    cout<<m<<endl;
    return m ; 
}

//argument but no return 
void divv(int p , int q){
    int d = p/q;
    cout<<d<<endl;
}
int main(){

    cout<<sum()<<endl;
    int c, d ; 
    cin>>c>>d;
    // multi(c,d)<<endl;
    // divv(c,d)<<endl;




    cout<<5<<endl;
    // containername();
    x();
    cout<<7<<endl;

    cout<<5<<endl;
    cout<<7<<endl;
    x();

    x();
    cout<<5<<endl;
    cout<<7<<endl;


}
