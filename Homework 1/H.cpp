#include <bits/stdc++.h>
#define lli long long int
#define endl '\n'

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    map<string, string> dictionary;
    string english_word;
    string stranger_word;
    for (int i = 0; i < 100000; i++) {
        cin >> english_word >> stranger_word;
        dictionary.insert(make_pair(stranger_word, english_word));
    }

    string key;
    for (int i = 0; i < 100000; i++) {
        cin >> key;
        if (dictionary.count(key) > 0) {
            cout << dictionary[key] << endl;
        }
        else {
            cout << "eh" << endl;
        }
        
    }

    return 0;
}
