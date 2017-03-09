#include <stdio.h>
#include <time.h>

int main(){

	int age;
	int age_days;

	int count_leap_years;

	int first_years;

	time_t current_time;
	struct tm * time_info;
	time(&current_time);
	time_info = localtime(&current_time);

	printf("Input your age: ");
	scanf("%d", &age);
	
	first_years=time_info->tm_year-age;

	while((first_years-2016) % 4 != 0){
		first_years++;
	}

	count_leap_years = (time_info->tm_year-first_years)/4;

	age_days=count_leap_years * 366 + (age-count_leap_years)*365;

	printf("Your age (days): %d\n", age_days);

	return 0;
}
