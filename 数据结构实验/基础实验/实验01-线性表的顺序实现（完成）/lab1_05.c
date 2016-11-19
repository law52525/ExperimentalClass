/*
请编写一个算法函数partion(sequence_list *L)，尽可能快地将顺序表L中的所有奇数调整到表的左边，
所有偶数调整到表的右边，并分析算法的时间复杂度。
*/
/**********************************/
/*文件名称：lab1_05.c                 */
/**********************************/
#include "sequlist.h"
/*请将本函数补充完整，并进行测试*/
void partion(sequence_list *L) {
    int i=0,j=L->sz-1;
    int ken=L->a[i];
    while (i < j) {
        // 从右向左找小于x的数来填s[i]
        while(i < j && L->a[j]%2 == 0)
            j--;
        if(i < j) {
            L->a[i] = L->a[j]; //将s[j]填到s[i]中，s[j]就形成了一个新的坑
            i++;
        }

        // 从左向右找大于或等于x的数来填s[j]
        while(i < j && L->a[i]%2 != 0)
            i++;
        if(i < j) {
            L->a[j] = L->a[i]; //将s[i]填到s[j]中，s[i]就形成了一个新的坑
            j--;
        }
    }
    //退出时，i等于j。将x填到这个坑中。
    L->a[i] = ken;

}

int main()
{
  sequence_list L;
  inputfromfile(&L,"3.txt");
  print(&L);  						/*输出表L*/
  partion(&L);
  print(&L);  						/*输出新表*/
  getchar();
  return 0;
}
