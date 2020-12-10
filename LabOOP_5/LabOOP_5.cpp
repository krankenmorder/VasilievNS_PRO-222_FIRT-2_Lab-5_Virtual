#include <iostream>
#include "myClasses.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Tree* derevo_1 = new Tree();
    Cedar* kedr_1 = new Cedar();
    Tree* derevo_2 = new Cedar();

    cout << "\n\nПроверка на принадлежность к классу с помощью метода classname:\n";
    cout << derevo_1->classname() << endl;
    cout << kedr_1->classname() << endl;
    cout << derevo_2->classname() << endl;

    cout << "\n\nПроверка на принадлежность к классу с помощью метода isA:\n";
    cout << derevo_1->isA("Tree") << endl;
    cout << kedr_1->isA("Cedar") << endl;
    cout << derevo_2->isA("Tree") << endl;

    system("pause");

    cout << "\n\nПриведение типов dynamic_cast:\n\n";
    Cedar* cedar_2 = dynamic_cast<Cedar*>(derevo_2);
    cout << cedar_2->classname() << endl;
    cedar_2->Method();
    derevo_2->Method();
    cout << endl;

    system("pause");

    cout << "\nПередача объектов как параметров в функции:\n\n";

}