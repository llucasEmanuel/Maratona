#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b);

class Tasks {
private:
    deque<int> tasks;
public:
    void back() {
        if (this->tasks.empty()) {
            cout << "No Job for Ada?\n";
        }
        else {
            cout << this->tasks.back() << '\n';
            this->tasks.pop_back();
        }
    }
    void front() {
        if (this->tasks.empty()) {
            cout << "No Job for Ada?\n";
        }
        else {
            cout << this->tasks.front() << '\n';
            this->tasks.pop_front();
        }
    }
    void reverse() {   
        int i = 0;
        int j = this->tasks.size() - 1;
        while (i < j) {
            swap(this->tasks[i], this->tasks[j]);
            i++;
            j--;
        }
    }
    void push_back() {
        int value;
        cin >> value;
        this->tasks.push_back(value);
    }
    void toFront() {
        int value;
        cin >> value;
        this->tasks.push_front(value);
    }
};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    Tasks tasks;
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++) {
        string comando;
        cin >> comando;
        if (comando == "back") {
            tasks.back();
        }
        else if (comando == "front") {
            tasks.front();
        }
        else if (comando == "reverse") {
            tasks.reverse();
        }
        else if (comando == "push_back") {
            tasks.push_back();
        }
        else if (comando == "toFront") {
            tasks.toFront();
        }
    }

    return 0;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
