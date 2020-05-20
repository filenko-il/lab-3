#pragma once
#include "electronicaldevice.h"
using namespace std;
class Notebook : public ElectronicalDevice
{
protected:
    int internal_memory;
public:
    Notebook(string const &model = "Handmade", string const &serial_number = "00X000N1", int const internal_memory = 8192);
    Notebook(int const internal_memory, string const &model = "Handmade", string const &serial_number = "00X000N1");
    Notebook(Notebook const &any_notebook);

    void print() const;
    Notebook& operator = (Notebook const &any_notebook);

    const int get_internal_memory() const;
    const bool set_internal_memory(int const new_internal_memory = 8192);
};
