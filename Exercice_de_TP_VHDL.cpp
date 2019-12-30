// Exercice_de_TP_VHDL.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "CSilce.h"


using namespace std;

int main()
{
	CSilce objet1(0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1);
	//CSilce objet2(0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1);
	CSilce objet2(0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0);

	cout << objet2.Out(0,0,1,objet1.Out(0, 1, 1, 1)) << endl;




	system("pause");
	return 0;
}



