#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sumv = 0; // dung long long de khong bi tran so khi test lon
    int maxv = a[0];    // gan bang phan tu dau tien de xu ly day so am

    for (int i = 0; i < n; i++) {
        sumv += a[i];
        if (a[i] > maxv) {
            maxv = a[i];
        }
    }

    cout << sumv << " " << maxv << "\n";
    return 0;
}
