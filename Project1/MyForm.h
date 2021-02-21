#pragma once
#include <iostream>
#include <conio.h>
#include <sstream>
#include "nombresRepartidor.h"
#include "Grafo.h"
#include "Mapa.h"
#include "Pedido.h"

using namespace std;

namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			g = this->CreateGraphics();
			
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;

	private:
		Graphics^ g;//generar graph
		int* posx = new int[max];//posicion x
		int* posy = new int[max];//posicion y
		double precio_Producto;
		double PrecioDelivery;
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Panel^ panelTitulo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ precioDelivery;
	private: System::Windows::Forms::Label^ precioProducto;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ producto;
	private: System::Windows::Forms::Label^ codigo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ nombre;
	private: System::Windows::Forms::Label^ apellido;
	private: System::Windows::Forms::Label^ transporte;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ txtorigen;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ total;
	private: System::Windows::Forms::Label^ label10;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelTitulo = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->precioDelivery = (gcnew System::Windows::Forms::Label());
			this->precioProducto = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->producto = (gcnew System::Windows::Forms::Label());
			this->codigo = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->apellido = (gcnew System::Windows::Forms::Label());
			this->transporte = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->total = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtorigen = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			this->panelTitulo->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->panelMenu->Controls->Add(this->button1);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(220, 856);
			this->panelMenu->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(0, 80);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button1->Size = System::Drawing::Size(220, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"          Delivery";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panelLogo
			// 
			this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->panelLogo->Controls->Add(this->label2);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(220, 80);
			this->panelLogo->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(22, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Restaurante Grasitas";
			// 
			// panelTitulo
			// 
			this->panelTitulo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->panelTitulo->Controls->Add(this->label1);
			this->panelTitulo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitulo->Location = System::Drawing::Point(220, 0);
			this->panelTitulo->Name = L"panelTitulo";
			this->panelTitulo->Size = System::Drawing::Size(1085, 80);
			this->panelTitulo->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(542, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DELIVERY";
			// 
			// precioDelivery
			// 
			this->precioDelivery->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->precioDelivery->AutoSize = true;
			this->precioDelivery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precioDelivery->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->precioDelivery->Location = System::Drawing::Point(957, 80);
			this->precioDelivery->Name = L"precioDelivery";
			this->precioDelivery->Size = System::Drawing::Size(42, 15);
			this->precioDelivery->TabIndex = 8;
			this->precioDelivery->Text = L"Precio";
			// 
			// precioProducto
			// 
			this->precioProducto->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->precioProducto->AutoSize = true;
			this->precioProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precioProducto->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->precioProducto->Location = System::Drawing::Point(957, 40);
			this->precioProducto->Name = L"precioProducto";
			this->precioProducto->Size = System::Drawing::Size(42, 15);
			this->precioProducto->TabIndex = 8;
			this->precioProducto->Text = L"Precio";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(819, 80);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 15);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Precio  Delivery:";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(800, 11);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 15);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Monto a Pagar:";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(819, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(114, 15);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Precio de Producto:";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(454, 11);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(52, 15);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Pedido";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// producto
			// 
			this->producto->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->producto->AutoSize = true;
			this->producto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->producto->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->producto->Location = System::Drawing::Point(580, 80);
			this->producto->Name = L"producto";
			this->producto->Size = System::Drawing::Size(56, 15);
			this->producto->TabIndex = 8;
			this->producto->Text = L"Producto";
			this->producto->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// codigo
			// 
			this->codigo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->codigo->AutoSize = true;
			this->codigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->codigo->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->codigo->Location = System::Drawing::Point(580, 40);
			this->codigo->Name = L"codigo";
			this->codigo->Size = System::Drawing::Size(46, 15);
			this->codigo->TabIndex = 7;
			this->codigo->Text = L"Código";
			this->codigo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(479, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 15);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Producto:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(479, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 15);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Código:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(118, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 15);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Repartidor";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(125, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 15);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(125, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Apellido:";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(125, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Transporte:";
			// 
			// nombre
			// 
			this->nombre->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->nombre->AutoSize = true;
			this->nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->nombre->Location = System::Drawing::Point(213, 40);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(52, 15);
			this->nombre->TabIndex = 6;
			this->nombre->Text = L"Nombre";
			// 
			// apellido
			// 
			this->apellido->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->apellido->AutoSize = true;
			this->apellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellido->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->apellido->Location = System::Drawing::Point(213, 80);
			this->apellido->Name = L"apellido";
			this->apellido->Size = System::Drawing::Size(51, 15);
			this->apellido->TabIndex = 7;
			this->apellido->Text = L"Apellido";
			// 
			// transporte
			// 
			this->transporte->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->transporte->AutoSize = true;
			this->transporte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transporte->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->transporte->Location = System::Drawing::Point(213, 119);
			this->transporte->Name = L"transporte";
			this->transporte->Size = System::Drawing::Size(66, 15);
			this->transporte->TabIndex = 4;
			this->transporte->Text = L"Transporte";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->total);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->precioDelivery);
			this->panel1->Controls->Add(this->precioProducto);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->producto);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->transporte);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->codigo);
			this->panel1->Controls->Add(this->apellido);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->nombre);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(220, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1085, 143);
			this->panel1->TabIndex = 3;
			// 
			// total
			// 
			this->total->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->total->AutoSize = true;
			this->total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->total->Location = System::Drawing::Point(957, 119);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(42, 15);
			this->total->TabIndex = 10;
			this->total->Text = L"Precio";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(822, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 15);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Total:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->txtorigen);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(220, 223);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1085, 66);
			this->panel2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(860, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 41);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Generar Orden";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Plaza Grau", L"Plaza Bolognesi", L"Plaza San Martin",
					L"Plaza Dos de Mayo", L"Plaza de Armas", L"Plaza Bolivar", L"Plaza Luis Alverto Sanchez", L"Plaza Italia", L"Plaza Ramon Castilla"
			});
			this->comboBox1->Location = System::Drawing::Point(515, 23);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(134, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged_1);
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label11->Location = System::Drawing::Point(435, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 15);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Destino:";
			// 
			// txtorigen
			// 
			this->txtorigen->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtorigen->AutoSize = true;
			this->txtorigen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtorigen->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtorigen->Location = System::Drawing::Point(213, 29);
			this->txtorigen->Name = L"txtorigen";
			this->txtorigen->Size = System::Drawing::Size(122, 15);
			this->txtorigen->TabIndex = 5;
			this->txtorigen->Text = L"Restaurante Grasitas";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(137, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 15);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Origen: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(370, 300);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(900, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1305, 856);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelTitulo);
			this->Controls->Add(this->panelMenu);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->panelMenu->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			this->panelLogo->PerformLayout();
			this->panelTitulo->ResumeLayout(false);
			this->panelTitulo->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));	
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//^(circunflejo) -> funcion de puntero
	//Cambiar de color a labels al hacer clic a Generar Orden
	nombre->ForeColor = Color::Black;
	apellido->ForeColor = Color::Black;
	txtorigen->ForeColor = Color::Black;
	transporte->ForeColor = Color::Black;
	codigo->ForeColor = Color::Black;
	producto->ForeColor = Color::Black;
	precioProducto->ForeColor = Color::Black;
	total->ForeColor = Color::Black;

	//Agregar valores a labels
	nombre->Text = generarNombre();
	apellido->Text = generarApellido();
	transporte->Text = generarTransporte();
	codigo->Text = generarCodigoOrden().ToString();
	producto->Text = generarProducto();
	precio_Producto = generarPrecio();

	precioProducto->Text = "S/. " + precio_Producto.ToString();
	total->Text = "S/. " + (PrecioDelivery + precio_Producto).ToString();

	pictureBox1->Visible = false;//haver invisible mapa PictureBox
	Bitmap^ img = gcnew Bitmap("mapa.jpeg");//cargar archivo de imagen
	g->DrawImage(img, 370, 300, 900, 500);//(img , x, y, ancho, alto)
	asignarPosiciones(g, posx, posy);
	Bitmap^ img1 = gcnew Bitmap("restaurant.png");
	g->DrawImage(img1, 595, 654, 80, 40);
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	precioDelivery->ForeColor = Color::Black;
	String^ destino = comboBox1->Text;
	PrecioDelivery = GenerarCamino(destino);
	precioDelivery->Text = "S/. "+ PrecioDelivery.ToString();
	double MontoTotal = PrecioDelivery + precio_Producto;
	total->Text = "S/. " + (PrecioDelivery + precio_Producto).ToString();

	int* arreglo = new int[max];
	int lugarDestino=HallarDestino(destino);
	//Llamar a la Libreria Grafo.h AlmacenarCamino
	arreglo=AlmacenarCamino(lugarDestino,startnode);
	//Llama a la libreria Mapa.h asignarPosiciones
	asignarPosiciones(g, posx, posy);
	LetraNodoDijkstra(g, posx, posy, arreglo);
	//Almacenar imagen 
	Bitmap^ img1 = gcnew Bitmap("restaurant.png");
	g->DrawImage(img1, 595, 652, 80, 40);
	g->DrawString("GRASITAS", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Red, 590, 625);
}
};
}
