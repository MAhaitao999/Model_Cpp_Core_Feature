#include <iostream>
#include <cassert>

int main(int argc, char *argv[]) {

    auto l = [](auto a1, auto a2) {
	    return a1 + a2;
	};

	auto retval = l(5, 5.0);
	std::cout << retval << std::endl;

	auto ll = [](int &i)->auto& { return i; };
	auto x1 = 5;
	auto &x2 = ll(x1);
	assert(&x1 == &x2);
    return 0;
}
