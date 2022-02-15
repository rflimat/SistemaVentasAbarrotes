#pragma once
#include <iostream>
#include <fstream>
#include "../Clases/Proveedor.h"
#include "../Clases/Producto.h"
using namespace std;

namespace Presentacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmProducto
	/// </summary>
	public ref class FrmProducto : public System::Windows::Forms::Form
	{
	public:
		FrmProducto(void)
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
		~FrmProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ btnRegistrar;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnActualizar;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtStock;


	private: System::Windows::Forms::TextBox^ txtPrecioUnit;

	private: System::Windows::Forms::TextBox^ txtDescripcion;

	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNum;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::TextBox^ txtBuscar;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::DataGridView^ dgvListado;

	private: System::Windows::Forms::TextBox^ txtCodigo;

	private: System::Windows::Forms::ComboBox^ cboTipoProducto;




	private: System::Windows::Forms::ComboBox^ cboUnidad;
	private: System::Windows::Forms::Label^ label10;


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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cboTipoProducto = (gcnew System::Windows::Forms::ComboBox());
			this->cboUnidad = (gcnew System::Windows::Forms::ComboBox());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecioUnit = (gcnew System::Windows::Forms::TextBox());
			this->txtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->dgvListado = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListado))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->cboTipoProducto);
			this->groupBox1->Controls->Add(this->cboUnidad);
			this->groupBox1->Controls->Add(this->txtCodigo);
			this->groupBox1->Controls->Add(this->btnRegistrar);
			this->groupBox1->Controls->Add(this->btnCancelar);
			this->groupBox1->Controls->Add(this->btnActualizar);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtStock);
			this->groupBox1->Controls->Add(this->txtPrecioUnit);
			this->groupBox1->Controls->Add(this->txtDescripcion);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtNum);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(400, 522);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mantenimiento de Productos";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &FrmProducto::groupBox1_Enter);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(203, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 20);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Número:";
			// 
			// cboTipoProducto
			// 
			this->cboTipoProducto->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboTipoProducto->FormattingEnabled = true;
			this->cboTipoProducto->Items->AddRange(gcnew cli::array< System::Object^  >(18) {
				L"Seleccione", L"Aceites", L"Arroz", L"Avenas",
					L"Azucares", L"Bebidas", L"Cafe", L"Condimentos", L"Conservas", L"Especias", L"Fideos", L"Galletas", L"Huevos", L"Lacteos", L"Menestras",
					L"Salsas", L"Snacks", L"Vinagres"
			});
			this->cboTipoProducto->Location = System::Drawing::Point(130, 375);
			this->cboTipoProducto->Name = L"cboTipoProducto";
			this->cboTipoProducto->Size = System::Drawing::Size(192, 28);
			this->cboTipoProducto->TabIndex = 21;
			// 
			// cboUnidad
			// 
			this->cboUnidad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboUnidad->FormattingEnabled = true;
			this->cboUnidad->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Seleccione", L"Caja", L"Docena", L"Litro (L)",
					L"Media docena", L"Paquete", L"Peso (Kg.)", L"Unidad (UD)"
			});
			this->cboUnidad->Location = System::Drawing::Point(130, 332);
			this->cboUnidad->Name = L"cboUnidad";
			this->cboUnidad->Size = System::Drawing::Size(136, 28);
			this->cboUnidad->TabIndex = 19;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Location = System::Drawing::Point(128, 68);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(171, 26);
			this->txtCodigo->TabIndex = 17;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(66, 466);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(113, 35);
			this->btnRegistrar->TabIndex = 16;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &FrmProducto::btnRegistrar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(207, 466);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(113, 35);
			this->btnCancelar->TabIndex = 15;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(66, 466);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(113, 35);
			this->btnActualizar->TabIndex = 14;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &FrmProducto::btnActualizar_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Nombre:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Descripción:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Precio Unitario:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 294);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Stock:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 340);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Unidad:";
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(130, 291);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(136, 26);
			this->txtStock->TabIndex = 7;
			// 
			// txtPrecioUnit
			// 
			this->txtPrecioUnit->Location = System::Drawing::Point(130, 250);
			this->txtPrecioUnit->Name = L"txtPrecioUnit";
			this->txtPrecioUnit->Size = System::Drawing::Size(136, 26);
			this->txtPrecioUnit->TabIndex = 6;
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->Location = System::Drawing::Point(128, 152);
			this->txtDescripcion->Multiline = true;
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(250, 78);
			this->txtDescripcion->TabIndex = 5;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(128, 107);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(247, 26);
			this->txtNombre->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 378);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Tipo Producto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Codigo:";
			// 
			// txtNum
			// 
			this->txtNum->Enabled = false;
			this->txtNum->Location = System::Drawing::Point(278, 25);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(100, 26);
			this->txtNum->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnEliminar);
			this->groupBox2->Controls->Add(this->btnBuscar);
			this->groupBox2->Controls->Add(this->txtBuscar);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->lblTotal);
			this->groupBox2->Controls->Add(this->dgvListado);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(428, 30);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(830, 522);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Listado de Productos";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(686, 47);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(113, 35);
			this->btnEliminar->TabIndex = 17;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &FrmProducto::btnEliminar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(556, 47);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(113, 35);
			this->btnBuscar->TabIndex = 16;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &FrmProducto::btnBuscar_Click);
			// 
			// txtBuscar
			// 
			this->txtBuscar->Location = System::Drawing::Point(90, 51);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(447, 26);
			this->txtBuscar->TabIndex = 16;
			this->txtBuscar->TextChanged += gcnew System::EventHandler(this, &FrmProducto::txtBuscar_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Buscar:";
			// 
			// lblTotal
			// 
			this->lblTotal->AutoSize = true;
			this->lblTotal->Location = System::Drawing::Point(606, 481);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(113, 20);
			this->lblTotal->TabIndex = 1;
			this->lblTotal->Text = L"Total registros:";
			// 
			// dgvListado
			// 
			this->dgvListado->AllowUserToAddRows = false;
			this->dgvListado->AllowUserToDeleteRows = false;
			this->dgvListado->AllowUserToOrderColumns = true;
			this->dgvListado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListado->Location = System::Drawing::Point(25, 94);
			this->dgvListado->Name = L"dgvListado";
			this->dgvListado->ReadOnly = true;
			this->dgvListado->Size = System::Drawing::Size(774, 363);
			this->dgvListado->TabIndex = 0;
			this->dgvListado->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FrmProducto::dgvListado_CellDoubleClick);
			// 
			// FrmProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1268, 561);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmProducto";
			this->Text = L"FrmProducto";
			this->Load += gcnew System::EventHandler(this, &FrmProducto::FrmProducto_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListado))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void limpiar() {
	txtNum->Clear();
	txtCodigo->Clear();
	txtNombre->Clear();
	txtDescripcion->Clear();
	txtPrecioUnit->Clear();
	txtStock->Clear();
	cboUnidad->SelectedIndex = 0;
	cboTipoProducto->SelectedIndex = 0;
	btnRegistrar->Visible = true;
	btnActualizar->Visible = false;
}

