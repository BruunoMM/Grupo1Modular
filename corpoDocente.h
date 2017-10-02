/***************************************************************************
*
*  $MCD Módulo de definição: Módulo Corpo Docente
*
*  Arquivo gerado:              corpoDocente.h
*  Letras identificadoras:      CDO
*
*  Nome da base de software:    Fonte do módulo Corpo Docente
*
*  Projeto: Disciplina INF 1301
*  Gestor:  DI/PUC-Rio
*  Autores: Bruce Marcellino, BM  
*			Felipe Alfena, FA
*			Nicolas Paes, NP
*			Mariana Ruddy, MR
*			Rodrigo Pumar, RP.
*
*  $HA Histórico de evolução:
*     Versão	Autor		Data		Observações
*       0.01	BM,FA,NP,MR,RP	01/10/2017	Desenvolvimento para T2.
*
*  $ED Descrição do módulo
*	  TODO
*
***************************************************************************/
typedef struct corpoDocente CorpoDocente;

CDO_tpCondRet CDO_cria();
CDO_tpCondRet CDO_cadastra(Prof** professor, char *nome, int rg, char *cpf, int matricula, char *email, int telefone, int dia, int mes, int ano, char *pais, char *uf, char *cidade, char *bairro, char *rua, int numero, char *complemento);
CDO_tpCondRet CDO_busca(char *nome);
