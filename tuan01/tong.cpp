#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Tối ưu hóa tốc độ đọc ghi dữ liệu đầu vào chuẩn
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Bẫy 2: Biến tổng phải khai báo kiểu long long để tránh tràn số int
    long long sumv = 0; 
    // Bẫy 1: Khởi tạo giá trị lớn nhất bằng phần tử đầu tiên, không khởi tạo bằng 0
    int maxv = a[0];    

    for (int i = 0; i < n; i++) {
        sumv += a[i];
        if (a[i] > maxv) {
            maxv = a[i];
        }
    }

    cout << sumv << " " << maxv << "\n";
    return 0;
}
