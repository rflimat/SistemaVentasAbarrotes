#pragma once
#include <iostream>
#include <string>
#include "Proveedor.h"
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Producto
{
private:
	int numeroProducto;
	char codigoProducto[13];
	char nombreProducto[40];
	char descripcionProducto[255];
	float precioUnitario;
	int stockProducto;
	char unidadProducto[15];
	char tipoProducto[15];
public:
	Producto();
	int getNumeroProducto();
	int getStockProducto();
	float getPrecioUnitario();
	String^ getNombreProducto();
	void aumentarStockProducto(int);
	void reducirStockProducto(int);
	void registrarProducto(int, String^, String^, String^, float, int, String^, String^);
	void verProducto(DataTable^);
	bool buscarProducto(String^);
	void actualizarProducto(int, String^, String^, String^, float, int, String^, String^);
	void eliminarProducto();
};

Producto::Producto() {

}

int Producto::getNumeroProducto() {
	return numeroProducto;
}

float Producto::getPrecioUnitario() {
	return precioUnitario;
}

String^ Producto::getNombreProducto() {
	return gcnew String(convertToString(nombreProducto, sizeof(nombreProducto)).c_str());
}

int Producto::getStockProducto() {
	return stockProducto;
}

void Producto::reducirStockProducto(int cant) {
	stockProducto = stockProducto - cant;
}

void Producto::aumentarStockProducto(int cant) {
	stockProducto = stockProducto + cant;
}

void Producto::registrarProducto(int num, String^ cod, String^ n, String^ d, float pu, int s, String^ up, String^ tp) {
	numeroProducto = num;
	if (cod->Length < sizeof(codigoProducto))
	{
		for (int i = 0; i < cod->Length; i++)
			codigoProducto[i] = static_cast<char>(cod[i]);
		codigoProducto[cod->Length] = '%';
	}
	if (n->Length < sizeof(nombreProducto))
	{
		for (int i = 0; i < n->Length; i++)
			nombreProducto[i] = static_cast<char>(n[i]);
		nombreProducto[n->Length] = '%';
	}
	if (d->Length < sizeof(descripcionProducto))
	{
		for (int i = 0; i < d->Length; i++)
			descripcionProducto[i] = static_cast<char>(d[i]);
		descripcionProducto[d->Length] = '%';
	}
	precioUnitario = pu;
	stockProducto = s;
	if (up->Length < sizeof(unidadProducto))
	{
		for (int i = 0; i < up->Length; i++)
			unidadProducto[i] = static_cast<char>(up[i]);
		unidadProducto[up->Length] = '%';
	}
	if (tp->Length < sizeof(tipoProducto))
	{
		for (int i = 0; i < tp->Length; i++)
			tipoProducto[i] = static_cast<char>(tp[i]);
		tipoProducto[tp->Length] = '%';
	}
}

void Producto::verProducto(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Numero"] = numeroProducto;
	fila["Codigo"] = gcnew String(convertToString(codigoProducto,sizeof(codigoProducto)).c_str());
	fila["Nombre"] = gcnew String(convertToString(nombreProducto, sizeof(nombreProducto)).c_str());
	fila["Descripcion"] = gcnew String(convertToString(descripcionProducto, sizeof(descripcionProducto)).c_str());
	fila["Precio Unitario"] = Convert::ToDecimal(precioUnitario);
	fila["Stock"] = stockProducto;
	fila["Unidad"] = gcnew String(convertToString(unidadProducto, sizeof(unidadProducto)).c_str());
	fila["Tipo"] = gcnew String(convertToString(tipoProducto, sizeof(tipoProducto)).c_str());
	dt->Rows->Add(fila);
}

bool Producto::buscarProducto(String^ cod) {
	if (gcnew String(convertToString(codigoProducto, sizeof(codigoProducto)).c_str()) == cod) {
		return true;
	}
	else {
		return false;
	}
}

void Producto::actualizarProducto(int num, String^ cod, String^ n, String^ d, float pu, int s, String^ up, String^ tp) {
	numeroProducto = num;
	if (cod->Length < sizeof(codigoProducto))
	{
		for (int i = 0; i < cod->Length; i++)
			codigoProducto[i] = static_cast<char>(cod[i]);
		codigoProducto[cod->Length] = '%';
	}
	if (n->Length < sizeof(nombreProducto))
	{
		for (int i = 0; i < n->Length; i++)
			nombreProducto[i] = static_cast<char>(n[i]);
		nombreProducto[n->Length] = '%';
	}
	if (d->Length < sizeof(descripcionProducto))
	{
		for (int i = 0; i < d->Length; i++)
			descripcionProducto[i] = static_cast<char>(d[i]);
		descripcionProducto[d->Length] = '%';
	}
	precioUnitario = pu;
	stockProducto = s;
	if (up->Length < sizeof(unidadProducto))
	{
		for (int i = 0; i < up->Length; i++)
			unidadProducto[i] = static_cast<char>(up[i]);
		unidadProducto[up->Length] = '%';
	}
	if (tp->Length < sizeof(tipoProducto))
	{
		for (int i = 0; i < tp->Length; i++)
			tipoProducto[i] = static_cast<char>(tp[i]);
		tipoProducto[tp->Length] = '%';
	}
}

void Producto::eliminarProducto() {
	numeroProducto = 0;
}

int SIZEPRODUCTO = sizeof(Producto);
