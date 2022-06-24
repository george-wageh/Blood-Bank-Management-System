#include "Recipient.h"
int Recipient::count_id = 1;
Recipient::Recipient()
{
}
void Recipient::init(string name, string email, string password, int age, char gender, string Hospital_NAME, string Doctor_NAME, string Blood_type) {
	setId(count_id);
	setName(name);
	setEmail(email);
	setPassword(password);
	setAge(age);
	setGender(gender);
	setHospitalNAME(Hospital_NAME);
	setDoctorNAME(Doctor_NAME);
	setBloodtype(Blood_type);
}
Recipient::Recipient(string name, string email, string password, int age, char gender, string Hospital_NAME, string Doctor_NAME, string Blood_type)
{
	init( name,  email,  password,  age,  gender,  Hospital_NAME,  Doctor_NAME,  Blood_type);
}
Recipient::Recipient(string a) {
	vector<string> v;
	string temp="";
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '/') {
			v.push_back(temp);
			temp = "";
		}
		else
			temp += a[i];
	}
	init(v[0], v[1], v[2], stoi(v[3]), v[4][0], v[5], v[6], v[7] );
}
string Recipient::ToString() {
	return (getName() + '/' + getEmail() + '/' + getPassword() + '/' + to_string(getAge()) + '/' + to_string(getGender()) + '/' + getHospitalNAME() + '/' + getDoctorNAME() + '/' + getBloodtype() +'/');

}
int Recipient::getId() const
{
	return id;
}

void Recipient::setId(int id)
{
	this->id = id;
	count_id++;
}

string Recipient::getName() const
{
	return name;
}

void Recipient::setName(string name)
{
	this->name = name;
}

string Recipient::getEmail() const
{
	return email;
}

void Recipient::setEmail(string email)
{
	this->email = email;
}

string Recipient::getPassword() const
{
	return password;
}

void Recipient::setPassword(string password)
{
	this->password = password;
}

int Recipient::getAge() const
{
	return age;
}

void Recipient::setAge(int age)
{
	this->age = age;
}

char Recipient::getGender() const
{
	return gender;
}

void Recipient::setGender(char gender)
{
	this->gender = gender;
}

string Recipient::getBloodtype() const
{
	return Blood_type;
}

void Recipient::setBloodtype(string Bloodtype)
{
	Blood_type = Bloodtype;
}

string Recipient::getHospitalNAME() const
{
	return Hospital_NAME;
}

void Recipient::setHospitalNAME(string HospitalNAME)
{
	Hospital_NAME = HospitalNAME;
}

string Recipient::getDoctorNAME() const
{
	return Doctor_NAME;
}

void Recipient::setDoctorNAME(string DoctorNAME)
{
	Doctor_NAME = DoctorNAME;
}

