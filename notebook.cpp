#include "notebook.h"
using namespace std;
Notebook::Notebook(string const &model, string const &serial_number, int const internal_memory)
{
    this->model = model;
    this->serial_number = serial_number;
    this->internal_memory = internal_memory;
}
Notebook::Notebook(int const internal_memory, string const &model, string const &serial_number)
{
    this->model = model;
    this->serial_number = serial_number;
    this->internal_memory = internal_memory;
}
Notebook::Notebook(Notebook const &any_notebook)
{
    this->model = any_notebook.model;
    this->serial_number = any_notebook.serial_number;
    this->internal_memory = any_notebook.internal_memory;
}


void Notebook::print() const
{
    cout<<"Model: "<<this->get_model();
    cout<<"\tSerial number:"<<this->get_serial_number();
    cout<<"\tInternal memory:"<<this->get_internal_memory();
}
Notebook& Notebook::operator = (Notebook const &any_notebook)
{
    this->model = any_notebook.model;
    this->serial_number = any_notebook.serial_number;
    this->internal_memory = any_notebook.internal_memory;
    return *this;
}

const int Notebook::get_internal_memory() const
{
    return this->internal_memory;
}
const bool Notebook::set_internal_memory(int const new_internal_memory)
{
    if(new_internal_memory < 0)
        return false;
    this->internal_memory = new_internal_memory;
    return true;
}
