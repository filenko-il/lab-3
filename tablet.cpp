#include "tablet.h"
using namespace std;
Tablet::Tablet(string const &model, string const &serial_number, string const &colour)
{
    this->model = model;
    this->serial_number = serial_number;
    this->colour = colour;
}
Tablet::Tablet(Tablet const &any_tablet)
{
    this->model = any_tablet.model;
    this->serial_number = any_tablet.serial_number;
    this->colour = any_tablet.colour;
}

void Tablet::print() const
{
    cout<<"Model: "<<this->get_model();
    cout<<"\tSerial number:"<<this->get_serial_number();
    cout<<"\tColour:"<<this->get_colour();
}
Tablet& Tablet::operator = (Tablet const &any_tablet)
{
    this->model = any_tablet.model;
    this->serial_number = any_tablet.serial_number;
    this->colour = any_tablet.colour;
    return *this;
}

const string& Tablet::get_colour() const
{
    return this->colour;
}
void Tablet::set_colour(string const &new_colour)
{
    this->colour = new_colour;
}
