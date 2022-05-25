#include <iostream>
using namespace std;

const int SIZE = 8;
int sumArr(int *, int n = 1); // 디폴트 매개변수 (⚠️ 선언 규칙: 디폴트 매개변수를 사용할 때는 반드시 가장 오른쪽!)

int main()
{
    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64};
    int sum = sumArr(arr);

    cout << "함수의 총 합은 " << sum << "입니다." << endl; // 1
    return 0;
}

int sumArr(int *arr, int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];

    return total;
}