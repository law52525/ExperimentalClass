/*
����ƹ鲢�����㷨����void mergeSort(int a[],int n)����a[1]..a[n]������������
�������ڲ�ͬ���ݹ�ģ�µ�����Ч�ʡ�
*/
#include "Arrayio.h"
#define N 10000     /*NΪ��������С����data1.txt��ֻ��50����������������趨Nֵʱ����N<=500000*/

/*�뽫���������������������в���*/

void merge(int a[],int u,int m,int v)
{ /*�������a[u..m],a[m+1..v]�鲢��a[u..v]*/

}


/*----һ�˹鲢------*/
 int  mergepass(int a[],int n,int len)
  { /*��a[1..n]���г���Ϊlen��һ�˲���*/


  }

/*----�鲢����------*/
void mergeSort(int a[],int n)
{

}

/*�鲢����ĵݹ�ʵ��*/
void mergeSortdc(int a[],int low,int high)
{

}

int  main()
{
  int a[N+1],n;                     /*���ݴ洢��a[1]...a[N]��*/
  printf("���ݳ�ʼ��...\n");
  n=readData(a,N,"data1.txt");      /*��data1.txt�ж���N��������������a��nΪʵ�ʶ�������ݸ���*/
  printf("%d������������...\n",n);
  mergeSort(a,n);                   /* �����mergeSortdc(a,1,n); */
  saveData(a,n,"out.txt");          /*�����������out.txt�ļ���*/
  printf("���������������������out.txt�ļ��С�\n");
  return 0;
}
