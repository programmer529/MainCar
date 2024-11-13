#include "Car.h"

int Car::NumberObject{ 0 };

std::string Car::GetBrand() const
{
    return Brand_Name;
}
void Car::SetBrand(std::string p)
{
    Brand_Name = p;
}
int Car::GetCylinders() const
{
    return Number_cylinders;
}
void Car::SetCylinders(int p)
{
    Number_cylinders = p;
}
int Car::GetPower() const
{
    return Power;
}
void Car::SetPower(int p)
{
    Power = p;
}

int Lorry::GetCapacity() const
{
    return Load_capacity;
}
void Lorry::SetCapacity(int p)
{
    Load_capacity = p;
}

std::ostream& operator << (std::ostream& output, const Car& car) //вывод
{
    output << "Brand name: " << car.Brand_Name
        << "\nNumber cilinders: " << car.Number_cylinders
        << "\nPower: " << car.Power;

    return output;
}
std::istream& operator >> (std::istream& input, Car& car) //ввод
{
    std::cout << "enter the trademark: ";
    input >> car.Brand_Name;
    std::cout << "enter the number of cylinders: ";
    input >> car.Number_cylinders;
    std::cout << "Enter the power: ";
    input >> car.Power;

    return input;
}

std::ostream& operator << (std::ostream& output, const Lorry& lorry)
{
    output << "Brand name: " << lorry.Brand_Name
        << "\nNumber cilinders: " << lorry.Number_cylinders
        << "\nPower: " << lorry.Power
        << "\nLoad capacity: " << lorry.Load_capacity;
    return output;
}
std::istream& operator >> (std::istream& input, Lorry& lorry)
{
    std::cout << "enter the trademark: ";
    input >> lorry.Brand_Name;
    std::cout << "enter the number of cylinders: ";
    input >> lorry.Number_cylinders;
    std::cout << "Enter the power: ";
    input >> lorry.Power;
    std::cout << "Enter load capacity: ";
    input >> lorry.Load_capacity;

    return input;
}

int count(Car object)
{
    return object.NumberObject;
}