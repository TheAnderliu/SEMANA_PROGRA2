#include "stdafx.h"




COctaedro::COctaedro(int _a) :CPoliedro(_a) {
}


COctaedro::~COctaedro() {}


void COctaedro::volumen() {

	float volumen = (pow(a, 3)*sqrt(2))/3;
	cout << "El volumen del cuadrado es: " << volumen << endl;


}


void COctaedro::area() {
	float area = (pow(a, 2) * 2)*sqrt(3);

	cout << "El area del cuadrado es: " << area << endl;


}