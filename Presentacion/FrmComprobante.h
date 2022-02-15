#pragma once
#include <iostream>
#include <fstream>
#include "../Clases/Vendedor.h"
#include "../Clases/Cliente.h"
#include "../Clases/Producto.h"
#include "../Clases/Pedido_Venta.h"
#include "../Clases/Detalle_Pedido_Venta.h"
#include "../Clases/Comprobante_Pago.h"
#include "../Clases/Detalle_Comprobante_Pago.h"
using namespace std;

namespace Presentacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmComprobante
	/// </summary>
	public ref class FrmComprobante : public System::Windows::Forms::Form
	{
	public:
		DataTable^ dtp = gcnew DataTable();
		FrmComprobante(void)
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
		~FrmComprobante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBuscarPedido;
	protected:
	private: System::Windows::Forms::TextBox^ txtBuscarPedido;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dgvProductos;







	private: System::Windows::Forms::TextBox^ txtTotal;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtDireccionCliente;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DateTimePicker^ dtpComPago;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cboVendedor;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ txtNombreCliente;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtDNICliente;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtBuscarComprobante;

	private: System::Windows::Forms::Button^ btnBuscarComprobante;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ lblComprobantePago;



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
			this->btnBuscarPedido = (gcnew System::Windows::Forms::Button());
			this->txtBuscarPedido = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblComprobantePago = (gcnew System::Windows::Forms::Label());
			this->dgvProductos = (gcnew System::Windows::Forms::DataGridView());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtDireccionCliente = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dtpComPago = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cboVendedor = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNombreCliente = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDNICliente = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBuscarComprobante = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarComprobante = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductos))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnBuscarPedido
			// 
			this->btnBuscarPedido->Location = System::Drawing::Point(349, 34);
			this->btnBuscarPedido->Name = L"btnBuscarPedido";
			this->btnBuscarPedido->Size = System::Drawing::Size(159, 35);
			this->btnBuscarPedido->TabIndex = 2;
			this->btnBuscarPedido->Text = L"Buscar Pedido";
			this->btnBuscarPedido->UseVisualStyleBackColor = true;
			this->btnBuscarPedido->Click += gcnew System::EventHandler(this, &FrmComprobante::btnBuscarPedido_Click);
			// 
			// txtBuscarPedido
			// 
			this->txtBuscarPedido->Location = System::Drawing::Point(138, 38);
			this->txtBuscarPedido->Name = L"txtBuscarPedido";
			this->txtBuscarPedido->Size = System::Drawing::Size(196, 26);
			this->txtBuscarPedido->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N° de Pedido: ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(61, 44);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(155, 20);
			this->label11->TabIndex = 1;
			this->label11->Text = L"RUC : 10001631234";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(32, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(209, 20);
			this->label10->TabIndex = 0;
			this->label10->Text = L"COMPROBANTE DE PAGO";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->btnRegistrar);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->btnCancelar);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->dgvProductos);
			this->groupBox2->Controls->Add(this->txtTotal);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->txtDireccionCliente);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->dtpComPago);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->cboVendedor);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->txtNombreCliente);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtDNICliente);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(22, 75);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1065, 627);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(201, 92);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 20);
			this->label15->TabIndex = 21;
			this->label15->Text = L"TACNA - PERU";
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(352, 565);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(113, 35);
			this->btnRegistrar->TabIndex = 23;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &FrmComprobante::btnRegistrar_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(201, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Mercado Grau";
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(490, 565);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(113, 35);
			this->btnCancelar->TabIndex = 22;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &FrmComprobante::btnCancelar_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(191, -19);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 20);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Mercado Grau";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(132, 42);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(251, 25);
			this->label13->TabIndex = 3;
			this->label13->Text = L"TIENDA DOÑA MARTA";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblComprobantePago);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Location = System::Drawing::Point(672, 25);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(272, 107);
			this->groupBox3->TabIndex = 18;
			this->groupBox3->TabStop = false;
			// 
			// lblComprobantePago
			// 
			this->lblComprobantePago->AutoSize = true;
			this->lblComprobantePago->Location = System::Drawing::Point(72, 67);
			this->lblComprobantePago->Name = L"lblComprobantePago";
			this->lblComprobantePago->Size = System::Drawing::Size(135, 20);
			this->lblComprobantePago->TabIndex = 2;
			this->lblComprobantePago->Text = L"BE01-000000000";
			// 
			// dgvProductos
			// 
			this->dgvProductos->AllowUserToAddRows = false;
			this->dgvProductos->AllowUserToDeleteRows = false;
			this->dgvProductos->AllowUserToOrderColumns = true;
			this->dgvProductos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProductos->Location = System::Drawing::Point(38, 275);
			this->dgvProductos->Name = L"dgvProductos";
			this->dgvProductos->ReadOnly = true;
			this->dgvProductos->Size = System::Drawing::Size(943, 213);
			this->dgvProductos->TabIndex = 15;
			// 
			// txtTotal
			// 
			this->txtTotal->Enabled = false;
			this->txtTotal->Location = System::Drawing::Point(831, 510);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(150, 26);
			this->txtTotal->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(744, 513);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Total (S/.):";
			// 
			// txtDireccionCliente
			// 
			this->txtDireccionCliente->Location = System::Drawing::Point(679, 184);
			this->txtDireccionCliente->Name = L"txtDireccionCliente";
			this->txtDireccionCliente->Size = System::Drawing::Size(302, 26);
			this->txtDireccionCliente->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(594, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Dirección:";
			// 
			// dtpComPago
			// 
			this->dtpComPago->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpComPago->Location = System::Drawing::Point(679, 150);
			this->dtpComPago->Name = L"dtpComPago";
			this->dtpComPago->Size = System::Drawing::Size(220, 26);
			this->dtpComPago->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(594, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Fecha:";
			// 
			// cboVendedor
			// 
			this->cboVendedor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboVendedor->FormattingEnabled = true;
			this->cboVendedor->Location = System::Drawing::Point(137, 216);
			this->cboVendedor->Name = L"cboVendedor";
			this->cboVendedor->Size = System::Drawing::Size(270, 28);
			this->cboVendedor->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Vendedor:";
			// 
			// txtNombreCliente
			// 
			this->txtNombreCliente->Enabled = false;
			this->txtNombreCliente->Location = System::Drawing::Point(137, 184);
			this->txtNombreCliente->Name = L"txtNombreCliente";
			this->txtNombreCliente->Size = System::Drawing::Size(270, 26);
			this->txtNombreCliente->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Nombre:";
			// 
			// txtDNICliente
			// 
			this->txtDNICliente->Location = System::Drawing::Point(137, 152);
			this->txtDNICliente->Name = L"txtDNICliente";
			this->txtDNICliente->Size = System::Drawing::Size(189, 26);
			this->txtDNICliente->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"DNI:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtBuscarComprobante);
			this->groupBox1->Controls->Add(this->btnBuscarComprobante);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->btnBuscarPedido);
			this->groupBox1->Controls->Add(this->txtBuscarPedido);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(70, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1128, 727);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Registrar Comprobante de Pago";
			// 
			// txtBuscarComprobante
			// 
			this->txtBuscarComprobante->Location = System::Drawing::Point(701, 38);
			this->txtBuscarComprobante->Name = L"txtBuscarComprobante";
			this->txtBuscarComprobante->Size = System::Drawing::Size(196, 26);
			this->txtBuscarComprobante->TabIndex = 7;
			// 
			// btnBuscarComprobante
			// 
			this->btnBuscarComprobante->Location = System::Drawing::Point(917, 34);
			this->btnBuscarComprobante->Name = L"btnBuscarComprobante";
			this->btnBuscarComprobante->Size = System::Drawing::Size(170, 35);
			this->btnBuscarComprobante->TabIndex = 6;
			this->btnBuscarComprobante->Text = L"Buscar Comprobante";
			this->btnBuscarComprobante->UseVisualStyleBackColor = true;
			this->btnBuscarComprobante->Click += gcnew System::EventHandler(this, &FrmComprobante::btnBuscarComprobante_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(539, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 20);
			this->label8->TabIndex = 4;
			this->label8->Text = L"N° de Comprobante: ";
			// 
			// FrmComprobante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1268, 788);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmComprobante";
			this->Text = L"FrmComprobante";
			this->Load += gcnew System::EventHandler(this, &FrmComprobante::FrmComprobante_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductos))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void limpiar() {
	txtDNICliente->Clear();
	txtNombreCliente->Clear();
	txtDireccionCliente->Clear();
	dtp->Clear();
	txtTotal->Text = "0.00";
	lblComprobantePago->Text = "BE01-"+(cantidadRegistros() + 1).ToString("000000000");
	txtBuscarPedido->Clear();
	txtBuscarComprobante->Clear();

	txtBuscarPedido->Enabled = true;
	txtBuscarComprobante->Enabled = true;
	btnBuscarPedido->Enabled = true;
	btnBuscarComprobante->Enabled = true;
	cboVendedor->Enabled = true;
	txtDNICliente->Enabled = true;
	txtDireccionCliente->Enabled = true;
	dgvProductos->Enabled = true;
	btnRegistrar->Enabled = true;
}

private: System::Void desactivar() {
	txtBuscarPedido->Enabled = false;
	txtBuscarComprobante->Enabled = false;
	btnBuscarPedido->Enabled = false;
	btnBuscarComprobante->Enabled = false;
	cboVendedor->Enabled = false;
	txtDNICliente->Enabled = false;
	txtDireccionCliente->Enabled = false;
	txtNombreCliente->Enabled = false;
}

private: System::Void encontrarCliente(Int32 cod) {
	Cliente cliente;
	fstream archivo;

	archivo.open("../Archivos/cliente.dat", ios::in | ios::binary);
	archivo.read((char*)&cliente, SIZECLIENTE);
	int cuantos = archivo.gcount();

	while (cuantos == SIZECLIENTE) {
		if (cliente.getCodigoCliente() > 0 && cliente.getCodigoCliente() == cod) {
			txtDNICliente->Text = cliente.getDNICliente();
			txtNombreCliente->Text = cliente.getNombreCliente();
			txtDireccionCliente->Text = cliente.getDireccionCliente();
			break;
		}
		archivo.read((char*)&cliente, SIZECLIENTE);
		cuantos = archivo.gcount();
	}

	archivo.close();
}

private: System::Void cargarVendedor() {
	Vendedor vendedor;
	fstream archivo;
	DataTable^ dt = gcnew DataTable();

	archivo.open("../Archivos/vendedor.dat", ios::in | ios::binary);
	archivo.read((char*)&vendedor, SIZEVENDEDOR);
	int cuantos = archivo.gcount();

	dt->Columns->Add("Codigo", System::Type::GetType("System.Int32"));
	dt->Columns->Add("Nombre", System::Type::GetType("System.String"));
	cboVendedor->DataSource = dt;

	while (cuantos == SIZEVENDEDOR) {
		if (vendedor.getCodigoVendedor() > 0) {
			vendedor.seleccionarVendedor(dt);
		}
		archivo.read((char*)&vendedor, SIZEVENDEDOR);
		cuantos = archivo.gcount();
	}

	cboVendedor->ValueMember = "Codigo";
	cboVendedor->DisplayMember = "Nombre";

	archivo.close();
}

private: System::Void tablaProductos() {
	dtp->Columns->Add("Numero", System::Type::GetType("System.Int32"));
	dtp->Columns->Add("Descripcion", System::Type::GetType("System.String"));
	dtp->Columns->Add("Precio Unitario", System::Type::GetType("System.Decimal"));
	dtp->Columns->Add("Stock", System::Type::GetType("System.Int32"));
	dtp->Columns->Add("Cantidad", System::Type::GetType("System.Int32"));
	dtp->Columns->Add("Importe", System::Type::GetType("System.Decimal"));
	dgvProductos->DataSource = dtp;
	dgvProductos->Columns[0]->Visible = false;
	dgvProductos->Columns[1]->Width = 350;
	dgvProductos->Columns[2]->Width = 200;
	dgvProductos->Columns[3]->Visible = false;
	dgvProductos->Columns[4]->Width = 100;
	dgvProductos->Columns[5]->Width = 200;
}

private: System::Void buscarPedido(String^ numPedido,Int32 det) {
	desactivar();

	Pedido_Venta pedido_venta;
	Detalle_Pedido_Venta detalle_pedido_venta;
	fstream archivo;
	String^ numeroPedido;

	DataTable^ dtpp = gcnew DataTable();
	dtpp->Columns->Add("Numero Pedido", System::Type::GetType("System.String"));
	dtpp->Columns->Add("Fecha Pedido", System::Type::GetType("System.DateTime"));
	dtpp->Columns->Add("Total", System::Type::GetType("System.Decimal"));
	dtpp->Columns->Add("Cliente", System::Type::GetType("System.Int32"));
	dtpp->Columns->Add("Vendedor", System::Type::GetType("System.Int32"));

	archivo.open("../Archivos/pedido_venta.dat", ios::in | ios::binary);
	archivo.read((char*)&pedido_venta, SIZEPEDIDO_VENTA);
	int cuantos = archivo.gcount();

	while (cuantos == SIZEPEDIDO_VENTA) {
		if (pedido_venta.buscarPedidoVenta(numPedido)) {
			pedido_venta.verPedidoVenta(dtpp);
			numeroPedido = Convert::ToString(dtpp->Rows[0]["Numero Pedido"]);
			if (det == 0) {
				dtpComPago->Text = Convert::ToString(dtpp->Rows[0]["Fecha Pedido"]);
				txtTotal->Text = Convert::ToString(dtpp->Rows[0]["Total"]);
			}
			int codCliente = Convert::ToInt32(dtpp->Rows[0]["Cliente"]);
			encontrarCliente(codCliente);
			cboVendedor->SelectedValue = Convert::ToInt32(dtpp->Rows[0]["Vendedor"]);
			break;
		}
		archivo.read((char*)&pedido_venta, SIZEPEDIDO_VENTA);
		cuantos = archivo.gcount();
	}
	archivo.close();

	if (det == 0) {
		archivo.open("../Archivos/detalle_pedido_venta.dat", ios::in | ios::binary);
		archivo.read((char*)&detalle_pedido_venta, SIZEDETALLE_PEDIDO_VENTA);
		cuantos = archivo.gcount();

		while (cuantos == SIZEDETALLE_PEDIDO_VENTA) {
			if (detalle_pedido_venta.buscarDetallePedidoVenta(numeroPedido)) {
				detalle_pedido_venta.verDetallePedidoVenta(dtp);
			}
			archivo.read((char*)&detalle_pedido_venta, SIZEDETALLE_PEDIDO_VENTA);
			cuantos = archivo.gcount();
		}
		archivo.close();
	}
}

private: System::Int32 cantidadRegistros() {
	fstream archivo;
	archivo.open("../Archivos/comprobante_pago.dat", ios::in | ios::out | ios::binary);
	archivo.seekg(0, ios::end);
	int pos = archivo.tellg();
	int numReg = pos / SIZECOMPROBANTE_PAGO;
	archivo.close();
	return numReg;
}

private: System::Void btnBuscarPedido_Click(System::Object^ sender, System::EventArgs^ e) {
	buscarPedido(txtBuscarPedido->Text,0);
}

private: System::Void FrmComprobante_Load(System::Object^ sender, System::EventArgs^ e) {
	lblComprobantePago->Text = "BE01-" + (cantidadRegistros() + 1).ToString("000000000");
	cargarVendedor();
	tablaProductos();
}

private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	Comprobante_Pago comprobante_pago;
	Detalle_Comprobante_Pago detalle_comprobante_pago;
	fstream archivo;

	archivo.open("../Archivos/comprobante_pago.dat", ios::app | ios::binary);
	comprobante_pago.registrarComPago(lblComprobantePago->Text, dtpComPago->Value.ToString("dd/MM/yyyy"), (float)Convert::ToDecimal(txtTotal->Text), txtBuscarPedido->Text);
	archivo.write((char*)&comprobante_pago, SIZECOMPROBANTE_PAGO);
	archivo.close();

	archivo.open("../Archivos/detalle_comprobante_pago.dat", ios::app | ios::binary);
	for each (DataRow ^ FilaTemp in dtp->Rows)
	{
		String^ descripcion = Convert::ToString(FilaTemp["Descripcion"]);
		int cantidad = Convert::ToInt32(FilaTemp["Cantidad"]);
		float preciounit = (float)Convert::ToDecimal(FilaTemp["Precio Unitario"]);
		float importe = (float)Convert::ToDecimal(FilaTemp["Importe"]);
		detalle_comprobante_pago.registrarDetalleComPago(descripcion, cantidad, preciounit, importe, lblComprobantePago->Text);
		archivo.write((char*)&detalle_comprobante_pago, SIZEDETALLE_PEDIDO_VENTA);
	}

	MessageBox::Show("Registro exitoso");
	archivo.close();
	limpiar();
}

