#include "run.h"
#include <iostream>
#include <iomanip>
using namespace std;

/**
 *@file run.cpp
 *@brief Implementação da classe run
 *@author Ailton Gabriel
 *@since 21/04/2018
 *@date 22/04/2018
*/

run::run()
{
}


run::run(int argc, char const *argv[])
{   
	string aux;
	if(argc == 1)
	{
		cout << "Este programa tem o intuito de calcular medidas de figuras planas e espaciais. É necessário entrar com o nome da figura e seus valores para o cálculo" << endl;
		cout << endl;
		cout << "Figuras planas(Área e Perímetro): " << endl;
		cout << endl;
		cout << "quadrado 'lado';" << endl;
		cout << "rentangulo 'base' 'altura';" << endl;
		cout << "triangulo 'base' 'altura';" << endl;
		cout << "circulo 'raio';" << endl;
       
        cout << endl;

		cout << "Figuras espaciais(Área total e Volume): " << endl;
		cout << endl;
		cout << "pirâmide 'area_base' 'area_lateral' 'altura';" << endl;
        cout << "cubo 'aresta';" << endl;
        cout << "paralelepipedo 'aresta_1' 'aresta_2' 'aresta_3';" << endl;
        cout << "esfera 'raio';" << endl;
        cout << endl;
        cout << "Execute novamente!" << endl;
        cout << endl;

	}
	


	else if(argc < 3)
	{
		cout << argv[0] << " Erro!! Poucos argumentos passados." << endl;
	}

	else
	{
        aux = argv[1];

       if(aux == "retangulo" || aux == "triangulo")
       {

       	 m_plano.setValues(aux, argv[2], argv[3]);

       	 cout << "Area do " << aux << ": " << setprecision(3) << m_plano.getArea() << endl;
         cout << "Perimetro do " << aux << ": " << setprecision(3) << m_plano.getPerimetro() << endl;



       }

       else if(aux == "circulo" || aux == "quadrado")
       {

       	 m_plano.setValues(aux, argv[2]);

       	 cout << "Area do " << aux << ": " << setprecision(3) << m_plano.getArea() << endl;
         cout << "Perimetro do " << aux << ": " << setprecision(3) << m_plano.getPerimetro() << endl;


       	 
       }


       else
       {
       	 if(aux == "piramide")
       	 {
       	 	m_espaco.setPiramide(aux, argv[2], argv[3], argv[4]);
       	 }

       	 else if(aux == "cubo")
       	 {
       	 	m_espaco.setCubo(aux, argv[2]);
       	 }

       	 else if(aux == "paralelepipedo")
       	 {
       	 	m_espaco.setParalelepipedo(aux, argv[2], argv[3], argv[4]);
       	 }

       	 else
       	 {
       	 	m_espaco.setEsfera(aux, argv[2]);
       	 }

       	 cout << "Área total do " << aux << ": " << setprecision(5) << m_espaco.getAreaTotal() << endl;
       	 cout << "Volume do " << aux << ": " << setprecision(5) << m_espaco.getVolume() << endl;
       }


    }

}	

run::~run()
{

}


