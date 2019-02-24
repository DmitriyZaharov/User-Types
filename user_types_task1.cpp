/*
 * Задача 1.
Реализовать класс Employee. Объявление в файле employee.h, реализация в employee.cpp.
Класс должен содержать приватные поля для хранения:

    имени
    фамилии
    пола
    возраста
    категории (число от 0).

Пол сотрудника можно хранить в строковых константах "male"/"female" или завести для этого enum class.
Класс должен иметь один констуктор, который принимает 5 параметров (имя, фамилия, пол, возраст, категория), для инициализации полей класса должен использоваться список инициализации.
Реализовать методы класса:

    promote - увеличивает значение поля "категория" на 1
    demote - уменьшает значение поля "категория" на 1
    printInfo - выводит всю информацию о работнике в удобном для чтения формате
*/

#include <iostream>
#include <employee.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
 int w;
 vector<Employee> umichWorks;
 cout << "Введите количество работников" << endl;
 cin >> w;

for (int i=0; i<w; i++)
 {
  string name, surname;
  cout << "Введите имя" << endl;
  cin >> name;
  cout << "Введите фамилию" << endl;
  cin >> surname;

  string gender;
  while(1)
 {
   cout << "Введите пол сотрудника в виде ""male"" или ""female""" << endl;
   cin >> gender;
   if (gender == "male") break;
   else if (gender == "female") break;
  }

 int age = 0;
 cout << "Введите возраст" << endl;
 cin >> age;

 int category;
 while(1)
  {
    cout << "Введите категорию (от 0 и более)" << endl;
    cin >> category;
    if ( category >= 0) break;
  }
  umichWorks.push_back(Employee(name,surname,gender,age,category));
}

cout << endl << "Welcome to umichWorks! Here are our loyal employees: " << endl;
    for( auto employee:  umichWorks)
    {
        employee.printInfo();
    }

    cout<<endl<<"За достижения первый из работников был повышен, остальные понижены"<<endl;
    for (int i = 0; i < w; i++)
    {
       if(i==0){umichWorks[0].promote();
    }
       else
       {
          int luser = umichWorks[i].get_cat();
          if (luser > 0) umichWorks[i].demote();}
       }

    // Повысьте категорию одному из работников и понизьте всем остальным

    cout << "Here is the new info for the employees of umichWorks: " << endl;
    for( auto employee:  umichWorks)
    {
        employee.printInfo();
    }
    return 0;
}
