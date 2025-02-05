#include<iostream>
#include<string>

using namespace std;
int  main(){
    string character;
    int alphabet=0,digit=0,word=0;
    cout<<"Enter the sequence of characters";
    cin>>character;
    for(int i=0;i<character.length();i++){
        if(isalpha(character[i])){
            alphabet++;
        }
        else if(isdigit(character[i])){
            digit++;
        }
        if(isspace(character[i]) && !isspace(character[i-1])){
            word++;
        }
    }
    if(!isspace(character.length()-1)){
        word++;
    }
    cout<<"Words : "<<word<<endl;
        cout<<"Alphabet: "<<alphabet<<endl;
    cout<<"Digits : "<<digit<<endl;

return 0;
}
