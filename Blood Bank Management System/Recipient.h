#pragma once
#include<vector>
#include<string>
using namespace std;
class Recipient
{
public:
	Recipient();
	Recipient(string a);
	Recipient(string name,
		string email,
		string password,
		int age,
		char gender,
		string Hospital_NAME,
		string Doctor_NAME,
		string Blood_type);

	int getId() const;
	string getName() const;
	void setName(string name);
	string getEmail() const;
	void setEmail(string email);
	string getPassword() const;
	void setPassword(string password);
	int getAge() const;
	void setAge(int age);
	char getGender() const;
	string getBloodtype() const;
	string getHospitalNAME() const;
	void setHospitalNAME(string HospitalNAME);
	string getDoctorNAME() const;
	void setDoctorNAME(string DoctorNAME);

	string ToString();
	void init(string name, string email, string password, int age, char gender, string Hospital_NAME, string Doctor_NAME, string Blood_type);

private:
	static int count_id;
	int id;
	string name;
	string email;
	string password;
	int age;
	char gender;
	string Blood_type;
	string Hospital_NAME;
	string Doctor_NAME;
	void setId(int id);
	void setGender(char gender);
	void setBloodtype(string Bloodtype);



};

