#include <stdio.h>
#include <stdlib.h>


int main(){
	int i,n;
	char *p_n;


	scanf("%d",&n);
	p_n=(char *)malloc(n*sizeof(char));

	for(i=-1;i<n;i++){
		scanf("%c",p_n+i);
	}

	for(i=n-1;i>=0;i--){
		printf("%c",p_n[i]);
	}

	return 0;
}

//LAALALALLAALLA
// LAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

