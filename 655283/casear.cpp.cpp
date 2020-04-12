#include <iostream>
using namespace std;

int main() {
string word;
int x = 0;
char eord;

cout << "如果加密 輸入 e 如果解密 輸入 d" << endl;
cin >> eord;
    if (eord == 'e') {
        cout << "輸入字";
        cin >> word;

        cout << "輸入間隔";
        cin >> x;    

            for (int i = 0;word [i] != '\0';i++ ) {
                x %= 26;
                int alphabet = word[i] + x;
                if (alphabet > 'z') {
                word[i] = char(alphabet -= 26);
                }else if (word [i] <= 'a'|| word [i] >= 'Z') {
                word[i] = char(alphabet -= 26);
                }else {
                word[i] = alphabet;
                }
            }   

    cout << word;
    
    } else if (eord == 'd') {
        cout << "輸入字";
        cin >> word;
        
        cout << "輸入間隔";
        cin >> x;    
            for (int i = 0;word [i] != '\0';i++ ) {
                x %= 26;
                int alphabet = word[i] - x;
                if (alphabet < 'A') {
                word[i] = char(alphabet += 26);
                }else if (word [i] <= 'a'|| word [i] >= 'Z') {
                word[i] = char(alphabet += 26);
                }else {
                word[i] = alphabet;
                }
            }   
    cout << word; 
    }
}
