// P2.2.3交换变量
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 6;
    #pragma GCC uninitialized
    int c;
    printf("%d\n",c);
    c = b;
    b = a;
    a = c;
    printf("a=%d,b=%d\n", a, b);
    return 0;
}
