/*
 * About
 *
 * Author: eunzzangu@GitHub (emilyp7370@gmail.com)
 * Date  : 2020-02-28
 * URL   : https://programmers.co.kr/learn/courses/30/lessons/12932
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n)
{
    int *answer = (int*)malloc(100);
    int i;

    i = 0;
    while (n)
    {
        answer[i] = n % 10;
        n = n / 10;
        i++;
    }
    return answer;
}
