/***
 * 2022-02-17
 * 编写一个程序，从标准输入读取一些字符，并把它们写到标准输出中。
 * 它同时应该计算checksum（校验和）值，并写在字符的后面。
 *
 * cheaksum用一个singed char类型的变量进行计算，它初始为-1。
 * 每当一个字符从标准输入读取时，它的值就被加到checksum中。
 * 如果checksum变量产生列溢出，这些溢出就会被忽略。
 * 当所有的字符均被写入后，程序以十进制整数的形式打印出checksum的值，
 * 它可能是负值。注意，在checksum后面要添加一个换行符。
 *
 * 在使用ASCII码的计算机中，在包含“Hello World!”这几个词并以换行符结尾的文件上
 * 运行这个程序应该产生下列输出：
 * Hello world!
 * 102
 */

#include <stdio.h>
#include <string.h>

// void cal_checksum(signed char *num);

int main(void)
{
    char ch[256];                // 用于存放输入的字符
    unsigned char checksum = -1; // 用于存放校验和
    int i;

    // 初始化数组
    memset(ch, 0, sizeof(ch));

    printf("Please input string : \n");
    fgets(ch, sizeof(ch), stdin); // 要使用标准输入

    // gets(ch); // 不能使用gets，不然换行符不在数组中
    // int len = strlen(ch);
    // printf("len  = %d\n", len);
    // ch[len] = '\n';

    for (i = 0; ch[i] != '\0'; i++)
    {
        checksum += ch[i];
    }

    printf("%s%d\n", ch, checksum);

    return 0;
}