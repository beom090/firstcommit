#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main()
{
    int n = 987;
    int result = solution(n);
    printf("%d", result);
}

int solution(int n) {
    int answer = 0;
    int sum = 0;
    while (1)
    {
        if (n == 0)
        {
            return sum;
        }
        //바꾸자 코드를 바꿨따
        sum += n % 10;
        n = n / 10;
    }
}