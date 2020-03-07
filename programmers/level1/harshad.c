/*
 * About
 *
 * Author: eunzzangoo@GitHub (emilyp7370@gmail.com)
 * Date  : 2020-03-08
 * URL   : https://programmers.co.kr/learn/courses/30/lessons/12947
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int xcopy = x;
    int sum = 0;

    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    if (xcopy % sum == 0)
        answer = true;
    else
        answer = false;

    return answer;
}
