#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
문제: 중복되지 않는 로또 추첨기를 만들어라!
*/

int main(void)
{
    int balls[9];
    int picked[9] = {0}; // 이미 뽑힌 번호를 기록하는 배열
    
    const int LEN = sizeof(balls) / sizeof(balls[0]);
    int temp;
    int n;
    srand((unsigned)time(NULL));
    
    for(int i = 0; i < LEN; i++)
    {
        balls[i] = i + 1;
    }
    
    for(int i = 0; i < LEN; i++)
    {
        do {
            n = rand() % LEN; // 0부터 8 사이의 난수 생성
        } while (picked[n] == 1); // 이미 뽑힌 번호인 경우 다시 뽑기
        
        picked[n] = 1; // 뽑은 번호를 기록
        
        // 뒤섞기
        temp = balls[i];
        balls[i] = balls[n];
        balls[n] = temp;
    }
    
    // 로또 번호 출력
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", balls[i]);
    }
    
    return 0;
}
