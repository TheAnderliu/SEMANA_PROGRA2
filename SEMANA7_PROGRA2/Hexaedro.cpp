#include "stdafx.h"




CHexaedro::CHexaedro(int _a) :CPoliedro(_a) {
}


CHexaedro::~CHexaedro() {}


void CHexaedro::volumen() {

	float volumen = pow(a, 3);
	cout << "El volumen del cuadrado es: " << volumen<<endl;


}


void CHexaedro::area() {
	float area = pow(a, 2)*6;

	cout << "El area del cuadrado es: " << area << endl;


}