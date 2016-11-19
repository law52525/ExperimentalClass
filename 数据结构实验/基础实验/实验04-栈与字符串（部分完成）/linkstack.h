#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef int datatype;
typedef struct node
{
        datatype data;
        struct node *next;
}linknode;

typedef linknode * linkstack;
/**********************************/
/*�������ƣ�init()		 		*/
/*�������ܣ���ʼ����ջ             */
/**********************************/
linkstack init()
{
     return NULL;
}
/**********************************/
/*�������ƣ�empty()		 	       */
/*�������ܣ��ж�ջ�Ƿ�Ϊ��        */
/**********************************/
int empty(linkstack  top)
{
     return top?0:1;
}
/**********************************/
/*�������ƣ�read()	 			     */
/*�������ܣ���ջ��Ԫ                    */
/**********************************/
datatype read(linkstack top)
{
    if (empty(top))
        {
            printf("\nջ�Ŀյģ���n");exit(1);
        }
    else
        return top->data;
}
/**********************************/
/*�������ƣ�push()	 			     */
/*�������ܣ���ջ                        */
/**********************************/
linkstack push(linkstack top,datatype x)
{
    linkstack p;
    p=(linkstack)malloc(sizeof(linknode));
    p->data=x;

    p->next=top;
    top=p;
    return top;
}
/**********************************/
/*�������ƣ�pop()	 			     */
/*�������ܣ���ջ                        */
/**********************************/
linkstack  pop(linkstack top)
{
     linkstack p;
    if (empty(top))
        {
            printf("\n˳��ջ�ǿյ�!\n");
            exit(1);
        }
    p=top;
    top=top->next;
    free(p);
    return top;
}
