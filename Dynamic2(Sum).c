#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int count, i;
	int value, sum;
	int *darray;
	
	printf("������ ����: ");
	scanf("%d", &count);

	
	// Allocate dynamic memory here.
	darray=(int*)malloc(sizeof(int));

	if( darray == NULL )
	{
		printf("���� �޸� �Ҵ� ����");
		exit(1);
	}
	
	for(i=0;i<count;i++)
	{
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf("%d", &darray[i]);
	}
	
	sum = 0;
	
	for(i=0;i<count;i++)
	{
		sum += darray[i];
	}
	
	printf("���� %d�Դϴ�.\n", sum);
	
	return 0;
}
