#include <iostream>
#include <employee.h>
#include <vector>
#include <string>

using namespace std;

int Employee::promote()
{
   Employee::category++;
   return Employee::category;
}

int Employee::demote()
{
   Employee::category--;
   return Employee::category;
}

int Employee::get_cat()
{
   return category;
}

void Employee::printInfo()
{
 std::cout << "Имя: " << Employee::name << "; ";
 std::cout << "Фамилия: " << Employee::surname <<"; ";
 std::cout << "Пол: " << Employee::gender << "; ";
 std::cout << "Возраст: " << Employee::age << "; ";
 std::cout << "Категория: "  << Employee::category << "." << std::endl;
}

