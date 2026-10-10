#include <stdio.h>
int main()
{
    printf("HelloWorld\n")
    ;
    // P1.3.2
    printf("Hello");
    printf("%d\n",12+6) ;
    // %d 说明后面有一个值要输入在这个位置上
    printf("12+6=%d\n",12+6);
    // 数学计算符号：
    // * 乘
    // % 取余
    // P2.1.2算找零
    // int在c语言中是整型变量,如果不给变量值则返回内存地址值
    // 变量在使用前必须声明类型
    // 变量格式：类型名称+变量名;
    int a;
    int dog,cat;
    int money = 100;
    printf("%d\n", dog);
    // P2.1.3读数
    scanf("%d",&cat);
    // %d把读到的值赋值给cat
    // 注意一定要加&
    printf("%d\n", cat);
    // 常量P2.1.5
    const int ME = 100;
    // 常量尽量全部大写
    // P2.1.6
    return 0 ;
}