/*
��֪���Ա�洢�ڴ�ͷ���ĵ�����head�У�������㷨����void sort(linklist head)����head�еĽ�㰴���ֵ�������С�
*/
/**********************************/
/*�ļ����ƣ�lab3_05.c                 */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void  sort(linklist head)
{

}
int main()
{       
         linklist head;
         head=creatbyqueue();   		/*β�巨������ͷ���ĵ�����*/
         print(head);    			    /*���������head*/
         sort(head);     				/*����*/
         print(head);
         delList(head);
         return 0;
}
