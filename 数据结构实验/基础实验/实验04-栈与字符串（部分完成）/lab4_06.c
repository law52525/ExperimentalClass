/*
�ַ������ô�ͷ��������洢����д����linkstring index(linkstring s, linkstring t)��
�����Ӵ�t������s�е�һ�γ��ֵ�λ�ã���ƥ�䲻�ɹ����򷵻�NULL��
*/

#include "linkstring.h"
/*�뽫���������������������в���*/
linkstring index(linkstring  s, linkstring t)
{

}
int main()
{   linkstring s,t,p=NULL;
    s=creat();                  /*������������*/
    t=creat();			        /*�����Ӵ�����*/
    print(s);
    print(t);
    p=index(s,t);
    if(p)
            printf("ƥ��ɹ����״�ƥ��ɹ���λ�ý��ֵΪ%c\n",p->data);
    else
            printf("ƥ�䲻�ɹ���\n");
    delList(s);
    delList(t);
    return 0;
}
