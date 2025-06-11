#include <iostream>
using namespace std;

void Hanoi(int n, char A, char C, char B)
{
    if(n==1)
    {
        cout << A << "->" << C << endl;
        return ;
    }
    Hanoi(n-1, A,B,C);
    cout << A << "->" << C <<endl;
    Hanoi(n-1, B,C,A);
}


int main(void)
{
    cout << "원판의 개수를 입력하세요. ";
    int n = 0;
    char A = 'A', B = 'B', C = 'C';
    cin >> n;
    Hanoi(n,A,C,B);

    return 0;
}