private: System::Void listar() {
	Producto producto;
	fstream archivo;
	DataTable^ dt = gcnew DataTable();

	archivo.open("../Archivos/producto.dat", ios::in | ios::binary);
	archivo.read((char*)&producto, SIZEPRODUCTO);
	int cuantos = archivo.gcount();

	dt->Columns->Add("Numero", System::Type::GetType("System.Int32"));
	dt->Columns->Add("Codigo", System::Type::GetType("System.String"));
	dt->Columns->Add("Nombre", System::Type::GetType("System.String"));
	dt->Columns->Add("Descripcion", System::Type::GetType("System.String"));
	dt->Columns->Add("Precio Unitario", System::Type::GetType("System.Decimal"));
	dt->Columns->Add("Stock", System::Type::GetType("System.Int32"));
	dt->Columns->Add("Unidad", System::Type::GetType("System.String"));
	dt->Columns->Add("Tipo", System::Type::GetType("System.String"));
	dgvListado->DataSource = dt;

	while (cuantos == SIZEPRODUCTO) {
		if (producto.getNumeroProducto() > 0) {
			producto.verProducto(dt);
		}
		archivo.read((char*)&producto, SIZEPRODUCTO);
		cuantos = archivo.gcount();
	}

	archivo.close();
	lblTotal->Text = String::Format("Total registros: {0}", cantidadRegistros());
}

private: System::Int32 cantidadRegistros() {
	return dgvListado->Rows->Count;
}

