/*
��������ģʽƥ���㷨����ģʽt������s�����г��ֵ�λ�ô洢�ڴ�ͷ���ĵ������С�
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct node
{		int data;
		struct node *next;
}linknode;
typedef linknode *linklist;
/*����ģʽƥ���㷨,����t��s�е�һ�γ��ֵ�λ�ã�û�ҵ��򷵻�-1���뽫���򲹳�����*/
int index(char *s,char *t)
{

}
/*��������ģʽƥ���㷨����ģʽt��s�����г��ֵ�λ�ô洢�ڴ�ͷ���ĵ�������,�뽫������������*/
linklist indexall(char *s,char *t)
{

}
/*�����ͷ���ĵ�����*/
void print(linklist head)
{	linklist p;
	p=head->next;
	while(p)
	{	printf("%5d",p->data);
		p=p->next;
	}
	printf("\n");
}
int main()
{	char s[80],t[80];
	linklist head;
	printf("����������:\n");
	gets(s);
	printf("������ģʽ��:\n");
	gets(t);
	int k=index(s,t);
	printf("k=%d",k);
	head=indexall(s,t);
	printf("\n[ %s ]��[ %s ]�е�λ���У�\n",t,s);
	print(head);
    return 0;
}
