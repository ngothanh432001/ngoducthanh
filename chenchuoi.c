#include<stdio.h>
int main(){
	char str1[100];
	gets(str1);
	char str2[100];
	gets(str2);
	int p;
	scanf("%d",&p);
	int n;
	for(n=0;str2[n]!='\0';n++);
	int i;
	int j;
	for(i=p-1,j=0;i<p+n+1,str2[j]!='\0';i++,j++){
		str1[i+n+3]=str1[i];
		str1[i]=str2[j];
	}
//	str1[i+n]='\0';
	printf("%s",str1);
	
}
hey this is for tutorlari purose
