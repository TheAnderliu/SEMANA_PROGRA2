#include "stdafx.h"


CTetraedro::CTetraedro(int _a):CPoliedro(_a) {
}


CTetraedro::~CTetraedro(){}


void CTetraedro::volumen(){
	
	float volumen = (pow(a, 2)*sqrt(3)) / 2;
	cout << "El volumen del cuadrado es: " << volumen<<endl;


}


void CTetraedro::area(){
	float area = pow(a, 2)*sqrt(3);

	cout << "El area del cuadrado es: " << area<<endl;


}