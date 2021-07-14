#include <iostream>

class Person
{
public:
    std::string name;
    int age;
    int sex;
    int weight;
    void changeName(){std::cin<< name;}
    void changeAge(){std::cin<< age;}
    void changeWeight(){std::cin<< weight;}
 
    Person(std::string name, int age, int sex, int weight);
};
 
class Student : public Person
{
public:
	int agestuding;
	void changeagestuding(){std::cin<< agestuding;}
	void plusas(int i){agestuding+=i;}
};
 

