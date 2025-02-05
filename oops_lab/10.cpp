 #include<iostream>
 using namespacestd;
 class COMPLEX{
 private:
 f
 loat real;
 f
 loat imag;
 public:
 COMPLEX(){ //defaultconstructor
 real = 0;
 imag=0;
 }
 COMPLEX(floatr,floati){ //parameterizedconstructor
 real = r;
 imag=i;
 }
 COMPLEX(intr){ //constructorwithinteger input
 real = r;
 imag=0;
 }
 COMPLEXADD(COMPLEXC){ //ADD()functionforaddingtwoComplexnumbers
 COMPLEXres;
 res.real = real + C.real;
 res.imag = imag+C.imag;
 return res;
 }
COMPLEX ADD(int r) { // ADD() function for adding an integer and a Complex
 number
 COMPLEXres;
 res.real = real + r;
 res.imag = imag;
 return res;
 }
 void display() { // function to display Complex number
 if(imag < 0)
 cout <<real <<"-i"<<abs(imag)<<endl;
 else
 cout <<real <<"+i"<<imag<<endl;
 }
 };
 int main() {
 COMPLEXC1(4,5);
 COMPLEXC2(3,-2);
 COMPLEXC3;
 cout <<"C1=";
 C1.display();
 cout <<"C2=";
 C2.display();
 C3=C1.ADD(C2); //AddingtwoComplexnumbers
 cout <<"C1+C2=";
 C3.display();
 C3=C1.ADD(2); //AddinganintegerandaComplexnumber
 cout <<"C1+2=";
 C3.display();
return 0;
 }