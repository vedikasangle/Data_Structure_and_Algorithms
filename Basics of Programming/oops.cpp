#include<iostream>
using namespace std;

//to create our own datatypes we use oops 
// class datatypename{};

class car{

    public: //to access these variable outside class 
    
    //acts as a blueprint (it does not take memory unles and until object is made)
    string name ;
    string color ; 
    int price ; 
    int seats ;
    
    //default constructor
    // car(){

    // }

    // car(){
    //     cout<<"hello"<<endl;
    // }
    
    //parameterized constructor 
    car(string n , string c, int p ,int s ){
        name = n ;
        color = c ;
        price = p;
        seats = s;
    }
     
    //destructor (to destroy objects made ; to free the memory space )
    // ~car(){
        
    // }

    void update(string c ){
        color = c ;
    }


};


int main(){
    // car x ;//x is the object 
    // car y ;  //again hello is printed!! because constructor is called

    car x("bmw","white",50,5);//passing value as parameters
    x.update("red"); 
    //! . operator 
    //! syntax : objectname.buckettoaccess 
    
    // x.name = "bmw";
    // x.color = "white";
    // x.price = 50 ; 
    // x.seats = 5 ;

    cout<<x.name<<endl;
    cout<<x.color<<endl;
    cout<<x.price<<endl;
    cout<<x.seats<<endl; 

    
    
    return 0;
}