#include<iostream>
using namespace std ; 
        
        //for input 6 ==>
        //                                 1
        //                         2       3       2
        //                 3       4       5       4       3
        //         4       5       6       7       6       5       4        
        // 5       6       7       8       9       8       7       6       5



int main(){
     int trows;
    cin>>trows;

    int rowno = 1 ;
    while(rowno<trows){
    //rowno 3 
    //spaces
    int spc = 1 ; //initialisation
    while(spc<=trows-rowno){ 
        cout<<" "<<'\t'; //task 
        spc = spc + 1;  //updation 
    }

    //inc ki jagah stars print 
    int stc = 1 ; 
    int startno = rowno; //4
    while(stc<=rowno){
        cout<<startno<<'\t';//4567
        startno = startno + 1 ; 
        stc = stc + 1 ; 
    }
    //startno now has become 8 

    //dec ki jagah hash print 
    int hc = 1 ; 
    startno = startno - 2 ; //6
    while(hc<=rowno-1){
        cout<<startno<<'\t';
        startno = startno - 1 ; 
        hc = hc + 1 ; 
    }

    cout<<endl;
    rowno = rowno +1 ; 
    }

    return 0 ; 
}