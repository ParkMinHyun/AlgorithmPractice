#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996);

void reverseString(char* s)
{
	size_t size = strlen(s);
	char temp;

	for (size_t i = 0; i < size / 2; i++)
	{
		temp = s[i];
		s[i] = s[(size - 1) - i];
		s[(size - 1) - i] = temp;
	}
}

int main()
{
	int year = 2000;
	int month = 1;
	int day = 1;
	int hour = 0;
	int min = 0;
	int sec = 0;
	int cnt = 0;
	int input;

	char yearStr[5];
	char monthStr[20];
	char dayStr[20];
	char hourStr[20];
	char minStr[20];
	char secStr[20];
	char output[20];
	char outputReverse[20];
	char t1[2] = "0";
	char tmp[20];

	int num;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {

		scanf("%d", &input);

		while (1)
		{
			sec++;


			if (sec == 60)
			{
				sec = 0;
				min++;
			}

			if (min == 60)
			{
				min = 0;
				hour++;
			}

			if (hour == 24)
			{
				hour = 0;
				day++;
			}

			if (day == 30 && month == 2 && year % 4 == 0 && year % 400 == 0)
			{
				day = 1;
				month++;
			}
			else if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
			{
				day = 1;
				month++;
			}
			else if (day == 32 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
			{
				day = 1;
				month++;
			}
			else if (day == 29 && month == 2 && year % 100 == 0 && year % 400 != 0)
			{
				day = 1;
				month++;
			}


			if (month == 13)
			{
				year++;
				month = 1;
			}

			snprintf(yearStr, sizeof(yearStr), "%d", year);
			if (sec < 10)
			{
				if (yearStr[0] != secStr[0] || yearStr[1] != '0')
					continue;

				tmp[0] = '\0';
				strcpy(tmp, t1);
				strcat(tmp, secStr);
				strcpy(secStr, tmp);
			}

			if (yearStr[0] != secStr[1] || yearStr[1] != secStr[0])
				continue;

			snprintf(minStr, sizeof(minStr), "%d", min);
			if (min < 10)
			{
				if (yearStr[2] != minStr[0] || yearStr[3] != '0')
					continue;
				tmp[0] = '\0';
				strcpy(tmp, t1);
				strcat(tmp, minStr);
				strcpy(minStr, tmp);
			}
			if (yearStr[2] != minStr[1] || yearStr[3] != minStr[0])
				continue;

			//2000-11-11 11:00:02

			snprintf(monthStr, sizeof(monthStr), "%d", month);
			snprintf(hourStr, sizeof(hourStr), "%d", hour);
			if (month < 10)
			{
				tmp[0] = '\0';
				strcpy(tmp, t1);
				strcat(tmp, monthStr);
				strcpy(monthStr, tmp);
			}

			if (hour < 10)
			{
				tmp[0] = '\0';
				strcpy(tmp, t1);
				strcat(tmp, hourStr);
				strcpy(hourStr, tmp);
			}
			if (monthStr[0] != hourStr[1] || monthStr[1] != hourStr[0])
				continue;



			snprintf(dayStr, sizeof(dayStr), "%d", day);


			if (day < 10)
			{
				tmp[0] = '\0';
				strcpy(tmp, t1);
				strcat(tmp, dayStr);
				strcpy(dayStr, tmp);
			}

			sprintf(output, "%s%s%s%s%s%s", yearStr, monthStr, dayStr, hourStr, minStr, secStr);
			strcpy(outputReverse, output);
			reverseString(outputReverse);

			if (strcmp(outputReverse, output) == 0)
			{
				cnt++;

				if (cnt == input)
				{
					printf("%s-%s-%s %s:%s:%s\n", yearStr, monthStr, dayStr, hourStr, minStr, secStr);
					break;
				}
			}
		}
	}
}