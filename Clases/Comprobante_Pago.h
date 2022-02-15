#pragma once
#include <iostream>
#include <string>
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Comprobante_Pago {
private:
	char numeroComPago[14];
	char fechaComPago[10];
	float totalComPago;
	char numeroPedido[12];
public:
	Comprobante_Pago();
	String^ getFechaComPago();
	float getTotalComPago();
	void registrarComPago(String^, String^, float, String^);
	bool buscarComPago(String^);
	void verComPago(DataTable^);
};

Comprobante_Pago::Comprobante_Pago() {

}

String^ Comprobante_Pago::getFechaComPago() {
	return gcnew String(convertToString(fechaComPago, sizeof(fechaComPago)).c_str());
}

float Comprobante_Pago::getTotalComPago() {
	return totalComPago;
}

void Comprobante_Pago::registrarComPago(String^ nc, String^ fc, float tc, String^ n) {
	if (nc->Length <= sizeof(numeroComPago))
	{
		for (int i = 0; i < nc->Length; i++)
			numeroComPago[i] = static_cast<char>(nc[i]);
	};
	
	if (fc->Length <= sizeof(fechaComPago))
	{
		for (int i = 0; i < fc->Length; i++)
			fechaComPago[i] = static_cast<char>(fc[i]);
	}
	
	totalComPago = tc;

	if (n->Length <= sizeof(numeroPedido))
	{
		for (int i = 0; i < n->Length; i++)
			numeroPedido[i] = static_cast<char>(n[i]);
	};
}

bool Comprobante_Pago::buscarComPago(String^ num) {
	if (gcnew String(convertToString(numeroComPago, sizeof(numeroComPago)).c_str()) == num) {
		return true;
	}
	else {
		return false;
	}
}

void Comprobante_Pago::verComPago(DataTable^ dt) {
	DataRow^ fila = dt->NewRow();
	fila["Numero"] = gcnew String(convertToString(numeroComPago, sizeof(numeroComPago)).c_str());
	fila["Fecha"] = Convert::ToDateTime(gcnew String(convertToString(fechaComPago, sizeof(fechaComPago)).c_str())).ToString("dd/MM/yyyy");
	fila["Total"] = Convert::ToDecimal(totalComPago);
	fila["Pedido"] = gcnew String(convertToString(numeroPedido, sizeof(numeroPedido)).c_str());
	dt->Rows->Add(fila);
}

int SIZECOMPROBANTE_PAGO = sizeof(Comprobante_Pago);
