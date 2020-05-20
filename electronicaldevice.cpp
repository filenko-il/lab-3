#include "electronicaldevice.h"
using namespace std;
ElectronicalDevice& ElectronicalDevice::operator = (ElectronicalDevice const &electronical_device)
{
    this->model = electronical_device.model;
    this->serial_number = electronical_device.serial_number;
    return *this;
}
const string& ElectronicalDevice::get_model() const
{
    return this->model;
}
const string& ElectronicalDevice::get_serial_number() const
{
    return this->serial_number;
}
void ElectronicalDevice::set_model(string const &new_model)
{
    this->model = new_model;
}
void ElectronicalDevice::set_serial_number(string const &new_serial_number)
{
    this->serial_number = new_serial_number;
}
