// Christopher Kong
// CIS 1202 801
// July 25th 2024

template <typename T> T half(T value) {
    return value / 2;
}

template <> int half(int value) {
    return static_cast<int>((value / 2.0) + 0.5);
}

int main() {
    return 0;
}
