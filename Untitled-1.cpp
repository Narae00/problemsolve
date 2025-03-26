#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    vector<int> N;
    int W, num;

    // 배열 입력 받기
    cout << "양의 정수를 입력해주세요 (음수 입력 시 종료): " << endl;
    while (true) {
        cin >> num;
        if (num < 0) break;  // 음수 입력 시 종료
        N.push_back(num);
    }

    // W 값 입력
    cout << "양의 정수 W를 입력해주세요: " << endl;
    cin >> W;

    // W와 같은 값이 있으면 즉시 True 출력 후 종료
    for (int i = 0; i < N.size(); i++) {
        if (N[i] == W) {
            cout << "True" << endl;
            return 0;
        }
    }

    // 부분합 저장을 위한 집합 (set)
    unordered_set<int> subset_sums;
    subset_sums.insert(0); // 초기값 (아무것도 선택 안 했을 때)

    // 부분합 구하기
    for (int num : N) {
        vector<int> temp; // 새로운 값들을 저장할 리스트
        for (int sum : subset_sums) {
            int new_sum = sum + num;
            if (new_sum == W) {
                cout << "True" << endl;
                return 0;
            }
            temp.push_back(new_sum);
        }
        // 기존 집합에 새로운 합을 추가
        for (int s : temp) {
            subset_sums.insert(s);
        }
    }

    cout << "False" << endl;
    return 0;
}
