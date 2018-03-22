/**
  * @file sapo.cpp
  * @brief Implementação das funções de Sapo
  * @author Lucas Gabriel
  * @since 15/03/2018
  * @date 18/03/2018
  * @sa https://github.com/lucasgmpaiva/Sapos.git
  */

#include "../include/sapo.hpp"
#include <ctime>
#include <stdlib.h>

int Sapo::distanciaTotal;

Sapo::Sapo(){
	quantidadePulos = 0;
	distanciaPercorrida = 0;
}

Sapo::Sapo(int umId, int umaForca){
	id = umId;
	forcaPulo = umaForca;
	quantidadePulos = 0;
	distanciaPercorrida = 0;
}

int Sapo::getId(){
	return id;
}

int Sapo::getForcaPulo(){
	return forcaPulo;
}

int Sapo::getDistanciaPercorrida(){
	return distanciaPercorrida;
}

int Sapo::getQuantidadePulos(){
	return quantidadePulos;
}

void Sapo::setId(int umId){
	id = umId;
}

void Sapo::setDistanciaPercorrida(int umaDistancia){
	distanciaPercorrida = umaDistancia;
}

void Sapo::setQuantidadePulos(int umaQuantidade){
	quantidadePulos = umaQuantidade;
}

void Sapo::setForcaPulo(int umaForca){
	forcaPulo = umaForca;
}

void Sapo::pular(){
	srand(time(NULL));
	if(distanciaPercorrida<distanciaTotal){
		distanciaPercorrida+= (rand()%forcaPulo)+1;
		quantidadePulos++;
	}
}

