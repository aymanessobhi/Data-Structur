#include<stdlib.h>
#include<stdio.h>

int main(){
	
int t[50],x,n,*p,*pt;
p=t; //p=&t[0];

printf("Entrer la dimension de tableau :");scanf("%d",&n);

printf("Entrer les elements de tableau :\n");
for(;p<t+n;p++){
	scanf("%d",p);
}
int tmp;
for(pt=t+n-1,p=t;p<pt;p++,pt--){
	tmp = *p;
	*p = *pt;
	*pt = tmp;
	
}
 printf("le tableau dans l'ordre inverse:\n");
for(p=t;p<t+n;p++){
	printf(" %d ",*p);
}

}

