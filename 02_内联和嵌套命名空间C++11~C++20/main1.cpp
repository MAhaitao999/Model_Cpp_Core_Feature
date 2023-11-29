#include <iostream>

namespace Parent
{
    namespace V1
    {
        void foo()
        {
            std::cout << "foo v1.0" << std::endl;
        }
    }

    inline namespace V2
    {
        void foo()
        {
            std::cout << "foo v2.0" << std::endl;
        }
    }
}

int main(int argc, char *argv[]) {
    Parent::V1::foo();
    Parent::foo();

    return 0;
}