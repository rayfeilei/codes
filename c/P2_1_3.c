// P2.1.3读数
#include <stdio.h>
int main(int argc, char const *argv[])
{
    scanf("%d",&cat);
    // %d把读到的值赋值给cat
    // 注意一定要加&
    printf("%d\n", cat);
    return 0;
}
