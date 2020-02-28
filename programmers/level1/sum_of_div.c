/*
 * About
 *
 * Author: eunzzangu@GitHub (emilyp7370@gmail.com)
 * Date  : 2020-02-28
 * URL   : https://programmers.co.kr/learn/courses/30/lessons/12928
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 1;
    
    while(i <= n)
    {
        if(n % i == 0)
            answer += i;
        i++;
    }
    
    return answer;
}
