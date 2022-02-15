#pragma once
#include <iostream>
#include <fstream>
#include "../Clases/Cliente.h"
using namespace std;

namespace Presentacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmCliente
	/// </summary>
	public ref class FrmCliente : public System::Windows::Forms::Form
	{
	public:
		FrmCliente(void)
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
		~FrmCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtDni;

	private: System::Windows::Forms::TextBox^ txtCodigo;


	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnActualizar;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtCorreo;

	private: System::Windows::Forms::TextBox^ txtCelular;

	private: System::Windows::Forms::TextBox^ txtTelefono;

	private: System::Windows::Forms::TextBox^ txtDireccion;
	private: System::Windows::Forms::TextBox^ txtNombre;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnRegistrar;

	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::TextBox^ txtBuscar;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::DataGridView^ dgvListado;


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
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtCelular = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtDireccion = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox1->Controls->Add(this->btnRegistrar);
			this->groupBox1->Controls->Add(this->btnCancelar);
			this->groupBox1->Controls->Add(this->btnActualizar);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtCorreo);
			this->groupBox1->Controls->Add(this->txtCelular);
			this->groupBox1->Controls->Add(this->txtTelefono);
			this->groupBox1->Controls->Add(this->txtDireccion);
			this->groupBox1->Controls->Add(this->txtNombre);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtDni);
			this->groupBox1->Controls->Add(this->txtCodigo);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(400, 522);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mantenimiento de Clientes";
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(66, 432);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(113, 35);
			this->btnRegistrar->TabIndex = 16;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &FrmCliente::btnRegistrar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(207, 432);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(113, 35);
			this->btnCancelar->TabIndex = 15;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &FrmCliente::btnCancelar_Click);
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(66, 432);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(113, 35);
			this->btnActualizar->TabIndex = 14;
			this->btnActualizar->Text = L"Actualizar";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &FrmCliente::btnActualizar_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Nombre:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Dirección:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Telefono:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Celular:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 358);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Correo:";
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(99, 355);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(256, 26);
			this->txtCorreo->TabIndex = 8;
			// 
			// txtCelular
			// 
			this->txtCelular->Location = System::Drawing::Point(99, 307);
			this->txtCelular->Name = L"txtCelular";
			this->txtCelular->Size = System::Drawing::Size(171, 26);
			this->txtCelular->TabIndex = 7;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(99, 262);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(171, 26);
			this->txtTelefono->TabIndex = 6;
			// 
			// txtDireccion
			// 
			this->txtDireccion->Location = System::Drawing::Point(99, 214);
			this->txtDireccion->Name = L"txtDireccion";
			this->txtDireccion->Size = System::Drawing::Size(279, 26);
			this->txtDireccion->TabIndex = 5;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(98, 167);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(280, 26);
			this->txtNombre->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DNI:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(203, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Codigo:";
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(98, 120);
			this->txtDni->Name = L"txtDni";
			this->txtDni->Size = System::Drawing::Size(163, 26);
			this->txtDni->TabIndex = 1;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Enabled = false;
			this->txtCodigo->Location = System::Drawing::Point(278, 51);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(100, 26);
			this->txtCodigo->TabIndex = 0;
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
			this->groupBox2->Location = System::Drawing::Point(428, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(830, 522);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Listado de Clientes";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(686, 47);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(113, 35);
			this->btnEliminar->TabIndex = 17;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &FrmCliente::btnEliminar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(556, 47);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(113, 35);
			this->btnBuscar->TabIndex = 16;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &FrmCliente::btnBuscar_Click);
			// 
			// txtBuscar
			// 
			this->txtBuscar->Location = System::Drawing::Point(90, 51);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(447, 26);
			this->txtBuscar->TabIndex = 16;
			this->txtBuscar->TextChanged += gcnew System::EventHandler(this, &FrmCliente::txtBuscar_TextChanged);
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
			this->dgvListado->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FrmCliente::dgvListado_CellDoubleClick);
			// 
			// FrmCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1284, 561);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmCliente";
			this->Text = L"FrmCliente";
			this->Load += gcnew System::EventHandler(this, &FrmCliente::FrmCliente_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListado))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void limpiar() {
	txtCodigo->Clear();
	txtDni->Clear();
	txtNombre->Clear();
	txtDireccion->Clear();
	txtTelefono->Clear();
	txtCelular->Clear();
	txtCorreo->Clear();
	btnRegistrar->Visible = true;
	btnActualizar->Visible = false;
}

