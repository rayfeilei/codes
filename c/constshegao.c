#include <stdio.h>
// P2.1.6
int main(int argc, char const *argv[])
{   
    int cdf;
    printf("%d\n", &cdf);
    int inch = 0;
    int foot = 0;
    printf("请输入尺、寸：例如：5尺7寸为5 7");
    // scanf("%d %d", &foot, &inch);
    // 换算数据单位
    int a = 4605;
    printf("%f\n", (a/1024));
    // printf("%d",)
    return 0;
}
