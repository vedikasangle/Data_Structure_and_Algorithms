#include <iostream>
using namespace std;

int main()
{
    // *
    // **
    // ***
    // ****

    // i is representing kitni baar kaam chalega

    int totalrows;
    cin >> totalrows;

    int rowno = 1; // initialization
    while (rowno <= totalrows){ //condition
        //=========================
        int i = 1;
        while (i <= rowno)
        {
            cout << " * ";
            i = i + 1;
        }
        cout << endl;
        rowno = rowno + 1; //updation
        //======================
    }

    return 0;
}
