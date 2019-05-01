#include <iostream>
using namespace std;

const int MAXE = 1005;
double res[MAXE];

int main() {
    int k, e, count = 0;
    double c;
    cin >> k;
    while (k--) {
        cin >> e >> c;
        res[e] += c;
    }
    cin >> k;
    while (k--) {
        cin >> e >> c;
        res[e] += c;
    }
    for (auto c : res)
        count += c != 0.0;
    printf("%d", count);
    for (int i = MAXE; i >= 0; i--)
        if (res[i] != 0.0) printf(" %d %.1f", i, res[i]);
    return 0;
}