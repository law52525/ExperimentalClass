/*
��дһ�������þ����ܿ�ķ������ش�ͷ��㵥�����е�����k�����ĵ�ַ����������ڣ��򷵻�NULL��
*/
/**********************************/
/*�ļ����ƣ�lab3_09.c             */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
linklist   search(linklist head,int k)
{

}
int main()
{
     int k;
     linklist head,p;
     head=creatbyqueue();        /*β�巨������ͷ���ĵ�����*/
     print(head);                  /*���������head*/
     printf("k=");
     scanf("%d",&k);
     p=search(head,k);
     if (p) printf("%d\n",p->info);
     else
         printf("Not Found!\n");
     delList(head);
     return 0;
}
