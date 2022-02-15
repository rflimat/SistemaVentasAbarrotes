#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
#include "Empleado.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Vendedor : public Empleado
{
private:
	float sueldoVendedor;
public:
	Vendedor();
	int getCodigoVendedor();
	void registrarVendedor(int, String^, String^, String^, String^, String^, String^, float);
	void verVendedor(DataTable^);
	void seleccionarVendedor(DataTable^);
	bool buscarVendedor(String^);
	void actualizarVendedor(int, String^, String^, String^, String^, String^, String^, float);
	void eliminarVendedor();
};

Vendedor::Vendedor() {

}

int Vendedor::getCodigoVendedor() {
	return getCodigoEmpleado();
}

void Vendedor::registrarVendedor(int cod, String^ dni, String^ n, String^ d, String^ t, String^ c, String^ cr, float s) {
	registrarEmpleado(cod, dni, n, d, t, c, cr);
	sueldoVendedor = s;
}

void Vendedor::verVendedor(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Codigo"] = codigoEmpleado;
	fila["DNI"] = gcnew String(convertToString(DNIEmpleado, sizeof(DNIEmpleado)).c_str());
	fila["Nombre"] = gcnew String(convertToString(nombreEmpleado, sizeof(nombreEmpleado)).c_str());
	fila["Direccion"] = gcnew String(convertToString(direccionEmpleado, sizeof(direccionEmpleado)).c_str());
	fila["Telefono"] = gcnew String(convertToString(telefonoEmpleado, sizeof(telefonoEmpleado)).c_str());
	fila["Celular"] = gcnew String(convertToString(celularEmpleado, sizeof(celularEmpleado)).c_str());
	fila["Correo"] = gcnew String(convertToString(correoEmpleado, sizeof(correoEmpleado)).c_str());
	fila["Sueldo"] = Convert::ToDecimal(sueldoVendedor);
	dt->Rows->Add(fila);
}

void Vendedor::seleccionarVendedor(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Codigo"] = codigoEmpleado;
	fila["Nombre"] = gcnew String(convertToString(nombreEmpleado, sizeof(nombreEmpleado)).c_str());
	dt->Rows->Add(fila);
}

bool Vendedor::buscarVendedor(String^ bnom) {
	return buscarEmpleado(bnom);
}

void Vendedor::actualizarVendedor(int cod, String^ dni, String^ n, String^ d, String^ t, String^ c, String^ cr, float s) {
	actualizarEmpleado(cod, dni, n, d, t, c, cr);
	sueldoVendedor = s;
}

void Vendedor::eliminarVendedor() {
	eliminarEmpleado();
}

int SIZEVENDEDOR = Convert::ToInt32(sizeof(Vendedor));
