#pragma once
#include <iostream>

using namespace std;

class Tree {
private:
	string ClassName = "Tree";
public:
	int height, width, age;
	string type;

	Tree() {
		this->height = 0;
		this->width = 0;
		this->age = 0;
		this->type = "";
		cout << "����������� �� ��������� Tree.\n";
	}

	Tree(int a, int b, int c, string d) {
		this->height = a;
		this->width = b;
		this->age = c;
		this->type = d;
		cout << "����������� � ����������� Tree.\n";
	}

	Tree(Tree &T) {
		this->height = T.height;
		this->width = T.width;
		this->age = T.age;
		this->type = T.type;
		cout << "����������� ����������� Tree.\n";
	}

	virtual ~Tree() {
		cout << "���������� Tree.\n";
	}

	virtual string classname() {
		cout << "����������� ����� classname Tree.\n";
		return ClassName;
	}

	virtual bool isA(string classname) {
		cout << "����������� ����� isA Tree.\n";
		if (classname == ClassName) {
			return 1;
		}
		else {
			return 0;
		}
	}

	void Method() {
		cout << "����� Tree.\n";
	}
};

class Cedar : public Tree {
private:
	string ClassName = "Cedar";
public:
	Cedar() {
		this->height = 44;
		this->width = 2;
		this->age = 800;
		this->type = "Conifers";
		cout << "����������� �� ��������� Cedar.\n";
	}

	Cedar(int a, int b, int c) {
		this->height = a;
		this->width = b;
		this->age = c;
		cout << "����������� � ����������� Cedar.\n";
	}

	Cedar(Cedar &C) {
		this->height = C.height;
		this->width = C.width;
		this->age = C.age;
		cout << "����������� ����������� Cedar.\n";
	}

	~Cedar() {
		cout << "���������� Cedar.\n";
	}

	string classname() {
		cout << "������������� ����� classname Cedar.\n";
		return ClassName;
	}

	bool isA(string classname) {
		cout << "������������� ����� isA Cedar.\n";
		if (classname == ClassName) {
			return 1;
		}
		else {
			return 0;
		}
	}

	void Method() {
		cout << "����� Cedar.\n";
	}
};