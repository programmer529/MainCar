#pragma once
#include <iostream>
#include <string>

class Car //класс автомобиля
{
protected:
    std::string Brand_Name; //торговая марка
    int Number_cylinders; //число цилиндров
    int Power; //мощность

    static int NumberObject; //количество объектов
public:
    Car(std::string BrandName, int NumberCylinders, int PowerP) :
        Brand_Name{ BrandName }, Number_cylinders{ NumberCylinders }, Power{ PowerP } {
        NumberObject++;
    }

    Car() : Car("", 0, 0) { }

    Car(const Car& car) :
        Brand_Name{ car.Brand_Name }, Number_cylinders{ car.Number_cylinders }, Power{ car.Power } {}

    std::string GetBrand() const;
    void SetBrand(std::string p);
    int GetCylinders() const;
    void SetCylinders(int p);
    int GetPower() const;
    void SetPower(int p);

    friend std::ostream& operator << (std::ostream& output, const Car& car);
    friend std::istream& operator >> (std::istream& input, Car& car);

    friend int count(Car object);
};

class Lorry : public Car
{
private:
    int Load_capacity; //грузоподъёмность

public:
    Lorry() : Load_capacity{ 0 } { NumberObject++; }
    Lorry(int Load_CapacitiP) : Load_capacity{ Load_CapacitiP } { NumberObject++; }
    Lorry(const Lorry& lorry) : Load_capacity{ lorry.Load_capacity } {}

    int GetCapacity() const;
    void SetCapacity(int p);
  
    friend std::ostream& operator << (std::ostream& output, const Lorry& lorry);
    friend std::istream& operator >> (std::istream& input, Lorry& lorry);
};
