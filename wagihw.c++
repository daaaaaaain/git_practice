#include <iostream>

int reverse(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;      // 마지막 자리 추출
        reversed = reversed * 10 + digit; // 역순으로 추가
        num /= 10;                 // num의 마지막 자리 제거
    }
    return reversed;
}

int main() {
    int number = 3456;
    std::cout << "reverse(" << number << ") = " << reverse(number) << std::endl;
    return 0;
}
