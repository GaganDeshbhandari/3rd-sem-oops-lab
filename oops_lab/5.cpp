#include<iostream>
using namespace std;
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int AND(int arr1[],int arr2[],int n){
    int result[n];
    for(int i=0;i<n;i++){
        result[i]=arr1[i]&arr2[i];
    }
    cout<<"\nAND OPERATION :";
    printarray(result,n);
    return 0;
}
    int OR(int arr1[],int arr2[],int n){
    int result[n];
    for(int i=0;i<n;i++){
        result[i]=arr1[i]|arr2[i];
    }
    cout<<"\nOR OPERATION :";
    printarray(result,n);
    return 0;
}
void BITWISE(int arr1[],int arr2[],int n){
    int result[n];
    for(int i=0;i<n;i++){
        result[i]=arr1[i]^arr2[i];
    }
    cout<<"\nBITWISE OPERATION :";
    printarray(result,n);
    
}
int main(){
    int a[10],b[10],n;
    cout<<"Enter the number of bits :";
    cin>>n;
    cout<<"Enter the 1st binary number :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the 2nd binary number :"<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"BINARY 1: ";
    printarray(a,n);
    cout<<"\nBinary 2: ";
    printarray(b,n);
    AND(a,b,n);
    OR(a,b,n);
    BITWISE(a,b,n);
return 0;
}