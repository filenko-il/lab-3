#pragma once
#include "electronicaldevice.h"
using namespace std;
class Tablet : public ElectronicalDevice
{
protected:
    string colour;
public:
    Tablet(string const &model = "Handmade", string const &serial_number = "00X000T1", string const &colour = "grey");
    Tablet(Tablet const &any_tablet);

    void print() const;
    Tablet& operator = (Tablet const &any_tablet);

    const string& get_colour() const;
    void set_colour(string const &new_colour = "grey");
};
