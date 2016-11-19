/*
�����ɸѡ����void sift(int a[],int k,int n)����a[k] ����ɸѡ��
����������ƶ������㷨����void heapSort(int a[],int n)��
��a[1]..a[n]�����������򡣲������ڲ�ͬ���ݹ�ģ�µ�����Ч�ʡ������lab10_05.c��
*/
#include "Arrayio.h"
#define N 10000     /*NΪ��������С����data1.txt��ֻ��50����������������趨Nֵʱ����N<=500000*/

/*�뽫���������������������в���*/
void sift(int a[],int k,int n)
{
      int i,j,finished;
      i=k;j=2*i;
      a[0]=a[k];
      finished=0;
      while((j<=n)&&(!finished))
      {
        if((j<n)&&(a[j+1]>a[j]))
             j++;
        if(a[0]>=a[j])
             finished=1;
        else
        {
          a[i]=a[j];
          i=j;j=2*j;
        }
      }
      a[i]=a[0];
    }

void heapSort(int a[],int n)
{
    int i;
    for (i=n/2;i>=1;i--)
        sift(a,i,n);
    for (i=n;i>1;i--)
        {
            a[0]=a[i];
            a[i]=a[1];
            a[1]=a[0];
            sift(a,1,i-1);
        }
}

int  main()
{
  int a[N+1],n;                     /*���ݴ洢��a[1]...a[N]��*/
  printf("���ݳ�ʼ��...\n");
  n=readData(a,N,"data1.txt");      /*��data1.txt�ж���N��������������a��nΪʵ�ʶ�������ݸ���*/
  printf("%d������������...\n",n);
  heapSort(a,n);
  saveData(a,n,"out.txt");          /*�����������out.txt�ļ���*/
  printf("���������������������out.txt�ļ��С�\n");
  return 0;
}
