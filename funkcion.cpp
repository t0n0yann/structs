using namespace std;
#include "funkcion.h"
void printer(user* print)
{
    for (int i = 0; i < len; i++)
    {
        cout << print->users_dog[i].name << "\n";
    }
    cout << print->users_cat.age << "\n";
    cout << print->users_cat.name << "\n";
}