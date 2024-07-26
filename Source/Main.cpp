// Christopher Kong
// CIS 1202 801
// July 25th 2024

#include <iostream>

using namespace std;

template<typename T> T half(T value) {
    return value / 2;
}

template<> int half(int value) {
    return static_cast<int>((value / 2.0) + 0.5);
}

template<typename T> void test(T value) {
    cout << "The value " << value << " is passed into the half function." << endl;
    cout << "The result is " << half(value) << endl;
}

int main() {
    // Tests 3 cases, each with a different numeric type
    test(7.0);
    test(5.0f);
    test(3);
    return 0;
}
