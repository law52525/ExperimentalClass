/**********************************/
/*�ļ����ƣ�lab3_02.c                 */
/**********************************/
/*
�������Ա�a1,a2,a3,��an�����ô�ͷ���ĵ�����洢��������㷨����linklist reverse(linklist  head)��
����ͷ���ĵ�����head�͵ص��ã�ʹ���ɣ�an,an-1,��a3.a2,a1��������������������в��ԡ�
*/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist reverse(linklist head)
{
    node *now=head->next,*tmp;
    head->next=NULL;
    while(now){
        tmp=now->next;
        now->next=head->next;
        head->next=now;
        now=tmp;
    }
    return head;
}
int main()
{
    datatype x;
    linklist head;
    head=creatbyqueue();			/*ͷ���뷨������ͷ���ĵ�����*/
    print(head);					/*���ԭ����*/
    head= reverse(head);			/*���õ�����*/
    print(head);					/*������ú������*/
    delList(head);
    return 0;
}
