#pragma once

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;



ref class accesauxdonnees
{
private: String^ connection_string;
	   String^ request_sql;
       System::Data::SqlClient::SqlConnection^ MySqlConnection;
       System::Data::SqlClient::SqlDataAdapter^ sqlDataAdapteur;
       System::Data::SqlClient::SqlCommand^ sqlCommand;
       System::Data::DataSet^ dataSet;
    void setsql(String^);

public:
    accesauxdonnees();
    System::Data::DataSet^ getrows(String^ requestSQL, String^ dataTableName);
    void actionrows(String^);
    int actionrowsid(String^);
};


