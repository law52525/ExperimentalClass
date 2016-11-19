/**********************************/
/*�ļ����ƣ�lab2_02.c                 */
/**********************************/
/*
�������Ա�a1,a2,a3,��an�����ò���ͷ���ĵ�����洢��
������㷨����linklist reverse1(linklist  head)��
void reverse2(linklist *head)������ͷ���ĵ�����head�͵ص��ã�
ʹ���ɣ�an,an-1,��a3.a2,a1��������������������в��ԡ�
*/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist reverse1(linklist head)
{
    node *pre,*p,*r;    //pΪ��ǰָ�룬preΪǰ��ָ�룬rΪ����ָ��
    p = head;
    r = p->next;
    p->next=NULL;
    while(r) {
        pre=p;
        p=r;
        r=r->next;
        p->next=pre;
    }
    return p;
}
void reverse2(linklist *head)
{
    node L;
    L.next = NULL;
    node *now=(*head),*tmp;
    while(now){
        tmp=now->next;
        now->next=L.next;
        L.next=now;
        now=tmp;
    }
    (*head)=L.next;
}

int main()
{
    datatype x;
    linklist head;
    head=creatbyqueue();		/*ͷ���뷨����������*/
    print(head);				/*���ԭ����*/
    head= reverse1(head);		/*���õ�����*/
    print(head);				/*������ú������*/
    reverse2(&head);			/*���õ�����*/
    print(head);
    delList(head);
    getchar();
    return 0;
}
