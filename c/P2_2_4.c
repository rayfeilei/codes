// P2.2.4复合赋值和递增递减
#include <stdio.h>
int main(int argc, char const *argv[])
{   
    /*
    复合运算符
        注意⚠️复合运算符之间不能有空格
        +=
        -=
        *=
        /=
        %=
        a *= 5 ==> a = a * 5
        先算右边的再算左边
        a *= 6+sum ==> a = a*(6+sum)
    递增递减运算符  作用：让变量+1或-1
        算子必须是一个变量
        “++”
        “--”
        ++a的值:+1后a的值
        a++的值：a原来的值 ==>a未+1的值
        可以放在变量前后，尽量紧挨着变量
        a++和++a打印的结果不同，但是运行完后都会给a+1
        但是--a和a--相同
    */
    // 验证a++和++q
    int a = 6;
    printf("a++=%d\n", a++);
    printf("%d\n", a);
    printf("++a=%d\n", ++a);
    printf("a=%d\n", a);

    // 复合赋值
    int total;
    printf("%d\n", total);
    total = total + 5;
    printf("%d\n", total);
    total += 5;
    printf("%d\n", total);
    total++;
    printf("%d\n", total);
    total--;
    printf("%d\n", total);
    return 0;
}
