/*����˳���la��lb�ֱ��������������ϣ�����inter(seqlist *la,seqlist *lb,seqlist *lc)
�Ĺ�����ʵ����˳���la��lb�Ľ�����ŵ�˳���lc��,�뽫������������.  */

/**********************************/
/*�ļ����ƣ�lab1_04.c                 */
/**********************************/
#include "sequlist.h"
/*�뽫���������������������в���*/
void  inter(sequence_list *la,sequence_list *lb,sequence_list *lc) {
    int i,j;
    initseqlist(lc);
    for(i=0; i<la->sz; i++)
        for(j=0; j<lb->sz; j++)
            if(la->a[i]==lb->a[j]) {
                lc->a[lc->sz++]=la->a[i];
                break;
            }
}
int main() {
    sequence_list la,lb,lc;
    inputfromfile(&la,"1.txt"); 		/*���ļ�1.txt����˳���*/
    inputfromfile(&lb,"2.txt");		/*���ļ�2.txt����˳���*/
    print(&la); 				 	    /*���la*/
    print(&lb);  				        /*���lb*/
    inter(&la,&lb,&lc);   		    /*��la��lb�Ľ�������lc��*/
    print(&lc); 					    /*���lc*/
    getchar();
    return 0;
}
