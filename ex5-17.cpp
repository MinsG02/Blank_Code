#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

int main(void)
{
    char Word[LEN + 1]; // 널 문자('\0')를 고려하여 길이를 1 늘림
    int len = 0; // 문자의 개수를 헤아림
    srand((unsigned)time(NULL));
    
    printf("%d 이하의 단어를 입력해주세요> ", LEN);
    scanf("%s", Word); // 여러 개의 줄바꿈 문자를 제거해야 함
    
    printf("입력한 단어 > %s\n", Word);
    
    for(int j = 0; j < 10; j++)
	{
		        len = 0; // 문자의 개수를 초기화
        
        while (Word[len]) { // 문자열의 끝이 보일때까지 반복
            len++; // 문자 개수를 저장
        }

        int temp = 0;
        for (int i = 0; i < len; i++) { // 문자의 개수 만큼 반복
            int n = rand() % len; // len의 문자의 개수에서 무작위로 뽑아냄
            
            temp = Word[0];
            Word[0] = Word[n]; // 무작위로 뽑은 문자 저장
            Word[n] = temp;
        }
        
        printf("셔플된 단어 > %s\n", Word);
	}

    return 0;
}
