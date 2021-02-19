//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>

int main()
{
	char str[10];
	int i,c = 0;
  scanf("%s", str);
	//Write your code here
for(i=0;str[i]!='\0';i++)
{
  if(str[i] == 'a'||
  str[i] == 'e'||
  str[i] == 'i'||
  str[i] == 'o'||
  str[i] == 'u')
  {
    c=c+1;
  }
  
}
printf("%d" , c);
	return 0;
}
