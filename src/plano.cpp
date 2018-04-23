#include "plano.h"
/**
 *@file plano.cpp
 *@brief Implementação da classe plano
 *@author Ailton Gabriel
 *@since 21/04/2018
 *@date 22/04/2018
*/


plano::plano()
{
	m_base = 0.0;
	m_altura = 0.0;
	m_valor = 0.0;
	m_nome = "";

	m_area = 0.0;
	m_perimetro = 0.0;
}


float plano::getArea()
{
	return m_area;
}

float plano::getPerimetro()
{
	return m_perimetro;
}

void plano::setValues(string nome, string base, string altura)
{
  m_nome = nome;
  m_base = stof(base);
  m_altura = stof(altura);

  if(m_nome == "Retangulo" || m_nome == "retangulo")
  {
  	m_area = (m_base*m_altura);
  	m_perimetro = (2*m_base)+(2*m_altura);
  }

  else if(m_nome == "Triangulo" || "triangulo")
  {
  	m_area = ((m_base*m_altura)/2);
  	m_perimetro = (3*m_base);
  }

}

void plano::setValues(string nome, string valor)
{
	m_nome = nome;
	m_valor = stof(valor);

	if(m_nome == "Circulo" || m_nome == "circulo")
	{
		m_area = pi*(pow(m_valor, 2));
		m_perimetro = 2*pi*m_valor;
	}

	else if(m_nome == "Quadrado" || m_nome == "quadrado")
	{
		m_area = pow(m_valor, 2);
		m_perimetro = (4*m_valor);
	}
}

plano::~plano()
{

}