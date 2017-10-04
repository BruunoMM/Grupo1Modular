/***************************************************************************
*
*  $MCD M�dulo de defini��o: M�dulo Corpo Docente
*
*  Arquivo gerado:              corpoDocente.h
*  Letras identificadoras:      CDO
*
*  Nome da base de software:    Fonte do m�dulo Corpo Docente
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
*     Vers�o	Autor		Data		Observa��es
*       0.30   BM   02/10/2017	Prot�tipos adicionados 
*       0.20   BM   02/10/2017	Funcoes modelo adicionadas 
*       0.10   BM   01/10/2017	Inicio do desenvolvimento 
*
*  $ED Descri��o do m�dulo
*	  TODO
*
***************************************************************************/
typedef enum{
	CDO_CondRetOk,
	CDO_CondRetNaoHaMemoria,
	CDO_CondRetNaoExisteCorpo,
	CDO_CondRetProfessorNaoEncontrado,
	CDO_CondRetIdJaCriado,
	CDO_CondRetFormatoInvalido
} CDO_tpCondRet;

CDO_tpCondRet CDO_cria();
CDO_tpCondRet CDO_cadastra(char *nome, int rg, char *cpf, int matricula, char *email, int telefone, int dia, int mes, int ano, char *pais, char *uf, char *cidade, char *bairro, char *rua, int numero, char *complemento);
CDO_tpCondRet CDO_mostraAtual();
CDO_tpCondRet CDO_mostraTodos();
CDO_tpCondRet CDO_retira();
CDO_tpCondRet CDO_limpa();
CDO_tpCondRet CDO_libera();

/***********************************************************************
*
*  $FC Fun��o: CDO Busca por Nome
*
*  $ED Descri��o da fun��o
*     Busca no Corpo Docente (Lista de Professores) um Professor pelo Nome
*
*  $EP Par�metros
*     
*     $P chave - Nome do Professor que deseja buscar no corpo Docente
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*     CDO_CondRetProfessorNaoEncontrado - Inst�ncia de professor desejada n�o encontrada n�o encontrado no Corpo Docente
*     CDO_CondRetNaoExisteCorpo - Caso n�o exista uma Inst�ncia de Corpo Docente 
*
*  Assertiva de Entrada: 
*		-A chave tem at� 80 caracteres
*                    
*  Assertiva de Sa�da: 
*		-Caso exista uma inst�ncia de Professor com o Nome igual aquele enviado para a fun��o via par�metro a fun��o retorno condi��o OK
*		-Caso n�o exista uma inst�ncia de Professor com o Nome igual aquele enviado para a func�o via par�metro a fun��o retorna condi��o de Prof n�o encontrado
*		-Caso n�o exista Corpo Docente v�lido a fun��o retorna N�o Existe Corpo
*
***********************************************************************/

CDO_tpCondRet CDO_buscaPorNome(char *chave);

/***********************************************************************
*
*  $FC Fun��o: CDO Busca por Email
*
*  $ED Descri��o da fun��o
*     Busca no Corpo Docente (Lista de Professores) um Professor pelo Email
*
*  $EP Par�metros
*     
*     $P chave - Email do Professor que deseja buscar no corpo Docente
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*     CDO_CondRetProfessorNaoEncontrado - Inst�ncia de professor desejada n�o encontrada no Corpo Docente
*     CDO_CondRetNaoExisteCorpo - Caso n�o exista uma Inst�ncia de Corpo Docente 
*
*  Assertiva de Entrada: 
*		-A chave tem at� 80 caracteres
*                    
*  Assertiva de Sa�da: 
*		-Caso exista uma inst�ncia de Professor com o Email igual aquele enviado para a fun��o via par�metro a fun��o retorno condi��o OK
*		-Caso n�o exista uma inst�ncia de Professor com o Email igual aquele enviado para a func�o via par�metro a fun��o retorna condi��o de Prof n�o encontrado
*		-Caso n�o exista Corpo Docente v�lido a fun��o retorna N�o Existe Corpo
*
***********************************************************************/

CDO_tpCondRet CDO_buscaPorEmail(char *chave);

/***********************************************************************
*
*  $FC Fun��o: CDO Busca por CPF
*
*  $ED Descri��o da fun��o
*     Busca no Corpo Docente (Lista de Professores) um Professor pelo CPF
*
*  $EP Par�metros
*     
*     $P chave - CPF do Professor que deseja buscar no corpo Docente
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*     CDO_CondRetProfessorNaoEncontrado - Inst�ncia de professor desejada n�o encontrada no Corpo Docente
*     CDO_CondRetNaoExisteCorpo - Caso n�o exista uma Inst�ncia de Corpo Docente 
*
*  Assertiva de Entrada: 
*		-A chave tem at� 80 caracteres
*                    
*  Assertiva de Sa�da: 
*		-Caso exista uma inst�ncia de Professor com o CPF igual aquele enviado para a fun��o via par�metro a fun��o retorno condi��o OK
*		-Caso n�o exista uma inst�ncia de Professor com o CPF igual aquele enviado para a func�o via par�metro a fun��o retorna condi��o de Prof n�o encontrado
*		-Caso n�o exista Corpo Docente v�lido a fun��o retorna N�o Existe Corpo
*
***********************************************************************/

