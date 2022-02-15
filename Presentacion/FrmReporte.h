#pragma once
#include <iostream>
#include <fstream>
#include "../Clases/Reporte.h"
#include "../Clases/Comprobante_Pago.h"
using namespace std;
namespace Presentacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmReporte
	/// </summary>
	public ref class FrmReporte : public System::Windows::Forms::Form
	{
	public:
		FrmReporte(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmReporte()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;

	protected:


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtActivos;
	private: System::Windows::Forms::Button^ btnExportar;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtTotal;

	private: System::Windows::Forms::TextBox^ txtPasivos;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::ComboBox^ cboMesReporte;
	private: System::Windows::Forms::TextBox^ txtAnioReporte;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtNumReporte;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->cboMesReporte = (gcnew System::Windows::Forms::ComboBox());
			this->txtAnioReporte = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnExportar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtPasivos = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtActivos = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNumReporte = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnBuscar);
			this->groupBox1->Controls->Add(this->cboMesReporte);
			this->groupBox1->Controls->Add(this->txtAnioReporte);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(30, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(400, 191);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingresar Mes y Año";
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(133, 135);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(113, 35);
			this->btnBuscar->TabIndex = 22;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &FrmReporte::btnBuscar_Click);
			// 
			// cboMesReporte
			// 
			this->cboMesReporte->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboMesReporte->FormattingEnabled = true;
			this->cboMesReporte->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Enero", L"Febrero", L"Marzo", L"Abril", L"Mayo",
					L"Junio", L"Julio", L"Agosto", L"Septiembre", L"Octubre", L"Noviembre", L"Diciembre"
			});
			this->cboMesReporte->Location = System::Drawing::Point(104, 37);
			this->cboMesReporte->Name = L"cboMesReporte";
			this->cboMesReporte->Size = System::Drawing::Size(164, 28);
			this->cboMesReporte->TabIndex = 20;
			// 
			// txtAnioReporte
			// 
			this->txtAnioReporte->Location = System::Drawing::Point(103, 81);
			this->txtAnioReporte->Name = L"txtAnioReporte";
			this->txtAnioReporte->Size = System::Drawing::Size(130, 26);
			this->txtAnioReporte->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Año:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Mes:";
			// 
			// btnExportar
			// 
			this->btnExportar->Location = System::Drawing::Point(133, 242);
			this->btnExportar->Name = L"btnExportar";
			this->btnExportar->Size = System::Drawing::Size(113, 35);
			this->btnExportar->TabIndex = 16;
			this->btnExportar->Text = L"Exportar";
			this->btnExportar->UseVisualStyleBackColor = true;
			this->btnExportar->Click += gcnew System::EventHandler(this, &FrmReporte::btnExportar_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Pasivos:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Total:";
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(103, 185);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(171, 26);
			this->txtTotal->TabIndex = 7;
			this->txtTotal->Text = L"0.00";
			// 
			// txtPasivos
			// 
			this->txtPasivos->Location = System::Drawing::Point(103, 140);
			this->txtPasivos->Name = L"txtPasivos";
			this->txtPasivos->Size = System::Drawing::Size(171, 26);
			this->txtPasivos->TabIndex = 6;
			this->txtPasivos->Text = L"0.00";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Activos:";
			// 
			// txtActivos
			// 
			this->txtActivos->Location = System::Drawing::Point(102, 96);
			this->txtActivos->Name = L"txtActivos";
			this->txtActivos->Size = System::Drawing::Size(171, 26);
			this->txtActivos->TabIndex = 17;
			this->txtActivos->Text = L"0.00";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->txtNumReporte);
			this->groupBox2->Controls->Add(this->txtActivos);
			this->groupBox2->Controls->Add(this->txtTotal);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->txtPasivos);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->btnExportar);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(30, 241);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(400, 308);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Información de Reporte";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(179, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 20);
			this->label9->TabIndex = 2;
			this->label9->Text = L"N° Reporte:";
			// 
			// txtNumReporte
			// 
			this->txtNumReporte->Enabled = false;
			this->txtNumReporte->Location = System::Drawing::Point(278, 51);
			this->txtNumReporte->Name = L"txtNumReporte";
			this->txtNumReporte->Size = System::Drawing::Size(100, 26);
			this->txtNumReporte->TabIndex = 0;
			// 
			// FrmReporte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1284, 561);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmReporte";
			this->Text = L"FrmReporte";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void limpiar() {
	txtAnioReporte->Clear();
	txtNumReporte->Clear();
	txtActivos->Text = "0.00";
	txtPasivos->Text = "0.00";
	txtTotal->Text = "0.00";
}

private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	Comprobante_Pago comprobante_pago;
	fstream archivo;
	String^ mes;
	String^ anio;
	DateTime^ fecha;

	DataTable^ dtpp = gcnew DataTable();
	dtpp->Columns->Add("Numero", System::Type::GetType("System.String"));
	dtpp->Columns->Add("Fecha", System::Type::GetType("System.DateTime"));
	dtpp->Columns->Add("Total", System::Type::GetType("System.Decimal"));
	dtpp->Columns->Add("Pedido", System::Type::GetType("System.String"));

	archivo.open("../Archivos/comprobante_pago.dat", ios::in | ios::binary);
	archivo.read((char*)&comprobante_pago, SIZECOMPROBANTE_PAGO);
	int cuantos = archivo.gcount();

	txtNumReporte->Text = txtAnioReporte->Text + Convert::ToString(Convert::ToInt32(cboMesReporte->SelectedIndex) + 1);

	while (cuantos == SIZECOMPROBANTE_PAGO) {
		fecha = Convert::ToDateTime(comprobante_pago.getFechaComPago());
		mes = fecha->ToString("dd");
		anio = fecha->ToString("yyyy");
		if (Convert::ToInt32(mes) == Convert::ToInt32(cboMesReporte->SelectedIndex)+1 && anio == txtAnioReporte->Text) {
			float activos = (float)Convert::ToDecimal(txtActivos->Text);
			float totalCom = comprobante_pago.getTotalComPago();
			txtActivos->Text = Convert::ToString(activos+totalCom);
		}
		archivo.read((char*)&comprobante_pago, SIZECOMPROBANTE_PAGO);
		cuantos = archivo.gcount();
	}

	float activos = (float)Convert::ToDecimal(txtActivos->Text);
	txtPasivos->Text = Convert::ToString(activos*0.18);
	txtTotal->Text = Convert::ToString(activos - activos* 0.18);

	archivo.close();
}
private: System::Void btnExportar_Click(System::Object^ sender, System::EventArgs^ e) {
	Reporte reporte;
	reporte.generarReporte(Convert::ToInt32(txtNumReporte->Text),Convert::ToInt32(cboMesReporte->SelectedIndex)+1,Convert::ToInt32(txtAnioReporte->Text),(float)Convert::ToDecimal(txtActivos->Text), (float)Convert::ToDecimal(txtPasivos->Text), (float)Convert::ToDecimal(txtTotal->Text));
	reporte.exportarReporte();
	MessageBox::Show("Se exporto el reporte correctamente");
	limpiar();
}
};
}
