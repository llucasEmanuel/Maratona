#include <bits/stdc++.h>
#define lli long long int
#define endl '\n'

using namespace std;

void seekSum(vector<pair<lli, int>> vet, lli sum);

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    lli sum;
    cin >> n >> sum;
    vector<pair<lli, int>> vet(n); // indice elemento
    for (int i = 0; i < vet.size(); i++) {
        cin >> vet[i].first;
        vet[i].second = i+1; // armazena o indice original
    }
    sort(vet.begin(), vet.end()); // usa o first pra comparar por default

    seekSum(vet, sum);

    return 0;
}

void seekSum(vector<pair<lli, int>> vet, lli sum) {
    for (int i = 0; i < vet.size(); i++) {
        int l = i + 1;
        int r = vet.size() - 1;
        while (l <= r) {
            int m = l + (r - l)/2;
            lli partialSum = vet[i].first + vet[m].first;
            if (partialSum == sum && i != m) {
                cout << vet[i].second << ' ' << vet[m].second << endl;
                return;
            }
            else if (partialSum > sum) {
                r = m-1;
            }
            else {
                l = m+1;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
