#pragma once
#include "Poliedro.h"
class CHexaedro :
	public CPoliedro
{
public:
	CHexaedro(int _a);
	~CHexaedro();
	void volumen();
	void area();
};

