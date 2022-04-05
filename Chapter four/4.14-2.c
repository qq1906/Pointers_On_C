/**
 * @file 4.14-2.c
 * @author Power (q1225409583@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * 打印1-100之间的所有质数
 */

#include <stdio.h>

int main()
{
    int number;
    int divisor;

    printf("2\n");

    for(number = 3; number < 100; number+=2)
    {
        for(divisor = 3; divisor < number; divisor+=2)
        {
            if(number % divisor == 0)
                break;
        }

        if(divisor >= number)
            printf("%d\n", number);
    }

    return 0;
}