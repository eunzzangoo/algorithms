/*
 * About
 *
 * Author: eunzzangu@GitHub (emilyp7370@gmail.com)
 * Date  : 2020-02-28
 * URL   : https://programmers.co.kr/learn/courses/30/lessons/12931
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    while (n)
    {
        answer += n % 10;
        n = n / 10;
    }
    return answer;
}
