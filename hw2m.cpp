#include <iostream>

class Fruit
{
public:
    std::string name;
    std::string color;
    std::string getName(){return name;}
    std::string getColor(){return color;}
 
    Fruit(std::string name, std::string color) : name(std::move(name)), color(std::move(color)) {}
};
 
class Banana : public Fruit
{
public:
    Banana(std::string name = "Banana", std::string color = "Yellow") : Fruit(std::move(name), std::move(color)) {}
};
 
class Apple : public Fruit
{
public:
    Apple(std::string name = "Apple", std::string color = "Red") : Fruit(std::move(name), std::move(color)) {}
};
 
class GrannySmith : public Apple
{
public:
    GrannySmith(std::string name = "Granny Smith", std::string color = "Green") : Apple(std::move(name), std::move(color)) {}
};

int main()
{
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}
