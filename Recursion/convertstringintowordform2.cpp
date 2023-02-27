#include<iostream>
using namespace std;

//global array 
string arr[] = {"Zero","One","Two","Three","Four",
               "Five","Six","Seven","Eight","Nine"};


void reversewordprint(int n){
     //base case
     if(n==0){
          return;
     }

     //recursive case 
     reversewordprint(n/10); //pehle recusion ka kaam 
     int index = n%10; //fir hamara kaam 
     cout<<arr[index]<<" ";
     
}

int main(){
     int n ;
     cin>>n;

     reversewordprint(n);



     return 0;
} 