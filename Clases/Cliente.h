#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Cliente
{
private:
	int codigoCliente;
	char DNICliente[8];
	char nombreCliente[50];
	char direccionCliente[50];
	char telefonoCliente[12];
	char celularCliente[12];
	char correoCliente[50];
public:
	Cliente();
	int getCodigoCliente();
	String^ getNombreCliente();
	String^ getDNICliente();
	String^ getDireccionCliente();
	void registrarCliente(int, String^, String^, String^, String^, String^, String^);
	void verCliente(DataTable^);
	bool buscarCliente(String^);
	void actualizarCliente(int, String^, String^, String^, String^, String^, String^);
	void eliminarCliente();
};

Cliente::Cliente() {

}

int Cliente::getCodigoCliente() {
	return codigoCliente;
}

String^ Cliente::getNombreCliente() {
	return gcnew String(convertToString(nombreCliente, sizeof(nombreCliente)).c_str());
}

String^ Cliente::getDNICliente() {
	return gcnew String(convertToString(DNICliente, sizeof(DNICliente)).c_str());
}

String^ Cliente::getDireccionCliente() {
	return gcnew String(convertToString(direccionCliente, sizeof(direccionCliente)).c_str());
}

void Cliente::registrarCliente(int cod, String^ dni, String^ n, String^ d, String^ t, String^ c, String^ cr) {
	codigoCliente = cod;
	if (dni->Length <= sizeof(DNICliente))
	{
		for (int i = 0; i < dni->Length; i++)
			DNICliente[i] = static_cast<char>(dni[i]);
	}
	if (n->Length < sizeof(nombreCliente))
	{
		for (int i = 0; i < n->Length; i++)
			nombreCliente[i] = static_cast<char>(n[i]);
		nombreCliente[n->Length] = '%';
	}
	if (d->Length < sizeof(direccionCliente))
	{
		for (int i = 0; i < d->Length; i++)
			direccionCliente[i] = static_cast<char>(d[i]);
		direccionCliente[d->Length] = '%';
	}
	if (t->Length < sizeof(telefonoCliente))
	{
		for (int i = 0; i < t->Length; i++)
			telefonoCliente[i] = static_cast<char>(t[i]);
		telefonoCliente[t->Length] = '%';
	}
	if (c->Length < sizeof(celularCliente))
	{
		for (int i = 0; i < c->Length; i++)
			celularCliente[i] = static_cast<char>(c[i]);
		celularCliente[c->Length] = '%';
	}
	if (cr->Length < sizeof(correoCliente))
	{
		for (int i = 0; i < cr->Length; i++)
			correoCliente[i] = static_cast<char>(cr[i]);
		correoCliente[cr->Length] = '%';
	}
}

void Cliente::verCliente(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Codigo"] = codigoCliente;
	fila["DNI"] = gcnew String(convertToString(DNICliente,sizeof(DNICliente)).c_str());
	fila["Nombre"] = gcnew String(convertToString(nombreCliente, sizeof(nombreCliente)).c_str());
	fila["Direccion"] = gcnew String(convertToString(direccionCliente, sizeof(direccionCliente)).c_str());
	fila["Telefono"] = gcnew String(convertToString(telefonoCliente, sizeof(telefonoCliente)).c_str());
	fila["Celular"] = gcnew String(convertToString(celularCliente, sizeof(celularCliente)).c_str());
	fila["Correo"] = gcnew String(convertToString(correoCliente, sizeof(correoCliente)).c_str());
	dt->Rows->Add(fila);
}

bool Cliente::buscarCliente(String^ bnom) {
	if (gcnew String(convertToString(DNICliente, sizeof(DNICliente)).c_str())==bnom) {
		return true;
	}
	else {
		return false;
	}
}

void Cliente::actualizarCliente(int cod, String^ dni, String^ n, String^ d, String^ t, String^ c, String^ cr) {
	codigoCliente = cod;
	if (dni->Length <= sizeof(DNICliente))
	{
		for (int i = 0; i < dni->Length; i++)
			DNICliente[i] = static_cast<char>(dni[i]);
	}
	if (n->Length < sizeof(nombreCliente))
	{
		for (int i = 0; i < n->Length; i++)
			nombreCliente[i] = static_cast<char>(n[i]);
		nombreCliente[n->Length] = '%';
	}
	if (d->Length < sizeof(direccionCliente))
	{
		for (int i = 0; i < d->Length; i++)
			direccionCliente[i] = static_cast<char>(d[i]);
		direccionCliente[d->Length] = '%';
	}
	if (t->Length < sizeof(telefonoCliente))
	{
		for (int i = 0; i < t->Length; i++)
			telefonoCliente[i] = static_cast<char>(t[i]);
		telefonoCliente[t->Length] = '%';
	}
	if (c->Length < sizeof(celularCliente))
	{
		for (int i = 0; i < c->Length; i++)
			celularCliente[i] = static_cast<char>(c[i]);
		celularCliente[c->Length] = '%';
	}
	if (cr->Length < sizeof(correoCliente))
	{
		for (int i = 0; i < cr->Length; i++)
			correoCliente[i] = static_cast<char>(cr[i]);
		correoCliente[cr->Length] = '%';
	}
}

void Cliente::eliminarCliente() {
	codigoCliente = 0;
}

int SIZECLIENTE = sizeof(Cliente);
