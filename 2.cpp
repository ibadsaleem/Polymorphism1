//Muhammad Ibad Saleem 19K0220 G Lab7-8 Task 2
#include <iostream>
#include <string>
using namespace std;
class Vehicle{
    protected:
    string type;
    string Make;
    string Model;
    string Color;
    int Year;
    float MilesDriven;
};

class GasVehicle: virtual public Vehicle{
    protected:
    int fueltankSize;
};

 class ElectricVehicle: virtual public Vehicle{
    protected:
    int Energystorage;
};

class HeavyVehicle:public GasVehicle,public ElectricVehicle
{
    protected:
    int MaximumWeight;
    int Numofwheels;
    int length;
};

class ConstructionTruck:public HeavyVehicle{
    protected:
    string cargoitem;
};

class Bus:public HeavyVehicle{
    protected:
    int noOfSeats;
    public:
    Bus(){}
    Bus(string a,string b,string c,string d,int e,float f, int g, int h,int i,int j,int k)
    {
        type=a;
        Make=b;
        Model=c;
        Color=d;
        Year=e;
        MilesDriven=f;
        fueltankSize=g;
        MaximumWeight=h;
        Numofwheels=i;
        length=j;
        noOfSeats=k;
    }
    string gettype()
    {
        return type;
    }
    string getmake()
    {
        return Make;
    }
    string getModel()
    {
        return Model;
    }
    string getColor()
    {
        return Color;
    }
    int getYear()
    {
        return Year;
    }
    float getMiles()
    {
        return MilesDriven;
    }
     int getFuel()
    {
        return fueltankSize;
    }
   
    int getweight()
    {
        return MaximumWeight;
    }
    int getNumOfWheels()
    {
        return Numofwheels;
    }
    int getlength()
    {
        return length;
    }
    int getseats()
    {
        return noOfSeats;
    }
    
};


class HighPerformance:public GasVehicle{
    protected:
    int horsepower;
    int topspeed;

};

class Sportscar:public HighPerformance{
    protected:
    char Gearbox;
    string drivesystem;

};

int main()
{
    system("cls");
    Bus B1("Heavy","Toyota","Hilux","White",2005,1100.25,40,1200,4,8,6);
    cout<<"Type: "<<B1.gettype()<<endl;
    cout<<"Make: "<<B1.getmake()<<endl;
    cout<<"Model: "<<B1.getModel()<<endl;
    cout<<"Color: "<<B1.getColor()<<endl;
    cout<<"Year: "<<B1.getYear()<<endl;
    cout<<"Miles Driven(miles): "<<B1.getMiles()<<endl;
    cout<<"Fuel Tank size(Litres): "<<B1.getFuel()<<endl;
    cout<<"Weight(kg): "<<B1.getweight()<<endl;
    cout<<"Number Of Wheels: "<<B1.getNumOfWheels()<<endl;
    cout<<"Length(m): "<<B1.getlength()<<endl;
    cout<<"Number Of Seats: "<<B1.getseats()<<endl;
    return 0;
}