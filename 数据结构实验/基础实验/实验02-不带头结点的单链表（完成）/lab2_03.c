/*
���費��ͷ���ĵ�����head���������еģ�����㷨����linklist insert(linklist head,datatype x)��
��ֵΪx�Ľ����뵽����head�У����������������ԡ�
�ֱ�����뵽��ͷ�����кͱ�β��������Ĳ����������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab2_03.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist insert(linklist head ,datatype x)
{
    node *re = head,*pre=NULL,*New;
    while(head&&x>=head->info) {
        pre=head;
        head=head->next;
    }
    New = (node*)malloc(sizeof(node));
    New->info=x;
    if(pre==NULL) {
        New->next=re;
        re=New;
    } else {
        pre->next=New;
        New->next=head;
    }
    return re;
}
int main()
{
    datatype x;
    linklist head;
    printf("����һ���������е�������\n");
    head=creatbyqueue();				/*β���뷨����������*/
    print(head);
    printf("������Ҫ�����ֵ��");
    scanf("%d",&x);
    head=insert(head,x);				/*�������ֵ���뵽�������ʵ�λ��*/
    print(head);
    delList(head);
    return 0;
}
