#pragma once
#include <iostream>
#include <conio.h>
#include "nombresRepartidor.h"
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
			this->label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nombre = (gcnew System::Windows::Forms::Label());
			this->apellido = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->nombre->Location = System::Drawing::Point(153, 45);
			this->nombre->Name = L"nombre";
			this->nombre->Size = System::Drawing::Size(56, 17);
			this->nombre->TabIndex = 3;
			this->nombre->Text = L"nombre";
			this->nombre->Click += gcnew System::EventHandler(this, &MyForm::nombre_Click);
			// 
			// apellido
			// 
			this->apellido->AutoSize = true;
			this->apellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apellido->Location = System::Drawing::Point(156, 102);
			this->apellido->Name = L"apellido";
			this->apellido->Size = System::Drawing::Size(57, 17);
			this->apellido->TabIndex = 4;
			this->apellido->Text = L"apellido";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1022, 562);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->apellido);
			this->Controls->Add(this->nombre);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void nombre_Click(System::Object^ sender, System::EventArgs^ e) {
	


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string nombre = generarNombre();
	Project1::MyForm::nombre->Text = nombre;
}
};
}
