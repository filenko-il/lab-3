#include "smartwatch.h"
using namespace std;
Smartwatch::Smartwatch(string const &model, string const &serial_number, string const &clock_face)
{
    this->model = model;
    this->serial_number = serial_number;
    this->clock_face = clock_face;
}
Smartwatch::Smartwatch(Smartwatch const &any_smartwatch)
{
    this->model = any_smartwatch.model;
    this->serial_number = any_smartwatch.serial_number;
    this->clock_face = any_smartwatch.clock_face;
}

void Smartwatch::print() const
{
    cout<<"Model: "<<this->get_model();
    cout<<"\tSerial number:"<<this->get_serial_number();
    cout<<"\tClock face:"<<this->get_clock_face();
}
Smartwatch& Smartwatch::operator = (Smartwatch const &any_smartwatch)
{
    this->model = any_smartwatch.model;
    this->serial_number = any_smartwatch.serial_number;
    this->clock_face = any_smartwatch.clock_face;
    return *this;
}

const string& Smartwatch::get_clock_face() const
{
    return this->clock_face;
}
void Smartwatch::set_clock_face(string const &new_clock_face)
{
    this->clock_face = new_clock_face;
}
