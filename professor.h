/***************************************************************************
*
*  $MCD M�dulo de defini��o: M�dulo �rvore
*
*  Arquivo gerado:              professor.h
*  Letras identificadoras:      PRF
*
*  Nome da base de software:    Modulo de professor
*
*  Projeto: Disciplina INF 1301
*  Gestor:  DI/PUC-Rio
*  Autores: Bruce Marcellino, BM  
*			Felipe Alfena, FA
*			Nicolas Paes, NP
*			Mariana Ruddy, MR
*			Rodrigo Pumar, RP.
*
*  $HA Hist�rico de evolu��o:
*     Vers�o	Autor				Data		Observa��es
*       1.00	BM,FA,NP,MR,RP	11/09/2017		Desenvolvimento para T1.
*
*  $ED Descri��o do m�dulo
*	  Este m�dulo implementa um conjunto simples de fun��es e estruturas para criar e manipular um professor.
*     A estrutura professor guarda uma refer�ncia para estruturas que armazenam data e endere�o.
*     O m�dulo admite m�ltiplas inst�ncias de professor.
*     Ao iniciar a execu��o do programa n�o existe professor algum.
*     Ao chamar a fun��o criar, as refer�ncias para data e estrutura s�o alocadas.
*	  Deve-se usar a fun��o libera para que a mem�ria alocada seja liberada.
*	  Passar argumentos inv�lidos como 0 ou "" podem causar erro de formato (PRF_CondRetFormatoInvalido).
*
***************************************************************************/

/***** Declara��es exportadas pelo m�dulo *****/

#define  PRF_MIN_ANO  1850
#define  PRF_TAM_STRING  80
#define  PRF_TAM_UF 3
#define  PRF_TAM_CPF 11
#define  PRF_ANO_BISSEXTO 4

/* Tipo professor */
typedef struct prof Prof;


/***********************************************************************
*
*  $TC Tipo de dados: PRF Condi��es de retorno
*
*
*  $ED Descri��o do tipo
*     Condi��es de retorno
*
***********************************************************************/

typedef enum{
	PRF_CondRetOk,
			/* Condicao de Retorno OK, usada quando a fun��o executa corretamente */
	PRF_CondRetNaoHaMemoria,
			/* Condicao de Retorno Nao Ha Memoria, usada quando a memoria do sistema nao apresenta mais espaco */ 
	PRF_CondRetNaoExisteProf,
			/* Condicao de Retorno Nao Existe Prof, usada quando aquela inst�ncia de professor ou algum dado que ele armazena e que est� sendo acessado, n�o foi alocado. */ 
	PRF_CondRetProfessorJaCriado,
			/* Condicao de Retorno Professor Ja Criado, usada ao tentar inst�nciar um professor duas vezes no mesmo bloco de mem�ria (no mesmo ponteiro). */ 
	PRF_CondRetFormatoInvalido,
			/* Condicao de Retorno Formato Inv�lido, usada quando o formato de algum par�metro est� errado */
} PRF_tpCondRet;


/***********************************************************************
*
*  $FC Fun��o: PRF  Criar professor
*
*  $ED Descri��o da fun��o
*     Cria uma inst�ncia de professor, e o aloca no ponteiro passado por refer�ncia.
*
*  $EP Par�metros
*	  $P professor		- endere�o de um ponteiro, nele ser� alocado o professor criado.
*	  $P nome			- nome do professor criado.
*	  $P rg			- rg do professor criado.
*	  $P cpf			- cpf do professor criado.
*	  $P matricula		- matricula do professor criado.
*	  $P email			- email do professor criado.
*	  $P telefone		- telefone do professor criado.
*	  $P dia			- dia de nascimento do professor criado.
*	  $P mes			- mes de nascimento do professor criado.
*	  $P ano			- ano de nascimento do professor criado.
*	  $P pais			- pais do professor criado.
*	  $P uf			- uf do professor criado.
*	  $P cidade		- cidade do professor criado.
*	  $P bairro		- bairro do professor criado.
*	  $P rua			- rua do professor criado.
*	  $P numero		- numero da casa do professor criado.
*	  $P complemento	- complemento para o endere�o do professor criado.
*
*  $FV Valor retornado
*	  PRF_CondRetOk
*	  PRF_CondRetNaoHaMemoria
*	  PRF_CondRetProfessorJaCriado - usado ao tentar inst�nciar um professor duas vezes no mesmo bloco de mem�ria (no mesmo ponteiro).
*	  PRF_CondRetFormatoInvalido - usado quando o formato de algum par�metro est� errado.
*
***********************************************************************/
PRF_tpCondRet PRF_cria(Prof** professor, char *nome, int rg, char *cpf, int matricula, char *email, int telefone, int dia, int mes, int ano, char *pais, char *uf, char *cidade, char *bairro, char *rua, int numero, char *complemento);


