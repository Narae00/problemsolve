#include <iostream>
#include <cmath>
using namespace std;


//기존의 pow 사용 방식은 pow(10, j-1) 연산이 부동소수점으로 처리되어, 큰 숫자에서 자리수 구하는데 오차가 발생할 수 있다.
int getActualDistance(int N) {
    int count = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 9; j++) {
            if (((i / (int)pow(10, j - 1)) % 10) == 4) {
                count++;
                break;
            }
        }
    }

    return N - count;
}


int main() {
    int A, B;
    cin >> A >> B;
    if (A < 0 || A > 999999999 || B < 0 || B > 999999999) {
        cout << "입력은 0 이상 999999999 이하의 정수여야 합니다." << endl;
        return 1;
    }

   //입출력 2개를 위해 함수화
    cout << getActualDistance(A) << std::endl;
    cout << getActualDistance(B) << std::endl;

    return 0;
}
