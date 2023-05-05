#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;

	assert(dest != NULL);			//断言
	assert(src != NULL);

	//把src指向的字符串，拷贝到dest指向的字符串中，包括字符\0
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