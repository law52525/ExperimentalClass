/**********************************/
/*�ļ����ƣ�lab1-01.c             */
/**********************************/
/*����sequlist.h�ж����˳�����д�㷨����reverse(sequence_list *L)��ʵ��˳���ľ͵ص��á�*/
#include "sequlist.h"
/*�뽫���������������������в���*/
void reverse(sequence_list *L)
{
    datatype temp;
    int len = L->sz,i;
    for(i=0;i<len/2;i++){
        temp=L->a[i];
        L->a[i]=L->a[len-i-1];
        L->a[len-i-1]=temp;
    }
}
int main()
{
    sequence_list L;			/*����˳���*/
    input(&L);	        		/*�����������*/
    print(&L);                  /*���ԭ��*/
    reverse(&L);		            /*˳�����*/
    print(&L);                  /*����±�*/
}
