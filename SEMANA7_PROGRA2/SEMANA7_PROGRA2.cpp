// SEMANA7_PROGRA2.cpp : main project file.

#include "stdafx.h"

void menu(){
	
	cout << "1. Tetraedro "<<endl;
	cout << "2. Hexaedro " << endl;
	cout << "3. Octaedro " << endl;
	cout << "4. Salir " << endl;
	
}

int main()
{
	CTetraedro * objTetraedro;
	CHexaedro * objHexaedro;
	COctaedro * objOctaedro;

	int a;
	int opc;

	//do{

	while (1)
	{
		Console::Clear();
		menu();
		cout << "Ingrese una opcion: " << endl;
		cin >> opc;
		cout << "Ingrese el numero de aristas: ";
		cin >> a;
		switch (opc) {
		case 1: objTetraedro = new CTetraedro(a);
			objTetraedro->area();
			objTetraedro->volumen(); break;

		case 2:  objHexaedro = new CHexaedro(a);
			objHexaedro->area();
			objHexaedro->volumen();break;

		case 3: objOctaedro = new COctaedro(a);
			objOctaedro->area();
			objOctaedro->volumen();break;
		}

		_getch();
	}
	//} while (opc!=4);




    return 0;
}
