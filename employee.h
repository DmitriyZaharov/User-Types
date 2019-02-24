#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string surname;
    string gender;
    int age;
    int category;
public:
    /*
    Employee(std::string n_name,std::string n_secondName, std::string s_sex,
             int a_age, int a_cathegory) :
            name(n_name),
            secondName(n_secondName),
            sex(s_sex),
            age(a_age),
            cathegory(a_cathegory)
    {

    }
    */

public:
  Employee(std::string s_name, std::string s_surname, std::string s_gender, int i_age, int i_category)
         : name(s_name), surname(s_surname), gender(s_gender), age(i_age), category(i_category) { }


    int promote();

    int demote();

    void printInfo() ;

    int get_cat();

};

#endif // EMPLOYE_H
