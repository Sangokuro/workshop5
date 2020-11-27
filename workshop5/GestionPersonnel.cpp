#include "GestionPersonnel.h"

namespace Service {
	GestionPersonnel::GestionPersonnel()
	{
		this->accesdonnees = gcnew accesauxdonnees;
		this->client = gcnew MapClient;
	}
	DataSet^ GestionPersonnel::listeClient(String^ dataTableName)
	{
		this->dataset = gcnew DataSet();
		this->dataset = this->accesdonnees->getrows(this->client->SELECT(), dataTableName);
		return this->dataset;
	}
}