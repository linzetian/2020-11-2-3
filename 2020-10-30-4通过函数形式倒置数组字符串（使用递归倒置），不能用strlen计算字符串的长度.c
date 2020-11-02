//通过函数形式倒置数组字符串（使用递归倒置），不能用strlen计算字符串的长度
#include<stdio.h>
//#include<string.h>
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
void reserve(char arr[])//或者用char* arr//用递归调用函数
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len-1] ;
	arr[len - 1] = '\0';
	if (my_strlen(arr+1) >= 2)
		reserve(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";//倒置fedcba
	reserve(arr);
	printf("%s\n", arr);//arr里面的内容打印出来
	return 0;
}