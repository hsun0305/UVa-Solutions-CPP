#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 修正 1: 處理 cin >> n 留下來的換行字元
    cin.ignore();

    // 修正 2: 將字串陣列改為 vector 寫法，並刪除會衝突的 int cout=0;
    vector<string> a(n);

    for(int i = 0; i < n; i++){
        // 修正 3: 題目句子裡會有空白，改用 getline 讀取一整行
        getline(cin, a[i]);
    }

    vector<char> c;
    for(int i = 0; i < n; i++){
        // 修正 4: length 是函式，後面必須加上 ()
        for(int j = 0; j < a[i].length(); j++){
            c.push_back(a[i][j]);
        }
    }

    // 修正 5: 變數改名為 letterCount 避免與字串陣列 a 衝突，並初始化為 0
    int letterCount[91] = {0};

    // 新增：宣告一個變數記錄「出現過最多次的次數」，幫助後續輸出
    int maxCount = 0;

    for(int i = 0; i < c.size(); i++){
        for(int j = 65; j <= 90; j++){
            // 你的核心邏輯：判斷大寫 (j) 或是小寫 (j+32)
            if(c[i] == j || c[i] == j + 32){
                letterCount[j]++;

                // 隨時更新最大次數
                if (letterCount[j] > maxCount) {
                    maxCount = letterCount[j];
                }
                break;
            }
        }
    }

    // 修正 6: 處理題目的排序輸出要求
    // 題目要求：次數多的先印。所以我們從 maxCount 往下遞減檢查到 1。
    for(int k = maxCount; k >= 1; k--){
        // 題目要求：次數相同時，字母由 A 到 Z 印出。
        // 所以內圈從 65 (A) 檢查到 90 (Z)，剛好符合順序。
        for(int i = 65; i <= 90; i++){
            // 如果這個字母出現的次數剛好是 k，就印出來
            if (letterCount[i] == k) {
                char ch = i;
                cout << ch << " " << letterCount[i] << "\n";
            }
        }
    }

    return 0;
}
