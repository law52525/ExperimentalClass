/*
    ͼ�����ڽӱ�洢�ṹ����̶�ͼ����������ȱ�����
*/

#include "ljb.h"
int visited[M];
/*�뽫���������������������в���*/

void dfs(LinkedGraph g,int i)
{   /*�Ӷ���i��ʼ������ȱ���ͼ����ͨ����*/
    EdgeNode *p;
  	printf("visit vertex: %c \n",g.adjlist[i].vertex);/*���ʶ���i*/
  	visited[i]=1;
  	p=g.adjlist[i].FirstEdge;
  	while (p)                 /*��p���ڽӵ�������������������*/
    {

    }
}
/*�������ܣ�������ȱ���ͼ
  ����������ͼ���ڽӱ�g
*/
void DfsTraverse(LinkedGraph g)
{  int i;
   for (i=0;i<g.n;i++)
       visited[i]=0;     /*��ʼ����־����*/
   for (i=0;i<g.n;i++)
       if (!visited[i])  /*viδ���ʹ�*/
            dfs(g,i);
 }

int main()
{ LinkedGraph g;
  creat(&g,"g11.txt",0);  			/*����ͼ���ڽӱ�*/
  printf("\n The graph is:\n");
  print(g);
  printf("������ȱ�������Ϊ��\n");
  DfsTraverse(g);    				/*�Ӷ���0��ʼ������ȱ���ͼ����ͼg*/
}
