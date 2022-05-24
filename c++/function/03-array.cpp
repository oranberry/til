// 함수로 배열 관리하기
// 1. 시작주소와 크기를 전달
// 2. 시작주소와 끝주소를 전달

#include <iostream>
using namespace std;

const int SIZE = 8;
int sumArr(int *, int);
// int sumArr(int*, int*);

int main()
{
    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    // arr == &arr[0]
    int sum = sumArr(arr, SIZE);

    cout << "함수의 총 합은" << sum << " 입니다.";

    /*
    int sum = sumArr(arr, arr+SIZE);
    cout << "함수의 인덱스 " << SIZE << " 까지의 합은 " << sum << " 입니다.\n";

    sum = sumArr(arr, arr+3);
    cout << "함수의 세번째 인덱스 까지의 합은 " << sum << " 입니다.\n";
    */
    return 0;
}
// 시작주소와 크기를 전달
int sumArr(int *arr, int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];

    return total;
}
// 시작주소와 끝주소를 전달
/*
int sumArr(int* begin, int* end){
    int total = 0;
    int* pt;

    for (pt = begin; pt != end; pt++)
        total += *pt;

    return total;
}
*/