#pragma once
#include "electronicaldevice.h"
using namespace std;

class SmartPhone : public ElectronicalDevice
{
protected:
    int recharge_cycles;
public:
    SmartPhone(string const &model = "Handmade", string const &serial_number = "00X000S1", int const recharge_cycles = 450);
    SmartPhone(int const recharge_cycles, string const &model = "Handmade", string const &serial_number = "00X000S1");
    SmartPhone(SmartPhone const &any_smartphone);

    void print() const;
    SmartPhone& operator = (SmartPhone const &any_smartphone);

    const int get_recharge_cycles() const;
    const bool set_recharge_cycles(int const new_recharge_cycles = 450);
};
