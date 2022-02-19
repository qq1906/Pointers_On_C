/***
 * 2022-02-18
 * 调用increment和negate函数
*/

#include <stdio.h>
#include "increment.h"
#include "negate.h"

int main(void)
{
    int num;

    printf("Please input a num: ");
    scanf("%d", &num);

    printf("increment = %d\n", increment(num));
    printf("negat = %d\n", negat(num));

    return 0;
}