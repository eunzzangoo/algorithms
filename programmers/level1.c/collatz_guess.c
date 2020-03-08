/*
 * About
 *
 * Author: eunzzangu@GitHub (emilyp7370@gmail.com)
 * Date  : 2020-02-28
 * URL   : https://programmers.co.kr/learn/courses/30/lessons/12943
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    int temp = num;

    if (num == 1)
        return 0;

    while (num > 1){
        if (temp % 2 == 0)
            temp = temp / 2;
        else if (temp % 2 == 1)
            temp = (temp * 3) + 1;
        answer++;
        if (temp == 1)
            return answer;
        if (answer == 500)
            return -1;
    }
}
