#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)
void change(char pStr1[], char pStr2[], char pStr3[]);

int main()
{
   char str1[31] = ""; // 문자열 최대길이 30
   char str2[11] = ""; // 찾을 문자열 10자 이내
   char str3[31] = ""; // 바꿀 문자열 10자 이내

   gets_s(str1);
   gets_s(str2);
   gets_s(str3);

   change(str1, str2, str3);

   printf("%s\n", str1);

   return 0;
}

void change(char pStr1[], char pStr2[], char pStr3[])
{
   int i;

   for (i = 0; i < strlen(pStr1); i++) {
      if (memcmp(pStr1 + i, pStr2, strlen(pStr2)) == 0) {
         strcat(pStr3, pStr1 + i + strlen(pStr2)); // 남은 문자열 복사
         strcpy(pStr1 + i, pStr3);
      }
   }
}