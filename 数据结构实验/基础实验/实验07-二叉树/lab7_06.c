/*
�Ա�дһ���ݹ麯��bintree buildBintree(char *pre, char *mid, int length)��
���ݶ�������ǰ������pre����������mid��ǰ�����г���length������������Ķ�������洢�ṹ��
�������ض�������������ַ��
*/

#include "bintree.h"
#include <string.h>
char *a="";
/*�뽫���������������������в���*/
bintree buildBintree(char *pre, char *mid,int length)
{

}
int main()
{   bintree root;
    char pre[100],mid[100];
    puts("������ǰ�����У�");
    gets(pre);
    puts("�������������У�");
    gets(mid);
    root=buildBintree(pre,mid,strlen(pre));
    puts("���������ǣ�");
    postorder(root);
}

