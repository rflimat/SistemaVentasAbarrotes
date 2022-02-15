#pragma once
#include "FrmProveedor.h"
#include "FrmCliente.h"
#include "FrmProducto.h"
#include "FrmVendedor.h"
#include "FrmPedidoProveedor.h"
#include "FrmPedidoVenta.h"
#include "FrmComprobante.h"
#include "FrmReporte.h"

namespace Presentacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmPresentacion
	/// </summary>
	public ref class FrmPresentacion : public System::Windows::Forms::Form
	{
	public:
		FrmPresentacion(void)
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
		~FrmPresentacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelCabecera;
	protected:
	private: System::Windows::Forms::Panel^ panelInicio;
	private: FontAwesome::Sharp::IconButton^ btnOpciones;

	private: System::Windows::Forms::Panel^ panelOpciones;
	private: FontAwesome::Sharp::IconButton^ btnReportes;
	private: FontAwesome::Sharp::IconButton^ btnComprobantePago;
	private: FontAwesome::Sharp::IconButton^ btnPedidoVenta;
	private: FontAwesome::Sharp::IconButton^ btnCliente;
	private: FontAwesome::Sharp::IconButton^ btnPedidoProveedor;
	private: FontAwesome::Sharp::IconButton^ btnVendedor;
	private: FontAwesome::Sharp::IconButton^ btnProducto;
	private: FontAwesome::Sharp::IconButton^ btnProveedor;
	private: System::Windows::Forms::Panel^ panelFrm;
	private: FontAwesome::Sharp::IconButton^ btnInicio;
	private: FontAwesome::Sharp::IconButton^ btnSalir;
	private: System::Windows::Forms::Panel^ panelUser;
	public: System::Windows::Forms::Label^ lblUsuario;
	private:


	private: FontAwesome::Sharp::IconPictureBox^ pictureUser;


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
			this->panelCabecera = (gcnew System::Windows::Forms::Panel());
			this->panelUser = (gcnew System::Windows::Forms::Panel());
			this->pictureUser = (gcnew FontAwesome::Sharp::IconPictureBox());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->btnSalir = (gcnew FontAwesome::Sharp::IconButton());
			this->panelInicio = (gcnew System::Windows::Forms::Panel());
			this->btnInicio = (gcnew FontAwesome::Sharp::IconButton());
			this->btnOpciones = (gcnew FontAwesome::Sharp::IconButton());
			this->panelOpciones = (gcnew System::Windows::Forms::Panel());
			this->btnReportes = (gcnew FontAwesome::Sharp::IconButton());
			this->btnComprobantePago = (gcnew FontAwesome::Sharp::IconButton());
			this->btnPedidoVenta = (gcnew FontAwesome::Sharp::IconButton());
			this->btnCliente = (gcnew FontAwesome::Sharp::IconButton());
			this->btnPedidoProveedor = (gcnew FontAwesome::Sharp::IconButton());
			this->btnVendedor = (gcnew FontAwesome::Sharp::IconButton());
			this->btnProducto = (gcnew FontAwesome::Sharp::IconButton());
			this->btnProveedor = (gcnew FontAwesome::Sharp::IconButton());
			this->panelFrm = (gcnew System::Windows::Forms::Panel());
			this->panelCabecera->SuspendLayout();
			this->panelUser->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUser))->BeginInit();
			this->panelInicio->SuspendLayout();
			this->panelOpciones->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelCabecera
			// 
			this->panelCabecera->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelCabecera->Controls->Add(this->panelUser);
			this->panelCabecera->Controls->Add(this->btnSalir);
			this->panelCabecera->Controls->Add(this->panelInicio);
			this->panelCabecera->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelCabecera->Location = System::Drawing::Point(0, 0);
			this->panelCabecera->Name = L"panelCabecera";
			this->panelCabecera->Size = System::Drawing::Size(1268, 80);
			this->panelCabecera->TabIndex = 1;
			// 
			// panelUser
			// 
			this->panelUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panelUser->Controls->Add(this->pictureUser);
			this->panelUser->Controls->Add(this->lblUsuario);
			this->panelUser->Location = System::Drawing::Point(998, 18);
			this->panelUser->Name = L"panelUser";
			this->panelUser->Size = System::Drawing::Size(109, 40);
			this->panelUser->TabIndex = 2;
			// 
			// pictureUser
			// 
			this->pictureUser->BackColor = System::Drawing::Color::LightSteelBlue;
			this->pictureUser->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureUser->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pictureUser->IconChar = FontAwesome::Sharp::IconChar::UserAlt;
			this->pictureUser->IconColor = System::Drawing::SystemColors::ControlText;
			this->pictureUser->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->pictureUser->IconSize = 40;
			this->pictureUser->Location = System::Drawing::Point(0, 0);
			this->pictureUser->Name = L"pictureUser";
			this->pictureUser->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->pictureUser->Size = System::Drawing::Size(40, 40);
			this->pictureUser->TabIndex = 1;
			this->pictureUser->TabStop = false;
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Dock = System::Windows::Forms::DockStyle::Right;
			this->lblUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsuario->Location = System::Drawing::Point(45, 0);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Padding = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->lblUsuario->Size = System::Drawing::Size(64, 30);
			this->lblUsuario->TabIndex = 0;
			this->lblUsuario->Text = L"Usuario";
			this->lblUsuario->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnSalir
			// 
			this->btnSalir->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSalir->FlatAppearance->BorderSize = 0;
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->IconChar = FontAwesome::Sharp::IconChar::SignOutAlt;
			this->btnSalir->IconColor = System::Drawing::Color::Black;
			this->btnSalir->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnSalir->Location = System::Drawing::Point(1122, 18);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(110, 40);
			this->btnSalir->TabIndex = 1;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnSalir_Click);
			// 
			// panelInicio
			// 
			this->panelInicio->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelInicio->Controls->Add(this->btnInicio);
			this->panelInicio->Controls->Add(this->btnOpciones);
			this->panelInicio->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelInicio->Location = System::Drawing::Point(0, 0);
			this->panelInicio->Name = L"panelInicio";
			this->panelInicio->Size = System::Drawing::Size(200, 80);
			this->panelInicio->TabIndex = 0;
			// 
			// btnInicio
			// 
			this->btnInicio->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnInicio->FlatAppearance->BorderSize = 0;
			this->btnInicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInicio->IconChar = FontAwesome::Sharp::IconChar::Home;
			this->btnInicio->IconColor = System::Drawing::Color::Black;
			this->btnInicio->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnInicio->IconSize = 36;
			this->btnInicio->Location = System::Drawing::Point(80, 0);
			this->btnInicio->Name = L"btnInicio";
			this->btnInicio->Size = System::Drawing::Size(120, 80);
			this->btnInicio->TabIndex = 1;
			this->btnInicio->Text = L"Inicio";
			this->btnInicio->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnInicio->UseVisualStyleBackColor = true;
			this->btnInicio->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnInicio_Click);
			// 
			// btnOpciones
			// 
			this->btnOpciones->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnOpciones->FlatAppearance->BorderSize = 0;
			this->btnOpciones->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpciones->IconChar = FontAwesome::Sharp::IconChar::AlignJustify;
			this->btnOpciones->IconColor = System::Drawing::Color::Black;
			this->btnOpciones->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnOpciones->IconSize = 36;
			this->btnOpciones->Location = System::Drawing::Point(0, 0);
			this->btnOpciones->Name = L"btnOpciones";
			this->btnOpciones->Size = System::Drawing::Size(80, 80);
			this->btnOpciones->TabIndex = 0;
			this->btnOpciones->UseVisualStyleBackColor = true;
			this->btnOpciones->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnOpciones_Click);
			// 
			// panelOpciones
			// 
			this->panelOpciones->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panelOpciones->Controls->Add(this->btnReportes);
			this->panelOpciones->Controls->Add(this->btnComprobantePago);
			this->panelOpciones->Controls->Add(this->btnPedidoVenta);
			this->panelOpciones->Controls->Add(this->btnCliente);
			this->panelOpciones->Controls->Add(this->btnPedidoProveedor);
			this->panelOpciones->Controls->Add(this->btnVendedor);
			this->panelOpciones->Controls->Add(this->btnProducto);
			this->panelOpciones->Controls->Add(this->btnProveedor);
			this->panelOpciones->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelOpciones->Location = System::Drawing::Point(0, 80);
			this->panelOpciones->Name = L"panelOpciones";
			this->panelOpciones->Size = System::Drawing::Size(200, 562);
			this->panelOpciones->TabIndex = 2;
			// 
			// btnReportes
			// 
			this->btnReportes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnReportes->FlatAppearance->BorderSize = 0;
			this->btnReportes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReportes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReportes->IconChar = FontAwesome::Sharp::IconChar::FileExport;
			this->btnReportes->IconColor = System::Drawing::Color::Black;
			this->btnReportes->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnReportes->IconSize = 36;
			this->btnReportes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReportes->Location = System::Drawing::Point(0, 350);
			this->btnReportes->Name = L"btnReportes";
			this->btnReportes->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btnReportes->Size = System::Drawing::Size(200, 50);
			this->btnReportes->TabIndex = 7;
			this->btnReportes->Text = L"Reportes";
			this->btnReportes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReportes->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnReportes->UseVisualStyleBackColor = true;
			this->btnReportes->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnReportes_Click);
			// 
			// btnComprobantePago
			// 
			this->btnComprobantePago->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnComprobantePago->FlatAppearance->BorderSize = 0;
			this->btnComprobantePago->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComprobantePago->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComprobantePago->IconChar = FontAwesome::Sharp::IconChar::FileInvoiceDollar;
			this->btnComprobantePago->IconColor = System::Drawing::Color::Black;
			this->btnComprobantePago->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnComprobantePago->IconSize = 36;
			this->btnComprobantePago->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComprobantePago->Location = System::Drawing::Point(0, 300);
			this->btnComprobantePago->Name = L"btnComprobantePago";
			this->btnComprobantePago->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btnComprobantePago->Size = System::Drawing::Size(200, 50);
			this->btnComprobantePago->TabIndex = 6;
			this->btnComprobantePago->Text = L"Comprobante";
			this->btnComprobantePago->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComprobantePago->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnComprobantePago->UseVisualStyleBackColor = true;
			this->btnComprobantePago->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnComprobantePago_Click);
			// 
			// btnPedidoVenta
			// 
			this->btnPedidoVenta->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPedidoVenta->FlatAppearance->BorderSize = 0;
			this->btnPedidoVenta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPedidoVenta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPedidoVenta->IconChar = FontAwesome::Sharp::IconChar::Receipt;
			this->btnPedidoVenta->IconColor = System::Drawing::Color::Black;
			this->btnPedidoVenta->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnPedidoVenta->IconSize = 36;
			this->btnPedidoVenta->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPedidoVenta->Location = System::Drawing::Point(0, 250);
			this->btnPedidoVenta->Name = L"btnPedidoVenta";
			this->btnPedidoVenta->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btnPedidoVenta->Size = System::Drawing::Size(200, 50);
			this->btnPedidoVenta->TabIndex = 5;
			this->btnPedidoVenta->Text = L"Pedido de Venta";
			this->btnPedidoVenta->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPedidoVenta->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPedidoVenta->UseVisualStyleBackColor = true;
			this->btnPedidoVenta->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnPedidoVenta_Click);
			// 
			// btnCliente
			// 
			this->btnCliente->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnCliente->FlatAppearance->BorderSize = 0;
			this->btnCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->IconChar = FontAwesome::Sharp::IconChar::Users;
			this->btnCliente->IconColor = System::Drawing::Color::Black;
			this->btnCliente->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnCliente->IconSize = 36;
			this->btnCliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCliente->Location = System::Drawing::Point(0, 200);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btnCliente->Size = System::Drawing::Size(200, 50);
			this->btnCliente->TabIndex = 4;
			this->btnCliente->Text = L"Cliente";
			this->btnCliente->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCliente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCliente->UseVisualStyleBackColor = true;
			this->btnCliente->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnCliente_Click);
			// 
			// btnPedidoProveedor
			// 
			this->btnPedidoProveedor->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPedidoProveedor->FlatAppearance->BorderSize = 0;
			this->btnPedidoProveedor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPedidoProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPedidoProveedor->IconChar = FontAwesome::Sharp::IconChar::EnvelopeOpenText;
			this->btnPedidoProveedor->IconColor = System::Drawing::Color::Black;
			this->btnPedidoProveedor->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnPedidoProveedor->IconSize = 36;
			this->btnPedidoProveedor->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPedidoProveedor->Location = System::Drawing::Point(0, 150);
			this->btnPedidoProveedor->Name = L"btnPedidoProveedor";
			this->btnPedidoProveedor->Padding = System::Windows::Forms::Padding(4, 0, 5, 0);
			this->btnPedidoProveedor->Size = System::Drawing::Size(200, 50);
			this->btnPedidoProveedor->TabIndex = 3;
			this->btnPedidoProveedor->Text = L"Pedido a Proveedor";
			this->btnPedidoProveedor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPedidoProveedor->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPedidoProveedor->UseVisualStyleBackColor = true;
			this->btnPedidoProveedor->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnPedidoProveedor_Click);
			// 
			// btnVendedor
			// 
			this->btnVendedor->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnVendedor->FlatAppearance->BorderSize = 0;
			this->btnVendedor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVendedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVendedor->IconChar = FontAwesome::Sharp::IconChar::UserCog;
			this->btnVendedor->IconColor = System::Drawing::Color::Black;
			this->btnVendedor->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnVendedor->IconSize = 36;
			this->btnVendedor->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnVendedor->Location = System::Drawing::Point(0, 100);
			this->btnVendedor->Name = L"btnVendedor";
			this->btnVendedor->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btnVendedor->Size = System::Drawing::Size(200, 50);
			this->btnVendedor->TabIndex = 2;
			this->btnVendedor->Text = L"Vendedor";
			this->btnVendedor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnVendedor->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnVendedor->UseVisualStyleBackColor = true;
			this->btnVendedor->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnVendedor_Click);
			// 
			// btnProducto
			// 
			this->btnProducto->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProducto->FlatAppearance->BorderSize = 0;
			this->btnProducto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProducto->IconChar = FontAwesome::Sharp::IconChar::Tags;
			this->btnProducto->IconColor = System::Drawing::Color::Black;
			this->btnProducto->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnProducto->IconSize = 36;
			this->btnProducto->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProducto->Location = System::Drawing::Point(0, 50);
			this->btnProducto->Name = L"btnProducto";
			this->btnProducto->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btnProducto->Size = System::Drawing::Size(200, 50);
			this->btnProducto->TabIndex = 1;
			this->btnProducto->Text = L"Producto";
			this->btnProducto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProducto->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnProducto->UseVisualStyleBackColor = true;
			this->btnProducto->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnProducto_Click);
			// 
			// btnProveedor
			// 
			this->btnProveedor->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnProveedor->FlatAppearance->BorderSize = 0;
			this->btnProveedor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProveedor->IconChar = FontAwesome::Sharp::IconChar::Industry;
			this->btnProveedor->IconColor = System::Drawing::Color::Black;
			this->btnProveedor->IconFont = FontAwesome::Sharp::IconFont::Auto;
			this->btnProveedor->IconSize = 36;
			this->btnProveedor->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProveedor->Location = System::Drawing::Point(0, 0);
			this->btnProveedor->Name = L"btnProveedor";
			this->btnProveedor->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btnProveedor->Size = System::Drawing::Size(200, 50);
			this->btnProveedor->TabIndex = 0;
			this->btnProveedor->Text = L"Proveedor";
			this->btnProveedor->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnProveedor->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnProveedor->UseVisualStyleBackColor = true;
			this->btnProveedor->Click += gcnew System::EventHandler(this, &FrmPresentacion::btnProveedor_Click);
			// 
			// panelFrm
			// 
			this->panelFrm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelFrm->Location = System::Drawing::Point(200, 80);
			this->panelFrm->Name = L"panelFrm";
			this->panelFrm->Size = System::Drawing::Size(1068, 562);
			this->panelFrm->TabIndex = 3;
			// 
			// FrmPresentacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1268, 642);
			this->Controls->Add(this->panelFrm);
			this->Controls->Add(this->panelOpciones);
			this->Controls->Add(this->panelCabecera);
			this->MaximizeBox = false;
			this->Name = L"FrmPresentacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu Principal";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FrmPresentacion::FrmPresentacion_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FrmPresentacion::FrmPresentacion_Load);
			this->panelCabecera->ResumeLayout(false);
			this->panelUser->ResumeLayout(false);
			this->panelUser->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureUser))->EndInit();
			this->panelInicio->ResumeLayout(false);
			this->panelOpciones->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void AbrirFormHijo(Form^ FormHijo)
{
	FormHijo->TopLevel = false;
	FormHijo->Dock = DockStyle::Fill;
	panelFrm->Controls->Add(FormHijo);
	panelFrm->Tag = FormHijo;
	FormHijo->BringToFront();
	FormHijo->Show();
}

