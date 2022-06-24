#pragma once
#include"Blood.h"
#include"Recipient.h"
#include"Donor.h"
#include<fstream>
#include<unordered_map>
class DataHandler
{
public:
	DataHandler();
	// key is email
	unordered_map<string, Recipient*> RecipientMap;
	unordered_map<string, Donor*> DonorMap;

	// key is Blood_Type
	unordered_map<string, unordered_map<int, Blood*>> BloodMap;
	bool FindDonor(string email);
	bool FindDonor(string email, string password);

	bool FindRecipient(string email);
	bool FindRecipient(string email, string password);

	void AddRecipient(Recipient*);
	void AddDonor(Donor*);
	void AddBlood(Blood*);

	void RemoveRecipient(string email);
	void RemoveDonor(string email);
	void BloodFile_To_app();
	void Bloods_To_file();

	void DonorFile_To_app();
	void Donors_To_file();

	void RecipientFile_To_app();
	void Recipients_To_file();

};

