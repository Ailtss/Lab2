#include "espaco.h"
/**
 *@file espaco.cpp
 *@brief Implementação da classe espaco
 *@author Ailton Gabriel
 *@since 21/04/2018
 *@date 22/04/2018
*/


espaco::espaco()
{
	m_nome = "";
	m_aresta1 = 0;
	m_aresta2 = 0;
	m_aresta3 = 0;

	m_altura = 0;
	m_raio = 0;

	m_arealateral = 0;
	m_areabase = 0;
	m_areatotal = 0;
	m_volume = 0;
}

espaco::~espaco()
{

}


void espaco::setPiramide(string nome, string areabase, string arealateral, string altura)
{
	m_nome = nome;
	m_areabase = stof(areabase);
	m_arealateral = stof(arealateral);
	m_altura = stof(altura);

	m_areatotal = (m_areabase + m_arealateral);
	m_volume = (((1)*(m_areabase)*(m_altura))/3);

}

void espaco::setCubo(string nome, string aresta)
{
	m_nome = nome;
	m_aresta1 = stof(aresta);

	m_areatotal = (6*m_aresta1);
	m_volume = pow(m_aresta1, 3);

	
}

void espaco::setParalelepipedo(string nome, string aresta1, string aresta2, string aresta3)
{
	m_nome = nome;
	m_aresta1 = stof(aresta1);
	m_aresta2 = stof(aresta2);
	m_aresta3 = stof(aresta3);

	m_areatotal = (2*m_aresta1*m_aresta2)+(2*m_aresta1*m_aresta3)+(2*m_aresta2*m_aresta3);
    m_volume = (m_aresta1*m_aresta2*m_aresta3);

}

void espaco::setEsfera(string nome, string raio)
{

	m_nome = nome;
	m_raio = stof(raio);

	m_areatotal = (4*pi*(pow(m_raio, 2)));
	m_volume = (((4)*(pi)*(pow(m_raio, 3)))/3);
}


float espaco::getAreaTotal()
{
	return m_areatotal;
}


float espaco::getVolume()
{
	return m_volume;
}
