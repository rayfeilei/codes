// 关系运算
// 关系运算只有2个结果0,1
// 当关系远算成立时为1,不成立为0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%d\n", 5 <= 3);
    printf("%d\n", 5 != 3);
    // 算术优先级比关系高↓
    printf("%d\n", 7 >= 5 + 3);
    // 关系优先级比赋值运算高↓
    int m = 5 >= 3;
    printf("%d\n", m);
    // ==和!=比其他关系运算优先级低
    printf("%d\n", 6 > 5 == 6 > 7);
    printf("%d\n", 6 != 7 > 0);
    // 连续的优先级是从左到右的
    int c = 6 == 6 == 2;
    //       先是6 == 6 为1，1!=2为0==>c = 0
    printf("%d\n", c);
    return 0;
}
