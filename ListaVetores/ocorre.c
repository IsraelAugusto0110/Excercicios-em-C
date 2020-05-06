#include <stdio.h>
int main(){
    int c, i;
    int ndig[10];
    for(i=0;i<10;i++) ndig[i]=0;
    while ((c=getchar())!= 10) {
          if (c>='0' && c<='9') ++ ndig[c-'0'];
          }
    for(i=0;i<10;++i){
        if(ndig[i] != 0){
            printf("digito:%d :%d ocorrencia\n",i,ndig[i]);
        }
    }
    getchar();
}

