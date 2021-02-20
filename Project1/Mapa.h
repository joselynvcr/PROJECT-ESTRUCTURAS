#pragma once
using namespace System::Drawing;
int w = 30, h = 40;
void pintarLineaRed(Graphics^ g,int x, int y, int m, int n) {
	Point p1(x, y), p2(m, n);
	g->DrawLine(Pens::Red, p1, p2);
}
void pintarLineaBlack(Graphics^ g,int x, int y, int m, int n) {
	Point p1(x, y), p2(m, n);//par ordenado 
	g->DrawLine(Pens::Black, p1, p2);
}
void PintarTodoElMapa(Graphics^ g,int pos1[], int pos2[]){
	for (int i = 0; i < max; i++) {
		g->FillEllipse(Brushes::Black, pos1[i], pos2[i], w, h);
	}
	//					x,   y   ,x2 , y2
	pintarLineaBlack(g,329, 682, 407, 737);
	pintarLineaBlack(g, 301, 684, 215, 745);
	pintarLineaBlack(g, 327, 661, 450, 554);
	pintarLineaBlack(g, 172, 409, 450, 534);
	pintarLineaBlack(g, 475, 531, 599, 416);
	pintarLineaBlack(g, 476, 549, 569, 582);
	pintarLineaBlack(g, 155, 383, 154, 350);
	pintarLineaBlack(g, 627, 406, 766, 433);
	pintarLineaBlack(g, 793, 453, 889, 511);
	pintarLineaBlack(g, 598, 583, 889, 530);
	pintarLineaBlack(g, 598, 582, 767, 456);
	pintarLineaBlack(g, 202, 735, 157, 426);

}
void asignarPosiciones(Graphics^ g, int *posx,int *posy) {
	posx[0] = 705;	posy[0] = 652;
	posx[1] = 726;	posy[1] = 720;
	posx[2] = 508;	posy[2] = 735;
	posx[3] = 768;	posy[3] = 520;
	posx[4] = 462;	posy[4] = 385;
	posx[5] = 917;	posy[5] = 380;
	posx[6] = 1085;	posy[6] = 422;
	posx[7] = 888;	posy[7] = 565;
	posx[8] = 1208;	posy[8] = 500;
	posx[9] = 458;	posy[9] = 310;

	PintarTodoElMapa(g,posx, posy);
	g->DrawString("GRASITAS", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 670, 625);
	g->DrawString("PLZ.RAMÓN CASTILLA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 574, 320);
	g->DrawString("PLZ.2 DE MAYO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 455, 398);
	g->DrawString("PLZ.SAN MARTÍN", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 811, 499);
	g->DrawString("PLZ.BOLOGNESI", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 488, 750);
	g->DrawString("PLZ.ARMAS", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 582, 760);
	g->DrawString("PLZ.LUIS AVELINO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 951, 605);
	g->DrawString("PLZ.ITALIA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 1281, 484);
	g->DrawString("PLZ.GRAU", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 742, 741);
	g->DrawString("PLZ.BOLIVAR", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 1155, 403);
}

void LetraNodoDijkstra(Graphics^ g, int* posx, int* posy, int* arreglo) {
	int x, y;
	for (int i = max; i >= 0; i--) {
		int opc = arreglo[i];
		switch (opc)
		{
		case 1:
			x = posx[opc]; y = posy[opc];
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
	for (int i = 4; i > 0; i--) {
		//5 3 0 inf inf		
		int x = arreglo[i];
		int y = arreglo[i - 1];
		if ((x == 0) && (y == 1)) {
			pintarLineaRed(g, 329, 682, 407, 737);
		}
		else if ((x == 0) && (y == 2)) {
			pintarLineaRed(g, 301, 684, 215, 745);
		}
		else if ((x == 0) && (y == 3)) {
			pintarLineaRed(g, 327, 661, 450, 554);
		}
		else if ((x == 3) && (y == 4)) {
			pintarLineaRed(g, 172, 409, 450, 534);
		}
		else if ((x == 3) && (y == 5)) {
			pintarLineaRed(g, 475, 531, 599, 416);
		}
		else if ((x == 3) && (y == 7)) {
			pintarLineaRed(g, 476, 549, 569, 582);
		}
		else if ((x == 4) && (y == 9)) {
			pintarLineaRed(g, 155, 383, 154, 350);
		}
		else if ((x == 5) && (y == 6)) {
			pintarLineaRed(g, 627, 406, 766, 433);
		}
		else if ((x == 6) && (y == 8)) {
			pintarLineaRed(g, 793, 453, 889, 511);
		}
		else if ((x == 7) && (y == 8)) {
			pintarLineaRed(g, 598, 583, 889, 530);
		}
		else if ((x == 7) && (y == 6)) {
			pintarLineaRed(g, 598, 582, 767, 456);
		}
	}
}

