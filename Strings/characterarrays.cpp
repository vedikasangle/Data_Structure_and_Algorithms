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
    // char arr[100];
    // int n ; 
    // cin>>n;
    // for(int i = 0 ; i <=n -1 ; i++){
    //     cin>>arr[i];
    // }
    //this above loop is same as the below
    //cin>>arr; //but in this white spaces are ignored 


    //cin.getline(arr,100); //used so that white spaces 
    //in this the third argument is not given, hence the default third argument taken as '\n'
    // for(int i = 0 ; i <=n -1 ; i++){
    //     cout<<arr[i]<<" ";
    // }
    //this above loop is same as the below
    //cout<<arr<<endl;

    //delimiter($ in this case )
    //by default delimiter is '/n' , if only two arguments are given int cin.getline
    // char arr[100]; 
    // cin.getline(arr,100,'$'); //this will take input until $ sign only
    // cout<<arr<<endl; 

    // getline real code of this line : cin.getline(arr,100,'$'); ==> 
    char arr[100];
    char ch ; 
    // cin>>ch; 
    ch = cin.get();
    int i = 0; 
    while(ch!='$'){ //here we write the delimiter($ in our case) ; when delimiter is not given , it is by default '\n'
        arr[i] = ch;
        i++;
        // cin>>ch; //cin ignores spaces , but we dont want that to happen 
        ch = cin.get();
    }
    arr[i] = '\0'; //if this line is not written garbage values are printed till we get '\0'
    //without above line => output we got :heyu@+∙
    cout<<arr<<endl;

    //

    return 0 ; 

}
