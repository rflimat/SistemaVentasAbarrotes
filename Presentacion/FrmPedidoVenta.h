#pragma once
#include <iostream>
#include <fstream>
#include "../Clases/Vendedor.h"
#include "../Clases/Cliente.h"
#include "../Clases/Producto.h"
#include "../Clases/Pedido_Venta.h"
#include "../Clases/Detalle_Pedido_Venta.h"
using namespace std;

namespace Presentacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmPedidoVenta
	/// </summary>
	public ref class FrmPedidoVenta : public System::Windows::Forms::Form
	{
	public:
		DataTable^ dtp = gcnew DataTable();
		FrmPedidoVenta(void)
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
		~FrmPedidoVenta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label15;
	protected:
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btnAgregar;





	private: System::Windows::Forms::TextBox^ txtCodigoProducto;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::DataGridView^ dgvProductos;
	private: System::Windows::Forms::TextBox^ txtTotal;


	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::DateTimePicker^ dtpPedido;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnVerificar;



	private: System::Windows::Forms::TextBox^ txtNombreCliente;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ btnBuscarPedido;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ lblNumeroPedido;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtDireccionCliente;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cboVendedor;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtDNICliente;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtBuscarPedido;
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::TextBox^ txtCodigoCliente;



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
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtCodigoProducto = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dgvProductos = (gcnew System::Windows::Forms::DataGridView());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dtpPedido = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnVerificar = (gcnew System::Windows::Forms::Button());
			this->txtNombreCliente = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCodigoCliente = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblNumeroPedido = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtDireccionCliente = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cboVendedor = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDNICliente = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnBuscarPedido = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBuscarPedido = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductos))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(198, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 20);
			this->label15->TabIndex = 19;
			this->label15->Text = L"TACNA - PERU";
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
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(398, 30);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(102, 35);
			this->btnAgregar->TabIndex = 18;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &FrmPedidoVenta::btnAgregar_Click);
			// 
			// txtCodigoProducto
			// 
			this->txtCodigoProducto->Location = System::Drawing::Point(92, 34);
			this->txtCodigoProducto->Name = L"txtCodigoProducto";
			this->txtCodigoProducto->Size = System::Drawing::Size(270, 26);
			this->txtCodigoProducto->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Codigo:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(198, 71);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 20);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Mercado Grau";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnAgregar);
			this->groupBox4->Controls->Add(this->txtCodigoProducto);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Location = System::Drawing::Point(45, 261);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(943, 86);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Agregar Producto";
			// 
			// dgvProductos
			// 
			this->dgvProductos->AllowUserToAddRows = false;
			this->dgvProductos->AllowUserToDeleteRows = false;
			this->dgvProductos->AllowUserToOrderColumns = true;
			this->dgvProductos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProductos->Location = System::Drawing::Point(45, 365);
			this->dgvProductos->Name = L"dgvProductos";
			this->dgvProductos->Size = System::Drawing::Size(943, 213);
			this->dgvProductos->TabIndex = 15;
			this->dgvProductos->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FrmPedidoVenta::dgvProductos_CellEndEdit);
			// 
			// txtTotal
			// 
			this->txtTotal->Enabled = false;
			this->txtTotal->Location = System::Drawing::Point(838, 600);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(150, 26);
			this->txtTotal->TabIndex = 14;
			this->txtTotal->Text = L"0.00";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(751, 603);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Total (S/.):";
			// 
			// dtpPedido
			// 
			this->dtpPedido->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpPedido->Location = System::Drawing::Point(679, 150);
			this->dtpPedido->Name = L"dtpPedido";
			this->dtpPedido->Size = System::Drawing::Size(220, 26);
			this->dtpPedido->TabIndex = 10;
			this->dtpPedido->Value = System::DateTime(2022, 2, 10, 0, 0, 0, 0);
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
			// btnVerificar
			// 
			this->btnVerificar->Location = System::Drawing::Point(422, 148);
			this->btnVerificar->Name = L"btnVerificar";
			this->btnVerificar->Size = System::Drawing::Size(102, 35);
			this->btnVerificar->TabIndex = 4;
			this->btnVerificar->Text = L"Verificar";
			this->btnVerificar->UseVisualStyleBackColor = true;
			this->btnVerificar->Click += gcnew System::EventHandler(this, &FrmPedidoVenta::btnVerificar_Click);
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtCodigoCliente);
			this->groupBox2->Controls->Add(this->btnRegistrar);
			this->groupBox2->Controls->Add(this->btnCancelar);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->dgvProductos);
			this->groupBox2->Controls->Add(this->txtTotal);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->txtDireccionCliente);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->dtpPedido);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->cboVendedor);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->btnVerificar);
			this->groupBox2->Controls->Add(this->txtNombreCliente);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtDNICliente);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(19, 55);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1054, 689);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// txtCodigoCliente
			// 
			this->txtCodigoCliente->Enabled = false;
			this->txtCodigoCliente->Location = System::Drawing::Point(422, 184);
			this->txtCodigoCliente->Name = L"txtCodigoCliente";
			this->txtCodigoCliente->Size = System::Drawing::Size(52, 26);
			this->txtCodigoCliente->TabIndex = 22;
			this->txtCodigoCliente->Visible = false;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(401, 638);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(113, 35);
			this->btnRegistrar->TabIndex = 21;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &FrmPedidoVenta::btnRegistrar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(539, 638);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(113, 35);
			this->btnCancelar->TabIndex = 20;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &FrmPedidoVenta::btnCancelar_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblNumeroPedido);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Location = System::Drawing::Point(672, 25);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(272, 107);
			this->groupBox3->TabIndex = 18;
			this->groupBox3->TabStop = false;
			// 
			// lblNumeroPedido
			// 
			this->lblNumeroPedido->AutoSize = true;
			this->lblNumeroPedido->Location = System::Drawing::Point(61, 71);
			this->lblNumeroPedido->Name = L"lblNumeroPedido";
			this->lblNumeroPedido->Size = System::Drawing::Size(116, 20);
			this->lblNumeroPedido->TabIndex = 2;
			this->lblNumeroPedido->Text = L"PV-000000000";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(51, 46);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(155, 20);
			this->label11->TabIndex = 1;
			this->label11->Text = L"RUC : 10001631234";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(51, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(155, 20);
			this->label10->TabIndex = 0;
			this->label10->Text = L"PEDIDO DE VENTA";
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
			// btnBuscarPedido
			// 
			this->btnBuscarPedido->Location = System::Drawing::Point(512, 20);
			this->btnBuscarPedido->Name = L"btnBuscarPedido";
			this->btnBuscarPedido->Size = System::Drawing::Size(159, 35);
			this->btnBuscarPedido->TabIndex = 2;
			this->btnBuscarPedido->Text = L"Buscar Pedido";
			this->btnBuscarPedido->UseVisualStyleBackColor = true;
			this->btnBuscarPedido->Click += gcnew System::EventHandler(this, &FrmPedidoVenta::btnBuscarPedido_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numero de Pedido: ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->btnBuscarPedido);
			this->groupBox1->Controls->Add(this->txtBuscarPedido);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(70, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1128, 750);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Registrar Pedido Venta";
			// 
			// txtBuscarPedido
			// 
			this->txtBuscarPedido->Location = System::Drawing::Point(191, 23);
			this->txtBuscarPedido->Name = L"txtBuscarPedido";
			this->txtBuscarPedido->Size = System::Drawing::Size(302, 26);
			this->txtBuscarPedido->TabIndex = 1;
			// 
			// FrmPedidoVenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1268, 788);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmPedidoVenta";
			this->Text = L"FrmPedidoVenta";
			this->Load += gcnew System::EventHandler(this, &FrmPedidoVenta::FrmPedidoVenta_Load);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductos))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void limpiar() {
	txtDNICliente->Clear();
	txtNombreCliente->Clear();
	txtDireccionCliente->Clear();
	txtCodigoCliente->Clear();
	dtp->Clear();
	txtTotal->Text = "0.00";
	lblNumeroPedido->Text = (cantidadRegistros() + 1).ToString("PV-000000000");
	txtBuscarPedido->Clear();

	txtBuscarPedido->Enabled = true;
	cboVendedor->Enabled = true;
	dtpPedido->Enabled = true;
	txtDNICliente->Enabled = true;
	txtDireccionCliente->Enabled = true;
	txtCodigoProducto->Enabled = true;
	btnVerificar->Enabled = true;
	btnBuscarPedido->Enabled = true;
	btnAgregar->Enabled = true;
	dgvProductos->Enabled = true;
	btnRegistrar->Enabled = true;
}

