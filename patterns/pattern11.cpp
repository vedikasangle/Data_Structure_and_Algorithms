#include<iostream>
using namespace std ; 

//     *
//    **#
//   ***##
//  ****###

int main(){

    int trows;
    cin>>trows;

    int rowno = 1 ;
    while(rowno<trows){
    //rowno 3 
    //spaces
    int spc = 1 ; //initialisation
    while(spc<=trows-rowno){ 
        cout<<" "; //task 
        spc = spc + 1;  //updation 
    }

    //inc ki jagah stars print 
    int stc = 1 ; 
    while(stc<=rowno){
        cout<<"*";
        stc = stc + 1 ; 
    }

    //dec ki jagah hash print 
    int hc = 1 ; 
    while(hc<=rowno-1){
        cout<<"#";
        hc = hc + 1 ; 
    }

    cout<<endl;
    rowno = rowno +1 ; 
    }



    return 0 ; 
}