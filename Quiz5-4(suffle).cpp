#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
문제: 중복되지 않는 로또 추첨기를 만들어라!
*/

int main(void)
{
	int balls[45];
	
	const int LEN = sizeof(balls) / sizeof(balls[0]);
	int temp; //??
	int n;
	srand((unsigned)time(NULL)); //시드 랜덤으로 실행할 때 마다 값을 다르게 해줌
	
	for(int i = 0; i < LEN; i++)
	{
		balls[i] = i + 1; //1~45로 초기화 시켜줌(배열 초기화)
	}
	
	for(int i = 0; i < LEN; i++)
	{
		n = rand() % LEN; //0~44의 임의의 수를 가질 수 있도록 해줌
		
	
		/*뒤썪어 주는 셔플 구현*/
		temp = balls[i];
		balls[i] = balls[n];
		balls[n] = temp;
		
	}
	
	
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", balls[i]);
	}
	
	
	
	
	return 0;
}