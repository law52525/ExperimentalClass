/**************************************/
/*         �����������õ�ͷ�ļ�       */
/*          �ļ�����bstree.h          */
/**************************************/
#include<stdio.h>
#include<stdlib.h>
typedef struct node1            /*������������㶨��*/
 {
  int key;                      /*���ֵ*/
  struct node1 *lchild,*rchild; /*���Һ���ָ��*/
  }bsnode;
typedef bsnode *bstree;

/*---�����������������----*/
void inorder(bstree t)
  { if (t) {    inorder(t->lchild);
                printf("%8d",t->key);
                inorder(t->rchild);
             }

   }
