#include<stdio.h>

int check_leap_year(int year){
	if(year%4==0 || year%100==0 || year%400==0){
		return year=366;
	}else
	return year=365;
}
int main(){
	int year;
	printf("enter year:");
	scanf("%D", &year);
	printf("the year has %d days", check_leap_year(year));
}