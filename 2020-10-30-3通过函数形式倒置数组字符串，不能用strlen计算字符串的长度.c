//通过函数形式倒置数组字符串，不能用strlen计算字符串的长度
#include<stdio.h>
#include<string.h>
int my_strlen(char str[])//这里可以改为char* str
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;//指针-指针
}
void reserve(char arr[])//或者用char* arr
{
	int left = 0;
	int right = my_strlen(arr) - 1;

	while (left < right)
	{
		int tem = 0;
		tem = arr[left];
		arr[left] = arr[right];
		arr[right] = tem;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";//倒置fedcba
	reserve(arr);
	printf("%s\n",arr);//arr里面的内容打印出来
	return 0;
}