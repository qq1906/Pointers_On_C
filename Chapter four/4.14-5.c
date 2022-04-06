/**
 * @file 4.14-5.c
 * @author Power (q1225409583@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * 编写一个程序，从标准输入一行一行地读取文件，
 * 并完成如下任务：如果文件中有两行或更多行相邻的文本内容相同，
 * 那么就打印出其中一行，其余的行不打印。
 */

#include <stdio.h>
#include <string.h>
#define LINE_SIZE 129

#define TRUE 1
#define FALSE 0

int main()
{
    char input[LINE_SIZE], previous_line[LINE_SIZE];
    int print_from_group = FALSE;

    if(fgets(previous_line, sizeof(previous_line), stdin) != NULL)
    {
        while(fgets(input, sizeof(input), stdin) != NULL)
        {
            if(strcmp(input, previous_line) != 0)
            {
                print_from_group = FALSE;
                strcpy(previous_line, input);
            }
            else if(print_from_group != TRUE)
            {
                print_from_group = TRUE;
                printf("%s\n", input);
            }
        }
    }
   
   return 0;
}
