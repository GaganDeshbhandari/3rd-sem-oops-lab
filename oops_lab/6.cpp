#include<iostream>
using namespace std;
class D2;
class D1{
    int meters,centemeters;
    public:
    void read(){
        cout<<"Enter the meter and cenetimeters: ";
        cin>>meters>>centemeters;
    }
    friend int add(D1 obj1,D2 obj2);
};
class D2{
    int feet,inches;
    public:
    void read(){
        cout<<"Enter the feet and inches: ";
        cin>>feet>>inches;
    }
    friend int add(D1 obj1,D2 obj2);
};
add(D1 obj1,D2 obj2){
    int inches=obj1.meters*39.37+obj1.centemeters*0.3937;
    int total_inches=inches+obj2.feet*12+obj2.inches;
    int total_feet=total_inches/12;
    int total_inches1=total_inches%12;
    cout<<"Total Length= "<<total_feet<<" feet "<<total_inches1<<" inches";
    return 0;
}
int main(){
    D1 d1;
    D2 d2;
    d1.read();
    d2.read();
    add(d1,d2);
    return 0;
}