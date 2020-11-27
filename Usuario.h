#pragma once
#include <string>
#include <iostream>
using namespace std;
typedef unsigned long long ull;
class CFecha {
	short dia;
	short mes;
	int año;
public:
	CFecha(short d, short m, short a) :dia(d), mes(m), año(a) {}
	short getDia() { return dia; }
	short getMes() { return mes; }
	short getAño() { return año; }
	string toString() {
		string text = to_string(año) + "-" + to_string(mes) + "-" + to_string(dia);
		return text;
	}
};
class CUsuario {
	ull id;
	string mail;
	string nombre;
	CFecha* date;
public:
	CUsuario(ull i, string m, string n, CFecha* f) :id(i), mail(m), nombre(n), date(f) {}
	ull getId() { return id; }
	string getMail() { return mail; }
	string getNombre() { return nombre; }
	CFecha* getDate() { return date; }
	string toString() {
		string text = to_string(id) + "	" + mail + "	" + nombre + "	" + date->toString();
		return text;
	}
};