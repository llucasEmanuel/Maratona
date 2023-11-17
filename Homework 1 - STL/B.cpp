#include <bits/stdc++.h>
#define endl '\n'
#define lli long long int

using namespace std;

class Bag {
private:
    stack<lli> gifts;
    stack<lli> min_stack; // o top é o menor elemento
public:
    void push(lli value) {
        this->gifts.push(value);
        if (this->min_stack.empty() || value <= this->min_stack.top()) {
            this->min_stack.push(value);
        }
    }
    void pop() {
        if (this->gifts.empty()) {
            cout << "EMPTY" << endl;
        }
        else {
            if (this->gifts.top() == this->min_stack.top()) {
                this->min_stack.pop();
            }
            this->gifts.pop();
        }
    }
    void min() {
        if (this->gifts.empty()) {
            cout << "EMPTY" << endl;
        }
        else {
            cout << this->min_stack.top() << endl;
        }
    }
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Bag bag;

    int comandos;
    cin >> comandos;
    for (int i = 0; i < comandos; i++) {
        string metodo;
        cin >> metodo;
        if (metodo == "PUSH") {
            lli value;
            cin >> value;
            bag.push(value);
        }
        else if (metodo == "POP") {
            bag.pop();
        }
        else if(metodo == "MIN") {
            bag.min();
        }
    }

    return 0;
}

