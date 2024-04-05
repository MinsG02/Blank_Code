#include <stdio.h>
#include <string.h>



int main(void)
{
	
	int i;
	char arr[] = {"H""e""l""l""o"};
	const int LEN = sizeof(arr) / sizeof(arr[0]);
	
	for(i = 0; arr[i]!='\0'; i++) //센티널을 만날 때까지 i가 계속 증가함
		;
	printf("이건i%d 이건 배열의길이%d\n", i, LEN);
	printf("%s", arr);
	return 0;
}