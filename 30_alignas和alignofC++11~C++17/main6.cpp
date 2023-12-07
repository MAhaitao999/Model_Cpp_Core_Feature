#include <iostream>

int main(int argc, char *argv[])
{
    for (int i = 0; i < 1000; ++i)
    {
        alignas(64) int a = 100;
        auto addr = reinterpret_cast<std::uintptr_t>(&a);
        std::cout << addr % 64 << std::endl;
    }

    return 0;
}