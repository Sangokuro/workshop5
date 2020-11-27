#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;

ref class MapClient
{

private:
	int id_client;
	String^ nom_client;
	String^ prenom_client;
	String^ adresse_livraison;
	String^ adresse_facturation;
	String^ date_naissance;
	String^ date_premier_achat;
public:
	MapClient();
	  String^ SELECT(void);
};