private: System::Void btnOpciones_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panelOpciones->Visible) {
		panelOpciones->Visible = false;
	}
	else {
		panelOpciones->Visible = true;
		panelOpciones->BringToFront();
		panelOpciones->Show();
	}
}
private: System::Void btnInicio_Click(System::Object^ sender, System::EventArgs^ e) {
	panelFrm->Controls->Clear();
	panelOpciones->Visible = true;
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void FrmPresentacion_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void btnProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
	panelOpciones->Visible = false;
	AbrirFormHijo(gcnew FrmProveedor());
}
private: System::Void btnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	panelOpciones->Visible = false;
	AbrirFormHijo(gcnew FrmCliente());
}
private: System::Void btnProducto_Click(System::Object^ sender, System::EventArgs^ e) {
	panelOpciones->Visible = false;
	AbrirFormHijo(gcnew FrmProducto());
}
private: System::Void btnVendedor_Click(System::Object^ sender, System::EventArgs^ e) {
	panelOpciones->Visible = false;
	AbrirFormHijo(gcnew FrmVendedor());
}
private: System::Void btnPedidoVenta_Click(System::Object^ sender, System::EventArgs^ e) {
	panelOpciones->Visible = false;
	AbrirFormHijo(gcnew FrmPedidoVenta());
}
private: System::Void btnPedidoProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
	panelOpciones->Visible = false;
	AbrirFormHijo(gcnew FrmPedidoProveedor());
}
private: System::Void btnComprobantePago_Click(System::Object^ sender, System::EventArgs^ e) {
	panelOpciones->Visible = false;
	AbrirFormHijo(gcnew FrmComprobante());
}
private: System::Void btnReportes_Click(System::Object^ sender, System::EventArgs^ e) {
	panelOpciones->Visible = false;
	AbrirFormHijo(gcnew FrmReporte());
}
private: System::Void FrmPresentacion_Load(System::Object^ sender, System::EventArgs^ e) {
	if (lblUsuario->Text == "admin") {
		btnCliente->Visible = false;
		btnPedidoVenta->Visible = false;
		btnComprobantePago->Visible = false;
	}
	else {
		btnProveedor->Visible = false;
		btnProducto->Visible = false;
		btnVendedor->Visible = false;
		btnPedidoProveedor->Visible = false;
		btnReportes->Visible = false;
	}
}
};
}
