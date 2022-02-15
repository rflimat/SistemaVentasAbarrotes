#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;
using namespace System;

public class Empleado
{
protected:
	int codigoEmpleado;
	char nombreEmpleado[50];
	char DNIEmpleado[8];
	char direccionEmpleado[50];
	char telefonoEmpleado[12];
	char celularEmpleado[12];
	char correoEmpleado[50];
	char usuario[10];
	char contrasenia[10];
public:
	Empleado();
	int getCodigoEmpleado();
	String^ getUsuario();
	String^ getContrasenia();
	bool ingresarSistema(String^, String^);
	void registrarEmpleado(int, String^, String^, String^, String^, String^, String^);
	bool buscarEmpleado(String^);
	void actualizarEmpleado(int, String^, String^, String^, String^, String^, String^);
	void eliminarEmpleado();
};

Empleado::Empleado() {

}

int Empleado::getCodigoEmpleado() {
	return codigoEmpleado;
}

String^ Empleado::getUsuario() {
	return gcnew String(convertToString(usuario,sizeof(usuario)).c_str());
}

String^ Empleado::getContrasenia() {
	return gcnew String(convertToString(contrasenia, sizeof(contrasenia)).c_str());
}

bool Empleado::ingresarSistema(String^ u, String^ c) {
	if (gcnew String(convertToString(usuario, sizeof(usuario)).c_str()) == u && gcnew String(convertToString(contrasenia, sizeof(contrasenia)).c_str()) == c) {
		return true;
	}
	else {
		return false;
	}
}

void Empleado::registrarEmpleado(int cod, String^ dni, String^ n, String^ d, String^ t, String^ c, String^ cr) {
	codigoEmpleado = cod;
	if (dni->Length <= sizeof(DNIEmpleado))
	{
		for (int i = 0; i < dni->Length; i++)
			DNIEmpleado[i] = static_cast<char>(dni[i]);
	}
	if (n->Length < sizeof(nombreEmpleado))
	{
		for (int i = 0; i < n->Length; i++)
			nombreEmpleado[i] = static_cast<char>(n[i]);
		nombreEmpleado[n->Length] = '%';
	}
	if (d->Length < sizeof(direccionEmpleado))
	{
		for (int i = 0; i < d->Length; i++)
			direccionEmpleado[i] = static_cast<char>(d[i]);
		direccionEmpleado[d->Length] = '%';
	}
	if (t->Length < sizeof(telefonoEmpleado))
	{
		for (int i = 0; i < t->Length; i++)
			telefonoEmpleado[i] = static_cast<char>(t[i]);
		telefonoEmpleado[t->Length] = '%';
	}
	if (c->Length < sizeof(celularEmpleado))
	{
		for (int i = 0; i < c->Length; i++)
			celularEmpleado[i] = static_cast<char>(c[i]);
		celularEmpleado[c->Length] = '%';
	}
	if (cr->Length < sizeof(correoEmpleado))
	{
		for (int i = 0; i < cr->Length; i++)
			correoEmpleado[i] = static_cast<char>(cr[i]);
		correoEmpleado[cr->Length] = '%';
	}
	strcpy(usuario, generarUsuario(nombreEmpleado, sizeof(usuario)).c_str());
	strcpy(contrasenia, generarContrasenia().c_str());
}

bool Empleado::buscarEmpleado(String^ bnom) {
	if (gcnew String(convertToString(DNIEmpleado, sizeof(DNIEmpleado)).c_str()) == bnom) {
		return true;
	}
	else {
		return false;
	}
}

void Empleado::actualizarEmpleado(int cod, String^ dni, String^ n, String^ d, String^ t, String^ c, String^ cr) {
	codigoEmpleado = cod;
	if (dni->Length <= sizeof(DNIEmpleado))
	{
		for (int i = 0; i < dni->Length; i++)
			DNIEmpleado[i] = static_cast<char>(dni[i]);
	}
	if (n->Length < sizeof(nombreEmpleado))
	{
		for (int i = 0; i < n->Length; i++)
			nombreEmpleado[i] = static_cast<char>(n[i]);
		nombreEmpleado[n->Length] = '%';
	}
	if (d->Length < sizeof(direccionEmpleado))
	{
		for (int i = 0; i < d->Length; i++)
			direccionEmpleado[i] = static_cast<char>(d[i]);
		direccionEmpleado[d->Length] = '%';
	}
	if (t->Length < sizeof(telefonoEmpleado))
	{
		for (int i = 0; i < t->Length; i++)
			telefonoEmpleado[i] = static_cast<char>(t[i]);
		telefonoEmpleado[t->Length] = '%';
	}
	if (c->Length < sizeof(celularEmpleado))
	{
		for (int i = 0; i < c->Length; i++)
			celularEmpleado[i] = static_cast<char>(c[i]);
		celularEmpleado[c->Length] = '%';
	}
	if (cr->Length < sizeof(correoEmpleado))
	{
		for (int i = 0; i < cr->Length; i++)
			correoEmpleado[i] = static_cast<char>(cr[i]);
		correoEmpleado[cr->Length] = '%';
	}
}

void Empleado::eliminarEmpleado() {
	codigoEmpleado = 0;
}

int SIZEEMPLEADO = sizeof(Empleado);
