/**
 * @file 4.14-4.c
 * @author Power (q1225409583@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-05
 * 
 * @copyright Copyright (c) 2022
 * 
 * 编写 copy_n()函数，原型声明如下
 * void copy_n(char dest[], char src[], int n);
 * 要求如下：
 * 必须正好复制n个字符到dest数组中，不能多也不能少。
 * 如果src字符串的长度小于n，必须在复制后的字符串尾部补充足够的NUL字符，
 * 使它的长度正好为n。如果src的长度长于或等于n，那么在dest数组中存储了n个字符后便可停止。
 * 此时，数组dest将不是以NUL字符结尾。
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 10

void copy_n(char dest[], char src[], int n);
int main()
{
    char dest[LINE_SIZE-1], src[LINE_SIZE];

    printf("请输入原始数据：");
    // fgets(src);
    fgets(src, sizeof(src), stdin);

    copy_n(dest, src, 10);
   
   return 0;
}

void copy_n(char dest[], char src[], int n)
{
    int src_len = strlen(src);
    for(int i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    
    // 如果src字符串的长度小于n，必须在复制后的字符串尾部补充足够的NUL字符，
    if(src_len < n)
    {
        for(int i = src_len; i < n; i++)
        {
            dest[i] = src[i];
        }
    }
}