#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;

	assert(dest != NULL);			//����
	assert(src != NULL);

	//��srcָ����ַ�����������destָ����ַ����У������ַ�\0
	while (*dest++ = *src++)
	{

	}

	return ret;
}

int main()
{
	char arr1[] = "##############";
	char arr2[] = "Hello";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}