private: System::Void desactivar() {
	txtBuscarPedido->Enabled = false;
	cboVendedor->Enabled = false;
	dtpPedido->Enabled = false;
	txtDNICliente->Enabled = false;
	txtDireccionCliente->Enabled = false;
	txtCodigoProducto->Enabled = false;
	btnVerificar->Enabled = false;
	btnBuscarPedido->Enabled = false;
	btnAgregar->Enabled = false;
	dgvProductos->Enabled = false;
	btnRegistrar->Enabled = false;
}

private: System::Int32 cantidadRegistros() {
	fstream archivo;
	archivo.open("../Archivos/pedido_venta.dat", ios::in | ios::out | ios::binary);
	archivo.seekg(0, ios::end);
	int pos = archivo.tellg();
	int numReg = pos / SIZEPEDIDO_VENTA;
	archivo.close();
	return numReg;
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

private: System::Void FrmPedidoVenta_Load(System::Object^ sender, System::EventArgs^ e) {
	lblNumeroPedido->Text = (cantidadRegistros() + 1).ToString("PV-000000000");
	cargarVendedor();
	tablaProductos();
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

private: System::Void encontrarCliente(Int32 cod) {
	Cliente cliente;
	fstream archivo;

	archivo.open("../Archivos/cliente.dat", ios::in | ios::binary);
	archivo.read((char*)&cliente, SIZECLIENTE);
	int cuantos = archivo.gcount();

	while (cuantos == SIZECLIENTE) {
		if (cliente.getCodigoCliente() > 0 && cliente.getCodigoCliente()==cod) {
			txtCodigoCliente->Text = Convert::ToString(cliente.getCodigoCliente());
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

private: System::Void btnVerificar_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente cliente;
	fstream archivo;

	archivo.open("../Archivos/cliente.dat", ios::in | ios::binary);
	archivo.read((char*)&cliente, SIZECLIENTE);
	int cuantos = archivo.gcount();

	bool find = false;
	while (cuantos == SIZECLIENTE) {
		if (cliente.buscarCliente(txtDNICliente->Text) && cliente.getCodigoCliente() > 0) {
			txtCodigoCliente->Text = Convert::ToString(cliente.getCodigoCliente());
			txtNombreCliente->Text = cliente.getNombreCliente();
			txtDireccionCliente->Text = cliente.getDireccionCliente();
			find = true;
			break;
		}
		archivo.read((char*)&cliente, SIZECLIENTE);
		cuantos = archivo.gcount();
	}

	if (find == false) {
		MessageBox::Show("El numero de DNI del cliente ingresado no existe");
	}

	archivo.close();
}

private: System::Void actualizarStock(Int32 num, Int32 cant) {
	Producto producto;
	fstream archivo;
	
	archivo.open("../Archivos/producto.dat", ios::in | ios::out | ios::binary);
	archivo.read((char*)&producto, SIZEPRODUCTO);
	int cuantos = archivo.gcount();

	while (cuantos == SIZEPRODUCTO) {
		if (producto.getNumeroProducto() > 0 && producto.getNumeroProducto()==num) {
			producto.reducirStockProducto(cant);
			archivo.seekg((num - 1) * SIZEPRODUCTO, ios::beg);
			archivo.write((char*)&producto, SIZEPRODUCTO);
			break;
		}
		archivo.read((char*)&producto, SIZEPRODUCTO);
		cuantos = archivo.gcount();
	}

	archivo.close();
}

private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	Producto producto;
	fstream archivo;
	
	float pu;
	int cant;

	archivo.open("../Archivos/producto.dat", ios::in | ios::binary);
	archivo.read((char*)&producto, SIZEPRODUCTO);
	int cuantos = archivo.gcount();

	bool find = false;
	while (cuantos == SIZEPRODUCTO) {
		if (producto.buscarProducto(txtCodigoProducto->Text) && producto.getNumeroProducto() > 0) {
			DataRow^ fila = dtp->NewRow();
			fila["Numero"] = producto.getNumeroProducto();
			fila["Descripcion"] = producto.getNombreProducto();
			pu = producto.getPrecioUnitario();
			fila["Precio Unitario"] = Convert::ToDecimal(pu);
			fila["Stock"] = producto.getStockProducto();
			cant = 1;
			fila["Cantidad"] = cant;
			fila["Importe"] = Convert::ToDecimal(pu*cant);
			dtp->Rows->Add(fila);
			float total = (float)Convert::ToDecimal(txtTotal->Text);
			txtTotal->Text = Convert::ToString(total + pu * cant);
			find = true;
			txtCodigoProducto->Clear();
			break;
		}
		archivo.read((char*)&producto, SIZEPRODUCTO);
		cuantos = archivo.gcount();
	}

	if (find == false) {
		MessageBox::Show("El codigo del producto ingresado no existe");
	}
	
	archivo.close();
}
private: System::Void dgvProductos_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	DataRow^ fila = (DataRow^) dtp->Rows[e->RowIndex];
	int stock = Convert::ToInt32(fila["Stock"]);
	int cant = Convert::ToInt32(fila["Cantidad"]);
	float pu = (float)Convert::ToDecimal(fila["Precio Unitario"]);
	if (cant > stock)
	{
		cant = stock;
		MessageBox::Show("La cantidad ingresada es mayor al stock de producto");
		fila["Cantidad"] =  cant;
	}
	float total = (float)Convert::ToDecimal(txtTotal->Text) - (float)Convert::ToDecimal(fila["Importe"]);
	txtTotal->Text = Convert::ToString(total);
	
	fila["Importe"] = Convert::ToDecimal(pu * cant);
	total = (float)Convert::ToDecimal(txtTotal->Text);
	txtTotal->Text = Convert::ToString(total + pu * cant);
}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	Pedido_Venta pedido_venta;
	Detalle_Pedido_Venta detalle_pedido_venta;
	fstream archivo;
	
	archivo.open("../Archivos/pedido_venta.dat", ios::app | ios::binary);
	pedido_venta.registrarPedidoVenta(lblNumeroPedido->Text, dtpPedido->Value.ToString("dd/MM/yyyy"), (float)Convert::ToDecimal(txtTotal->Text), Convert::ToInt32(txtCodigoCliente->Text), Convert::ToInt32(cboVendedor->SelectedValue));
	archivo.write((char*)&pedido_venta, SIZEPEDIDO_VENTA);
	archivo.close();

	archivo.open("../Archivos/detalle_pedido_venta.dat", ios::app | ios::binary);
	for each(DataRow^ FilaTemp in dtp->Rows)
	{
		String^ descripcion = Convert::ToString(FilaTemp["Descripcion"]);
		int cantidad = Convert::ToInt32(FilaTemp["Cantidad"]);
		float preciounit = (float)Convert::ToDecimal(FilaTemp["Precio Unitario"]);
		float importe = (float)Convert::ToDecimal(FilaTemp["Importe"]);
		int numero = Convert::ToInt32(FilaTemp["Numero"]);
		actualizarStock(numero, cantidad);
		detalle_pedido_venta.registrarDetallePedidoVenta(descripcion, cantidad,preciounit,importe,lblNumeroPedido->Text,numero);
		archivo.write((char*)&detalle_pedido_venta, SIZEDETALLE_PEDIDO_VENTA);
	}

	MessageBox::Show("Registro exitoso");
	archivo.close();
	limpiar();
}
private: System::Void btnBuscarPedido_Click(System::Object^ sender, System::EventArgs^ e) {
	desactivar();
	
	Pedido_Venta pedido_venta;
	Detalle_Pedido_Venta detalle_pedido_venta;
	fstream archivo;

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
		if (pedido_venta.buscarPedidoVenta(txtBuscarPedido->Text)) {
			pedido_venta.verPedidoVenta(dtpp);
			lblNumeroPedido->Text = Convert::ToString(dtpp->Rows[0]["Numero Pedido"]);
			dtpPedido->Text = Convert::ToString(dtpp->Rows[0]["Fecha Pedido"]);
			txtTotal->Text = Convert::ToString(dtpp->Rows[0]["Total"]);
			int codCliente = Convert::ToInt32(dtpp->Rows[0]["Cliente"]);
			encontrarCliente(codCliente);
			cboVendedor->SelectedValue = Convert::ToInt32(dtpp->Rows[0]["Vendedor"]);
			break;
		}
		archivo.read((char*)&pedido_venta, SIZEPEDIDO_VENTA);
		cuantos = archivo.gcount();
	}
	archivo.close();

	archivo.open("../Archivos/detalle_pedido_venta.dat", ios::in | ios::binary);
	archivo.read((char*)&detalle_pedido_venta, SIZEDETALLE_PEDIDO_VENTA);
	cuantos = archivo.gcount();

	while (cuantos == SIZEDETALLE_PEDIDO_VENTA) {
		if (detalle_pedido_venta.buscarDetallePedidoVenta(lblNumeroPedido->Text)) {
			detalle_pedido_venta.verDetallePedidoVenta(dtp);
		}
		archivo.read((char*)&detalle_pedido_venta, SIZEDETALLE_PEDIDO_VENTA);
		cuantos = archivo.gcount();
	}
	archivo.close();
}
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	limpiar();
}
};
}
