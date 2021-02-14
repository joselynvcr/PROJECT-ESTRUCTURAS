#pragma once
#include <iostream>
#include <conio.h>
#include <sstream>
#include "nombresRepartidor.h"
#include "Grafo.h"
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
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label;

	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ nombre;
	private: System::Windows::Forms::Label^ apellido;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ recorrido;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	protected:

	protected:
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->apellido = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->recorrido = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->Location = System::Drawing::Point(37, 45);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(62, 17);
			this->label->TabIndex = 0;
			this->label->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido:";
			// 
			// nombre
			// 
			this->nombre->AutoSize = true;
			this->nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombre->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->nombre->Location = System::Drawing::Point(153, 45);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(58, 17);
			this->nombre->TabIndex = 3;
			this->nombre->Text = L"Nombre";
			this->nombre->Click += gcnew System::EventHandler(this, &MyForm::nombre_Click);
			// 
			// apellido
			// 
			this->apellido->AutoSize = true;
			this->apellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellido->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->apellido->Location = System::Drawing::Point(156, 102);
			this->apellido->Name = L"apellido";
			this->apellido->Size = System::Drawing::Size(58, 17);
			this->apellido->TabIndex = 4;
			this->apellido->Text = L"Apellido";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(836, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 43);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Generar Orden";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Origen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(124, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Restaurant Grasitas";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Plaza Grau", L"Plaza Bolognesi", L"Plaza San Martin",
					L"Plaza Dos de Mayo", L"Plaza de Armas", L"Plaza Bolivar", L"Plaza Luis Alverto Sanchez", L"Plaza Italia", L"Plaza Ramon Castilla"
			});
			this->comboBox1->Location = System::Drawing::Point(525, 176);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(425, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Destino";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(836, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 42);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Generar Camino";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(223, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Costo de Delivery:";
			// 
			// recorrido
			// 
			this->recorrido->AutoSize = true;
			this->recorrido->Location = System::Drawing::Point(371, 238);
			this->recorrido->Name = L"recorrido";
			this->recorrido->Size = System::Drawing::Size(0, 13);
			this->recorrido->TabIndex = 12;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(62, 264);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(888, 527);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 819);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->recorrido);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->apellido);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void nombre_Click(System::Object^ sender, System::EventArgs^ e) {	

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	nombre->ForeColor = Color::Black;
	apellido->ForeColor = Color::Black;
	String^ nombres = generarNombre();
	String^ apellidos = generarApellido();
	nombre->Text = nombres;
	apellido->Text = apellidos;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	srand(time(NULL));
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ destino = comboBox1->Text;
	int generar = GenerarCamino(destino);
	recorrido->Text = generar.ToString();
}
};
}
