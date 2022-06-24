#include "Blood.h"
int Blood::count_id = 1;
Blood::Blood()
{
}

Blood::Blood(string a)
{
    vector<string> v ;
    string temp="";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '/') {
            v.push_back(temp);
            temp = "";
        }
        else{
            temp = temp + a[i];
        }
          
    }

    init(stoi(v[0]), v[1], stof(v[2]), stoll(v[3]));
}
void Blood::init(int Donor_id, string Blood_type, float Quantity, time_t date_donation) {
    setId(count_id);
    setDonorid(Donor_id);
    setBloodtype(Blood_type);
    setDatedonation(date_donation);
    setQuantity(Quantity);
}

string Blood::ToString()
{
    return (to_string(getDonorid())+'/'+getBloodtype() + '/' + to_string(getQuantity()) + '/' + to_string(getDatedonation()) + '/' );
}

Blood::Blood(int Donor_id, string Blood_type, float Quantity, time_t date_donation)
{
    init(Donor_id, Blood_type, Quantity, date_donation);
}

int Blood::getId() const
{
    return id;
}

void Blood::setId(int id)
{
    this->id = id;
    count_id++;
}

int Blood::getDonorid() const
{
    return Donor_id;
}

void Blood::setDonorid(int Donorid)
{
    Donor_id = Donorid;
}

string Blood::getBloodtype() const
{
    return Blood_type;
}

void Blood::setBloodtype(string Bloodtype)
{
    Blood_type = Bloodtype;
}

float Blood::getQuantity() const
{
    return Quantity;
}

void Blood::setQuantity(float Quantity)
{
    this->Quantity = Quantity;
}

time_t Blood::getDatedonation() const
{
    return date_donation;
}

void Blood::setDatedonation(time_t datedonation)
{
    date_donation = datedonation;
}

