#include "smartphone.h"
using namespace std;
SmartPhone::SmartPhone(string const &model, string const &serial_number, int const recharge_cycles)
{
    this->model = model;
    this->serial_number = serial_number;
    this->recharge_cycles = recharge_cycles;
}
SmartPhone::SmartPhone(int const recharge_cycles, string const &model, string const &serial_number)
{
    this->model = model;
    this->serial_number = serial_number;
    this->recharge_cycles = recharge_cycles;
}
SmartPhone::SmartPhone(SmartPhone const &any_smartphone)
{
    this->model = any_smartphone.model;
    this->serial_number = any_smartphone.serial_number;
    this->recharge_cycles = any_smartphone.recharge_cycles;
}


void SmartPhone::print() const
{
    cout<<"Model: "<<this->get_model();
    cout<<"\tSerial number:"<<this->get_serial_number();
    cout<<"\tRecharge cycles:"<<this->get_recharge_cycles();
}
SmartPhone& SmartPhone::operator = (SmartPhone const &any_smartphone)
{
    this->model = any_smartphone.model;
    this->serial_number = any_smartphone.serial_number;
    this->recharge_cycles = any_smartphone.recharge_cycles;
    return *this;
}

const int SmartPhone::get_recharge_cycles() const
{
    return this->recharge_cycles;
}
const bool SmartPhone::set_recharge_cycles(int const new_recharge_cycles)
{
    if(new_recharge_cycles < 0)
        return false;
    this->recharge_cycles = new_recharge_cycles;
    return true;
}
