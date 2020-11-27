#include "MapClient.h"


MapClient::MapClient()
{
	this->id_client = -1;
	this->nom_client = "";
	this->prenom_client = "";
	this->adresse_facturation= "";
	this->adresse_livraison = "";
	this->date_naissance= "";
	this->date_premier_achat = "";
}
String^ MapClient::SELECT(void)
{
	return "SELECT * FROM Client";
}