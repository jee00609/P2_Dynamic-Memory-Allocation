#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int count, i;
	int value, sum;
	int *darray;
	
	printf("정수의 개수: ");
	scanf("%d", &count);

	
	// Allocate dynamic memory here.
	darray=(int*)malloc(count*sizeof(int));

	if( darray == NULL )
	{
		printf("동적 메모리 할당 오류");
		exit(1);
	}
	
	for(i=0;i<count;i++)
	{
		printf("양의 정수를 입력하시오: ");
		scanf("%d", &darray[i]);
	}
	
	sum = 0;
	
	for(i=0;i<count;i++)
	{
		sum += darray[i];
	}
	
	printf("합은 %d입니다.\n", sum);
	
	free(darray);
	
	return 0;
}
