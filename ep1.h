#ifndef Cliente_
#define Cliente_
#include <stdio.h>

#define ATENDIDO 'a'
#define DESISTENTE 'd'
#define NAFILA 'f'
#define SAIU 's'

typedef struct {
	//int num_cliente;
	int hora_chegada;
	int hora_saida;
	int hora_atendido;
	int hora_desistiu;
	double gasto;
	char status;//atendido, desistente, 

} Cliente;


void calculaClientes(Cliente);
void calculaHora(Cliente);
void calculaGasto(Cliente);

#endif



//tempo medio em fila geral: ((hora_atendido - hora_chegada) + (hora_desistiu - hora_chegada))/(atendido+desistente);
//numero clientes q entraram: atendido+desistente+nafila+saiu
