#include <stdio.h>

int main(){
    int i,n,w,p[15],b=0,s=0;
    scanf("%d %d",&n,&w);
    for(i=0; i<n; i++){
        scanf("%d",&p[i]);
    }

    for(i=0; i<n-1; i++){
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
