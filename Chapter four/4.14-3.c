/**
 * @file 4.14-3.c
 * @author Power (q1225409583@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * 编写一个程序，提示用户输入3个数，分别表示三角形3
 * 条边的长度，然后程序判断它是什么类型的三角形。
 */

#include <stdio.h>

int main()
{
    float a, b, c, tmp;

    printf("请输入3个数：");
    scanf("%f %f %f", &a, &b, &c);

    // 重新排列，使得a最长，c最短
    if(a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a < c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if(b < c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }

    // 判断c是否小于或等于0 和 判断两边之和是否大于第三边
    if(c <= 0 || b + c < a)
    {
        printf("不是三角形\n");
    }
    else if(a == b && b == c) // 等边三角形
    {
        printf("等边三角形\n");
    }
    else if(a == b || b == c) // 等腰三角形
    {
        printf("等腰三角形\n");
    }
    else // 不等边三角形
    {
        printf("不等边三角形\n");
    }

    return 0;
}