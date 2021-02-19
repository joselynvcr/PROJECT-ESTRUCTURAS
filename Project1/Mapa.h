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

	PintarTodoElMapa(g,posx, posy);
	g->DrawString("GRASITAS", gcnew System::Drawing::Font("Bernard MT Condensed", 18), Brushes::Black, 270, 625);
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

