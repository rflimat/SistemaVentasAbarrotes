#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Proveedor
{
private:
	int codigoProveedor;
	char nombreProveedor[50];
	char direccionProveedor[50];
	char telefonoProveedor[12];
	char celularProveedor[12];
	char correoProveedor[50];
public:
	Proveedor();
	int getCodigoProveedor();
	char* getNombreProveedor();
	void registrarProveedor(int, String^, String^, String^, String^, String^);
	void verProveedor(DataTable^);
	void seleccionarProveedor(DataTable^);
	bool buscarProveedor(String^);
	void actualizarProveedor(int, String^, String^, String^, String^, String^);
	void eliminarProveedor();
};

Proveedor::Proveedor() {

}

int Proveedor::getCodigoProveedor() {
	return codigoProveedor;
}

char* Proveedor::getNombreProveedor() {
	return nombreProveedor;
}

void Proveedor::registrarProveedor(int cod, String^ n, String^ d, String^ t, String^ c, String^ cr) {
	codigoProveedor = cod;
	if (n->Length < sizeof(nombreProveedor))
	{
		for (int i = 0; i < n->Length; i++)
			nombreProveedor[i] = static_cast<char>(n[i]);
		nombreProveedor[n->Length] = '%';
	}
	if (d->Length < sizeof(direccionProveedor))
	{
		for (int i = 0; i < d->Length; i++)
			direccionProveedor[i] = static_cast<char>(d[i]);
		direccionProveedor[d->Length] = '%';
	}
	if (t->Length < sizeof(telefonoProveedor))
	{
		for (int i = 0; i < t->Length; i++)
			telefonoProveedor[i] = static_cast<char>(t[i]);
		telefonoProveedor[t->Length] = '%';
	}
	if (c->Length < sizeof(celularProveedor))
	{
		for (int i = 0; i < c->Length; i++)
			celularProveedor[i] = static_cast<char>(c[i]);
		celularProveedor[c->Length] = '%';
	}
	if (cr->Length < sizeof(correoProveedor))
	{
		for (int i = 0; i < cr->Length; i++)
			correoProveedor[i] = static_cast<char>(cr[i]);
		correoProveedor[cr->Length] = '%';
	}
}

void Proveedor::verProveedor(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Codigo"] = codigoProveedor;
	fila["Nombre"] = gcnew String(convertToString(nombreProveedor, sizeof(nombreProveedor)).c_str());
	fila["Direccion"] = gcnew String(convertToString(direccionProveedor, sizeof(direccionProveedor)).c_str());
	fila["Telefono"] = gcnew String(convertToString(telefonoProveedor, sizeof(telefonoProveedor)).c_str());
	fila["Celular"] = gcnew String(convertToString(celularProveedor, sizeof(celularProveedor)).c_str());
	fila["Correo"] = gcnew String(convertToString(correoProveedor, sizeof(correoProveedor)).c_str());
	dt->Rows->Add(fila);
}

void Proveedor::seleccionarProveedor(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Codigo"] = codigoProveedor;
	fila["Nombre"] = gcnew String(convertToString(nombreProveedor, sizeof(nombreProveedor)).c_str());
	dt->Rows->Add(fila);
}

bool Proveedor::buscarProveedor(String^ bnom) {
	if (gcnew String(convertToString(nombreProveedor, sizeof(nombreProveedor)).c_str()) == bnom) {
		return true;
	}
	else {
		return false;
	}
}

void Proveedor::actualizarProveedor(int cod, String^ n, String^ d, String^ t, String^ c, String^ cr) {
	codigoProveedor = cod;
	if (n->Length < sizeof(nombreProveedor))
	{
		for (int i = 0; i < n->Length; i++)
			nombreProveedor[i] = static_cast<char>(n[i]);
		nombreProveedor[n->Length] = '%';
	}
	if (d->Length < sizeof(direccionProveedor))
	{
		for (int i = 0; i < d->Length; i++)
			direccionProveedor[i] = static_cast<char>(d[i]);
		direccionProveedor[d->Length] = '%';
	}
	if (t->Length < sizeof(telefonoProveedor))
	{
		for (int i = 0; i < t->Length; i++)
			telefonoProveedor[i] = static_cast<char>(t[i]);
		telefonoProveedor[t->Length] = '%';
	}
	if (c->Length < sizeof(celularProveedor))
	{
		for (int i = 0; i < c->Length; i++)
			celularProveedor[i] = static_cast<char>(c[i]);
		celularProveedor[c->Length] = '%';
	}
	if (cr->Length < sizeof(correoProveedor))
	{
		for (int i = 0; i < cr->Length; i++)
			correoProveedor[i] = static_cast<char>(cr[i]);
		correoProveedor[cr->Length] = '%';
	}
}

void Proveedor::eliminarProveedor() {
	codigoProveedor = 0;
}

int SIZEPROVEEDOR = sizeof(Proveedor);

