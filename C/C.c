#include <stdio.h>

int main(){
    int i,n,w,p[15],p_index=1,before,b=0,s=0,dump;
    scanf("%d %d",&n,&w);
    scanf("%d",&p[0]);
    before = p[0];
    for(i=1; i<n; i++){
      scanf("%d",&p[p_index]);
      if(before != p[p_index]){
        p_index++;
      }
    }

    for(i=0; i<p_index-1; i++){
        if(i==0 && p[i]<p[i+1]){
            b=w/p[i]; w-= b*p[i]; s=1;
        }
        else if(s==0 && p[i]<p[i+1]){
            b=w/p[i]; w-= b*p[i]; s=1;
        }
        else if(s==1 && p[i]>p[i+1]){
            w+= b*p[i]; b=0; s=0;
        }
    }
    w+= b*p[i]; b=0; s=0;
    printf("%d",w);
}
