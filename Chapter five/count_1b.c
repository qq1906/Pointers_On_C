/**
 * @file count_1b.c
 * @author Power (q1225409583@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * 程序5.2
 */

#include <stdio.h>

/**
 * @brief 
 * 这个函数返回参数值中值为1的个数
 * 
 * @param value 
 * @return int 
 */
int count_one_bits(unsigned value)
{
    int ones;

    // 当这个值还有一些值为1的位时
    for(ones = 0; value != 0; value >>= 1)
    {
        // 如果最低位的值为1，计数增1
        if((value & 1) != 0)
        {
            ones++;
        }
    }

    return ones;
}

int main()
{
   printf("4 中一个有 %d 个 1 \n", count_one_bits(4));
   return 0;
}
