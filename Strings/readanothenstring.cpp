#include<iostream>
using namespace std  ;


int main(){
    int n ; 
    cin>>n ; 

    cin.ignore();//to ignore space or '/n' between number and array
    // cin.ignore();//this will ignore first character of array


    char arr1[100];
    cin.getline(arr1,100);

    cout<<n<<endl;
    cout<<arr1<<endl;
}