/*
������ʽջ�ṹ����д�㷨����void Dto16(unsigned int m)ʵ��ʮ�����޷�������m��ʮ����������ת�����ܡ�
*/
/**********************************/
/*�ļ����ƣ�lab4_02.c                 */
/**********************************/
#include "linkstack.h"
/*�뽫���������������������в���*/
void Dto16(unsigned int m)
{
    linkstack s;
    s=init();
    printf("ʮ������%u��Ӧ��ʮ���������ǣ�",m);
    char *p="0123456789abcdef";
    while (m)
    {
        s=push(s,p[m%16]);
        m/=16;
    }
    while (!empty(s))
    {
        putchar((char)read(s));
        s=pop(s);
    }
    printf("\n");
}


int main()
{
    unsigned int m;
    printf("�������ת����ʮ��������\n");
    scanf("%u",&m);
    Dto16(m);
    return 0;
}

