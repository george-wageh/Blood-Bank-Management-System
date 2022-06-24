#pragma once
#include<string>
#include<vector>
using namespace std; 
#include <ctime>
class Blood
{
public:
	Blood();
	Blood(string a);
	Blood(int Donor_id ,string Blood_type,float Quantity,time_t date_donation);
    void init(int Donor_id, string Blood_type, float Quantity, time_t date_donation);
    string ToString();

private:
	static int count_id;
	int id;
	int Donor_id;
	string Blood_type;
	float Quantity;		
	time_t date_donation;
    void setId(int id);
    void setDonorid(int Donorid);
    void setBloodtype(string Bloodtype);
    void setDatedonation(time_t datedonation);

public:
    int getId() const;
    int getDonorid() const;
    string getBloodtype() const;
    float getQuantity() const;
    void setQuantity(float Quantity);
    time_t getDatedonation() const;


};


