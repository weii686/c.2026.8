#include <stdio.h>

int main()
{
//取值范围
   int area=99;
   int birth=10;
//输入值
   int N=0;
//计数变量
   int first=0,i=0,j=0,k=0;
//保留值
   int second=0,save=0,a=0,b=0;
//判断值
   int check=0,f=1;

   scanf("%d",&N);
//计算范围
   for(i=2;i<N;i++){
      birth*=10;
      area+=9*birth;
      //printf("birth1=%d,area1=%d\n",birth,area);
   }
//试数
   for(first=birth;first<=area;first++){
      second=first;
      save=first;
      a=birth;
      //printf("first2=%d,second2=%d,save2=%d,a2=%d\n",first,second,save,a);
      for(j=1;j<=N;j++){
         b=a;
         second/=b;
         //printf("first3=%d,second3=%d,save3=%d,a3=%d,j=%d\n",first,second,save,a,j);
         f=1;
         for(k=1;k<=N;k++){
            f*=second;
            //printf("first3=%d,second3=%d,save3=%d,a3=%d,j3=%d,f3=%d,k3=%d\n",first,second,save,a,j,f,k);
         }
         check+=f;
         second=first;
         second%=a;
         a/=10;
         //printf("first4=%d,second4=%d,save4=%d,a4=%d,j4=%d,f4=%d,k4=%d,check4=%d\n",first,second,save,a,j,f,k,check);
      }
      if(save==check){
         printf("%d\n",save);
      }
   check=0;
   }

   return 0;
}

