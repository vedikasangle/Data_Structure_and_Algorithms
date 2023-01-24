#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int pehlano;
    cin >> pehlano;

    int abhitakkasum = n;
    int abhitakkamax = n;
    int abhitakkamin = n;

    // bache n - 1 ;

    int i = 1; // what if this i is taken as zero??
    while (i <= n - 1)
    {
        int no;
        cin >> no;

        // sum
        abhitakkasum = abhitakkasum + no;

        // max
        if (no > abhitakkamax)
        {
            abhitakkamax = no;
        }

        // min
        if (no < abhitakkamin)
        {
            abhitakkamin = no;
        }

        i = i + 1;
    }

    int mean = abhitakkasum / n;
    cout << "Mean is " << mean << endl;
    cout << "Max is " << abhitakkamax << endl;
    cout << "Min is " << abhitakkamin << endl;

    return 0;
}

// howww???????????????//
//  6
//  1 2 3 4 5 6
//  Mean is 4
//  Max is 6
//  // Min is 2