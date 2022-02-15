#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Pedido_Proveedor
{
private:
	char numeroPedido[12];
	char fechaPedido[10];
	char fechaLlegada[10];
	float totalPedido;
	int codigoProveedor;

public:
	Pedido_Proveedor();
	char* getnumeroPedidoProveedor();
	void registrarPedidoProveedor(String^, String^, String^, float, int);
	bool buscarPedidoProveedor(String^);
	void verPedidoProveedor(DataTable^);
};

Pedido_Proveedor::Pedido_Proveedor() {

}

char* Pedido_Proveedor::getnumeroPedidoProveedor() {
	return numeroPedido;
}

void Pedido_Proveedor::registrarPedidoProveedor(String^ n, String^ fp, String^ fl, float tp, int codp) {
	if (n->Length <= sizeof(numeroPedido))
	{
		for (int i = 0; i < n->Length; i++)
			numeroPedido[i] = static_cast<char>(n[i]);
	}
	if (fp->Length <= sizeof(fechaPedido))
	{
		for (int i = 0; i < fp->Length; i++)
			fechaPedido[i] = static_cast<char>(fp[i]);
	}
	if (fl->Length <= sizeof(fechaLlegada))
	{
		for (int i = 0; i < fl->Length; i++)
			fechaLlegada[i] = static_cast<char>(fl[i]);
	}
	totalPedido = tp;
	codigoProveedor = codp;
}

void Pedido_Proveedor::verPedidoProveedor(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Numero Pedido"] = gcnew String(convertToString(numeroPedido, sizeof(numeroPedido)).c_str());
	fila["Fecha Pedido"] = Convert::ToDateTime(gcnew String(convertToString(fechaPedido, sizeof(fechaPedido)).c_str())).ToString("dd/MM/yyyy");
	fila["Fecha Llegada"] = Convert::ToDateTime(gcnew String(convertToString(fechaLlegada, sizeof(fechaLlegada)).c_str())).ToString("dd/MM/yyyy");
	fila["Total"] = Convert::ToDecimal(totalPedido);
	fila["Proveedor"] = codigoProveedor;
	dt->Rows->Add(fila);
}

bool Pedido_Proveedor::buscarPedidoProveedor(String^ num) {
	if (gcnew String(convertToString(numeroPedido, sizeof(numeroPedido)).c_str()) == num) {
		return true;
	}
	else {
		return false;
	}
}


int SIZEPEDIDO_PROVEEDOR = sizeof(Pedido_Proveedor);
