#include <stdio.h>
int main(){
	int a,b;
	a=10;
	b=15;
	printf("a= %d, b=%d\n",a,b);
	temp=b;
	b=a;
	a=temp;
	printf("a= %d, b=%d\n",a,b);

	return 0;
}