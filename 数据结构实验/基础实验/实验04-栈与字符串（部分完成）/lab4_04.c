/*
��֪�ַ������ô�������ʽ�洢�ṹ�����linksrting.h�ļ�����
���д����linkstring substring(linkstring s,int i,int len)��
���ַ���s�дӵ�i��λ����ȡ����Ϊlen���Ӵ������������Ӵ�����
*/

#include "linkstring.h"
/*�뽫���������������������в���*/
linkstring substring(linkstring  s, int i, int len)
{

}
int main()
{   linkstring str1,str2;
    str1=creat();                  /*���ַ�������*/
    print(str1);
    str2=substring(str1,3,5);    /*���ԣ��ӵ�3��λ�ÿ�ʼȡ����Ϊ5���Ӵ�,�����й��첻ͬ��������*/
    print(str2);                   /*����Ӵ�*/
    delList(str1);
    delList(str2);
    return 0;
}
