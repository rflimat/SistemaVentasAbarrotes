#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Pedido_Venta
{
private:
	char numeroPedido[12];
	char fechaPedido[10];
	float totalPedido;
	int codigoCliente;
	int codigoEmpleado;

public:
	Pedido_Venta();
	char* getnumeroPedidoVenta();
	void registrarPedidoVenta(String^, String^, float, int, int);
	bool buscarPedidoVenta(String^);
	void verPedidoVenta(DataTable^);
};

Pedido_Venta::Pedido_Venta() {

}

char* Pedido_Venta::getnumeroPedidoVenta() {
	return numeroPedido;
}

void Pedido_Venta::registrarPedidoVenta(String^ n, String^ fp, float tp, int codc, int codv) {
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
	totalPedido = tp;
	codigoCliente = codc;
	codigoEmpleado = codv;
}

void Pedido_Venta::verPedidoVenta(DataTable^ dt){
	DataRow^ fila = dt->NewRow();
	fila["Numero Pedido"] = gcnew String(convertToString(numeroPedido, sizeof(numeroPedido)).c_str());
	fila["Fecha Pedido"] = Convert::ToDateTime(gcnew String(convertToString(fechaPedido, sizeof(fechaPedido)).c_str())).ToString("dd/MM/yyyy");
	fila["Total"] = Convert::ToDecimal(totalPedido);
	fila["Cliente"] = codigoCliente;
	fila["Vendedor"] = codigoEmpleado;
	dt->Rows->Add(fila);
}

bool Pedido_Venta::buscarPedidoVenta(String^ num) {
	if (gcnew String(convertToString(numeroPedido, sizeof(numeroPedido)).c_str()) == num) {
		return true;
	}
	else {
		return false;
	}
}


int SIZEPEDIDO_VENTA = sizeof(Pedido_Venta);