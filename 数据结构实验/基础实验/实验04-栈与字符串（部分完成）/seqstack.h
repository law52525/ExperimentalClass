#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef int datatype;
typedef struct
{       datatype  a[MAXSIZE];
        int top;
}seqstack;
/**********************************/
/*�������ƣ�init()		 		*/
/*�������ܣ���ʼ����ջ             */
/**********************************/
void init(seqstack *st)
{
    st->top=0;
}
/**********************************/
/*�������ƣ�empty()		 	       */
/*�������ܣ��ж�ջ�Ƿ�Ϊ��        */
/**********************************/
int empty(seqstack *st)
{
    return st->top?0:1;
}
/**********************************/
/*�������ƣ�read()	 			     */
/*�������ܣ���ջ��Ԫ                    */
/**********************************/
datatype read(seqstack *st)
{   if (empty(st))
        {  printf("\nջ�Ŀյģ�\n");exit(1);
        }
    else
        return st->a[st->top-1];
}
/**********************************/
/*�������ƣ�push()	 			     */
/*�������ܣ���ջ                        */
/**********************************/
void push(seqstack *st,datatype x)
{   if (st->top==MAXSIZE)
    {
        printf("ջ�����޷���ջ��\n");
        exit(1);
    }
    st->a[st->top]=x;
    st->top++;
}
/**********************************/
/*�������ƣ�pop()	 			     */
/*�������ܣ���ջ                        */
/**********************************/
datatype  pop(seqstack *st)
{   if (st->top==0)
        {   printf("\n˳��ջ�ǿյ�!\n");
            exit(1);
        }
    return st->a[--st->top];
}
