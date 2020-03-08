##  Programmers, Level1, in C

> 최초작성일 : 2020-02-28



#### 1. 약수의 합 (sum_of_div.c)

```c
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
```

1부터 n까지 숫자를 하나씩 올리면서 n으로 나누어 떨어지면 answer에 더했다.



#### 2. 두 정수 사이의 합 (sum_between_two_int.c)

```c
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
```

음수값도 고려해서 if문에서 a, b를 비교했다. 해당하는 곳에서 a, b의 차이만큼 증가시켜주었다.



#### 3. 자연수 뒤집어 배열로 만들기 (reverse_arr.c)

```c
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
```

자연수 n이 100자리수 만큼 안오겠지 하고 100을 한건데, 다른사람 풀이를 보니 *12를 해줬다. 입력받는 값이 10^11이라서 해줬다는데, 생각없는 100.. 또륵; 반성



#### 4. 직사각형 별찍기 (rectangular_star_print.c)

```c
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
```

쉬어가기 별찍기... for문으로 하면 짧아지는데 그냥 while 연습...



#### 5. 하샤드 수 (harshad.c)

```c
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
```

처음에 answer 값이 ture초기화 되어있어서 false일때 값만 고려하려고 if문을 아래와 같이 했는데 오답이 자꾸 뜨길래... 저렇게 하니 됐음... 아래는 왜 안되나용? 어떤 테스트값일때 안될수있는지.. 띠옹 알려줘요.

```c
 if (xcopy % sum != 0)
        answer = false;
```



#### 6. 콜라츠 추측 (collate_guess.c)

```c
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
```

입력된 수가 짝수면 2로 나누고 홀수면 3을 곱하고 1을 더하기 위에 while문 안에 조건을 줬다. num이 1일때 (1*3)+1 = 4 >> 4 / 2 = 2 >> 2 / 2 = 1 이라고 생각해서 1을 리턴한다 생각했는데 질문하기들어가 보니 num이 1일때 return 0이라 해서 위에 조건을 줬음...🧐 알려줘요... 밑에는 다른사람 코드인데 3항연산자 잘 활용한 예를 가져와봄. 메모ㅋ.ㅋ

```c
int solution(int num) 
{
   long long answer = num;

    for(int i=0; i<500; i++)
    {
        if (answer == 1)
            return i;

        answer = (answer % 2 == 0) ? (answer / 2) : (3 * answer + 1); 
    }

   return -1;
}
```



#### 7. 자릿수 더하기 (add_digits.c)

```c
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
```

각 자릿수를 구하기위해 10으로 나눈 나머지값을 이용하여 계속해서 더해줬다. n이 0이 될때까지~