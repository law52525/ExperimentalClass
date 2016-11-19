#include <stdio.h>
#include <stdlib.h>
/**************************************/
/* ����ʵ�ֵ�ͷ�ļ����ļ���slnklist.h */
/**************************************/
 typedef int datatype;
 typedef struct link_node{
   datatype info;
   struct link_node *next;
 }node;
typedef node *linklist;

/**********************************/
/*�������ƣ�creatbystack() 			 */
/*�������ܣ�ͷ�巨����������            */
/**********************************/
linklist creatbystack()
{  linklist  head,s;
    datatype x;
    head=NULL;
    printf("������������������:\n");
    scanf("%d",&x);
    while (x!=0)		/*��0��������*/
    {   s=(linklist)malloc(sizeof(node));  /*���ɴ�������*/
        s->info=x;
        s->next=head;			/*���½����뵽������ǰ��*/
        head=s;
        scanf("%d",&x);
    }
    return head;				/*���ؽ����ĵ�����*/
}
/**********************************/
/*�������ƣ�creatbyqueue() 			 */
/*�������ܣ�β�巨����������            */
/**********************************/
linklist creatbyqueue()
{
    linklist head,r,s;
    datatype x;
    head=r=NULL;
    printf("������������������:\n");
    scanf("%d",&x);
    while (x!=0) /*��0��������*/
    {    s=(linklist)malloc(sizeof(node));
         s->info=x;
         if (head==NULL)		/*���½����뵽���������*/
            head=s;
         else
            r->next=s;
        r=s;
        scanf("%d",&x);
   }
    if (r)  r->next=NULL;
    return head;					/*���ؽ����ĵ�����*/
}
/**********************************/
/*�������ƣ�print()		 			 */
/*�������ܣ��������ͷ���ĵ�����      */
/**********************************/
void print(linklist head)
{   linklist p;
    int i=0;
    p=head;
    printf("List is:\n");
    while(p)
    {
        printf("%5d",p->info);
        p=p->next;
         i++;
		 if (i%10==0) printf("\n");
    }
    printf("\n");
}
/**********************************/
/*�������ƣ�delList()		 		 */
/*�������ܣ��ͷŲ���ͷ���ĵ�����      */
/**********************************/
void delList(linklist head)
{ linklist p=head;
  while (p)
  { head=p->next;
    free(p);
    p=head;
  }
}

