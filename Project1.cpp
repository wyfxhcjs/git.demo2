#include<stdio.h>

int main() {

	int a = 10;//4个字节
	int* p = &a;//取地址
	printf("%p\n", &a);//打印地址
	printf("%p\n", p);//打印地址

	return 0;
}