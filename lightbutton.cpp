#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n; // 전구 개수
    int M; // 버튼 입력 위치 개수
    int pivot;

    // 입력 = 전구 N개
    //cout << "전구 개수 N을 입력하세요: ";
    cin >> n;

    // 입력 위치 M개
    //cout << "버튼 입력 개수 M을 입력하세요: ";
    cin >> M;

    // button = int 배열[M]
    vector<int> button(M);

    // 입력 = 스위치 누를 위치(M개) 입력해주세요.
    //cout << "버튼을 누를 위치(M개)를 입력하세요: ";
    for (int i = 0; i < M; i++) {
        cin >> button[i];
    }

    // 크기가 N인 bool 배열 선언, false로 초기 값 0
    vector<bool> N(n, false);


    // 버튼마다 처리
    for (int i = 0; i < M; i++) {
        pivot = button[i]; // 버튼 위치 입력은 1부터 시작

        for (int j = 0; j < n; j++) {
            if (pivot == j + 1) { // pivot과 위치 일치 시

                // j가 0일 때
                if (j == 0) {
                    N[j] = !N[j];
                    N[j + 1] = !N[j + 1];
                }

                // j가 N-1일 때
                else if (j == n - 1) {

                    
                    N[j] = !N[j];
                    N[j - 1] = !N[j - 1];
                }

                // 그 외의 경우
                else {
                    N[j - 1] = !N[j - 1];
                    N[j] = !N[j]; 
                    N[j + 1] = !N[j + 1];
                }
            }
        }
    }

    // 크기가 N인 bool 배열에서 true 개수 세기
    int count = 0;
    vector<int> onPositions; // 위치 출력 배열 선언

    for (int k = 0; k < n; k++) {
        if (N[k] == true) { // 전구가 켜져 있다면
            onPositions.push_back(k + 1); // 1-based 위치 추가
            count++;
        }
    }

    // 출력 : 위치, 개수
   // cout << "켜진 전구의 위치: ";
    for (int i = 0; i < onPositions.size(); i++) {
        cout << onPositions[i] << ", ";
    }
    cout << "\n"<< count << "개" << endl;

    return 0;
}