private: System::Void listar() {
	Cliente cliente;
	fstream archivo;
	DataTable^ dt = gcnew DataTable();

	archivo.open("../Archivos/cliente.dat", ios::in | ios::binary);
	archivo.read((char*)&cliente, SIZECLIENTE);
	int cuantos = archivo.gcount();
	
	dt->Columns->Add("Codigo", System::Type::GetType("System.Int32"));
	dt->Columns->Add("DNI", System::Type::GetType("System.String"));
	dt->Columns->Add("Nombre", System::Type::GetType("System.String"));
	dt->Columns->Add("Direccion", System::Type::GetType("System.String"));
	dt->Columns->Add("Telefono", System::Type::GetType("System.String"));
	dt->Columns->Add("Celular", System::Type::GetType("System.String"));
	dt->Columns->Add("Correo", System::Type::GetType("System.String"));
	dgvListado->DataSource = dt;

	while (cuantos == SIZECLIENTE) {
		if (cliente.getCodigoCliente()>0) {
			cliente.verCliente(dt);
		}
		archivo.read((char*)&cliente, SIZECLIENTE);
		cuantos = archivo.gcount();
	}

	archivo.close();
	lblTotal->Text = String::Format("Total registros: {0}", cantidadRegistros());
}

private: System::Int32 cantidadRegistros() {
	return dgvListado->Rows->Count;
}

private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente cliente;
	fstream archivo;

	archivo.open("../Archivos/cliente.dat", ios::app | ios::binary);
	
	cliente.registrarCliente(cantidadRegistros()+1,txtDni->Text,txtNombre->Text,txtDireccion->Text,txtTelefono->Text,txtCelular->Text,txtCorreo->Text);
	archivo.write((char*)&cliente, SIZECLIENTE);
	txtCodigo->Text = Convert::ToString(cantidadRegistros() + 1);
	MessageBox::Show("Registro exitoso");
	limpiar();
	archivo.close();
	listar();
}
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	limpiar();
}
private: System::Void FrmCliente_Load(System::Object^ sender, System::EventArgs^ e) {
	listar();
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente cliente;
	fstream archivo;
	DataTable^ dt = gcnew DataTable();

	archivo.open("../Archivos/cliente.dat", ios::in | ios::binary);
	archivo.read((char*)&cliente, SIZECLIENTE);
	int cuantos = archivo.gcount();

	dt->Columns->Add("Codigo", System::Type::GetType("System.Int32"));
	dt->Columns->Add("DNI", System::Type::GetType("System.String"));
	dt->Columns->Add("Nombre", System::Type::GetType("System.String"));
	dt->Columns->Add("Direccion", System::Type::GetType("System.String"));
	dt->Columns->Add("Telefono", System::Type::GetType("System.String"));
	dt->Columns->Add("Celular", System::Type::GetType("System.String"));
	dt->Columns->Add("Correo", System::Type::GetType("System.String"));
	dgvListado->DataSource = dt;

	bool find = false;
	while (cuantos == SIZECLIENTE) {
		if (cliente.buscarCliente(txtBuscar->Text) && cliente.getCodigoCliente()>0) {
			cliente.verCliente(dt);
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
	lblTotal->Text = String::Format("Total registros: {0}", cantidadRegistros());
}

private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente cliente;
	fstream archivo;

	archivo.open("../Archivos/cliente.dat", ios::in | ios::out | ios::binary);
	cliente.actualizarCliente(Convert::ToInt32(txtCodigo->Text), txtDni->Text, txtNombre->Text, txtDireccion->Text, txtTelefono->Text, txtCelular->Text, txtCorreo->Text);
	archivo.seekg((Convert::ToInt32(txtCodigo->Text) - 1) * SIZECLIENTE, ios::beg);
	archivo.write((char*)&cliente, SIZECLIENTE);
	MessageBox::Show("Actualizacion exitosa");
	limpiar();
	archivo.close();
	listar();
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	Cliente cliente;
	fstream archivo;
	int codigo;

	archivo.open("../Archivos/cliente.dat", ios::in | ios::out | ios::binary);
	codigo = Convert::ToInt32(dgvListado->CurrentRow->Cells["Codigo"]->Value);
	cliente.eliminarCliente();
	archivo.seekg((codigo - 1) * SIZECLIENTE, ios::beg);
	archivo.write((char*)&cliente, SIZECLIENTE);
	MessageBox::Show("Se elimino correctamente");
	limpiar();
	archivo.close();
	listar();
}

private: System::Void dgvListado_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	txtCodigo->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Codigo"]->Value);
	txtDni->Text = Convert::ToString(dgvListado->CurrentRow->Cells["DNI"]->Value);
	txtNombre->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Nombre"]->Value);
	txtDireccion->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Direccion"]->Value);
	txtTelefono->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Telefono"]->Value);
	txtCelular->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Celular"]->Value);
	txtCorreo->Text = Convert::ToString(dgvListado->CurrentRow->Cells["Correo"]->Value);
	btnRegistrar->Visible = false;
	btnActualizar->Visible = true;
}
private: System::Void txtBuscar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtBuscar->Text->Length == 0) {
		listar();
	}
}
};
}
