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
	private:
		Graphics^ g;
		 int* posx = new int[max];
		int* posy = new int[max];
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

		   BufferedGraphics^ buffer;
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
	private:
		int w = 30, h = 40;
		/*void pintarNodoRed(int x, int y, int w, int h) {			
			g->FillEllipse(Brushes::Red,x,y,w,h );
		}*/
		/*void pintarNodoBlack(int x, int y, int w, int h) {			
			g->FillEllipse(Brushes::Black, x, y, w, h);
		}*/
		void pintarLineaRed(int x, int y, int m, int n) {
			Point p1(x, y), p2(m, n);
			g->DrawLine(Pens::Red, p1, p2);
		}
		void pintarLineaBlack(int x, int y, int m, int n) {
			Point p1(x, y), p2(m, n);
			g->DrawLine(Pens::Black, p1, p2);
		}
		void asignarPosiciones() {
			posx[0] = 300;	posy[0] = 652;
			posx[1] = 406;	posy[1] = 720;
			posx[2] = 188;	posy[2] = 735;
			posx[3] = 448;	posy[3] = 520;
			posx[4] = 142;	posy[4] = 385;
			posx[5] = 597;	posy[5] = 380;
			posx[6] = 765;	posy[6] = 422;
			posx[7] = 568;	posy[7] = 565;
			posx[8] = 888;	posy[8] = 500;
			posx[9] = 138;	posy[9] = 310;

			PintarTodoElMapa(posx, posy);
			g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
			g->DrawString("PLZ.RAMÓN CASTILLA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 174, 320);
			g->DrawString("PLZ.2 DE MAYO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 55, 398);
			g->DrawString("PLZ.SAN MARTÍN", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 411, 499);
			g->DrawString("PLZ.BOLOGNESI", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 88, 750);
			g->DrawString("PLZ.ARMAS", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 582, 360);
			g->DrawString("PLZ.LUIS AVELINO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 551, 605);
			g->DrawString("PLZ.ITALIA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 881, 484);
			g->DrawString("PLZ.GRAU", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 342, 741);
			g->DrawString("PLZ.BOLIVAR", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 755, 403);
		}
		void PintarTodoElMapa(int pos1[], int pos2[]) {			
			for (int i = 0; i < max; i++) {
				g->FillEllipse(Brushes::Black, pos1[i], pos2[i], w, h);							
			}
			pintarLineaBlack(329, 682, 407, 737);
			pintarLineaBlack(301, 684, 215, 745);
			pintarLineaBlack(327, 661, 450, 554);
			pintarLineaBlack(172, 409, 450, 534);
			pintarLineaBlack(475, 531, 599, 416);
			pintarLineaBlack(476, 549, 569, 582);
			pintarLineaBlack(155, 383, 154, 350);
			pintarLineaBlack(627, 406, 766, 433);
			pintarLineaBlack(793, 453, 889, 511);
			pintarLineaBlack(598, 583, 889, 530);
			pintarLineaBlack(598, 582, 767, 456);


		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ recorrido;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->recorrido = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->button1->Location = System::Drawing::Point(814, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 62);
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
			this->label1->Location = System::Drawing::Point(27, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Origen :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(133, 199);
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
			this->comboBox1->Location = System::Drawing::Point(526, 198);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(425, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Destino : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(557, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Costo de Delivery:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// recorrido
			// 
			this->recorrido->AutoSize = true;
			this->recorrido->Location = System::Drawing::Point(706, 49);
			this->recorrido->Name = L"recorrido";
			this->recorrido->Size = System::Drawing::Size(0, 13);
			this->recorrido->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(461, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(462, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"label7";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(979, 839);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->recorrido);
			this->Controls->Add(this->label5);
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
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
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
	Bitmap^ img = gcnew Bitmap("mapa.jpeg");
	g->DrawImage(img, 42, 300, 900, 500);	
	asignarPosiciones();
	Bitmap^ img1 = gcnew Bitmap("empresa.png");
	g->DrawImage(img1, 279, 654, 80, 40);
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	 srand(time(NULL));
	 g = this->CreateGraphics();
	 BufferedGraphicsContext^ context = BufferedGraphicsManager::Current;
	 buffer = context->Allocate(g, this->ClientRectangle);
}


private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ destino = comboBox1->Text;
	int generar = GenerarCamino(destino);
	recorrido->Text = generar.ToString();	
	Bitmap^ img = gcnew Bitmap("mapa.jpeg");
	g->DrawImage(img, 42, 300, 900, 500);	
	int* arreglo = new int[max];
	int x, y;
	int lug=HallarDestino(destino);
	arreglo=AlmacenarCamino(lug,startnode,pred);
	asignarPosiciones();	
	for (int i = max; i >=0;i--) {
		int opc= arreglo[i];
		switch (opc)
		{
		case 0: x = posx[opc]; y = posy[opc]; 
			g->FillEllipse(Brushes::Red, x, y, w, h);
			break;
		case 1:x = posx[opc]; y = posy[opc];			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.GRAU", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 342, 741);
			break;
		case 2:
			x = posx[opc]; y = posy[opc];
			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.BOLOGNESI", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 88, 750);
			break;
		case 3:
			x = posx[opc]; y = posy[opc];			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.SAN MARTÍN", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 411, 499);
			break;
		case 4:
			x = posx[opc]; y = posy[opc];			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.2 DE MAYO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 55, 398);
			
			break;
		case 5:
			x = posx[opc]; y = posy[opc];			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.ARMAS", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 582, 360);
			break;
		case 6:
			x = posx[opc]; y = posy[opc];			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.BOLIVAR", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 755, 403);
			break;
		case 7:
			x = posx[opc]; y = posy[opc];			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.LUIS AVELINO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 551, 605);
			break;
		case 8:
			x = posx[opc]; y = posy[opc];			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.ITALIA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 881, 484);
			
			break;
		case 9:
			x = posx[opc]; y = posy[opc];			
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.RAMÓN CASTILLA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 174, 320);
			
			break;
		}
		
	}	
	for (int i = 4; i >0;i--) {
		//5 3 0 inf inf		
		int x=arreglo[i];
		int y=arreglo[i -1];		
		if ((x == 0) && (y == 1)) {
			pintarLineaRed(329, 682, 407, 737);
		}else if ((x == 0) && (y == 2)) {
			pintarLineaRed(301, 684, 215, 745);
		}else if ((x == 0) && (y == 3)) {
			pintarLineaRed(327, 661, 450, 554);
		}else if ((x == 3) && (y == 4)) {
			pintarLineaRed(172, 409, 450, 534);
		}else if ((x == 3) && (y == 5)) {
			pintarLineaRed(475, 531, 599, 416);
		}else if ((x == 3) && (y == 7)) {
			pintarLineaRed(476, 549, 569, 582);
		}else if ((x == 4) && (y == 9)) {
			pintarLineaRed(155, 383, 154, 350);
		}else if ((x == 5) && (y == 6)) {
			pintarLineaRed(627, 406, 766, 433);
		}else if ((x == 6) && (y == 8)) {
			pintarLineaRed(793, 453, 889, 511);
		}else if ((x == 7) && (y == 8)) {
			pintarLineaRed(598, 583, 889, 530);
		}else if ((x == 7) && (y == 6)) {
			pintarLineaRed(598, 582, 767, 456);
		}
	}	
	Bitmap^ img1 = gcnew Bitmap("empresa.png");
	g->DrawImage(img1, 279, 652, 80, 40);
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Red, 270, 625);
	/*g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);	
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
	g->DrawString("EMPRESA", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);*/
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label6->Text = e->X.ToString();
		this->label7->Text = e->Y.ToString();	
}
};
}
