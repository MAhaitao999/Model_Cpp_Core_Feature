#include <iostream>

int main(int argc, char *argv[]) {

    auto x3 = __alignof__(int);
    auto x4 = __alignof__(void(*)());

    return 0;
}