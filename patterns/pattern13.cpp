#include <iostream>
using namespace std;

// *    ******
// *    *
// *    *
// *    *
// *    *
// ***********
//      *    *
//      *    *
//      *    *
//      *    *
// ******    *

int main()
{
    int trows;
    cin >> trows; // 9

    // rowno 1--------------->
    // star
    cout << "*";

    // spaces
    int sp = 1;
    while (sp <= ((trows - 1) / 2) - 1)
    {
        cout << " ";
        sp = sp + 1;
    }

    // stars
    int starrs = 1;
    while (starrs <= (trows + 1) / 2)
    {
        cout << "*";
        starrs = starrs + 1;
    }
    cout << endl;

    // row 2 to 4  - same symmetry  ----------------->
    // star, spaces snd then star in one loop
    int rowno = 2;
    while (rowno <= (trows - 1) / 2)
    {
        // starting star
        cout << "*";

        // loop for spaces
        int spc = 1;
        while (spc <= ((trows - 1) / 2) - 1)
        {
            cout << " ";
            spc = spc + 1;
        }
        // last star
        cout << "*";
        cout << endl;
        rowno = rowno + 1;
    }

    // rowno = 5  ------------------>
    // only stars
    int starc = 1;
    while (starc <= trows)
    {
        cout << "*";
        starc = starc + 1;
    }
    cout << endl;

    // row no 6 7 8 same symmetry ------->
    // spaces, star, spaces and then star in one loop
    rowno = ((trows + 1) / 2) + 1; // 6
    while (rowno <= trows - 1)
    {
        // spaces loop 1
        int spac = 1;
        while (spac <= (trows - 1) / 2)
        {
            cout << " ";
            spac = spac + 1;
        }
        // star 1
        cout << "*";
        // spaces loop 2
        int spa = 1;
        while (spa <= ((trows - 1) / 2) - 1)
        {
            cout << " ";
            spa = spa + 1;
        }

        // last star
        cout << "*";
        cout << endl;
        rowno = rowno + 1;
    }

    // last row ---------------->
    // stars loop
    int stars = 1;
    while (stars <= (trows + 1) / 2)
    {
        cout << "*";
        stars = stars + 1;
    }

    // spaces loop
    int spaces = 1;
    while (spaces <= ((trows - 1) / 2) - 1)
    {
        cout << " ";
        spaces = spaces + 1;
    }

    // last star
    cout << "*";
    cout << endl;

    return 0;
}
