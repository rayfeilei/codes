// 找零计算器
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int money = 0;
    int custom = 0;
    int change = 0;
    printf("请输入顾客的钱：");
    scanf("%d", &money);
    printf("\n");
    // 输入后按回车就换行了，不需要再换行
    printf("请输入商品金额：");
    scanf("%d", &custom);
    change = money - custom;
    if ( change < 0 ) {
        printf("您的余额不足\n");
    }
    else {
        printf("找零:%d元\n",change);
    }
    return 0;
}
