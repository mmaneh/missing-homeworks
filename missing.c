#include <stdio.h>
#include <stdlib.h>
#define n 2
typedef struct {
	int day;
	int month;
	int year;
}Date;

int countday (Date * date) {
        return date->year * 365 + date->month * 30 + date->day;

}


int dateDiff(Date *date1, Date* date2) {
	int day1 = countday(date1);
	int day2 = countday(date2);
	return abs(day1 - day2);
}


int main() {
	Date date[n];

	for(int i = 0; i < n; ++i) {
		printf("the day: ");
                scanf("%d", &date[i].day);

		printf("the month: ");
                scanf("%d", &date[i].month);

		printf("the year: ");
                scanf("%d", &date[i].year);

	}
	int diff = dateDiff(&date[0], &date[1]);
	printf("%d", diff);
}

