#include<iostream>
using namespace std;
void checkAlphabet(char alphabet, char &result){            //we are passing result using call by reference and passing alphabet using call by value
    if(alphabet =='a'|| alphabet =='e'|| alphabet=='i'||alphabet=='o'||alphabet=='u'
    || alphabet =='A'|| alphabet =='E'|| alphabet=='I'||alphabet=='O'||alphabet=='U'){
        result=alphabet-1;
        cout<<alphabet<<" is a vowel its predecessor is "<<result;
    }
    else{
        result=alphabet+1;
        cout<<alphabet<<" is a consonant its successsor is "<<result;
    }

}
int main(){                                 //in vs code main function must have int return type
    char a,result;
    cout<<"Enter the alphabet: ";
    cin>>a;
    if(!isalpha(a)){                        //isalpha checks wheter the entered character is a alphabet or not
        cout<<"Entered character is not a alphabet";
    }
    else{
        checkAlphabet(a,result);
    }
    return 0;
    }