/*
��д�㷨����void levelbintree(bintree t)��ʵ�ֶ������Ĳ�α�����
*/

#include "bintree.h"
char *a="ABC##D#E##F##";  			/*�������������t��ǰ������*/
void levelbintree(bintree t)
{

}
int main()
{   bintree t;
    t=creatbintree();   	/*����������t�Ĵ洢�ṹ*/
    printf("�������Ĳ������Ϊ��\n");
    levelbintree(t);       /*��α���������*/
    return 0;
}
