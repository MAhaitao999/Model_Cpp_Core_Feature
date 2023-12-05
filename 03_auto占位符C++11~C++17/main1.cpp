#include <iostream>

auto sum(int a1, int a2) {
    return a1 + a2;
}

int main(int argc, char *argv[]) {
    auto res = sum(99, 100);
	printf("res is: %d\n", res);
	return 0;
}
