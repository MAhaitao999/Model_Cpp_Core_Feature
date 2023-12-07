#include <iostream>
#include <cstddef>

int main(int argc, char *argv[]) {
    auto x1 = alignof(int);
    auto x2 = alignof(void(*)());

    int a = 0;
    auto x3 = alignof(a);

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
    std::cout << "x3 = " << x3 << std::endl;

    for (int i = 0; i < 100; ++i) {
        auto *p = new char[i];
        auto addr = reinterpret_cast<std::uintptr_t>(p);
        std::cout << addr % alignof(std::max_align_t) << std::endl;
        delete[] p;
    }
    return 0;
}