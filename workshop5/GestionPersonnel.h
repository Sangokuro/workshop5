#pragma once
#include "MapClient.h"
#include "accesauxdonnees.h"
namespace Service {

	ref class GestionPersonnel
	{
	private:
		accesauxdonnees^ accesdonnees;
		MapClient^ client;
		DataSet^ dataset;
	public:
		GestionPersonnel();
		DataSet^ listeClient(String^ dataTableName);
	};
}
