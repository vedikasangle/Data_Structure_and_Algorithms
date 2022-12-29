#include <iostream>
using namespace std;

int main()
{
    int age;
    // single if --> single situation
    //  if(condition){

    // }

    // cin>>age;
    // if(age>=40){
    //     //true
    //     cout<<"person is elder"<<endl;
    // }

    // //if else --> 2 times task
    // // if(condition){

    // // }else{

    // // }

    // if(age>=40){
    //     cout<<"person is elder"<<endl;
    // }
    // else{
    //     cout<<"person is younger"<<endl;
    // }

    // if elseif elseif....else  -->multiple conditions

    // if(condition){

    // }
    // else if (condition){

    // }
    // else if (condition){

    // }
    // else{

    // }

    int marks;
    cin >> marks;
    // marks -> 100 90 -->grade A //if
    // marks-> 80 89 --> grade B  //else if
    // marks --> 70 79 --> grade C
    // marks--> 60 69 --> grade D
    // marks < 60 --> fail //else

    // if(90>=marks<=100) {
    //     cout<<"Grade A"<<endl;
    // } //cannot write 2 conditions in this way

    if (marks >= 90 and marks <= 100)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 80 and marks <= 89)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 70 and marks <= 79)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 60 and marks <= 69)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    //    condition -> non zero value(-ve or +ve) hoti hai uska matlab true hota hai

    // non -zero value -->  means true
    // zero --> means false
    if (45)
    {
        cout << "heyy" << endl;
    }
    else
    {
        cout << "noo";
    }
    return 0;
}