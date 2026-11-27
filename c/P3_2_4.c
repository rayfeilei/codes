// 嵌套的if else   比大小
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 4;
    int b = 6;
    int c = 2;
    if ( a > b ) {
        if ( a > c ) {
            printf("最大的数是a\n");
        } else {
            printf("最大的数是c\n");
        }
    } else {
        if ( b > a ) {
            if ( b > c )
            {
                printf("最大的数是b\n");
            } else {
                printf("最大的是c\n");
            }
        }
    }
    return 0;
}
