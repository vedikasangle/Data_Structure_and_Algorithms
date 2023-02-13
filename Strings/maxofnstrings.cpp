#include<iostream>
using namespace std ;

int lengthofarr(char arr[100]){
    // int i = 0 ; 
    int countofchar = 0 ;
    
    while(arr[countofchar]!='\0'){//arr[i]!='\0'
    countofchar++;
    // i++;
    }
    return countofchar;
}

void copy(char arr1[100],char arr2[100]){
    int i = 0 ; 
    int j = 0 ; 
    
    while(j<=lengthofarr(arr2)){
    arr1[i]=arr2[j];
    i++;
    j++;
    }
}

int main(){
    int n ; 
    cin>>n ; 

    cin.ignore(); //whyy?
    char arr1[100];
    cin.getline(arr1,100);//ear

    char maxstring[100];

    copy(maxstring,arr1);
    int maxlength = lengthofarr(arr1);
    
    //loop ==> for taking rest n-1 elements  
    for(int i = 1 ; i<=n-1 ; i++ ){
    cin.getline(arr1,100);//table (overwrite over ear)

    if(lengthofarr(arr1)>=maxlength){
        copy(maxstring,arr1);
        maxlength = lengthofarr(arr1);
    }
    }

    cout<<"Maximum String is : "<<maxstring<<endl;
    cout<<"Maximum length is : "<<maxlength<<endl;



    return 0 ;
}