#include <iostream>
using namespace std;

//                 * 
//              *  *  *
//           *  *  *  *  *
//        *  *  *  *  *  *  *
//     *  *  *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *  *  *
//     *  *  *  *  *  *  *  *  *
//        *  *  *  *  *  *  *
//           *  *  *  *  *
//              *  *  *
//                 *
int main()
{

    int totalrows1;
    cout << "Enter total number of rows of first triangle : ";
    cin >> totalrows1;

    int totalrows2;
    cout << "Enter total number of rows of second triangle(it should be on less than trows of first triangle : ";
    cin >> totalrows2;

    // for triangle 1
    int rowno1 = 1;
    while (rowno1 <= totalrows1)
    {
        // for spaces of 1
        int spc1 = 1;
        while (spc1 <= totalrows1 - rowno1)
        {
            cout << "   ";
            spc1 = spc1 + 1;
        }

        // for stars of 1
        int starc1 = 1;
        while (starc1 <= (2 * rowno1 - 1))
        {
            cout << " * ";
            starc1 = starc1 + 1;
        }
        cout << endl;
        rowno1 = rowno1 + 1;
    }

    // for triangle 2
    int rowno2 = 1;
    while (rowno2 <= totalrows2)
    {
        // for spaces of 2
        int spc2 = 1;
        while (spc2 <= rowno2)
        {
            cout << "   ";
            spc2 = spc2 + 1;
        }
        // for stars of 2
        int starc2 = 1;
        while (starc2 <= (2 * (totalrows2 - rowno2) + 1))
        {
            cout << " * ";
            starc2 = starc2 + 1;
        }
        cout << endl;
        rowno2 = rowno2 + 1;
    }

    return 0;
}