CDO_tpCondRet CDO_buscaPorCpf(char *chave);

/***********************************************************************
*
*  $FC Fun��o: CDO Busca por RG
*
*  $ED Descri��o da fun��o
*     Busca no Corpo Docente (Lista de Professores) um Professor pelo RG
*
*  $EP Par�metros
*     
*     $P chave - RG do Professor que deseja buscar no corpo Docente
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*     CDO_CondRetProfessorNaoEncontrado - Inst�ncia de professor desejada n�o encontrada no Corpo Docente
*     CDO_CondRetNaoExisteCorpo - Caso n�o exista uma Inst�ncia de Corpo Docente 
*
*  Assertiva de Entrada: 
*		-A chave tem at� 80 caracteres
*                    
*  Assertiva de Sa�da: 
*		-Caso exista uma inst�ncia de Professor com o RG igual aquele enviado para a fun��o via par�metro a fun��o retorno condi��o OK
*		-Caso n�o exista uma inst�ncia de Professor com o RG igual aquele enviado para a func�o via par�metro a fun��o retorna condi��o de Prof n�o encontrado
*		-Caso n�o exista Corpo Docente v�lido a fun��o retorna N�o Existe Corpo
*
***********************************************************************/

CDO_tpCondRet CDO_buscaPorRg(int chave);

/***********************************************************************
*
*  $FC Fun��o: CDO Consulta Nome
*
*  $ED Descri��o da fun��o
*     Consulta o Nome da inst�ncia de Professor selecionada naquele momento
*
*  $EP Par�metros     
*     $P nome - Cadeia de caracteres que receber� o nome do professor selecionado, por refer�ncia
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*
*  Assertiva de Entrada: 
*		-O ponteiro para o a cadeia nome � v�lido
*                    
*  Assertiva de Sa�da: 
*	    -� necess�rio que a Fun��o PRF_consultaNome tenha suas assertivas de entrada e saida corretamente implementadas
*       -Caso isso ocorra o conteudo do ponteiro para nome ser� preenchido com o nome do Professor em quest�o
*
***********************************************************************/

CDO_tpCondRet CDO_consultaNome(char *nome);

/***********************************************************************
*
*  $FC Fun��o: CDO Consulta RG
*
*  $ED Descri��o da fun��o
*     Consulta o RG da inst�ncia de Professor selecionada naquele momento
*
*  $EP Par�metros     
*     $P rg - Inteiro que receber� o rg do professor selecionado, por refer�ncia
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*
*  Assertiva de Entrada: 
*		-O ponteiro para o inteiro RG � v�lido
*                    
*  Assertiva de Sa�da: 
*	    -� necess�rio que a Fun��o PRF_consultaRg tenha suas assertivas de entrada e saida corretamente implementadas
*       -Caso isso ocorra o conte�do do ponteiro para RG ser� preenchido com o RG do Professor em quest�o
*
***********************************************************************/

CDO_tpCondRet CDO_consultaRg(int *rg);

/***********************************************************************
*
*  $FC Fun��o: CDO Consulta CPF
*
*  $ED Descri��o da fun��o
*     Consulta o CPF da inst�ncia de Professor selecionada naquele momento
*
*  $EP Par�metros     
*     $P cpf - Cadeia de caracteres que receber� o cpf do professor selecionado, por refer�ncia
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*
*  Assertiva de Entrada: 
*		-O ponteiro para o cadeia CPF � v�lido
*                    
*  Assertiva de Sa�da: 
*	    -� necess�rio que a Fun��o PRF_consultaCpf tenha suas assertivas de entrada e saida corretamente implementadas
*       -Caso isso ocorra o conte�do do ponteiro para CPF ser� preenchido com o CPF do Professor em quest�o
*
***********************************************************************/

CDO_tpCondRet CDO_consultaCpf(char *cpf);

/***********************************************************************
*
*  $FC Fun��o: CDO Consulta Matricula
*
*  $ED Descri��o da fun��o
*     Consulta a Matricula da inst�ncia de Professor selecionada naquele momento
*
*  $EP Par�metros     
*     $P matricula - Inteiro que receber� o cpf do professor selecionado, por refer�ncia
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*
*  Assertiva de Entrada: 
*		-O ponteiro para o inteiro matricula � v�lido
*                    
*  Assertiva de Sa�da: 
*	    -� necess�rio que a Fun��o PRF_consultaMatricula tenha suas assertivas de entrada e saida corretamente implementadas
*       -Caso isso ocorra o conte�do do ponteiro para matricula ser� preenchido com a matricula do Professor em quest�o
*
***********************************************************************/

CDO_tpCondRet CDO_consultaMatricula(int *matricula);

