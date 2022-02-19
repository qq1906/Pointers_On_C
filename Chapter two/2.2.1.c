/***
 * 2022-02-18
 * 编译：gcc -trigraphs  2.2.1.c
 * 结果：Delete file (are you really sure]:
 * ??) 是三元符
 */

#include <stdio.h>

int main(void)
{
    // printf("Delete file (are you really sure??): \a");
    // printf("\"Blunder?\?!??\"");
    // printf("\40");    // 空格
    // printf("\100");   // @
    // printf("\x100");  // 啥都没
    // printf("\0123");  // 3
    // printf("\x0123"); // #

    // int x/*blah blah*/y;

    return 0;
}