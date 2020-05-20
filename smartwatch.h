#pragma once
#include "electronicaldevice.h"
using namespace std;
class Smartwatch : public ElectronicalDevice
{
protected:
    string clock_face;
public:
    Smartwatch(string const &model = "Handmade", string const &serial_number = "00X000C1", string const &clock_face = "analog");
    Smartwatch(Smartwatch const &any_smartwatch);

    void print() const;
    Smartwatch& operator = (Smartwatch const &any_smartwatch);

    const string& get_clock_face() const;
    void set_clock_face(string const &new_clock_face = "analog");
};
