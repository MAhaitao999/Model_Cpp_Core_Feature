#include <iostream>

template <class T>
struct alignof_trick
{
    char c;
    T member;
};

#define ALIGNOF(type) offsetof(alignof_trick<type>, member);

int main(int argc, char *argv[])
{
    auto x1 = ALIGNOF(int);
    auto x2 = ALIGNOF(void(*)());

    return 0;
}