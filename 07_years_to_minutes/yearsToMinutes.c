#include <stdio.h>

int main() {

int age_ = 18;
int minutes_in_hour = 60;
int hours_in_day = 24; 
int days_in_year = 365;

int minutes_in_year = 0;

puts("Enter your age in years.");

scanf("%d", &age_);

minutes_in_year = age_ * 365 * 24 * 60;
printf("%d years in %d minutes. ", age_, minutes_in_year);

return 0;
}