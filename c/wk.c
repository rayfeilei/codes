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
    // P2.1.5常量
    const int ME = 100;
    // 常量尽量全部大写
    // P2.1.6浮点数:见constshengao.c
    // double:双精度浮点数  float:单精度浮点数--用法类似int
    // 整数输入输出都是%d,浮点数输入是%lf输出是%f
    // P2.2.1表达式
    // 表达式：一系列的计算 表达式包括运算符、算子
    // 算子：参与运算的值
    /*
    计算时间差
    注：%取余取的是余数，比如5%3=2,不是2/3的结果！
    */ 
    int hour1 = 0;
    int min1 = 0;
    int hour2 = 0;
    int min2 = 0;
    scanf("%d %d",&hour1, &min1);
    scanf("%d %d",&hour2, &min2);
    int t1 = hour1*60+min1;
    int t2 = hour2*60+min2;
    int t0 = t2-t1;
    printf("差值是%d小时%d分", t0/60, t0%60);
    return 0 ;
}