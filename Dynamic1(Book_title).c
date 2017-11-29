#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S_SIZE 50

typedef struct NODE {
	char title[S_SIZE];
	int year;
	char memo[S_SIZE];
	struct NODE *link;
} NODE;

int main(void)
{	
	NODE *list = NULL;
	
	NODE *prev, *p, *next;
	NODE *list2=NULL;
	
	char buffer[S_SIZE];
	int year;



	while(1)
	{
		printf("å�� ������ �Է��Ͻÿ�: (�����Ϸ��� ����)");
		gets(buffer);		
		
		if( buffer[0] == '\0' ) 	
			break;
		
		p = (NODE *)malloc(sizeof(NODE));
		
		strcpy(p->title, buffer);
		///////////////////////////////////////////////////////
		printf("å�� ���� ������ �Է��Ͻÿ�: ");
		gets(buffer);
		
		year = atoi(buffer);		
		p->year = year;
		
		///////////////////////////////////////////////////////
		printf("å�� ������ �Է��Ͻÿ�: ");
		gets(buffer);

		strcpy(p->memo,buffer);
		
		
		if( list == NULL ) // ����Ʈ�� ��� ������ 
		{
			list = p;	// ���ο� ��带 ù��° ���� �����.
		}	       
		else// ����Ʈ�� ��� ���� ������
		{
			prev->link = p;	// ���ο� ��带 ���� ����� ����
		}
		
		p->link = NULL;  // ���ο� ����� ��ũ �ʵ带 NULL�� ����
		
		prev = p;
	}
	
	printf("\n");

	// ���� ����Ʈ�� ��� �ִ� ������ ��� ����Ѵ�.
	p = list;
	
	while( p != NULL )
	{
		printf("å�� ����:%s ���� ����:%d ����:%s\n", p->title, p->year,p->memo);
	     p = p->link;
	}

	// ���� �Ҵ��� �ݳ��Ѵ�.	
	p = list;
	
	while( p != NULL )
	{
		next = p->link;
		free(p);
		p = next;
	}



	return 0;
}