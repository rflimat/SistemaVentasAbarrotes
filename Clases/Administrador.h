#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
#include "Empleado.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Administrador : public Empleado {
public:
	Administrador();
	void registrarAdministrador(int, String^, String^, String^, String^, String^, String^);
};

Administrador::Administrador() {

}

void Administrador::registrarAdministrador(int cod, String^ dni, String^ n, String^ d, String^ t, String^ c, String^ cr) {
	registrarEmpleado(cod, dni, n, d, t, c, cr);
}

int SIZEADMINISTRADOR= Convert::ToInt32(sizeof(Administrador));
