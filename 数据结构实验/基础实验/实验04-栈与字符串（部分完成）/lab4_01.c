/*
����˳��ջ�ṹ����д�㷨����void Dto16(unsigned int m)ʵ��ʮ�����޷�������m��ʮ����������ת�����ܡ�
*/
/**********************************/
/*�ļ����ƣ�lab4_01.c                 */
/**********************************/
#include "seqstack.h"
/*�뽫���������������������в���*/
void Dto16(int m)
{   seqstack s;			/*����˳��ջ*/
    init(&s);
    printf("ʮ������%u��Ӧ��ʮ���������ǣ�",m);
    char *p="0123456789abcdef";
    while (m)
    {
        push(&s,p[m%16]);
        m/=16;
    }
    while (!empty(&s))
        putchar(pop(&s));
    printf("\n");
}
int main()
{    int m;
     printf("�������ת����ʮ��������\n");
     scanf("%u",&m);
     Dto16(m);
     return 0;
}
