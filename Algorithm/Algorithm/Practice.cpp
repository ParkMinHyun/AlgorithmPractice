#include<stdio.h>

#pragma warning(disable: 4996)

int main(void)
{
	int mon, day, daySum = 0;

	char days[7][4] = { "SUN", "MON","TUE","WED","THU", "FRI", "SAT" };
	char monDate[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	scanf("%d %d", &mon, &day);

	for (int i = 1; i < mon; i++)
		daySum += monDate[i - 1];

	daySum += day;

	printf("%s\n", days[daySum % 7]);
}