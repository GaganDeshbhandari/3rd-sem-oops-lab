#include<iostream>
using namespace std;

double power(double n, int p=2){            //Created a function called power
    double result=1;                        //Initialized result=1 so tht we store the multiplication of number p times in it
    for(int i=1;i<=p;i++){
        result*=n;
    }
    return result;
}
int main(){
    double n;
    int p;
    cout<<"Enter the Number and Power: ";               
    cin>>n>>p;
    cout<<n<<" raised to "<<p<<" is "<<power(n,p)<<endl;          //continuous two cout doesnt give two separate lines
    cout<<"By default "<<n<<"raised to 2 is "<<power(n);  //in ordr to get two separate line we must use endl or \n
    return 0;
}