// 做判断
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int h1 = 0;
    int h2 = 0;
    int m1 = 0;
    int m2 = 0;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    int resulth = h2 - h1;
    int resultm = m2 - m1; 
    if ( resultm < 0 ) {
        resultm += 60;
        --resulth;
        printf("%d\n",resulth);
    }
    printf("时间差:%dh %dm\n", resulth, resultm);
    return 0;
}
