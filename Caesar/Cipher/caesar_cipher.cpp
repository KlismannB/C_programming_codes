#include <iostream>

using namespace std;

int main(void)
{
    string phrase;
    unsigned int key;

    cout << "Type a phrase to encript to the Caesar Cipher: ";
    getline(cin, phrase);
    cout << "Type the key: ";
    cin >> key;

    for(int i = 0; phrase[i] != '\0' ; i++){
        
        if(phrase[i] >= 'A' && phrase[i] <= ('Z' - key)){
            if(key > 26){
                while(key > 26){
                    key -= 26;
                }
            }
            phrase[i] += key;
        }else if(phrase[i] >= ('Z'- (key - 1)) && phrase[i] <= 'Z'){
            if(key > 26){
                while(key > 26){
                    key -= 26;
                }
            }
            phrase[i] -= (26 - key);
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
    
    cout << "Phrase on Caesar Cipher: ";
    cout << phrase << endl;
}