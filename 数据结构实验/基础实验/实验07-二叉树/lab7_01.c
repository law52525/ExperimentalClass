/*

��д�㷨����void preorder1(bintree t)ʵ�ֶ�����t�ķǵݹ�ǰ�������

*/

#include "bintree.h"
char *a="ABC##D#E##F##";  /*�������������t��ǰ������*/

/*����preorder1()�Ĺ����Ƿǵݹ�ǰ�����������t���뽫����������������������*/
void preorder1(bintree t)
{

}
int main()
{   bintree t;
    t=creatbintree();   /*����������t�Ĵ洢�ṹ*/
    printf("��������ǰ������Ϊ��\n");
    preorder1(t);       /*ǰ��ǵݹ����������*/
    return 0;
}
