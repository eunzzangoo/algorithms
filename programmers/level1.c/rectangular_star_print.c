/*
 * About
 *
 * Author: eunzzangu@GitHub (emilyp7370@gmail.com)
 * Date  : 2020-02-28
 * URL   : https://programmers.co.kr/learn/courses/30/lessons/12969
 *
 */

#include <stdio.h>

void star_print(int a, int b)
{
    int temp;
    
    while(b)
    {
        temp = 0;
        while(temp < a)
        {
            printf("*");
            temp++;
        }
        printf("\n");
        b--;
    }
    return ;
}

int main(void) {
    int a;
    int b;
    
    scanf("%d %d", &a, &b);
    star_print(a, b);
    return 0;
}
