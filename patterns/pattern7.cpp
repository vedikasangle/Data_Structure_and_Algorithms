#include <iostream>
using namespace std;

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

int main()
{

    int totalrows;
    cin >> totalrows;

    int rowno = 1; // initialization
    while (rowno <= totalrows){ //condition
        //=========================
        int i = 1;
        int sno = 1; 
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