/***********************************************************************
*
*  $FC Fun��o: CDO Consulta Email
*
*  $ED Descri��o da fun��o
*     Consulta o Email da inst�ncia de Professor selecionada naquele momento
*
*  $EP Par�metros     
*     $P email - Cadeia de Caracteres que receber� o cpf do professor selecionado, por refer�ncia
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*
*  Assertiva de Entrada: 
*		-O ponteiro para a cadeia email � v�lido
*                    
*  Assertiva de Sa�da: 
*	    -� necess�rio que a Fun��o PRF_consultaEmail tenha suas assertivas de entrada e saida corretamente implementadas
*       -Caso isso ocorra o conte�do do ponteiro para email ser� preenchido com o email do Professor em quest�o
*
***********************************************************************/

CDO_tpCondRet CDO_consultaEmail(char *email);

/***********************************************************************
*
*  $FC Fun��o: CDO Consulta Telefone
*
*  $ED Descri��o da fun��o
*     Consulta o Telefone da inst�ncia de Professor selecionada naquele momento
*
*  $EP Par�metros     
*     $P telefone - Inteiro que receber� o cpf do professor selecionado, por refer�ncia
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*
*  Assertiva de Entrada: 
*		-O ponteiro para o inteiro telefone � v�lido
*                    
*  Assertiva de Sa�da: 
*	    -� necess�rio que a Fun��o PRF_consultaTelefone tenha suas assertivas de entrada e saida corretamente implementadas
*       -Caso isso ocorra o conte�do do ponteiro para telefone ser� preenchido com o telefone do Professor em quest�o
*
***********************************************************************/

CDO_tpCondRet CDO_consultaTelefone(int *tel);

/***********************************************************************
*
*  $FC Fun��o: CDO Consulta Data de Nasciemnto
*
*  $ED Descri��o da fun��o
*     Consulta a data de Nascimento da inst�ncia de Professor selecionada naquele momento
*
*  $EP Par�metros     
*     $P dia - Inteiro que receber� o dia de nascimento do professor selecionado, por refer�ncia
*	  $P mes - Inteiro que receber� o mes de nascimento do professor selecionado, por refer�ncia
*     $P ano - Inteiro que receber� o ano de nascimento do professor selecionado, por refer�ncia
*
*  $FV Valor retornado
*     CDO_CondRetOk 
*
*  Assertiva de Entrada: 
*		-O ponteiro para o inteiro dia � v�lido
*		-O ponteiro para o inteiro mes � v�lido
*		-O ponteiro para o inteiro ano � valido
*                    
*  Assertiva de Sa�da: 
*	    -� necess�rio que as fun��o  PRF_consultaDiaNascimento,	PRF_consultaMesNascimento, PRF_consultaAnoNascimento tenha suas assertivas de entrada e saida corretamente implementadas
*       -Caso isso ocorra o conte�do dos ponteiros para dia/mes/ano ser�o preenchidos com o dia/mes/ano da data de nascimento do Professor em quest�o
*
***********************************************************************/

CDO_tpCondRet CDO_consultaDataNascimento(int *dia, int *mes, int *ano);

/***********************************************************************
*
*  $FC Fun��o: CDO Consulta Endere�o
*
*  $ED Descri��o da fun��o
*     Consulta o Endere�o da inst�ncia de Professor selecionada naquele momento
*
*  $EP Par�metros     
*     $P pais - Cadeia de Caracteres que receber� o pais de moradia do professor selecionado, por refer�ncia
*	  $P uf - Cadeia de Caracteres que receber� o uf de moradia do professor selecionado, por refer�ncia
*     $P cidade - Cadeia de Caracteres que receber� a cidade de moradia do professor selecionado, por refer�ncia
*     $P bairro - Cadeia de Caracteres que receber� o bairro de moradia do professor selecionado, por refer�ncia
*	  $P rua - Cadeia de Caracteres que receber� o a rua de moradia professor selecionado, por refer�ncia
*     $P numero - Inteiro que receber� o numero da moradia do professor selecionado, por refer�ncia
*     $P complemento - Cadeia de Caracteres que receber� o complemento da moradia do professor selecionado, por refer�ncia
*						
*  $FV Valor retornado
*     CDO_CondRetOk 
*
*  Assertiva de Entrada: 
*		-
*                    
*  Assertiva de Sa�da: 
*	    -
*       -
*
***********************************************************************/

CDO_tpCondRet CDO_consultaEndereco(char *pais, char *uf, char *cidade, char *bairro, char *rua, int *numero, char *complemento);

CDO_tpCondRet CDO_alteraNome(char *nome);
CDO_tpCondRet CDO_alteraRg(int rg);
CDO_tpCondRet CDO_alteraCpf(char *cpf);
CDO_tpCondRet CDO_alteraMatricula(int matricula);
CDO_tpCondRet CDO_alteraEmail(char* email);
CDO_tpCondRet CDO_alteraTelefone(int tel);
CDO_tpCondRet CDO_alteraDataNascimento(int dia, int mes, int ano);
CDO_tpCondRet CDO_alteraEndereco(char *pais, char *uf, char *cidade, char *bairro, char *rua, int numero, char *complemento);