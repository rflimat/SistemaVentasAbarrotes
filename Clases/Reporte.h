#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Converter.h"
using namespace std;
using namespace System;
using namespace System::Data;

public class Reporte {
private:
	int numeroReporte;
	int mesReporte;
	int anioReporte;
	float activos;
	float pasivos;
	float ganancias;
public:
	Reporte();
	void generarReporte(int, int, int, float, float, float);
	void exportarReporte();
};
Reporte::Reporte() {

}

void Reporte::generarReporte(int nr, int mr, int ar, float a, float p, float g){
	numeroReporte = nr;
	mesReporte = mr;
	anioReporte = ar;
	activos = a;
	pasivos = p;
	ganancias = g;
}

void Reporte::exportarReporte() {
	ofstream archivo;
	string nomarchivo = "../Reportes/"+IntToString(numeroReporte) + ".txt";
	archivo.open(nomarchivo, ios::app);
	archivo << left;
	archivo << setw(25) << "Numero Reporte";
	archivo << setw(25) << "Mes Reporte";
	archivo << setw(25) << "Anio Reporte";
	archivo << setw(25) << "Activos";
	archivo << setw(25) << "Pasivos";
	archivo << setw(25) << "Ganancias";
	archivo << endl;
	archivo <<left;
	archivo << setw(25) << numeroReporte;
	archivo << setw(25) << mesReporte;
	archivo << setw(25) << anioReporte;
	archivo << setw(25) << activos;
	archivo << setw(25) << pasivos;
	archivo << setw(25) << ganancias;
	archivo << endl;
	archivo.close();
}
