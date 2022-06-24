#include "DataHandler.h"

DataHandler::DataHandler()
{
}

bool DataHandler::FindDonor(string email)
{
	if (DonorMap[email] == NULL) {
		return false;
	}
	return true;
}

bool DataHandler::FindDonor(string email, string password)
{
	if (DonorMap[email] != NULL && DonorMap[email]->getPassword() == password) {
		return true;
	}
	return false;
}

bool DataHandler::FindRecipient(string email)
{
	if (RecipientMap[email] == NULL) {
		return false;
	}
	return true;
}

bool DataHandler::FindRecipient(string email, string password)
{
	if (RecipientMap[email] != NULL && RecipientMap[email]->getPassword() == password) {
		return true;
	}
	return false;
}

void DataHandler::AddRecipient(Recipient* r)
{
	if (FindRecipient(r->getEmail()) == false)
		RecipientMap[r->getEmail()] = r;
}

void DataHandler::AddDonor(Donor* d)
{
	if (FindDonor(d->getEmail()) == false)
		DonorMap[d->getEmail()] = d;
}

void DataHandler::AddBlood(Blood* b)
{
	//	BloodTypeMap[b->getBloodtype()][b->getId()] = b;
	BloodMap[b->getBloodtype()].insert(make_pair(b->getId(), b));
}



void DataHandler::RemoveRecipient(string email) {
	RecipientMap.erase(email);
}

void DataHandler::RemoveDonor(string email) {
	DonorMap.erase(email);
}
void  DataHandler::BloodFile_To_app() {
	ifstream Blood_file;
	Blood_file.open("Bloods.txt");
	string a;
	while (getline(Blood_file, a)) {
		Blood* b = new Blood(a);
		AddBlood(b);
	}
	Blood_file.close();
}


void  DataHandler::Bloods_To_file() {
	ofstream Bloods_f_out = ofstream("Bloods.txt");
	for (auto it = BloodMap.begin(); it != BloodMap.end(); it++)
	{
		for (auto it1 = it->second.begin(); it1 != it->second.end(); it1++)
		{
			Bloods_f_out << it1->second->ToString() << endl;
		}
	}
	Bloods_f_out.close();

}

void DataHandler::DonorFile_To_app()
{
	ifstream Donor_file;
	Donor_file.open("Donors.txt");
	string a;
	while (getline(Donor_file, a)) {
		Donor* b = new Donor(a);
		AddDonor(b);
	}
	Donor_file.close();
}

void DataHandler::Donors_To_file()
{
	ofstream Donors_f_out = ofstream("Donors.txt");
	for (auto it = DonorMap.begin(); it != DonorMap.end(); it++)
	{
		Donors_f_out << it->second->ToString() << endl;

	}
	Donors_f_out.close();
}



void DataHandler::RecipientFile_To_app()
{
	ifstream Recipient_file;
	Recipient_file.open("Recipients.txt");
	string a;
	while (getline(Recipient_file, a)) {
		Recipient* r = new Recipient(a);
		AddRecipient(r);
	}
	Recipient_file.close();
}

void DataHandler::Recipients_To_file()
{
	ofstream Recipients_f_out = ofstream("Recipients.txt");
	for (auto it = RecipientMap.begin(); it != RecipientMap.end(); it++)
	{
		Recipients_f_out << it->second->ToString() << endl;
	}
	Recipients_f_out.close();
}
