#include <iostream>
#include "electronicaldevice.h"
#include "notebook.h"
#include "smartphone.h"
#include "smartwatch.h"
#include "tablet.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    SmartPhone smartphone;
    cout<<"\n\n[Smartphone] ";
    smartphone.print();
    Notebook notebook;
    cout<<"\n\n[Notebook] ";
    notebook.print();
    Tablet tablet;
    cout<<"\n\n[Tablet] ";
    tablet.print();
    Smartwatch smartwatch;
    cout<<"\n\n[Smartwatch] ";
    smartwatch.print();

    smartwatch.set_clock_face("digital");

    Smartwatch smartwatch2 (smartwatch);
    cout<<"\n\n[Smartwatch 2] ";
    smartwatch2.print();

    smartwatch.set_model("Qantor");
    smartwatch2 = smartwatch;
    cout<<"\n\n[Smartwatch 2] ";
    smartwatch2.print();

    return 0;
}