/***********************************************************************
*
*  $FC Fun��o: PRF  Liberar professor
*
*  $ED Descri��o da fun��o
*     Destr�i o professor fornecido.
*     OBS. n�o existe previs�o para poss�veis falhas de execu��o.

*  $EP Par�metros
*	  $P professor		- endere�o de um ponteiro, que ser� liberado.

*  $FV Valor retornado
*     PRF_CondRetOK    - destruiu sem problemas
*
***********************************************************************/
PRF_tpCondRet PRF_libera(Prof** professor);

/***********************************************************************
*
*  $FC Fun��o: PRF  Mostrar professor
*
*  $ED Descri��o da fun��o
*     Exibe na tela todos os dados de professor.

*  $EP Par�metros
*	  $P professor		- ponteiro armazenando um professor que ser� exibido.

*  $FV Valor retornado
*     PRF_CondRetOK    - exibiu na tela com sucesso.
*
***********************************************************************/
PRF_tpCondRet PRF_mostra(Prof* professor);

/***********************************************************************
*
*  $FC Fun��o: PRF Consulta nome professor
*
*  $ED Descri��o da fun��o
*     Retorna por refer�ncia o nome de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P nome - Ponteiro para uma string para o qual a fun��o retornar� o nome requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
/* Inicio do Bloco de Funcoes de Consulta */

    PRF_tpCondRet PRF_consultaNome(Prof* professor, char* nome);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta rg
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o RG de um professor
*
*  $EP Par�metros
*     $P professor -  Ponteiro para um professor
*     $P rg - Ponteiro para um inteiro para o qual a fun��o retornar� o RG requisitado por referencia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaRg(Prof *professor, int *rg);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta cpf
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o CPF de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P cpf - Ponteiro para uma string para o qual a fun��o retornar� o cpf requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaCpf(Prof *professor, char *cpf);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta matricula
*
*  $ED Descri��o da fun��o
*     Retorna por referencia a matricula de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P matricula - Ponteiro para um inteiro para o qual a fun��o retornar� o matricula requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaMatricula(Prof *professor, int *matricula);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta email
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o email de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P email - Ponteiro para uma string para o qual a fun��o retornar� o email requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaEmail(Prof* professor, char* email);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta telefone
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o telefone de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P telefone - Ponteiro para um inteiro para o qual a fun��o retornar� o telefone requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaTelefone(Prof *professor, int *telefone);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta data de nascimento
*
*  $ED Descri��o da fun��o
*     Retorna por referencia a data de nascimento de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P dia - Ponteiro para um inteiro para o qual a fun��o retornar� o dia de nascimento requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaDiaNascimento(Prof *professor, int *dia);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta m�s de nascimento
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o m�s de nascimento de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P mes - Ponteiro para um inteiro para o qual a fun��o retornar� o mes de nascimento requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaMesNascimento(Prof *professor, int *mes);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta ano de nascimento
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o ano de nascimento de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P ano - Ponteiro para um inteiro para o qual a fun��o retornar� o ano de nascimento requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaAnoNascimento(Prof *professor, int *ano);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta pa�s de moradia
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o pa�s de moradia de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P pais - Ponteiro para uma string para o qual a fun��o retornar� o pais de moradia requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaPais(Prof *professor, char *pais);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta uf
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o uf de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P uf - Ponteiro para uma string para o qual a fun��o retornar� o uf requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaUf(Prof *professor, char *uf);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta cidade
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o cidade de moradia de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P cidade - Ponteiro para uma string para o qual a fun��o retornar� a cidade requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaCidade(Prof *professor, char *cidade);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta bairro
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o bairro de moradia de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P cidade - Ponteiro para uma string para o qual a fun��o retornar� o bairro requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaBairro(Prof *professor, char *bairro);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta bairro
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o bairro de moradia de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P bairro - Ponteiro para uma string para o qual a fun��o retornar� a rua requisitada por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaRua(Prof *professor, char *rua);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta numero
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o numero de moradia de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P numero - Ponteiro para um inteiro para o qual a fun��o ao retornar� o numero da moradia requisitado por refer�ncia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaNumero(Prof *professor, int *numero);
 
