#pragma once
#include "Poliedro.h"
class COctaedro :
	public CPoliedro
{
public:
	COctaedro(int _a);
	~COctaedro();
	void volumen();
	void area();
};

