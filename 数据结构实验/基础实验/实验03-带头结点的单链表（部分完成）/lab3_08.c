/*
���дһ���㷨����void partion(linklist head)��
����ͷ���ĵ�����head�е�����ֵΪ�����Ľ�����
�������ǰ�棬����ֵΪż���Ľ�����������ĺ��档
*/

/**********************************/
/*�ļ����ƣ�lab3_08.c             */
/**********************************/
#include "slnklist.h"
/*�뽫���������������������в���*/
void partion(linklist head)
{

}
int main()
{        linklist head;
         head=creatbyqueue();           /*β�巨������ͷ���ĵ�����*/
         print(head);                   /*���������head*/
         partion(head);
         print(head);
         delList(head);
         return 0;
}
