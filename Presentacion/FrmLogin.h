#pragma once
#include "FrmPresentacion.h"
#include "../Clases/Administrador.h"
#include "../Clases/Vendedor.h"

namespace Presentacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class FrmLogin : public System::Windows::Forms::Form
	{
	public:
		
		FrmLogin(void)
		{
			InitializeComponent();
			//
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~FrmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtUsuario;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtContrasenia;
	private: System::Windows::Forms::Button^ btnIniciarSesion;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtContrasenia = (gcnew System::Windows::Forms::TextBox());
			this->btnIniciarSesion = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtUsuario
			// 
			this->txtUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsuario->Location = System::Drawing::Point(12, 145);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(246, 26);
			this->txtUsuario->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña";
			// 
			// txtContrasenia
			// 
			this->txtContrasenia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContrasenia->Location = System::Drawing::Point(14, 203);
			this->txtContrasenia->Name = L"txtContrasenia";
			this->txtContrasenia->PasswordChar = '*';
			this->txtContrasenia->Size = System::Drawing::Size(246, 26);
			this->txtContrasenia->TabIndex = 2;
			// 
			// btnIniciarSesion
			// 
			this->btnIniciarSesion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIniciarSesion->Location = System::Drawing::Point(12, 264);
			this->btnIniciarSesion->Name = L"btnIniciarSesion";
			this->btnIniciarSesion->Size = System::Drawing::Size(246, 34);
			this->btnIniciarSesion->TabIndex = 4;
			this->btnIniciarSesion->Text = L"Iniciar Sesión";
			this->btnIniciarSesion->UseVisualStyleBackColor = true;
			this->btnIniciarSesion->Click += gcnew System::EventHandler(this, &FrmLogin::btnIniciarSesion_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(82, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 68);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// FrmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(274, 351);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnIniciarSesion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtContrasenia);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtUsuario);
			this->MaximizeBox = false;
			this->Name = L"FrmLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Iniciar Sesión";
			this->Load += gcnew System::EventHandler(this, &FrmLogin::FrmLogin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Int32 cantidadRegistros() {
	fstream archivo;
	archivo.open("../Archivos/administrador.dat", ios::in | ios::out | ios::binary);
	archivo.seekg(0, ios::end);
	int pos = archivo.tellg();
	int numReg = pos / SIZEADMINISTRADOR;
	archivo.close();
	return numReg;
}

private: System::Boolean verificarAdministrador() {
	Administrador administrador;
	fstream archivo;
	DataTable^ dt = gcnew DataTable();

	archivo.open("../Archivos/administrador.dat", ios::in | ios::binary);
	archivo.read((char*)&administrador, SIZEADMINISTRADOR);
	int cuantos = archivo.gcount();

	bool find = false;
	while (cuantos == SIZEADMINISTRADOR) {
		if (administrador.ingresarSistema(txtUsuario->Text, txtContrasenia->Text)) {
			find = true;
			break;
		}
		archivo.read((char*)&administrador, SIZEADMINISTRADOR);
		cuantos = archivo.gcount();
	}
	archivo.close();
	return find;
}

private: System::Boolean verificarVendedor() {
	Vendedor vendedor;
	fstream archivo;
	DataTable^ dt = gcnew DataTable();

	archivo.open("../Archivos/vendedor.dat", ios::in | ios::binary);
	archivo.read((char*)&vendedor, SIZEVENDEDOR);
	int cuantos = archivo.gcount();

	bool find = false;
	while (cuantos == SIZEVENDEDOR) {
		if (vendedor.ingresarSistema(txtUsuario->Text, txtContrasenia->Text)) {
			find = true;
			break;
		}
		archivo.read((char*)&vendedor, SIZEVENDEDOR);
		cuantos = archivo.gcount();
	}
	archivo.close();
	return find;
}

private: System::Void btnIniciarSesion_Click(System::Object^ sender, System::EventArgs^ e) {
	if (verificarAdministrador() || this->verificarVendedor()) {
		Presentacion::FrmPresentacion^ frm = gcnew Presentacion::FrmPresentacion();
		frm->lblUsuario->Text = txtUsuario->Text;
		frm->Show();
		this->Hide();
	}
	else {
		MessageBox::Show("Usuario o contraseña incorrectas");
	}
}
private: System::Void FrmLogin_Load(System::Object^ sender, System::EventArgs^ e) {
	if (cantidadRegistros() == 0) {
		Administrador administrador;
		fstream archivo;

		archivo.open("../Archivos/administrador.dat", ios::app | ios::binary);

		administrador.registrarAdministrador(cantidadRegistros() + 1, "", "admin", "", "", "", "");
		archivo.write((char*)&administrador, SIZEADMINISTRADOR);
		MessageBox::Show("Administrador: Ingresar al sistema \n Usuario: " + administrador.getUsuario() + "\nContraseña: " + administrador.getContrasenia());
		archivo.close();
		txtUsuario->Text = administrador.getUsuario();
		txtContrasenia->Text = administrador.getContrasenia();
	}
}
};
}
