/*
�ַ������ô�ͷ��������洢������㷨����void delstring(linkstring s, int i,int len)
���ַ���s��ɾ���ӵ�i��λ�ÿ�ʼ������Ϊlen���Ӵ���
*/
/**********************************/
/*�ļ����ƣ�lab4_05.c                 */
/**********************************/
#include "linkstring.h"
/*�뽫���������������������в���*/
void delstring(linkstring  s, int i, int len)
{

}
int main()
{   linkstring str;
    str=creat();            /*���ַ�������*/
    print(str);
    delstring(str,2,3);     /*���ԣ��ӵ�2��λ��ɾ������Ϊ3���Ӵ�,�����й��첻ͬ�Ĳ�������  */
    print(str);               /*���*/
    delList(str);
    return 0;
}
