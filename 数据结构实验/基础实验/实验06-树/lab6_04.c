/*
����������ָ�뷽ʽ�ĺ��ӱ�ʾ����ʾ���Ա�дһ������int equal(tree t1, tree t2)��
�ж����ø��������Ƿ�ȼۣ��������ȼ۵��ҽ����������ֵ��������Ӧ���������໥�ȼۣ���
*/
#include "tree.h"
#define TRUE  1
#define FALSE 0

int equal(tree t1,tree t2)
{

}

int main ()
{
	tree t1,t2;
    printf("please input the preorder sequence of the tree:\n");
	t1=createtree();
	getchar();
	printf("please input the preorder sequence of the tree:\n");
	t2=createtree();
    if ( equal(t1,t2) == TRUE)
	{
		printf ("�������\n");
	}
	else
	{
		printf ("���������\n");
	}

	return 0;
}
