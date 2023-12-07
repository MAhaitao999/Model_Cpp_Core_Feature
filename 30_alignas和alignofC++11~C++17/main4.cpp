#include <iostream>

int main(int argc, char *argv[]) {
    short x3;
    __attribute__((aligned(8))) short x4;
    std::cout << "x3 = " << __alignof__(x3) << std::endl;
    std::cout << "x4 = " << __alignof__(x4) << std::endl;

    return 0;
}