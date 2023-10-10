#include <stdio.h>
#include "function.h" //함수의 내용을 저자아하는 헤더파일

void clean(long long *result)
{
	for(int i=0;i<10;i++)//0~9까지 10개의 수에 대해
		result[i]=0; //결과를 모두 0으로 초기화
	return;
}

void print_result(long long *result)
{
	for(int i=0;i<10;i++)//0~9까지 10개의 수에 대해
		printf("%lld ",result[i]); //결과를 하나씩 출력
	printf("\n"); //마지막에 줄바꿈 출력
}


