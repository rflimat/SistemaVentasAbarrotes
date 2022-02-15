#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Detalle_Pedido_Venta
{
private:
	char descripcionProducto[50];
	int cantidadProducto;
	float precioUnitProducto;
	float importeProducto;
	char numeroPedido[12];
	int numeroProducto;
public:
	Detalle_Pedido_Venta();
	void registrarDetallePedidoVenta(String^, int, float, float, String^, int);
	bool buscarDetallePedidoVenta(String^);
	void verDetallePedidoVenta(DataTable^);
};

Detalle_Pedido_Venta::Detalle_Pedido_Venta() {

}

void Detalle_Pedido_Venta::registrarDetallePedidoVenta(String^ d, int c, float pu, float im, String^ n, int nump) {
	if (d->Length < sizeof(descripcionProducto))
	{
		for (int i = 0; i < d->Length; i++)
			descripcionProducto[i] = static_cast<char>(d[i]);
		descripcionProducto[d->Length] = '%';
	}
	
	cantidadProducto = c;
	precioUnitProducto = pu;
	importeProducto = im;

	if (n->Length <= sizeof(numeroPedido))
	{
		for (int i = 0; i < n->Length; i++)
			numeroPedido[i] = static_cast<char>(n[i]);
	}

	numeroProducto = nump;
}

bool Detalle_Pedido_Venta::buscarDetallePedidoVenta(String^ num) {
	if (gcnew String(convertToString(numeroPedido, sizeof(numeroPedido)).c_str()) == num) {
		return true;
	}
	else {
		return false;
	}
}

void Detalle_Pedido_Venta::verDetallePedidoVenta(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Numero"] = numeroProducto;
	fila["Descripcion"] = gcnew String(convertToString(descripcionProducto, sizeof(descripcionProducto)).c_str());
	fila["Precio Unitario"] = Convert::ToDecimal(precioUnitProducto);
	fila["Cantidad"] = cantidadProducto;
	fila["Importe"] = Convert::ToDecimal(importeProducto);
	dt->Rows->Add(fila);
}

int SIZEDETALLE_PEDIDO_VENTA = sizeof(Detalle_Pedido_Venta);