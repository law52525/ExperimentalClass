/*
  ��д����ģʽƥ��KMP�㷨���뽫��غ�������������
*/
#define maxsize 100
typedef struct{
      char str[maxsize];
      int length ;
} seqstring;
/*��ģʽp��next[]ֵ���뽫������������*/
void getnext(seqstring p,int next[])
{

}
/*����ģʽƥ���㷨���뽫������������*/
int kmp(seqstring t,seqstring p,int next[])
{

}
int  main()
 {   seqstring t, p;
     int next[maxsize],pos;
     printf("������������\n");
     gets(t.str);
     t.length=strlen(t.str);
     printf("������ģʽ����\n");
     gets(p.str);
     p.length=strlen(p.str);
     getnext(p,next);
     pos=kmp(t,p,next);
     printf("\n");
     printf("%d",pos);
     return 0;
}