private: System::Void FrmProducto_Load(System::Object^ sender, System::EventArgs^ e) {
	cboUnidad->SelectedIndex = 0;
	cboTipoProducto->SelectedIndex = 0;
	listar();
}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	Producto producto;
	fstream archivo;

	archivo.open("../Archivos/producto.dat", ios::app | ios::binary);

	producto.registrarProducto(cantidadRegistros() + 1, txtCodigo->Text, txtNombre->Text, txtDescripcion->Text, (float)Convert::ToDecimal(txtPrecioUnit->Text), Convert::ToInt32(txtStock->Text), Convert::ToString(cboUnidad->Text), Convert::ToString(cboTipoProducto->Text));
	archivo.write((char*)&producto, SIZEPRODUCTO);
	txtNum->Text = Convert::ToString(cantidadRegistros() + 1);
	MessageBox::Show("Registro exitoso");
	limpiar();
	archivo.close();
	listar();
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	Producto producto;
	fstream archivo;
	DataTable^ dt = gcnew DataTable();

	archivo.open("../Archivos/producto.dat", ios::in | ios::binary);
	archivo.read((char*)&producto, SIZEPRODUCTO);
	int cuantos = archivo.gcount();

	dt->Columns->Add("Numero", System::Type::GetType("System.Int32"));
	dt->Columns->Add("Codigo", System::Type::GetType("System.String"));
	dt->Columns->Add("Nombre", System::Type::GetType("System.String"));
	dt->Columns->Add("Descripcion", System::Type::GetType("System.String"));
	dt->Columns->Add("Precio Unitario", System::Type::GetType("System.Decimal"));
	dt->Columns->Add("Stock", System::Type::GetType("System.Int32"));
	dt->Columns->Add("Unidad", System::Type::GetType("System.String"));
	dt->Columns->Add("Tipo", System::Type::GetType("System.String"));
	dgvListado->DataSource = dt;

	bool find = false;
	while (cuantos == SIZEPRODUCTO) {
		if (producto.buscarProducto(txtBuscar->Text) && producto.getNumeroProducto() > 0) {
			producto.verProducto(dt);
			find = true;
			break;
		}
		archivo.read((char*)&producto, SIZEPRODUCTO);
		cuantos = archivo.gcount();
	}

	if (find == false) {
		MessageBox::Show("El codigo del producto ingresado no existe");
	}

	archivo.close();
	lblTotal->Text = String::Format("Total registros: {0}", cantidadRegistros());
}
private: System::Void dgvListado_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	txtNum->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Numero"]->Value);
	txtCodigo->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Codigo"]->Value);
	txtNombre->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Nombre"]->Value);
	txtDescripcion->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Descripcion"]->Value);
	txtPrecioUnit->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Precio Unitario"]->Value);
	txtStock->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Stock"]->Value);
	cboUnidad->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Unidad"]->Value);
	cboTipoProducto->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Tipo"]->Value);
	btnRegistrar->Visible = false;
	btnActualizar->Visible = true;
}
private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	Producto producto;
	fstream archivo;

	archivo.open("../Archivos/producto.dat", ios::in | ios::out | ios::binary);
	producto.actualizarProducto(Convert::ToInt32(txtNum->Text), txtCodigo->Text, txtNombre->Text, txtDescripcion->Text, (float)Convert::ToDecimal(txtPrecioUnit->Text), Convert::ToInt32(txtStock->Text), Convert::ToString(cboUnidad->Text), Convert::ToString(cboTipoProducto->Text));
	archivo.seekg((Convert::ToInt32(txtNum->Text) - 1) * SIZEPRODUCTO, ios::beg);
	archivo.write((char*)&producto, SIZEPRODUCTO);
	MessageBox::Show("Actualizacion exitosa");
	limpiar();
	archivo.close();
	listar();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	Producto producto;
	fstream archivo;
	int codigo;

	archivo.open("../Archivos/producto.dat", ios::in | ios::out | ios::binary);
	codigo = Convert::ToInt32(dgvListado->CurrentRow->Cells["Numero"]->Value);
	producto.eliminarProducto();
	archivo.seekg((codigo - 1) * SIZEPRODUCTO, ios::beg);
	archivo.write((char*)&producto, SIZEPRODUCTO);
	MessageBox::Show("Se elimino correctamente");
	limpiar();
	archivo.close();
	listar();
}
private: System::Void txtBuscar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtBuscar->Text->Length == 0) {
		listar();
	}
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
