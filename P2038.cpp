#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int max1 = 0, max2 = 0;
    int last1 = -1;   
    int last2 = -1;  

    for (int i = 0; i < n; ++i) {
        int t = a[i] % 2;

        if (t != last1) {
            max1 += 1;
            last1 = t;
        }

        if (t == last2|| last2 == -1) {
            max2 += 1;
            last2 = t;
        }
    }

    cout << max1 - max2 << '\n';
    return 0;
}
