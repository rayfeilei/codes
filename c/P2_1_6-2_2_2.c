#include <stdio.h>
int main(int argc, char const *argv[])
{
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
    // P2.2.2运算符优先级
    // C里面和我们的日常运算顺序一样，所以要加（ ）
    // C先算优先级更高的，见运算优先级.png
    // C还能写负数如 -a,-6
    // a=b=6==>a=(b=6) 赋值运算是自右向左结合
    return 0;
}
