#include<iostream>
using namespace std ; 

int main(){
    //how to declare char arrays
    //first way ==>with loop 
    // datatype nameofarr[size];

    // char arr[3] = {'A', 'B' , 'C'};

    // for(int i = 0 ; i<=2 ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    //second way  ==>with loop  
    // char arr[] = {'A', 'B' , 'C'};
    // int s = sizeof(arr)/sizeof(char);

    //  for(int i = 0 ; i<=s-1 ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    //third way ==>without loop 
    // char arr[4] = {'A', 'B' , 'C', '\0'};
    // cout<<arr<<endl;
    
    //forth way
    // char arr[4] = "dog"; //string -> they have by default '\0' at end 
    //hence this string is actually "dog\0"; thats why no. of characters are 4 
    // char arr[] = "dog";  //--> size ignored 
    // cout<<arr<<endl;

    //fifth way 
    char arr[100];
    // int n ; 
    // cin>>n;
    // for(int i = 0 ; i <=n -1 ; i++){
    //     cin>>arr[i];
    // }
    //cin>>arr; //but in this white spaces are ignored 
    //cin.getline(arr,100); //used so that white spaces 
    // for(int i = 0 ; i <=n -1 ; i++){
    //     cout<<arr[i]<<" ";
    // }
    //cout<<arr<<endl;

    //delimiter
    cin.getline(arr,100,'$'); //this will take input until $ sign only
    cout<<arr<<endl; 

    // getline real code
    char arr[100];
    char ch ; 
    cin>>ch; 
    ch = cin.get();
    int i = 0; 
    while(ch!='n'){
        arr[i] = ch;
        i++;
        //cin>>ch;
        ch = cin.get();
    }

    return 0 ; 

}
