#include <stdio.h>

int main(){
	int n;
	printf("Enter number of rows : ");
	scanf("%d", &n);
	
	for(int i=1 ; i<=n ; i++){
		for(int j = i; j>0; j--){
			printf("%c ", 64+j);
		}
		printf("\n");
	}
		
	return 0;
}
