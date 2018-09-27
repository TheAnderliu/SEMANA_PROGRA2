#pragma once
#include "Poliedro.h"
class CTetraedro :
	public CPoliedro
{
public:
	CTetraedro(int _a);
	~CTetraedro();
	void volumen();
	void area();

};

