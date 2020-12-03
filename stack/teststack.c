#include "stack.c"

int main(){
	LinkStack *s =InitStack();int x;
	printf("请输入任意一个不为负数的十进制数: ");
	int n;
	scanf("%d",&n);
		printf("%d的二进制数为: ",n);
		Conversion(n,2);
		printf("%d的八进制数为: ",n);
		Conversion(n,8);
		printf("%d的十六进制数为: ",n);
		Conversion(n,16);
	
}
