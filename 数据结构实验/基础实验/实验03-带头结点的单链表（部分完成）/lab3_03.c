/*
�����ͷ���ĵ�����head���������еģ�����㷨����linklist insert(linklist head,datatype x)��
��ֵΪx�Ľ����뵽����head�У����������������ԡ�
�ֱ�����뵽��ͷ�����кͱ�β��������Ĳ����������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab3_03.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist insert(linklist head ,datatype x)
{
    node *re = head,*pre=NULL,*New;
    head=head->next;
    while(head&&x>=head->info) {
        pre=head;
        head=head->next;
    }
    New = (node*)malloc(sizeof(node));
    New->info=x;
    if(pre==NULL) {
        New->next=re->next;
        re->next=New;
    } else {
        pre->next=New;
        New->next=head;
    }
    return re;
}
int main()
{   datatype x;
    linklist head;
    printf("����һ���������е�������\n");
    head=creatbyqueue();				/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫ�����ֵ��");
    scanf("%d",&x);
    head=insert(head,x);				/*�������ֵ���뵽��ͷ���ĵ������ʵ�λ��*/
    print(head);
    delList(head);
    return 0;
}
