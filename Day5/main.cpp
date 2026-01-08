#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 高精度除以低精度
vector<int> div(vector<int>& A, int b, int& r) {
    vector<int> C;
    r = 0; // 余数
    // 从高位到低位计算
    for (int i = A.size() - 1; i >= 0; i--) {
        r = r * 10 + A[i]; 
        C.push_back(r / b); 
        r %= b; 
    }
    // 反转
    reverse(C.begin(), C.end());

    while (C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}

void test_div()
{
    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
    
    int r; 
    vector<int> C = div(A, b, r);
    
    // 输出
    for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
    cout << endl << "余数：" << r << endl;
}

int main() {
    test_div();
    
    return 0;
}