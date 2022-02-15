#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

class Detalle_Comprobante_Pago {
private:
	char descripcionProducto[50];
	int cantidadProducto;
	float precioUnitProducto;
	float importeProducto;
	char numeroComPago[14];
public:
	Detalle_Comprobante_Pago();
	void registrarDetalleComPago(String^, int, float, float, String^);
	bool buscarDetalleComPago(String^);
	void verDetalleComPago(DataTable^);
};

Detalle_Comprobante_Pago::Detalle_Comprobante_Pago() {

}
void Detalle_Comprobante_Pago::registrarDetalleComPago(String^ d, int c, float pu, float im, String^ n) {
	if (d->Length < sizeof(descripcionProducto))
	{
		for (int i = 0; i < d->Length; i++)
			descripcionProducto[i] = static_cast<char>(d[i]);
		descripcionProducto[d->Length] = '%';
	}

	cantidadProducto = c;
	precioUnitProducto = pu;
	importeProducto = im;

	if (n->Length <= sizeof(numeroComPago))
	{
		for (int i = 0; i < n->Length; i++)
			numeroComPago[i] = static_cast<char>(n[i]);
	}
}

bool Detalle_Comprobante_Pago::buscarDetalleComPago(String^ num) {
	if (gcnew String(convertToString(numeroComPago, sizeof(numeroComPago)).c_str()) == num) {
		return true;
	}
	else {
		return false;
	}
}

void Detalle_Comprobante_Pago::verDetalleComPago(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Descripcion"] = gcnew String(convertToString(descripcionProducto, sizeof(descripcionProducto)).c_str());
	fila["Precio Unitario"] = Convert::ToDecimal(precioUnitProducto);
	fila["Cantidad"] = cantidadProducto;
	fila["Importe"] = Convert::ToDecimal(importeProducto);
	dt->Rows->Add(fila);
}

int SIZEDETALLE_COMPROBANTE_PAGO = sizeof(Detalle_Comprobante_Pago);
