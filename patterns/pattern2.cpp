#include <iostream>
using namespace std;

//              * 
//           *  * 
//        *  *  * 
//     *  *  *  * 
//  *  *  *  *  * 

int main()
{

    int trows;
    cin >> trows;
    int rowno = 1;
    while (rowno <= trows){

        // for a single row
        //===========================
        // spaces
        int spc = 1;
        while (spc <= trows - rowno)
        {
            cout <<"   ";
            spc = spc + 1;
        }
        // stars
        int starc = 1;
        while (starc <= rowno)
        {
            cout << " * ";
            starc = starc + 1;
        }
        cout << endl;
        rowno = rowno + 1;
        //===============================
    }

    return 0;
}