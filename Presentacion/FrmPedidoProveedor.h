#pragma once
#include <iostream>
#include <fstream>
#include "../Clases/Proveedor.h"
#include "../Clases/Producto.h"
#include "../Clases/Pedido_Proveedor.h"
#include "../Clases/Detalle_Pedido_Proveedor.h"
using namespace std;

namespace Presentacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmPedidoProveedor
	/// </summary>
	public ref class FrmPedidoProveedor : public System::Windows::Forms::Form
	{
	public:
		DataTable^ dtp = gcnew DataTable();
		FrmPedidoProveedor(void)
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
		~FrmPedidoProveedor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnBuscarPedido;
	protected:

	private: System::Windows::Forms::TextBox^ txtBuscarPedido;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DateTimePicker^ dtpPedido;

	private: System::Windows::Forms::Label^ label5;











	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;




	private: System::Windows::Forms::GroupBox^ groupBox4;

	private: System::Windows::Forms::DataGridView^ dgvProductos;








	private: System::Windows::Forms::TextBox^ txtTotal;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dtpLlegada;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNumeroPedido;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cboProveedor;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::TextBox^ txtCodigoProducto;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnCancelar;




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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->cboProveedor = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNumeroPedido = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtpLlegada = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->txtCodigoProducto = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dgvProductos = (gcnew System::Windows::Forms::DataGridView());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dtpPedido = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnBuscarPedido = (gcnew System::Windows::Forms::Button());
			this->txtBuscarPedido = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductos))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->btnBuscarPedido);
			this->groupBox1->Controls->Add(this->txtBuscarPedido);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(26, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1128, 746);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Registrar Pedido Proveedor";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnRegistrar);
			this->groupBox2->Controls->Add(this->btnCancelar);
			this->groupBox2->Controls->Add(this->cboProveedor);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtNumeroPedido);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->dtpLlegada);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->dgvProductos);
			this->groupBox2->Controls->Add(this->txtTotal);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->dtpPedido);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(22, 75);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1054, 653);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(407, 610);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(113, 35);
			this->btnRegistrar->TabIndex = 27;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &FrmPedidoProveedor::btnRegistrar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(545, 610);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(113, 35);
			this->btnCancelar->TabIndex = 26;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &FrmPedidoProveedor::btnCancelar_Click);
			// 
			// cboProveedor
			// 
			this->cboProveedor->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboProveedor->FormattingEnabled = true;
			this->cboProveedor->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Seleccione" });
			this->cboProveedor->Location = System::Drawing::Point(179, 155);
			this->cboProveedor->Name = L"cboProveedor";
			this->cboProveedor->Size = System::Drawing::Size(270, 28);
			this->cboProveedor->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Proveedor:";
			// 
			// txtNumeroPedido
			// 
			this->txtNumeroPedido->Enabled = false;
			this->txtNumeroPedido->Location = System::Drawing::Point(713, 56);
			this->txtNumeroPedido->Name = L"txtNumeroPedido";
			this->txtNumeroPedido->Size = System::Drawing::Size(220, 26);
			this->txtNumeroPedido->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(616, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 20);
			this->label4->TabIndex = 22;
			this->label4->Text = L"N° Pedido:";
			// 
			// dtpLlegada
			// 
			this->dtpLlegada->CustomFormat = L"dd/MM/yyyy";
			this->dtpLlegada->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpLlegada->Location = System::Drawing::Point(713, 187);
			this->dtpLlegada->Name = L"dtpLlegada";
			this->dtpLlegada->Size = System::Drawing::Size(220, 26);
			this->dtpLlegada->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(594, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Fecha llegada:";
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
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(198, 71);
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
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->btnAgregar);
			this->groupBox4->Controls->Add(this->txtCodigoProducto);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Location = System::Drawing::Point(45, 230);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(943, 86);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Agregar Producto";
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(416, 35);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(102, 35);
			this->btnAgregar->TabIndex = 22;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &FrmPedidoProveedor::btnAgregar_Click);
			// 
			// txtCodigoProducto
			// 
			this->txtCodigoProducto->Location = System::Drawing::Point(110, 39);
			this->txtCodigoProducto->Name = L"txtCodigoProducto";
			this->txtCodigoProducto->Size = System::Drawing::Size(270, 26);
			this->txtCodigoProducto->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 42);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Codigo:";
			// 
			// dgvProductos
			// 
			this->dgvProductos->AllowUserToAddRows = false;
			this->dgvProductos->AllowUserToDeleteRows = false;
			this->dgvProductos->AllowUserToOrderColumns = true;
			this->dgvProductos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProductos->Location = System::Drawing::Point(45, 335);
			this->dgvProductos->Name = L"dgvProductos";
			this->dgvProductos->Size = System::Drawing::Size(943, 213);
			this->dgvProductos->TabIndex = 15;
			this->dgvProductos->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FrmPedidoProveedor::dgvProductos_CellEndEdit);
			// 
			// txtTotal
			// 
			this->txtTotal->Enabled = false;
			this->txtTotal->Location = System::Drawing::Point(838, 566);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(150, 26);
			this->txtTotal->TabIndex = 14;
			this->txtTotal->Text = L"0.00";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(751, 569);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Total (S/.):";
			// 
			// dtpPedido
			// 
			this->dtpPedido->CustomFormat = L"dd/MM/yyyy";
			this->dtpPedido->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpPedido->Location = System::Drawing::Point(713, 153);
			this->dtpPedido->Name = L"dtpPedido";
			this->dtpPedido->Size = System::Drawing::Size(220, 26);
			this->dtpPedido->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(594, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Fecha pedido:";
			// 
			// btnBuscarPedido
			// 
			this->btnBuscarPedido->Location = System::Drawing::Point(521, 34);
			this->btnBuscarPedido->Name = L"btnBuscarPedido";
			this->btnBuscarPedido->Size = System::Drawing::Size(159, 35);
			this->btnBuscarPedido->TabIndex = 2;
			this->btnBuscarPedido->Text = L"Buscar Pedido";
			this->btnBuscarPedido->UseVisualStyleBackColor = true;
			this->btnBuscarPedido->Click += gcnew System::EventHandler(this, &FrmPedidoProveedor::btnBuscarPedido_Click);
			// 
			// txtBuscarPedido
			// 
			this->txtBuscarPedido->Location = System::Drawing::Point(192, 38);
			this->txtBuscarPedido->Name = L"txtBuscarPedido";
			this->txtBuscarPedido->Size = System::Drawing::Size(302, 26);
			this->txtBuscarPedido->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numero de Pedido: ";
			// 
			// FrmPedidoProveedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1268, 788);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmPedidoProveedor";
			this->Text = L"FrmPedidoProveedor";
			this->Load += gcnew System::EventHandler(this, &FrmPedidoProveedor::FrmPedidoProveedor_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void limpiar() {
	dtp->Clear();
	txtTotal->Text = "0.00";
	txtNumeroPedido->Text = (cantidadRegistros() + 1).ToString("PP-000000000");
	txtBuscarPedido->Clear();

	txtBuscarPedido->Enabled = true;
	cboProveedor->Enabled = true;
	dtpPedido->Enabled = true;
	dtpLlegada->Enabled = true;
	txtCodigoProducto->Enabled = true;
	btnBuscarPedido->Enabled = true;
	btnAgregar->Enabled = true;
	dgvProductos->Enabled = true;
	btnRegistrar->Enabled = true;
}

private: System::Void desactivar() {
	txtBuscarPedido->Enabled = false;
	cboProveedor->Enabled = false;
	dtpPedido->Enabled = false;
	dtpLlegada->Enabled = false;
	txtCodigoProducto->Enabled = false;
	btnBuscarPedido->Enabled = false;
	btnAgregar->Enabled = false;
	dgvProductos->Enabled = false;
	btnRegistrar->Enabled = false;
}

private: System::Int32 cantidadRegistros() {
	fstream archivo;
	archivo.open("../Archivos/pedido_proveedor.dat", ios::in | ios::out | ios::binary);
	archivo.seekg(0, ios::end);
	int pos = archivo.tellg();
	int numReg = pos / SIZEPEDIDO_PROVEEDOR;
	archivo.close();
	return numReg;
}

private: System::Void cargarProveedor() {
	Proveedor proveedor;
	fstream archivo;
	DataTable^ dt = gcnew DataTable();

	archivo.open("../Archivos/proveedor.dat", ios::in | ios::binary);
	archivo.read((char*)&proveedor, SIZEPROVEEDOR);
	int cuantos = archivo.gcount();

	dt->Columns->Add("Codigo", System::Type::GetType("System.Int32"));
	dt->Columns->Add("Nombre", System::Type::GetType("System.String"));
	cboProveedor->DataSource = dt;

	while (cuantos == SIZEPROVEEDOR) {
		if (proveedor.getCodigoProveedor() > 0) {
			proveedor.seleccionarProveedor(dt);
		}
		archivo.read((char*)&proveedor, SIZEPROVEEDOR);
		cuantos = archivo.gcount();
	}

	cboProveedor->ValueMember = "Codigo";
	cboProveedor->DisplayMember = "Nombre";

	archivo.close();
}

private: System::Void actualizarStock(Int32 num, Int32 cant) {
	Producto producto;
	fstream archivo;

	archivo.open("../Archivos/producto.dat", ios::in | ios::out | ios::binary);
	archivo.read((char*)&producto, SIZEPRODUCTO);
	int cuantos = archivo.gcount();

	while (cuantos == SIZEPRODUCTO) {
		if (producto.getNumeroProducto() > 0 && producto.getNumeroProducto() == num) {
			producto.aumentarStockProducto(cant);
			archivo.seekg((num - 1) * SIZEPRODUCTO, ios::beg);
			archivo.write((char*)&producto, SIZEPRODUCTO);
			break;
		}
		archivo.read((char*)&producto, SIZEPRODUCTO);
		cuantos = archivo.gcount();
	}

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

private: System::Void FrmPedidoProveedor_Load(System::Object^ sender, System::EventArgs^ e) {
	txtNumeroPedido->Text = (cantidadRegistros() + 1).ToString("PP-000000000");
	cargarProveedor();
	tablaProductos();
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
			fila["Importe"] = Convert::ToDecimal(pu * cant);
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
	DataRow^ fila = (DataRow^)dtp->Rows[e->RowIndex];
	int stock = Convert::ToInt32(fila["Stock"]);
	int cant = Convert::ToInt32(fila["Cantidad"]);
	float pu = (float)Convert::ToDecimal(fila["Precio Unitario"]);
	fila["Cantidad"] = cant;
	float total = (float)Convert::ToDecimal(txtTotal->Text) - (float)Convert::ToDecimal(fila["Importe"]);
	txtTotal->Text = Convert::ToString(total);

	fila["Importe"] = Convert::ToDecimal(pu * cant);
	total = (float)Convert::ToDecimal(txtTotal->Text);
	txtTotal->Text = Convert::ToString(total + pu * cant);
}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	Pedido_Proveedor pedido_proveedor;
	Detalle_Pedido_Proveedor detalle_pedido_proveedor;
	fstream archivo;

	archivo.open("../Archivos/pedido_proveedor.dat", ios::app | ios::binary);
	pedido_proveedor.registrarPedidoProveedor(txtNumeroPedido->Text, dtpPedido->Value.ToString("dd/MM/yyyy"), dtpLlegada->Value.ToString("dd/MM/yyyy"), (float)Convert::ToDecimal(txtTotal->Text), Convert::ToInt32(cboProveedor->SelectedValue));
	archivo.write((char*)&pedido_proveedor, SIZEPEDIDO_PROVEEDOR);
	archivo.close();

	archivo.open("../Archivos/detalle_pedido_proveedor.dat", ios::app | ios::binary);
	for each (DataRow ^ FilaTemp in dtp->Rows)
	{
		String^ descripcion = Convert::ToString(FilaTemp["Descripcion"]);
		int cantidad = Convert::ToInt32(FilaTemp["Cantidad"]);
		float preciounit = (float)Convert::ToDecimal(FilaTemp["Precio Unitario"]);
		float importe = (float)Convert::ToDecimal(FilaTemp["Importe"]);
		int numero = Convert::ToInt32(FilaTemp["Numero"]);
		actualizarStock(numero, cantidad);
		detalle_pedido_proveedor.registrarDetallePedidoProveedor(descripcion, cantidad, preciounit, importe, txtNumeroPedido->Text, numero);
		archivo.write((char*)&detalle_pedido_proveedor, SIZEDETALLE_PEDIDO_PROVEEDOR);
	}

	MessageBox::Show("Registro exitoso");
	archivo.close();
	limpiar();
}
private: System::Void btnBuscarPedido_Click(System::Object^ sender, System::EventArgs^ e) {
	desactivar();
	
	Pedido_Proveedor pedido_proveedor;
	Detalle_Pedido_Proveedor detalle_pedido_proveedor;
	fstream archivo;
	
	DataTable^ dtpp = gcnew DataTable();
	dtpp->Columns->Add("Numero Pedido", System::Type::GetType("System.String"));
	dtpp->Columns->Add("Fecha Pedido", System::Type::GetType("System.DateTime"));
	dtpp->Columns->Add("Fecha Llegada", System::Type::GetType("System.DateTime"));
	dtpp->Columns->Add("Total", System::Type::GetType("System.Decimal"));
	dtpp->Columns->Add("Proveedor", System::Type::GetType("System.Int32"));

	archivo.open("../Archivos/pedido_proveedor.dat", ios::in | ios::binary);
	archivo.read((char*)&pedido_proveedor, SIZEPEDIDO_PROVEEDOR);
	int cuantos = archivo.gcount();

	while (cuantos == SIZEPEDIDO_PROVEEDOR) {
		if (pedido_proveedor.buscarPedidoProveedor(txtBuscarPedido->Text)) {
			pedido_proveedor.verPedidoProveedor(dtpp);
			txtNumeroPedido->Text = Convert::ToString(dtpp->Rows[0]["Numero Pedido"]);
			dtpPedido->Text = Convert::ToString(dtpp->Rows[0]["Fecha Pedido"]);
			dtpLlegada->Text = Convert::ToString(dtpp->Rows[0]["Fecha Llegada"]);
			txtTotal->Text = Convert::ToString(dtpp->Rows[0]["Total"]);
			cboProveedor->SelectedValue = Convert::ToInt32(dtpp->Rows[0]["Proveedor"]);
			break;
		}
		archivo.read((char*)&pedido_proveedor, SIZEPEDIDO_PROVEEDOR);
		cuantos = archivo.gcount();
	}
	archivo.close();

	archivo.open("../Archivos/detalle_pedido_proveedor.dat", ios::in | ios::binary);
	archivo.read((char*)&detalle_pedido_proveedor, SIZEDETALLE_PEDIDO_PROVEEDOR);
	cuantos = archivo.gcount();
	
	while (cuantos == SIZEDETALLE_PEDIDO_PROVEEDOR) {
		if (detalle_pedido_proveedor.buscarDetallePedidoProveedor(txtNumeroPedido->Text)) {
			detalle_pedido_proveedor.verDetallePedidoProveedor(dtp);
			break;
		}
		archivo.read((char*)&detalle_pedido_proveedor, SIZEDETALLE_PEDIDO_PROVEEDOR);
		cuantos = archivo.gcount();
	}
	archivo.close();
}
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	limpiar();
}
};
}
