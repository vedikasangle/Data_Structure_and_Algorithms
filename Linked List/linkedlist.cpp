#include<iostream>
using namespace std;


class node{

    public : 
    int data;
    node*next;  // datatype*nameofpointer
    node(int d){
        data = d ; 
        next = NULL; //initially no address going in it!!!
    }


};

int main(){
    node x(9);
    node y(3);
    x.next = &y; //we get address of y 
    cout<<x.data<<endl;
    cout<<x.next->data<<endl;//using address
    cout<<(*x.next).data<<endl;//using name


    
    
    return 0;
}
