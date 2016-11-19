/*
���дһ���㷨����partion(sequence_list *L)�������ܿ�ؽ�˳���L�е��������������������ߣ�
����ż������������ұߣ��������㷨��ʱ�临�Ӷȡ�
*/
/**********************************/
/*�ļ����ƣ�lab1_05.c                 */
/**********************************/
#include "sequlist.h"
/*�뽫���������������������в���*/
void partion(sequence_list *L) {
    int i=0,j=L->sz-1;
    int ken=L->a[i];
    while (i < j) {
        // ����������С��x��������s[i]
        while(i < j && L->a[j]%2 == 0)
            j--;
        if(i < j) {
            L->a[i] = L->a[j]; //��s[j]�s[i]�У�s[j]���γ���һ���µĿ�
            i++;
        }

        // ���������Ҵ��ڻ����x��������s[j]
        while(i < j && L->a[i]%2 != 0)
            i++;
        if(i < j) {
            L->a[j] = L->a[i]; //��s[i]�s[j]�У�s[i]���γ���һ���µĿ�
            j--;
        }
    }
    //�˳�ʱ��i����j����x�������С�
    L->a[i] = ken;

}

int main()
{
  sequence_list L;
  inputfromfile(&L,"3.txt");
  print(&L);  						/*�����L*/
  partion(&L);
  print(&L);  						/*����±�*/
  getchar();
  return 0;
}
