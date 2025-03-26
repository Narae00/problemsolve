//최대 공약수 (재귀없이) 2개의 양의 정수 입력


#include <iostream>
using namespace std;

int main()
{
    int max,min, temp;
    int answer = 1 ;
    cout << "두 수 입력 : ";
    cin >> max >> min;

    if (max == min)
    {
        cout << "최대 공약수는 : " << max;
        exit(0);
    }

    if (min > max)
    {
        temp = max;
        max = min;
        min = temp;
    }

    for(int i =1; i<= min; i++)
    {
        if (min % i ==0 && max % i == 0)
        answer = i;
    }
    cout << "최대 공약수는 : " <<answer;

    return 0;
}