private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	limpiar();
}

private: System::Void btnBuscarComprobante_Click(System::Object^ sender, System::EventArgs^ e) {
	desactivar();

	Comprobante_Pago comprobante_pago;
	Detalle_Comprobante_Pago detalle_comprobante_pago;
	fstream archivo;
	String^ numeroPedido;

	DataTable^ dtpp = gcnew DataTable();
	dtpp->Columns->Add("Numero", System::Type::GetType("System.String"));
	dtpp->Columns->Add("Fecha", System::Type::GetType("System.DateTime"));
	dtpp->Columns->Add("Total", System::Type::GetType("System.Decimal"));
	dtpp->Columns->Add("Pedido", System::Type::GetType("System.String"));

	archivo.open("../Archivos/comprobante_pago.dat", ios::in | ios::binary);
	archivo.read((char*)&comprobante_pago, SIZECOMPROBANTE_PAGO);
	int cuantos = archivo.gcount();

	while (cuantos == SIZECOMPROBANTE_PAGO) {
		if (comprobante_pago.buscarComPago(txtBuscarComprobante->Text)) {
			comprobante_pago.verComPago(dtpp);
			lblComprobantePago->Text = Convert::ToString(dtpp->Rows[0]["Numero"]);
			dtpComPago->Text = Convert::ToString(dtpp->Rows[0]["Fecha"]);
			txtTotal->Text = Convert::ToString(dtpp->Rows[0]["Total"]);
			numeroPedido = Convert::ToString(dtpp->Rows[0]["Pedido"]);
			buscarPedido(numeroPedido,1);
			break;
		}
		archivo.read((char*)&comprobante_pago, SIZECOMPROBANTE_PAGO);
		cuantos = archivo.gcount();
	}
	archivo.close();

	archivo.open("../Archivos/detalle_comprobante_pago.dat", ios::in | ios::binary);
	archivo.read((char*)&detalle_comprobante_pago, SIZEDETALLE_COMPROBANTE_PAGO);
	cuantos = archivo.gcount();

	while (cuantos == SIZEDETALLE_COMPROBANTE_PAGO) {
		if (detalle_comprobante_pago.buscarDetalleComPago(lblComprobantePago->Text)) {
			detalle_comprobante_pago.verDetalleComPago(dtp);
		}
		archivo.read((char*)&detalle_comprobante_pago, SIZEDETALLE_COMPROBANTE_PAGO);
		cuantos = archivo.gcount();
	}
	archivo.close();
}
};
}
