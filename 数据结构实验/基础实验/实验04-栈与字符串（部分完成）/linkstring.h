#include <stdlib.h>
#include <stdio.h>
typedef char datatype;
typedef struct node
{   datatype data;
    struct node *next;
}linknode;
typedef linknode *linkstring;
/**********************************/
/*�������ƣ�creat() 			      */
/*�������ܣ�β�巨�����ַ�������         */
/**********************************/
linkstring creat()
{   linkstring head,r,s;
    datatype x;
    head=r=(linkstring)malloc(sizeof(linknode));
    head->next=NULL;
    printf("������һ���ַ������Իس�������:\n");
    scanf("%c",&x);
    while (x!='\n')
    {    s=(linkstring)malloc(sizeof(linknode));
         s->data=x;
         r->next=s;
         r=s;
         scanf("%c",&x);
   }
     r->next=NULL;
    return head;
}
/**********************************/
/*�������ƣ�print() 			      */
/*�������ܣ�����ַ���                   */
/**********************************/
void print(linkstring head)
{   linkstring p;
    p=head->next;
    printf("List is:\n");
    while(p)
    {   printf("%c",p->data);
        p=p->next;
    }
    printf("\n");
}

/*�ͷŵ����������*/
void delList(linkstring head)
{
  linkstring p=head;
  while (p)
  {
    head=p->next;
    free(p);
    p=head;
  }
}
