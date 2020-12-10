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

}