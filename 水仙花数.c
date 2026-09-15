#include <stdio.h>

int main()
{
   int times=0;
   int a=0;
   int max=99;
   int b=10;
   int ans=0;
   int check=0;
   int f=1;
   int g=0;

   scanf("%d",&times);
   do{
      b*=10;
      max+=9*b;
      a++;
   }while(a!=times-2);
   g=b;
//for1枚举答案
   for(ans=g;ans<=max;ans++){
      //printf("ans1=%d,b=%d,max=%d\n",ans,b,max);
      int mid=0,last=0;
      last=ans;
      mid=ans;
      b=g;
//for2整数正序分解
      for(int e=1;e<=times;e++,b/=10){
         ans=mid;
         //printf("ans2=%d,b=%d,e=%d\n",ans,b,e);
         ans/=b;
         //printf("ans3=%d,b=%d,e=%d\n",ans,b,e);
         mid%=b;
         f=1;
         //printf("ans4=%d,mid=%d,last=%d,b=%d,e=%d\n",ans,mid,last,b,e);
//for3右端计算（单个三次方->累加）
         for(int d=1;d<=times;d++){
            f*=ans;
            //printf("ans5=%d,b=%d,d=%d\n",ans,b,d);
            //printf("f=%d\n",f);
         }
         check+=f;
         //printf("check=%d\n",check);
      }    
//if左右端公式核对(for1)
      if(last==check){
         printf("%d\n",last);         
      }
      ans=last;
      check=0;
      //printf("ans6=%d,b=%d\n",ans,b);
   }

  return 0;
}
         