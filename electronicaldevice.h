#pragma once
#include <string>
#include <iostream>
using namespace std;

class ElectronicalDevice
{
protected:
    string model;
    string serial_number;
public:
    virtual void print() const = 0;
    ElectronicalDevice& operator = (ElectronicalDevice const &electronical_device);

    const string& get_model() const;
    const string& get_serial_number() const;

    void set_model(string const &new_model);
    void set_serial_number(string const &new_serial_number);
};
