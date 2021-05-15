#include "modAlphaCipher.h"

void check(const string& Text, const string& key)
{
    try {
        string cipherText;
        string decryptedText;
        modAlphaCipher cipher(key);
        cipherText = cipher.encrypt(Text);
        decryptedText = cipher.decrypt(cipherText);
        cout<<"key="<<key<<endl;
        cout<<"Encrypted text: "<<cipherText<<endl;
        cout<<"Decrypted text: "<<decryptedText<<endl;
    } catch (const cipher_error & e) {
        cerr<<"Error: "<<e.what()<<endl;
    }
    cout<<""<<endl;
}

int main(int argc, char **argv)
{
    check("НЕЗАДАВАЙТЕНИКАКИХВОПРОСОВ","Всеплохо");
    check("КУСЬ","");
    check("НЕЗАДАВАЙТЕНИКАКИХОПРОСОВ","ВОПРОСЫ123");
    check("В о п р о с ы","НЕТРОГАЙТЕ");
    check("123","НЕТРОГАЙТЕ");
}