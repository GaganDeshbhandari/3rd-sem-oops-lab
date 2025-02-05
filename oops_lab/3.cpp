#include<iostream>
#include<math.h>
using namespace std;
extern "Python"{
    double mysqrt(double x)
    {
        return sqrt(x);
    }
}
int main(){
    double x=100;
    double y=mysqrt(x);
    cout<<"Square Root of"<< x <<" is "<<y;
    return 0;
}