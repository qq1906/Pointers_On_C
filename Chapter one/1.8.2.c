/***
 * 2022-02-17
 * 编写一个程序，从标准输入读取几行输入。
 * 每行输入都要打印到标准输出上，前面要加上行号。
*/

#include <stdio.h>

int main(void)
{
    char input[256];
    int num = 1;

    while(scanf("%s", input) != EOF)
    {
        printf("%d : %s\n", num++, input);
    }

    return 0;
}