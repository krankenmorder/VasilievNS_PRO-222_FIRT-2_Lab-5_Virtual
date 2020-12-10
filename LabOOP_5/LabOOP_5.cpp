#include <iostream>
#include "myClasses.h"
#include "basedesc.h"

using namespace std;

void func1(Base object) { //принимает объект
    cout << "Функция 1\n";
}
void func2(Base* object) { //принимает указатель на объект и работает с объектом
    cout << "Функция 2\n";
}
void func3(Base& object) { //принимает ссылку на объект и работает с ней
    cout << "Функция 3\n";
}

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
    cout << "Base:\n";
    Base base_1 = new Base();
    func1(base_1);
    Base* base_2 = new Base();
    func2(base_2);
    Base base_3 = new Base();
    func3(base_3);

    cout << "\nDesc:\n";
    Base desc_1 = new Desc();
    func1(desc_1);
    Base *desc_2 = new Desc();
    func2(desc_2);
    Base desc_3 = new Desc();
    func3(desc_3);
}