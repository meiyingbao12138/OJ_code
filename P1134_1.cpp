#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a[3001]; // ���ڴ洢�׳˽�������飬���ǵ��׳˽�����ܷǳ���
    int N, i, j, m; // N��Ҫ����׳˵�����i��j��ѭ��������m���ڼ�������е��м�ֵ
    while (scanf("%d", &N) != EOF) {
        for (i = 0; i < 3001; i++) a[i] = 0;
        a[0] = 1;
        for (i = 1; i <= N; i++) {
            for (j = 0; j < 3001; j++) {
                m = a[j] * i + m/10; // ���㵱ǰλ��ֵ�������Ͻ�λ
                a[j] = m % 10; // ȡģ10�õ���ǰλ������
            }
        }

        // ����ǰ��0
        for (i = 3000; i >= 0; i--) {
            if (a[i] != 0) break; // �ҵ���һ����0����
        }

        // ����׳˽��
        for (j = i; j >= 0; j--) { // �ӵ�һ����0���ֿ�ʼ���
            cout << a[j];
        }
        cout << endl; // �������
    }
    return 0;
}