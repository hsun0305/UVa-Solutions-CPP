#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 建立費氏數列，計算到第 45 項即可涵蓋題目限制的 100,000,000
    int a[45];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < 45; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    int n;
    // 讀取有幾筆測資
    if (cin >> n) {
        for (int i = 1; i <= n; i++) {
            int num;
            cin >> num; // 這裡應該要讀取每一筆要轉換的數字，而不是直接用 n
            int original_num = num;

            vector<int> b;
            // 題目規定費氏數基底從 1 開始，對應標準費氏數列的 a[2]
            // 所以迴圈的終點只能到 j=2，不能到 j=1
            for (int j = 44; j >= 2; j--) {
                if (a[j] <= num) { // 條件必須是 <=，當數字剛好等於費氏數時也要減去
                    b.push_back(j);
                    num -= a[j];
                }
            }

            // 輸出原本的十進位數字
            cout << original_num << " = ";

            // 從最大的費氏數索引 (b[0]) 開始往下印到 2
            if (!b.empty()) {
                int max_idx = b[0];
                for (int j = max_idx; j >= 2; j--) {
                    bool used = false;
                    for (int k = 0; k < b.size(); k++) {
                        if (b[k] == j) {
                            used = true;
                            break;
                        }
                    }
                    if (used) {
                        cout << "1";
                    } else {
                        cout << "0";
                    }
                }
            }
            // 補上題目要求的後綴與換行
            cout << " (fib)" << endl;
        }
    }
    return 0;
}
