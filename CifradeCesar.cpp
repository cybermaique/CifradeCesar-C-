#include <iostream>
 
using namespace std;
 
int main() {

    int x;
    string s;

    cout << "Insira a palavra: ";
    cin >> s;

    cout << "Insira a chave: ";
    cin >> x;

    for (int j = 0; j < s.size(); j++){
        if ((s[j] + x) > 122 or (s[j] + x) > 90 and (s[j] + x) < 97)
            s[j] -= 26;

        s[j] += x;
    }
	
    cout << "Palavra Cifrada: ";
    cout << s << endl;

     return 0;
}