/*
����ƻ�������Ļ���������void radixSort(linklist head)���Դ�ͷ�������ͷǸ������������������
�������ڲ�ͬ���ݹ�ģ�µ�����Ч�ʡ�(ע�������е��������Ϊ500000)
*/
#include "slnklist.h"
struct  node2
{
    linklist front,rear;
};
#define N 1000     /*NΪ��������С����data1.txt��ֻ��50����������������趨Nֵʱ����N<=500000*/

/*�뽫���������������������в���*/

void radixSort(linklist head)
{
    struct node2 q[10];/*����*/

}
int  main()
{
  linklist head;
  printf("���ݳ�ʼ��...\n");
  head=creatLink("data1.txt",N);      /*��data1.txt�ж���N��������������a��nΪʵ�ʶ�������ݸ���*/
  printf("����������...\n");
  radixSort(head);
  writetofile(head,"out.txt");        /*������������out.txt��*/
  delList(head);
  return 0;
}
