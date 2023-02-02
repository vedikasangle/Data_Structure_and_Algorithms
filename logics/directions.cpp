#include<iostream>
using namespace std ;


int main (){
    int x = 0 , y = 0 ; //because person is at origin

    char ch ;
    // cin>>ch ; //'S'
    ch = cin.get();

    //loop
    while(ch!='\n'){
    if(ch=='E'){
        // x = x + 1 ;  or
        x++;
    }
    else if (ch=='W'){
        // x = x - 1 or
        x--;
    }
    else if(ch=='N'){
        y++;
    }
    else {
        y--;
    }
    // cin>>ch;//'S'
    ch = cin.get();
    }

    cout<<x<<" "<<y<<endl;

    //To make it lexicographically correct
    if(x>=0 and y>=0){
        //i am in first quadrant
        //east and north
        //E will print first x times
        for(int c = 1 ; c<=x ; c++){
            cout<<'E';
        }
        // and then north y times
        for(int c = 1 ; c<=y ; c++){
            cout<<'N';
        }
    }
    else if (x<=0 and y>=0){
        // i am in second quadrant
        //north and west
        //pehle north print karna hai y times
        for(int c = 1 ; c<= y; c++ ){
            cout<<'N';
        }
        //fir x times w, but x is -ve this time soo, we use abs() function
        for(int c = 1 ; c<=abs(x) ; c++){
            cout<<'W';
        }
    }
    else if (x<=0 and y<=0){
        //i am in third quadrant
        //west and south
        //south pehle print hoga
        for(int c = 1 ; c<=abs(y); c++){
            cout<<'S';
        }
        //fir west print hoga
        for(int c = 1 ; c<=abs(x); c++){
            cout<<'W';
        }
    }
    else{
        //i am in 4th quadrant
        //south and east
        //east pehle
        for(int c = 1 ; c<=x ; c++){
            cout<<'E';
        }
        //fir south
        for(int c = 1 ; c<=abs(y);c++){
            cout<<'S';
        }
    }

    return 0 ;

}