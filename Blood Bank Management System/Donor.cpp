#include "Donor.h"
int Donor::count_id = 1;
Donor::Donor()
{
}
void Donor::init(string name, string email, string password, int age, char gender, int chronic_diseases, int others_diseases, time_t date_last_donation, string Blood_type) {
	setId(count_id);
	setName(name);
	setEmail(email);
	setPassword(password);
	setAge(age);
	setGender(gender);
	setBloodtype(Blood_type);
	setChronicdiseases(chronic_diseases);
	setOthersdiseases(others_diseases);
	setDatelastdonation(date_last_donation);
}
Donor::Donor(string name, string email, string password, int age, char gender, int chronic_diseases, int others_diseases, time_t date_last_donation, string Blood_type)
{
	init(name, email, password, age, gender, chronic_diseases, others_diseases, date_last_donation, Blood_type);
}

Donor::Donor(string a)
{
	vector<string> v;
	string temp = "";
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '/') {
			v.push_back(temp);
			temp = "";
		}
		else
			temp += a[i];
	}
	init(v[0], v[1], v[2], stoi(v[3]), v[4][0], stoi(v[5]), stoi(v[6]), stoll(v[7]), v[8]);
}


string Donor::ToString() {
	return (getName() + '/' + getEmail() + '/' + getPassword() + '/' + to_string(getAge()) + '/' + to_string(getGender()) + '/' + to_string(getChronicdiseases()) + '/' + to_string(getOthersdiseases()) + '/' + to_string(getDatelastdonation()) + '/' + getBloodtype() + '/');
}

int Donor::getId() const
{
	return id;
}

void Donor::setId(int id)
{
	this->id = id;
	count_id++;
}

string Donor::getName() const
{
	return name;
}

void Donor::setName(string name)
{
	this->name = name;
}

string Donor::getEmail() const
{
	return email;
}

void Donor::setEmail(string email)
{
	this->email = email;
}

string Donor::getPassword() const
{
	return password;
}

void Donor::setPassword(string password)
{
	this->password = password;
}

int Donor::getAge() const
{
	return age;
}

void Donor::setAge(int age)
{
	this->age = age;
}

char Donor::getGender() const
{
	return gender;
}

void Donor::setGender(char gender)
{
	this->gender = gender;
}

string Donor::getBloodtype() const
{
	return Blood_type;
}

void Donor::setBloodtype(string Bloodtype)
{
	Blood_type = Bloodtype;
}

int Donor::getChronicdiseases() const
{
	return chronic_diseases;
}

void Donor::setChronicdiseases(int chronicdiseases)
{
	chronic_diseases = chronicdiseases;
}

int Donor::getOthersdiseases() const
{
	return others_diseases;
}

void Donor::setOthersdiseases(int othersdiseases)
{
	others_diseases = othersdiseases;
}

time_t Donor::getDatelastdonation() const
{
	return date_last_donation;
}

void Donor::setDatelastdonation(time_t datelastdonation)
{
	date_last_donation = datelastdonation;
}

