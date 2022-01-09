//Володин Алексей Николаевич     	группа РПО  ПСТ ВБУ011

#include<iostream>
#include<string>

using namespace std;

class Car
{
private:
    int year;
    string make;
    int speed = 0;
    double fuel = 20.0;

public:
    void setYear(int);
    void setMake(string);
    void setSpeed(int);
    void setFuel(int);
    int getYear();
    string getMake();
    int getSpeed();
    int getFuel();
    void accelerate();
    void brake();


};
void Car::setYear(int y)
{
    year = y;
}
int Car::getYear() {
    return year;
}

void Car::setMake(string m)
{
    make = m;
}
string Car::getMake() {
    return make;
}

void Car::setSpeed(int spd)
{
    speed = spd;
}
int Car::getSpeed() {
    return speed;
}

void Car::setFuel(int fue)
{
    fuel = fue;
}
int Car::getFuel() {
    return fuel;
}

void Car::accelerate()
{
    speed += 10;
    fuel -= 0.3;
}

void Car::brake()
{
    if (speed > 10)
    {
        speed -= 10;
        fuel -= 0.3;
    }
    else speed = 0;
}


int main()
{
    setlocale(LC_ALL, "ru");

    Car myCar;
    int bYear = 0;
    string bMake;
    cout << "Введите год автомобиля: ";
    cin >> bYear;
    cout << "Введите марку автомобиля: ";
    cin >> bMake;

    myCar.setYear(bYear);
    cout << "Вы ввели год автомобиля как " << myCar.getYear() << endl;
    myCar.setMake(bMake);
    cout << "Вы ввели марку автомобиля как " << myCar.getMake() << endl;
    int i = 0;
    for (; i < 6; ++i)
    {
        myCar.accelerate();
        cout << "Ускорение." << "Текущая скорость автомобиля: " << myCar.getSpeed() << ". " << "Текущий объём топлива: " << myCar.getFuel() << endl;
      


    }
    {
        int j = 0;
        for (; j < 6; ++j)
        {
            myCar.brake();
            cout << "Замедление." << "Текущая скорость автомобиля равна: " << myCar.getSpeed() << ". " << "Текущий объём топлива: " << myCar.getFuel() << endl;
            

        }



    }
}