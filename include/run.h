#ifndef RUN_H
#define RUN_H
/**
 *@file run.h
 *@author Ailton Gabriel
 */
#include "plano.h"
#include "espaco.h"

/**
 *@brief Classe 'run' responsável por executar o código para deixar a main mais legível
 */
class run
{
   private:
   	plano m_plano; /**@brief Instancia um objeto para o caso da figura ser plana*/
  	espaco m_espaco; /**@brief Instancia um objeto para o caso da figura ser espacial*/


   public:
   	/**
   	 *@brief Construtor da classe run
   	 */
   	run();

   	/**
   	 *@brief Método da classe run que recebe parâmetros da linha de comando
   	 *@param[in] argc Número de Argumentos
   	 *@param[in] argv Array de string para os Argumentos passados
   	 */
   	run(int argc, char const *argv[]);

   	/**
   	 *@brief Destrutor da classe run
   	 */
   	~run();
};

#endif