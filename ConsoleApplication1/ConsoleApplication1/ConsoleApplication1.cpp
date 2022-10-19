// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
long long N,minprice;
long long citydistance[100000];
long long answer;
int main()
{
    cin >> N;
    for (int i = 0; i < N-1; i++)
    {
        cin>>citydistance[i];
    }
    for (int i = 0; i < N; i++)
    {
        long long price=0;
        cin >> price;
        if (i != 0)
        {
            answer += citydistance[i-1] * minprice;
            minprice = min(price, minprice);
        }
        else
        {
            minprice = price;
        }
    }
    cout << answer;
}

