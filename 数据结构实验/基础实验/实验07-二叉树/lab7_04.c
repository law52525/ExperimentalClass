/*
���������������ʽ��ʽ�洢��tΪ�����㣬��дһ������int Depth(bintree t, char x)����ֵΪx�Ľ���ڶ������еĲ�Ρ�
*/
#include "bintree.h"
char *a="ABC##D##EF#G###";  		/*�������������t��ǰ������*/

/*
 	����Depth�����ܣ�����x���ڵĲ��
*/
int Depth(bintree t,char x)
{

}

int main()
{  bintree root;
   char x;
   int k=0;
   root=creatbintree();
   printf("���������е�1�����ֵ��\n");
   scanf("%c",&x);
   k=Depth(root,x);
   printf("%c���Ĳ��Ϊ%d\n",x,k);
}
