#include <iostream>
using namespace std;

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10       
// 11 12 13 14 15 

int main()
{


    int totalrows;
    cin >> totalrows;

    int sno = 1 ; 
    int rowno = 1; // initialization
    while (rowno <= totalrows){ //condition
        //=========================
     
        int i = 1;  //initialization
        while (i <= rowno)
        {
            cout <<sno<<" ";
            sno = sno + 1 ; 
            i = i + 1;
        }
        cout << endl;
        rowno = rowno + 1; //updation
        //======================
    }

    return 0;
}