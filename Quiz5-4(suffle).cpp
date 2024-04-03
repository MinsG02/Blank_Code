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
	int temp; //??
	int n;
	srand((unsigned)time(NULL)); //시드 랜덤으로 실행할 때 마다 값을 다르게 해줌
	
	for(int i = 0; i < LEN; i++)
	{
		balls[i] = i + 1; //1~9로 초기화 시켜줌(배열 초기화)
	}
	
	for(int i = 0; i < LEN; i++)
	{
		do {
			n = rand() % LEN; // 0부터 8 사이의 난수 생성
		} while (picked[n] == 1); // 이미 뽑힌 번호인 경우 다시 뽑기
        
        picked[n] = 1; // 뽑은 번호를 기록
		
		//n = rand() % LEN; //1~9의 임의의 수를 가질 수 있도록 해줌
		
	
		/*뒤썪어 주는 셔플 구현*/
		temp = balls[i];
		balls[i] = balls[n];
		balls[n] = temp;
		
	}
	
	
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", balls[i]);
	}
	
	
	
	
	return 0;
}