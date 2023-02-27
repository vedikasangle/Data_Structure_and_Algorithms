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
     int index = n%10; //pehle hamara kaam 
     cout<<arr[index]<<" ";
     reversewordprint(n/10); //fir recusion ka kaam 
}

int main(){
     int n ;
     cin>>n;

     reversewordprint(n);



     return 0;
} 