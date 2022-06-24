#pragma once
#include<string>
#include<vector>
using namespace std;
#include <ctime>
class Donor
{
public:
	Donor();
	Donor(string a);
	Donor(string name,
		string email,
		string password,
		int age,
		char gender,
		int chronic_diseases,
		int others_diseases,
		time_t date_last_donation,
		string Blood_type);

	int getId() const;
	string getName() const;
	void setName(string name);
	string getEmail() const;
	void setEmail(string email);
	string getPassword() const;
	void setPassword(string password);
	int getAge() const;
	char getGender() const;
	string getBloodtype() const;
	int getChronicdiseases() const;
	void setChronicdiseases(int chronicdiseases);
	int getOthersdiseases() const;
	void setOthersdiseases(int othersdiseases);
	time_t getDatelastdonation() const;
	void setDatelastdonation(time_t datelastdonation);


	string ToString();

private:
	static int count_id;
	int id;
	string name;
	string email;
	string password;
	int age;
	char gender;
	string Blood_type;
	/*If she suffers from any disease (blood pressure disorders, thyroid
	disease, diabetes, cancer, heart disorders, hepatitis) */
	int chronic_diseases;
	int others_diseases;
	time_t date_last_donation;

	void setId(int id);
	void setGender(char gender);
	void setBloodtype(string Bloodtype);
	void setAge(int age);
	void init(string name, string email, string password, int age, char gender, int chronic_diseases, int others_diseases, time_t date_last_donation, string Blood_type);

};

