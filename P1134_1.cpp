#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a[3001]; // 用于存储阶乘结果的数组，考虑到阶乘结果可能非常大
    int N, i, j, m; // N是要计算阶乘的数，i和j是循环变量，m用于计算过程中的中间值
    while (scanf("%d", &N) != EOF) {
        for (i = 0; i < 3001; i++) a[i] = 0;
        a[0] = 1;
        for (i = 1; i <= N; i++) {
            for (j = 0; j < 3001; j++) {
                m = a[j] * i + m/10; // 计算当前位的值，并加上进位
                a[j] = m % 10; // 取模10得到当前位的数字
            }
        }

        // 跳过前导0
        for (i = 3000; i >= 0; i--) {
            if (a[i] != 0) break; // 找到第一个非0数字
        }

        // 输出阶乘结果
        for (j = i; j >= 0; j--) { // 从第一个非0数字开始输出
            cout << a[j];
        }
        cout << endl; // 输出换行
    }
    return 0;
}