/*
 * About
 *
 * Author: eunzzangu@GitHub (emilyp7370@gmail.com)
 * Date  : 2020-02-28
 * URL   : https://programmers.co.kr/learn/courses/30/lessons/12912
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    if (a == b)
        return a;
    
    if (a < b)
    {
        while (b - (a - 1))
            answer += a++;   
    }
    else
    {
        while (a - (b - 1))
            answer += b++;
    }
    
    return answer;
}
