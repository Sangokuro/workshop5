#include "accesauxdonnees.h"

using namespace System::Data;

accesauxdonnees::accesauxdonnees()
{
	request_sql = "";
	
	this->connection_string = "Data Source=.;Initial Catalog=master;Integrated Security=True";
	this->MySqlConnection = gcnew SqlConnection(this->connection_string);
	this->sqlCommand = gcnew SqlCommand(this->request_sql, this->MySqlConnection);
	this->sqlCommand->CommandType = CommandType::Text;
	this->MySqlConnection->Open();
	this->MySqlConnection->Close();
}


void accesauxdonnees::actionrows(String^)
{
	
}

int accesauxdonnees::actionrowsid(String^)
{
	return 0;
}

void accesauxdonnees::setsql(String^request_sql)
{
	this->request_sql = request_sql;
}

System::Data::DataSet^ accesauxdonnees::getrows(String^ requestSQL, String^ dataTableName) //execute une requete sql et le mettre dans le dataset qui laffiche
{
	this->setsql(requestSQL);
	this->sqlDataAdapteur = gcnew SqlDataAdapter(this->sqlCommand);
	this->sqlCommand->CommandText = this->request_sql;
	this->dataSet = gcnew DataSet();
	this->sqlDataAdapteur->Fill(this->dataSet, dataTableName);
	return this->dataSet;
};
