#include<stdio.h>

int main(){
	int n,i=0;
	char x[20];
	scanf("%d",&n);
	
	while(n>0){
		scanf("%s",&x);
		fflush(stdin);
		if(x[0]=='T'){	
		i+=4;
		}else if(x[0]=='C'){
		i+=6;
		}else if(x[0]=='O'){
		i+=8;
		}else if(x[0]=='D'){
		i+=12;
		}else if(x[0]=='I'){
		i+=20;
		}
		
		n--;
	}
	printf("%d",i);
}
