/*�ַ�ջ�Ľṹ���弰�����ʵ��*/
#define seqstacksize  100      /*ջ�����ռ��С*/
typedef char datatype;
typedef struct stack {
    datatype  data[seqstacksize] ;  /*����data���ڴ洢ջ����*/
    int  top;                       /*ջ��ָʾ*/
}seqstack;

void initstack(seqstack *s)         /*ջ��ʼ��*/
{ s->top=-1;
}

int stackempty (seqstack *s)        /*��ջ��*/
{ return s->top==-1;
}
int stackfull(seqstack *s)          /*��ջ��*/
{return s->top==seqstacksize-1;
}
/*��ջ*/
void push(seqstack *s, datatype x)
  { s->data[++s->top]=x;
  }
/*��ջ*/
datatype pop(seqstack *s)
{ return s->data[s->top--];
}
/*ȡջ��Ԫ*/
datatype stacktop(seqstack *s)
{ return s->data[s->top];
}
