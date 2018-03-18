/**
  * @file main.cpp
  * @brief Arquivo principal do programa
  * @author Lucas Gabriel
  * @since 15/03/2018
  * @date 18/03/2018
  * @sa https://github.com/ggklin/Aula04
  */

#include <iostream>
	using std::cin;
	using std::cout;
	using std::endl;
#include "../include/sapo.hpp"

/** @brief Funcao principal que instancia os sapos e realiza as operações */
int main(){
	int forca, distancia;
	cout << "Digite a força de pulo do primeiro sapo: " << endl;
	cin >> forca;
	Sapo sapinho1(1, forca);
	cout << "Digite a força de pulo do segundo sapo: " << endl;
	cin >> forca;
	Sapo sapinho2(2, forca);
	cout << "Digite a força de pulo do terceiro sapo: " << endl;
	cin >> forca;
	Sapo sapinho3(3, forca);
	cout << "Digite o tamanho da pista de corrida: " << endl;
	cin >> distancia;
	Sapo::distanciaTotal = distancia;

	while(sapinho1.getDistanciaPercorrida() != Sapo::distanciaTotal &&
		sapinho2.getDistanciaPercorrida() != Sapo::distanciaTotal &&
	 	sapinho3.getDistanciaPercorrida() != Sapo::distanciaTotal){
		sapinho1.pular();
		sapinho2.pular();
		sapinho3.pular();
	}

	if(sapinho1.getDistanciaPercorrida() == Sapo::distanciaTotal &&
		sapinho2.getDistanciaPercorrida() == Sapo::distanciaTotal &&
	 	sapinho3.getDistanciaPercorrida() == Sapo::distanciaTotal){
		cout << "A corrida empatou em três: " << endl;
		cout << "Sapinho 1: " << sapinho1.getQuantidadePulos() << "pulos;" << endl;
		cout << "Sapinho 2: " << sapinho2.getQuantidadePulos() << "pulos;" << endl;
		cout << "Sapinho 3: " << sapinho3.getQuantidadePulos() << "pulos;" << endl;
	}
	if(sapinho1.getDistanciaPercorrida() == Sapo::distanciaTotal &&
		sapinho2.getDistanciaPercorrida() == Sapo::distanciaTotal &&
	 	sapinho3.getDistanciaPercorrida() != Sapo::distanciaTotal){
		cout << "A corrida empatou em dois: " << endl;
		cout << "Sapinho 1: " << sapinho1.getQuantidadePulos() << "pulos;" << endl;
		cout << "Sapinho 2: " << sapinho2.getQuantidadePulos() << "pulos;" << endl;
	}
	if(sapinho1.getDistanciaPercorrida() == Sapo::distanciaTotal &&
		sapinho2.getDistanciaPercorrida() != Sapo::distanciaTotal &&
	 	sapinho3.getDistanciaPercorrida() == Sapo::distanciaTotal){
		cout << "A corrida empatou em dois: " << endl;
		cout << "Sapinho 1: " << sapinho1.getQuantidadePulos() << "pulos;" << endl;
		cout << "Sapinho 3: " << sapinho3.getQuantidadePulos() << "pulos;" << endl;
	}
	if(sapinho1.getDistanciaPercorrida() != Sapo::distanciaTotal &&
		sapinho2.getDistanciaPercorrida() == Sapo::distanciaTotal &&
	 	sapinho3.getDistanciaPercorrida() == Sapo::distanciaTotal){
		cout << "A corrida empatou em dois: " << endl;
		cout << "Sapinho 2: " << sapinho2.getQuantidadePulos() << "pulos;" << endl;
		cout << "Sapinho 3: " << sapinho3.getQuantidadePulos() << "pulos;" << endl;

	}

	if(sapinho1.getDistanciaPercorrida() == Sapo::distanciaTotal &&
		sapinho2.getDistanciaPercorrida() != Sapo::distanciaTotal &&
	 	sapinho3.getDistanciaPercorrida() != Sapo::distanciaTotal){
		cout << "O sapinho 1 foi o vencedor! " << endl;
		cout << "Sapinho 1: " << sapinho1.getQuantidadePulos() << "pulos;" << endl;
	}

	if(sapinho1.getDistanciaPercorrida() != Sapo::distanciaTotal &&
		sapinho2.getDistanciaPercorrida() == Sapo::distanciaTotal &&
	 	sapinho3.getDistanciaPercorrida() != Sapo::distanciaTotal){
		cout << "O sapinho 2 foi o vencedor! " << endl;
		cout << "Sapinho 2: " << sapinho2.getQuantidadePulos() << "pulos;" << endl;
	}

	if(sapinho1.getDistanciaPercorrida() != Sapo::distanciaTotal &&
		sapinho2.getDistanciaPercorrida() != Sapo::distanciaTotal &&
	 	sapinho3.getDistanciaPercorrida() == Sapo::distanciaTotal){
		cout << "O sapinho 3 foi o vencedor! " << endl;
		cout << "Sapinho 3: " << sapinho3.getQuantidadePulos() << "pulos;" << endl;
	}

	return 0;
}