/***********************************************************************
*
*  $FC Fun��o: PRF Consulta complemento
*
*  $ED Descri��o da fun��o
*     Retorna por referencia o complemento de moradia de um professor
*
*  $EP Par�metros
*     $P professor - Ponteiro para um professor
*     $P complemento - Ponteiro para uma string para o qual a funcao retornar� o complemento da moradia requisitado por referencia
*
*  $FV Valor retornado
*     PRF_tpCondRetOK
*     PRF_CondRetNaoExisteProf
*
***********************************************************************/
 
    PRF_tpCondRet PRF_consultaComplemento(Prof *professor, char *complemento);
 
/* Fim do Bloco de Funcoes de Consulta */

/* In�cio do Bloco de Funcoes de Altera */

/***********************************************************************
*
*  $FC Fun��o: PRF altera Nome
*
*  $ED Descri��o da fun��o
*     Altera o Nome do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu Nome a ser alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P nome -  � o parametro que receber� o novo Nome a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraNome(Prof* professor, char* nome);

/***********************************************************************
*
*  $FC Fun��o: PRF altera RG
*
*  $ED Descri��o da fun��o
*     Altera o RG do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu RG a ser alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P rg -  � o parametro que receber� o novo RG a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraRg(Prof* professor, int rg);

/***********************************************************************
*
*  $FC Fun��o: PRF altera CPF
*
*  $ED Descri��o da fun��o
*     Altera o CPF do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu CPF a ser alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P cpf -  � o parametro que receber� o novo CPF a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraCpf(Prof* professor, char* cpf);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Matricula
*
*  $ED Descri��o da fun��o
*     Altera o Matricula do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� sua matricula a ser alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P matricula - � o parametro que receber� o nova matricula a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraMatricula(Prof* professor, int matricula);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Email
*
*  $ED Descri��o da fun��o
*     Altera o email do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu email a ser alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P email -  � o parametro que receber� o novo email a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraEmail(Prof* professor, char* email);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Telefone
*
*  $ED Descri��o da fun��o
*     Altera o telefone do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu telefone a ser alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P tel -  � o parametro que receber� o novo telefone a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraTelefone(Prof* professor, int tel);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Data de Nascimento
*
*  $ED Descri��o da fun��o
*     Altera o data de nascimento do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� sua Data de Nascimento alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P dia -  � o parametro que receber� o novo dia a ser alterado no professor atual.
*     $P mes -  � o parametro que receber� o novo mes a ser alterado no professor atual.
*     $P ano -  � o parametro que receber� o novo ano a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraDataNascimento(Prof* professor, int dia, int mes, int ano);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Pais
*
*  $ED Descri��o da fun��o
*     Altera o Pais do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu Pa�s alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P pais -  � o parametro que receber� o novo Pa�s a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraPais(Prof* professor, char* pais);

/***********************************************************************
*
*  $FC Fun��o: PRF altera UF
*
*  $ED Descri��o da fun��o
*     Altera o UF do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� sua UF alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P uf -  � o parametro que receber� o nova UF a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraUf(Prof* professor, char* uf);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Cidade
*
*  $ED Descri��o da fun��o
*     Altera o Cidade do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� sua cidade alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P cidade -  � o parametro que receber� o nova cidade a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraCidade(Prof* professor, char* cidade);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Bairro
*
*  $ED Descri��o da fun��o
*     Altera o Bairro do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu bairro alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P bairro -  � o parametro que receber� o novo bairro a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraBairro(Prof* professor, char* bairro);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Rua
*
*  $ED Descri��o da fun��o
*     Altera o Rua do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� sua rua alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P rua -  � o parametro que receber� o nova rua a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraRua(Prof* professor, char* rua);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Numero
*
*  $ED Descri��o da fun��o
*     Altera o Numero do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu numero alterado.
* 					Este par�metro � passado por refer�ncia.
*     $P numero -  � o parametro que receber� o novo numero a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraNumero(Prof* professor, int numero);

/***********************************************************************
*
*  $FC Fun��o: PRF altera Complemento
*
*  $ED Descri��o da fun��o
*     Altera o Complemento do professor
*
*  $EP Par�metros
*     $P professor - � o par�metro que aponta para o professor que ter� seu complemento alterado.
* 					 Este par�metro � passado por refer�ncia.
*     $P complemento -  � o parametro que receber� o novo complemento a ser alterado no professor atual.
*						
*  $FV Valor retornado
*     PRF_CondRetOk
*     PRF_CondRetNaoExisteProf - Inst�ncia de professor ou o argumento passado n�o foi alocado.
*     PRF_CondRetFormatoInvalido - Formato inv�lido do dado a ser atribu�do.
*
***********************************************************************/

PRF_tpCondRet PRF_alteraComplemento(Prof* professor, char* complemento);

/* Fim do Bloco de Funcoes de Altera */

/********** Fim do m�dulo de defini��o: M�dulo Professor **********/