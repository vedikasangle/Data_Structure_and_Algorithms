#include<iostream>
using namespace std ; 

//  *  *  *  * 
//     *  *  * 
//        *  * 
//           * 
int main(){ 
    
    int totalrows; 
    cin>>totalrows;
    int rowno = 1 ; 

    while(rowno<=totalrows){
    //spaces 
    int spc = 1 ; 
    while(spc<=rowno-1){
        cout<<"   ";
        spc = spc + 1 ; 
    }

    // stars
    int starc = 1 ; 
    while(starc<=(totalrows+1)-rowno){
        cout<<" * ";
        starc = starc + 1 ; 
    }
    cout<<endl;
    rowno = rowno + 1 ; 
}

return 0 ;  

}
