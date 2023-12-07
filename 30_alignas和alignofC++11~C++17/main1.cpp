#include <iostream>

#define ALIGNOF(type, result)   \
    struct type##_alignof_trick \
    {                           \
        char c;                 \
        type member;            \
    };                          \
    result = offsetof(type##_alignof_trick, member)

int main(int argc, char *argv[])
{
    int x1 = 0;
    ALIGNOF(int, x1);

    return 0;
}