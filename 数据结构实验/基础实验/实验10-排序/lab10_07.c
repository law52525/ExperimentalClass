/*
����ƿ��������㷨����void quickSort(int a[],int low,int right)����a[low]..a[right]������������
�������ڲ�ͬ���ݹ�ģ�µ�����Ч�ʡ�
*/
#include "Arrayio.h"
#define N 10000     /*NΪ��������С����data1.txt��ֻ��50����������������趨Nֵʱ����N<=500000*/

/*�뽫���������������������в���*/
void quickSort(int a[],int low,int right )
{

}

int  main()
{
  int a[N+1],n;                     /*���ݴ洢��a[1]...a[N]��*/
  printf("���ݳ�ʼ��...\n");
  n=readData(a,N,"data1.txt");      /*��data1.txt�ж���N��������������a��nΪʵ�ʶ�������ݸ���*/
  printf("%d������������...\n",n);
  quickSort(a,1,n);
  saveData(a,n,"out.txt");          /*�����������out.txt�ļ���*/
  printf("���������������������out.txt�ļ��С�\n");
  return 0;
}
