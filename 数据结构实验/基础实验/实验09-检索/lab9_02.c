/*  ����creatLink()������data1.txt�ж��벻ͬ��ģ�����ݴ��벻��ͷ���ĵ�����
��д���ڵ������˳������㷨������������Ϊ1��5��10��20��
30��40���50��ʱ�����ݲ�ѯʱ�䡣
*/

#include "slnklist.h"
#define N 100          /*������*/
/*�뽫���������������������в���*/
linklist  seqsearch(linklist  head, int key)
{
    linklist p=head->next;
    while (p && p->info!=key)
        p=p->next;
    return p;
}

int main()
{
    linklist head,pos;
    int x;
    head= creatLink("data1.txt",N); /*��data1.txt�ļ��ж���ǰN���������ͷ���ĵ�����head*/
    print(head);                    /*�����������ǳ���ʱ����ѡ��ע�ͱ���*/
    printf("������Ҫ���ҵ�������");
    scanf("%d",&x);
    pos=seqsearch(head,x);
    if (pos==NULL)
        printf("����ʧ�ܣ�\n");
    else
        printf("���ҳɹ���%d\n",pos->info);
    delList(head);
}
