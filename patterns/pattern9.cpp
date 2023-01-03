//pattern6 updated (ma'am's approach )

//this code for odd number 

#include <iostream>
using namespace std;

    //       * 
    //       *  *  * 
    //    *  *  *  *  * 
    // *  *  * 
    //    * 
    //wrong output coming  --- code needs to be modified

int main()
{

    int totalrows;
    cout << "Enter total number of rows of triangle : ";
    cin >> totalrows;

    // for triangle 1
    int rowno = 1;
    while (rowno <= (totalrows+1)/2)
    {
        // for spaces of 1
        int spc1 = 1;
        while (spc1 <= (totalrows+1/2) - rowno)
        {
            cout <<"   ";
            spc1 = spc1 + 1;
        }

        // for stars of 1
        int starc1 = 1;
        while (starc1 <= (2 * rowno - 1))
        {
            cout <<" * ";
            starc1 = starc1 + 1;
        }
        cout << endl;
        rowno = rowno + 1;
    }

    //jab row number 5 hoga toh yaha aayega 

    //lower half ke liye kaam 
    
    rowno = 1; 
    while(rowno<=(totalrows-1)/2)
    {
        //spaces
        int sp2 = 1 ; 
        while(sp2<=rowno){
            cout<<"   ";
            sp2 = sp2 + 1 ;
        }
        //stars
        int starc2 = 1 ; 
        while(starc2<=totalrows-2*rowno){
            cout<<" * ";
            starc2 = starc2 + 1 ; 
        }
        cout<<endl;
        rowno = rowno + 1 ;

    }
    return 0;
}


