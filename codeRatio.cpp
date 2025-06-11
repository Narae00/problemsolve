#include <iostream>
using namespace std;


//입력 값 3개를 위한 함수화화
int countArithmeticSequences(int n) {
    if (n < 1 || n > 999)
        return -1; // 1~999 사이수 판별

    int count = 0;

    if (n <= 99) {
        count = n; // 두 자리수 까지는 모두 성립
    } else 
    {
        count += 99;
        for (int i = 100; i <= n; i++) {
            int num[3];
            int temp = i;
            num[2] = temp % 10; 
            temp /= 10;
            num[1] = temp % 10; 
            temp /= 10;
            num[0] = temp;

            if ((num[0] - num[1]) == (num[1] - num[2])) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    int result1 = countArithmeticSequences(n1);
    int result2 = countArithmeticSequences(n2);
    int result3 = countArithmeticSequences(n3);

    cout << result1 << " " <<result2 << " " <<result3 << endl;

    return 0;
}