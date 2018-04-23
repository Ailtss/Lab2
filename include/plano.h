#ifndef PLANO_H
#define PLANO_H
/**
 *@file plano.h
 *@author Ailton Gabriel\
 */

#define pi 3.1415   /** < Variável global constante pi */

#include <string>
#include <cmath>

using namespace std;
/**
 *@brief Classe responsável pelas figuras planas.
 */

class plano
{
private:
	float m_base;   /**@brief Define a base da figura plana */
	float m_altura; /**@brief Define a altura da figura plana */
	float m_valor;  /**@brief Define o raio, caso seja um círculo. Ou o lado, caso seja um quadrado. */
	string m_nome;  /**@brief Define o nome da figura plana */
 
	float m_area;  /**@brief Define a área da figura plana */ 
	float m_perimetro; /**@brief Define o perimetro da figura plana*/

public:
    /**
     *@brief Construtor da classe plano
     */
	plano();
	
	/**
	 *@brief Destrutor da classe plano
	 */
	~plano();
    
    /**
     *@brief Método getter que retorna a Área da figura plana
     */

	float getArea();
	/**
	 *@brief Método getter que retorna o Perimetro da figura plana
	 */
	float getPerimetro();

	/**
	 *@brief Método setter para atribuir valores 
	 */

	void setValues(string nome, string base, string altura);

	/**
	 *@brief Método setter para atribuir valores, caso seja um quadrado ou círculo
	 */
	void setValues(string nome, string valor);



};


#endif