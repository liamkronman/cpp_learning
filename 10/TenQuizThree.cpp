#include <iostream>

template <typename T>
struct Triad
{
    T val1 {};
    T val2 {};
    T val3 {};
};

template <typename T>
Triad(T, T, T) -> Triad<T>;

template <typename T>
void print(const Triad<T>& t)
{
    std::cout << "[" << t.val1 << ", " << t.val2 << ", " << t.val3 << "]";
}

int main()
{
    Triad t1{ 1, 2, 3 };
    print(t1);

    Triad t2{ 1.2, 3.4, 5.6 };
    print(t2);

    return 0;
}