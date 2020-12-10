#pragma once
#include <iostream>

using namespace std;

class Base {
public:
	Base() {
		cout << "����������� �� ��������� Base.\n";
	}

	Base(Base *object) {
		cout << "����������� *object Base.\n";
	}

	Base(Base &object) {
		cout << "����������� &object Base.\n";
	}

	~Base() {
		cout << "���������� Base.\n";
	}
};

class Desc : public Base {
public:
	Desc() {
		cout << "����������� �� ��������� Desc.\n";
	}

	Desc(Desc* object) {
		cout << "����������� *object Desc.\n";
	}

	Desc(Desc& object) {
		cout << "����������� &object Desc.\n";
	}

	~Desc() {
		cout << "���������� Desc.\n";
	}
};