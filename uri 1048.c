#include <stdio.h>
int main(){
	int percent;
	float salary,increase;
scanf("%f",&salary);
if(salary >=0 && salary <=400.00){
	increase = salary* 0.15;
	percent = 15;}
if(salary >= 800.01 && salary <=1200.00){
	increase = salary*0.10;
	percent = 10;}
if(salary >=1200.01 && salary <= 2.000){
	increase = salary*0.7;
	percent = 7;}
if(salary >= 2.00){
		increase = salary *0.4;
		percent=4;}
printf("Novo salario: %.2f\n",salary + increase);
printf("Reajuste ganho: %.2f\n",increase);
printf("Em percentual: %d%%\n",percent);
}
