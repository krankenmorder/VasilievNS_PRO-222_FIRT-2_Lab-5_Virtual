#pragma once
#include <iostream>

using namespace std;

class Base {
public:
	Base() {
		cout << "Конструктор по умолчанию Base.\n";
	}

	Base(Base *object) {
		cout << "Конструктор *object Base.\n";
	}

	Base(Base &object) {
		cout << "Конструктор &object Base.\n";
	}

	~Base() {
		cout << "Деструктор Base.\n";
	}
};

class Desc : public Base {
public:
	Desc() {
		cout << "Конструктор по умолчанию Desc.\n";
	}

	Desc(Desc* object) {
		cout << "Конструктор *object Desc.\n";
	}

	Desc(Desc& object) {
		cout << "Конструктор &object Desc.\n";
	}

	~Desc() {
		cout << "Деструктор Desc.\n";
	}
};