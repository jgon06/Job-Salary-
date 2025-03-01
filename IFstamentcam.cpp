#include <iostream>
#include <iomanip>

int main(){

double performance_rate, hours_worked, hourly_wage, check, salary, bonus1, bonus2;
int Years_Of_Service;

std::cout << "Enter hours worked this week: ";
std::cin >> hours_worked;
std::cout << "Enter hourly wage: ";
std::cin >> hourly_wage;
salary = hourly_wage * hours_worked;

std::cout << "Enter years of service: ";
std::cin >> Years_Of_Service;
std::cout << "Enter performance rating (1-5): ";
std::cin >> performance_rate;

// Asking for user input of "Years of service and performance rate"

if (Years_Of_Service >= 5)
// if years of service is greatrer than 5 and 
{
    if (performance_rate >= 4)
    {
        bonus1 = 0.10;
        salary += salary * bonus1;
        check = salary;
        std:: cout << "\nYou get a 10% bonus !!!!\n"; 
        std:: cout << "Your check: " << std::fixed<<std::setprecision(2)<<(check);;
        // if years of service is greatrer than 5 and 
        // and you had a good perfromance rate (4 or better )
    }
    else if ((performance_rate < 4) && (performance_rate >= 3 ))
    {
        salary += salary * 0.05;
        check = salary;
        std::cout << "\nYou get a 5% bonus !\n"; 
        std:: cout << "Your check: " << std::fixed<<std::setprecision(2)<<(check);;

        // if years of service is greatrer than 5 and 
        // and you had a perfromance rate between 4 and 3
    }
    else 
    {
        check = salary;
        std::cout << "\nSorry no bonus\n";
        std:: cout << "Your check:" << std::fixed<<std::setprecision(2)<<(check);;

        // if years of service is greatrer than 5  
        // but your performance was bad (less than 3)
    }

}
else if ((Years_Of_Service < 5) && (performance_rate >= 4))
{
    salary += salary * 0.05;
    check = salary;
    std:: cout << "\nYou get a 5% bonus !!!!\n";
    std:: cout << "Your check:" << std::fixed<<std::setprecision(2)<<(check);;

    // you have less than 5 years of service 
    // and your performance rate is 4 or better 

}
else
{
    check = salary;
    std::cout << "\nSorry no bonus\n";
    std:: cout << "Your check:" << std::fixed<<std::setprecision(2)<<(check);;

    // you have less than 5 years of service 
    // but your performance rate is less than 4 


}

}
