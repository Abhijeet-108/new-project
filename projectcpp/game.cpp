#include<iostream>
#include<string>
using namespace std;

int main(){
    string alp{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"ZYXWVutrsQPONMLKJIHGFEDCabzyxwvUTRSqponmlkjihgfedcBA"};

    string secret_message{};
    cout << "!!!!!WRITE UR SECRET MESSAGE!!!!!!"<< endl;
    getline(cin,secret_message);
    cout<< "**************************"<<endl;

    string encrypt_message{};
    cout << "ENCRYPT MESSAGE ......................."<< endl;

    for(char c:secret_message){
        size_t position = alp.find(c);
        if(position != string::npos){
            char new_char = {key.at(position)};
            encrypt_message += new_char;
        }else{
            encrypt_message += c;
        }
    }
    cout << "ENCRYPT MESSAGE :- " << encrypt_message;

    cout<< "\n=====================================\n";

    string decrypt_message{};
    cout << "MESSAGE DECRYPTING......................"<<endl;

    for(char d:encrypt_message){
        size_t pos = key.find(d);
        if(pos != string::npos){
            char new_de = {alp.at(pos)};
            decrypt_message += new_de;
        }else{
            decrypt_message += d;
        } 
    }
    cout <<"DECRYPT MESSAGE :- "<< decrypt_message;

    cout << endl;
    return 0;
}