#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string phrase;
    unsigned int key;

    cout << "Type the phrase already on the Caesar Cipher: ";
    getline(cin, phrase);
    cout << "Type the key: ";
    cin >> key;


    for(int i = 0; phrase[i] != '\0'; i++){
    
        if(phrase[i] >= ('A' + key) && phrase[i] <= 'Z'){
            if(key > 26){
                while(key > 26){
                    key -= 26;
                }
            }
            phrase[i] -= key;
        }else if(phrase[i] >= ('A') && phrase[i] <= ('A' + (key - 1))){
            if(key > 26){
                while(key > 26){
                    key -= 26;
                }
            }
            phrase[i] += (26 - key);
        }else if(phrase[i] >= 'a' && phrase[i] <= ('z' - key)){
            if(key > 26){
                while(key > 26){
                    key -= 26;
                }
            }
            phrase[i] -= (32 - key);
        }else if(phrase[i] >= ('z' - (key - 1)) && phrase[i] <= 'z'){
            if(key > 26){
                while(key > 26){
                    key -= 26;
                }
            }
            phrase[i] -= (58 - key);
        }
    }

    cout << "Decripted phrase: ";
    cout << phrase << endl;

    return 0;
}