/*��д����slnklist delx(linklist head, datatype x)��ɾ������ͷ��㵥����head�е�һ��ֵΪx �Ľ�㡣
����������������в��ԡ�
*/
/**********************************/
/*�ļ����ƣ�lab2_01.c             */
/**********************************/

#include "slnklist.h"
/*�뽫���������������������в���*/
linklist delx(linklist head,datatype x)
{
    if(head->info==x){
        return head = head->next;
    }
    linklist Next = head->next, Pre = head;
    while(Next){
        if(Next->info==x){
            Pre->next = Next->next;
            break;
        }
        Next = Next->next;
        Pre = Pre->next;
    }
    return head;
}

int main()
{
    datatype x;
    linklist head;
    head=creatbyqueue();		/*β���뷨����������*/
    print(head);
    printf("������Ҫɾ����ֵ��");
    scanf("%d",&x);
    head=delx(head,x);			/*ɾ��������ĵ�һ��ֵΪx�Ľ��*/
    print(head);
    delList(head);				/*�ͷŵ�����ռ�*/
    getchar();
    return 0;
}
