/*#include <stdio.h>


int main(){
int Quantity = 2000;
int UnitPrice = 1500;
int TotalCost = Quantity * UnitPrice;
printf("The total cost of items is %d", TotalCost);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
int HourlyWage = 2500;
int HoursWorked = 16000;
int MonthlySalary = HourlyWage * HoursWorked;
printf("The monthly salary of an employee is %d", MonthlySalary);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
int GrossSalary = 5000;
double TaxRate = 0.1;
double NetSalary = GrossSalary - (TaxRate * GrossSalary);
printf("The net salary of an employee is %.2lf", NetSalary);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){
int Price1 = 3000;
int Quantity1 = 100;
int Price2 = 4500;
int Quantity2 = 150;
int Price3 = 6000;
int Quantity3 = 200;
int TotalRevenue = (Price1 * Quantity1) + (Price2 * Quantity2) + (Price3 * Quantity3);
printf("The total revenue is %d", TotalRevenue);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double SellingPrice = 250;
double CostPrice = 200;
double ProfitLossPercentage = ((SellingPrice - CostPrice) / CostPrice) * 100;
printf("The Profit loss percentage for the item is %.2lf", ProfitLossPercentage);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

int original_amount = 1200;
int discount_rate = 0.2;
int final_amount = original_amount - (discount_rate * original_amount);
printf("The final amount is %d", final_amount);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>


int main(){

double principal = 10000;
double rate = 0.05;
double time = 3;
double simple_interest = (principal * rate * time) / 100;
printf("The simple interest is %.2lf", simple_interest);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

double principal = 8000;
double rate = 0.04;
double time = 2;
int n = 4;
double compound_interest = principal * pow((1 + (rate / n)),(n * time)) - principal;
printf("The compound interest is %.2lf", compound_interest);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double VAT_rate = 0.18;
double base_price = 150;
double final_price = base_price + (VAT_rate * base_price);
printf("The final price is %.2lf", final_price);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double VAT_rate = 0.18;
double original_price = 200;
double discount_rate = 0.1;
double discounted_price = original_price - (discount_rate * original_price);
double final_price = discounted_price + (VAT_rate * discounted_price);
printf("The final price is %.2lf", final_price);
return 0;
}*/


