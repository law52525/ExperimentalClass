/*
��д�㷨����linklist delallx(linklist head, int x)��ɾ����ͷ��㵥����head������ֵΪx�Ľ�㡣
*/
/**********************************/
/*�ļ����ƣ�lab3_04.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist delallx(linklist head,int x)
{
    node* re=head,*pre=NULL;
    head=head->next;
    while(head) {
        if(pre==NULL&&head->info==x) {       //��һ����Ҫɾ�������
            re->next = head->next;
            head = head->next;
            continue;
        }
        if(pre!=NULL&&head->info==x) {
            pre->next=head->next;
            head=head->next;                //û�ж�pre��ֵ���и��£�pre��ͣ����ԭ����λ�ã������ƶ�
            continue;
        }
        pre=head;                          //û��ɾ����ʱ��������
        head=head->next;
    }
    return re;
}
int main()
{   datatype x;
    linklist head;
    head=creatbyqueue();				/*β���뷨������ͷ���ĵ�����*/
    print(head);
    printf("������Ҫɾ����ֵ��");
    scanf("%d",&x);
    head=delallx(head,x);
    print(head);
    delList(head);
    return 0;
}
