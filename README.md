# BASIC CALCULATIONS
 Task for C
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

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double fixed_costs = 2000;
double selling_price = 25;
double variable_cost = 15;
double break_even_units = fixed_costs / (selling_price - variable_cost);
printf("The break even units are %.2lf", break_even_units);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double total_sales = 60000;
double days = 30;
double average_sales = total_sales / days;
printf("The average sales are %.2lf", average_sales);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double sales_volume = 50000;
double commission_rate = 0.05;
double commission = sales_volume * commission_rate;
printf("The commission are %.2lf", commission);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double asset_cost = 5000;
double residual_value = 0.05;
double useful_life = 5;
double depreciation = (asset_cost - residual_value) / useful_life;
printf("The depreciation are %.2lf", depreciation);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double hourly_wage = 30;
double hours_per_week = 40;
double weeks_per_year = 52;
double annual_salary = hourly_wage * hours_per_week * weeks_per_year;
printf("The annual salary are %.2lf", annual_salary);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double customer1 = 200;
double customer2 = 500;
double customer3 = 300;
double total_revenue = customer1 + customer2 + customer3;
printf("The total revenue are %.2lf", total_revenue);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

double loan_principal = 20000;
double annual_rate = 0.06;
double term = 5;
double installment = (loan_principal * (annual_rate / 12) * pow(1 + (annual_rate / 12), 12 * term)) /
                         (pow(1 + (annual_rate / 12), 12 * term) - 1);
printf("The installment are %.2lf", installment);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

double total_revenue = 12000;
double total_cost = 8000;
double gross_profit = total_revenue - total_cost;
printf("The gross profit are %.2lf", gross_profit);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double base_price = 50;
double tip_rate = 0.15;
double tax_rate = 0.08;
double total_cost = base_price + (tip_rate * base_price) + (tax_rate * base_price);
printf("The total cost are %.2lf", total_cost);
return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main(){

double cost_price = 100;
double profit_margin = 0.25;
double selling_price = cost_price + (profit_margin * cost_price);
printf("The selling price are %.2lf", selling_price);
return 0;
}*/
