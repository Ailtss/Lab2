#ifndef ESPACO_H
#define ESPACO_H
/**
 *@file espaco.h
 *@author Ailton Gabriel
 */

#include "plano.h"

/**
 *@brief Classe responsável pelas figuras espaciais
 */
class espaco
{
private:
	string m_nome;  /** @brief Nome da figura Espacial*/
	float m_aresta1; /** @brief Variável para aresta*/   
	float m_aresta2; /** @brief Variável para aresta*/
	float m_aresta3; /** @brief Variável para aresta*/
	float m_altura; /** @brief Variável para altura*/
	float m_raio;   /** @brief Variável para o raio*/

    float m_arealateral;  /** @brief Define a área lateral da figura */
    float m_areabase;    /** @brief Define a area da base da figura */
	float m_areatotal;   /** @brief Define a área total da figura espacial */
	float m_volume;     

public:
    /**
     *@brief Construtador da classe espaco
     */
	espaco();

	/**
	 *@brief Destrutor da classe espaco
	 */ 
	~espaco();

    /**
     *@brief Método setter para atribuir valores, caso seja uma piramide
     */
	void setPiramide(string nome, string areabase, string arealateral, string altura);
	/**
	 *@brief Método setter para atribuir valores, caso seja um cubo
	 */

	void setCubo(string nome, string aresta);
	/**
	 *@brief Método setter para atribuir valores, caso seja um paralelepipedo
	 */
	void setParalelepipedo(string nome, string aresta1, string aresta2, string aresta3);
	/**
	 *@brief Método setter para atribuir valores, caso seja uma esfera.
	 */

	void setEsfera(string nome, string raio);
    
    /**
     *@brief Método getter para retornar o valor da Área Total da figura.
     */

	float getAreaTotal();

	/**
	 *@brief Método getter para retornar o valor do volume da figura.
	 */
	float getVolume();





};
#endif