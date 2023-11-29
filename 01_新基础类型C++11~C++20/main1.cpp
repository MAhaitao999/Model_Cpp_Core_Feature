#include <iostream>
#include <cstdlib>
#include <climits>
#include <limits>

enum longlong_enum : long long {
    x1,
    x2
};

struct longlong_struct
{
    long long x1 : 8;
    long long x2 : 24;
    long long x3 : 32;
};


int main(int argc, char *argv[]) {

    long long x1 = 65536 << 16;  // 计算得到的x1值为0
    std::cout << "x1 is: " << x1 << std::endl;

    long long x2 = 65536LL << 16;  // 计算得到的x1值为0
    std::cout << "x2 is: " << x2 << std::endl;

    std::cout << sizeof(longlong_enum::x1) << std::endl;
    std::cout << sizeof(longlong_struct) << std::endl;

    // 使用宏方法
    std::cout << "LLONG_MAX = " << LLONG_MAX << std::endl;
    std::cout << "LLONG_MIN = " << LLONG_MIN << std::endl;
    std::cout << "ULLONG_MAX = " << ULLONG_MAX << std::endl;

    // 使用类模板方法
    std::cout << "std::numeric_limits<long long>::max() = "
              << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "std::numeric_limits<long long>::min() = "
              << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "std::numeric_limits<unsigned long long>::min() = "
              << std::numeric_limits<unsigned long long>::max() << std::endl;

    std::printf("LLONG_MAX = %lld\n", LLONG_MAX);
    std::printf("LLONG_MIN = %lld\n", LLONG_MIN);
    std::printf("LLONG_MAX = %llu\n", ULLONG_MAX);
    return 0;
}