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
	pintarLineaBlack(g, 649, 682, 727, 737);
	pintarLineaBlack(g, 621, 684, 535, 745);
	pintarLineaBlack(g, 647, 661, 770, 554);
	pintarLineaBlack(g, 492, 409, 770, 534);
	pintarLineaBlack(g, 795, 531, 919, 416);
	pintarLineaBlack(g, 796, 549, 889, 582);
	pintarLineaBlack(g, 475, 383, 474, 350);
	pintarLineaBlack(g, 947, 406, 1086, 433);
	pintarLineaBlack(g, 1113, 453, 1209, 511);
	pintarLineaBlack(g, 918, 583, 1209, 530);
	pintarLineaBlack(g, 918, 582, 1087, 456);
	pintarLineaBlack(g, 520, 735, 480, 426);

}
void asignarPosiciones(Graphics^ g, int *posx,int *posy) {
	posx[0] = 620;	posy[0] = 652;
	posx[1] = 728;	posy[1] = 720;
	posx[2] = 510;	posy[2] = 735;
	posx[3] = 770;	posy[3] = 520;
	posx[4] = 464;	posy[4] = 385;
	posx[5] = 919;	posy[5] = 380;
	posx[6] = 1087;	posy[6] = 422;
	posx[7] = 890;	posy[7] = 565;
	posx[8] = 1210;	posy[8] = 500;
	posx[9] = 460;	posy[9] = 310;

	PintarTodoElMapa(g, posx, posy);
	g->DrawString("GRASITAS", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 590, 625);
	g->DrawString("PLZ.RAMÓN CASTILLA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 497, 320);
	g->DrawString("PLZ.2 DE MAYO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 375, 398);
	g->DrawString("PLZ.SAN MARTÍN", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 734, 499);
	g->DrawString("PLZ.BOLOGNESI", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 411, 750);
	g->DrawString("PLZ.ARMAS", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 905, 360);
	g->DrawString("PLZ.LUIS AVELINO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 874, 605);
	g->DrawString("PLZ.ITALIA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 1204, 484);
	g->DrawString("PLZ.GRAU", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 665, 741);
	g->DrawString("PLZ.BOLIVAR", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Black, 1078, 403);
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
			g->DrawString("PLZ.GRAU", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 665, 741);
			break;
		case 2:
			x = posx[opc]; y = posy[opc];
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.BOLOGNESI", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 411, 750);
			break;
		case 3:
			x = posx[opc]; y = posy[opc];
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.SAN MARTÍN", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 734, 499);
			break;
		case 4:
			x = posx[opc]; y = posy[opc];
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.2 DE MAYO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 375, 398);

			break;
		case 5:
			x = posx[opc]; y = posy[opc];
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.ARMAS", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 905, 360);
			break;
		case 6:
			x = posx[opc]; y = posy[opc];
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.BOLIVAR", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 1078, 403);
			break;
		case 7:
			x = posx[opc]; y = posy[opc];
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.LUIS AVELINO", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 874, 605);
			break;
		case 8:
			x = posx[opc]; y = posy[opc];
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.ITALIA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 1204, 484);
			break;
		case 9:
			x = posx[opc]; y = posy[opc];
			g->FillEllipse(Brushes::Red, x, y, w, h);
			g->DrawString("PLZ.RAMÓN CASTILLA", gcnew System::Drawing::Font("Bernard MT Condensed", 11), Brushes::Red, 497, 320);
			break;
		}

	}
	for (int i = 4; i > 0; i--) {
		//5 3 0 inf inf		
		int x = arreglo[i];
		int y = arreglo[i - 1];
		if ((x == 0) && (y == 1)) {
			pintarLineaRed(g, 649, 682, 727, 737);
		}
		else if ((x == 0) && (y == 2)) {
			pintarLineaRed(g, 621, 684, 535, 745);
		}
		else if ((x == 0) && (y == 3)) {
			pintarLineaRed(g, 647, 661, 770, 554);
		}
		else if ((x == 3) && (y == 4)) {
			pintarLineaRed(g, 492, 409, 770, 534);
		}
		else if ((x == 3) && (y == 5)) {
			pintarLineaRed(g, 795, 531, 919, 416);
		}
		else if ((x == 3) && (y == 7)) {
			pintarLineaRed(g, 796, 549, 889, 582);
		}
		else if ((x == 4) && (y == 9)) {
			pintarLineaRed(g, 475, 383, 474, 350);
		}
		else if ((x == 5) && (y == 6)) {
			pintarLineaRed(g, 947, 406, 1086, 433);
		}
		else if ((x == 6) && (y == 8)) {
			pintarLineaRed(g, 1113, 453, 1209, 511);
		}
		else if ((x == 7) && (y == 8)) {
			pintarLineaRed(g, 918, 583, 1209, 530);
		}
		else if ((x == 7) && (y == 6)) {
			pintarLineaRed(g, 918, 582, 1087, 456);
		}
	}
}

