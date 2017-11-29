#include <string.h>

int main(void)
{
	int n, i;
	char **A;
	char memo[100];
	int n2;
	
	
	printf("문자열의 개수: ");
	scanf("%d", &n);

	// Allocate dynamic memory here
	if((A=(char**)malloc(n*sizeof(char*)))!=NULL)
	{
		for(i=0;i<n;i++)
		{
			A[i]=(char*)malloc(100*sizeof(char));
		}
	}
	
	/*
	for (i=0;i<n;i++)
		sprintf(A[i] ,"%d", i);
	*/
	fflush(stdin);

	for (i=0;i<n;i++)
	{
		gets(memo);
		strcpy(A[i],memo);
		printf("%d \n", i);
	}


	for (i=0;i<n;i++)
		printf("%s \n", A[i]);
	
	for (i=0;i<n;i++)
		free(A[i]);
	
	
	free(A);
	
	return 0;
}