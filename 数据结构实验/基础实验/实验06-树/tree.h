#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define m 3
#define MAXLEN 100

typedef char datatype;
typedef struct node {
     datatype data;
     struct node *child[m];
} node;
typedef  node *tree;
/********************************************************/
/*  ��������:��������ǰ������������һ��3����	  	   */
/*  ��������ֵ:������ַ								   */
/*  �ļ���:tree.h,������:createtree ()		            */
/********************************************************/

tree  createtree()
 {/*��ǰ�����˳����һ��3�����ĵݹ��㷨*/

   int i; char ch;
   tree t;
   if ((ch=getchar())=='#')  t=NULL;
   else
      {
            t=(tree) malloc (sizeof(node));
            t->data=ch;
            for (i=0;i<m;++i)
                        t->child[i]= createtree();
            }
      return t;
}

void preorder(tree t)
{
    int i;
    if (t)
        {
            printf("%c",t->data);
            for (i=0;i<m;i++)
                preorder(t->child[i]);
        }
}

void postorder(tree t)
{
    int i;
    if (t)
        {
            for (i=0;i<m;i++)
                postorder(t->child[i]);
            printf("%c",t->data);
        }
}
