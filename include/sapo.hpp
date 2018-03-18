/**
  * @file sapo.hpp
  * @brief Interface de Sapo
  * @author Lucas Gabriel
  * @since 15/03/2018
  * @date 18/03/2018
  * @sa https://github.com/ggklin/Aula04
  */

class Sapo{
	private:
		int id;
		int distanciaPercorrida;
		int quantidadePulos;
		int forcaPulo;
	public:
		Sapo();
		Sapo(int umId, int umaForca);
		int getId();
		int getDistanciaPercorrida();
		int getQuantidadePulos();
		int getForcaPulo();
		void setQuantidadePulos(int umaQuantidade);
		void setDistanciaPercorrida(int umaDistancia);
		void setId(int umId);
		void setForcaPulo(int umaForca);
		void pular();
		static int distanciaTotal;
};