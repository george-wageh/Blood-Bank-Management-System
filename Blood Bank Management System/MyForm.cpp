#include "MyForm.h"
#include<iostream>
#include<string>
#include"DataHandler.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using System::Runtime::InteropServices::Marshal;
string EmailDonor = "";
string EmailRecipient = "";
DataHandler dh;

String^ toSystemString(std::string a) {
	String^ str3 = gcnew String(a.data());
	return str3;
}
std::string toStandardString(System::String^ string)
{
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);

	return returnString;
}



[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BloodBankManagementSystem::MyForm form;
	Application::Run(% form);
}

void BloodBankManagementSystem::MyForm::Sign_Donor()
{
	//17 ,18 
	string email, pass;
	email = toStandardString(this->textBox17->Text);
	pass = toStandardString(this->textBox18->Text);
	if (dh.FindDonor(email, pass)) {
		EmailDonor = email;

		this->panel9->Hide();
		this->panel3->Show();
		this->textBox17->Text = "";
		this->textBox18->Text = "";
	}
	else {
		MessageBox::Show("Error in password and email", "fail");
		return;
	}
}

void BloodBankManagementSystem::MyForm::Sign_Recipient()
{
	//17 ,18 
	string email, pass;
	email = toStandardString(this->textBox17->Text);
	pass = toStandardString(this->textBox18->Text);
	if (dh.FindRecipient(email, pass)) {
		EmailRecipient = email;

		this->panel9->Hide();
		this->panel6->Show();
		this->textBox17->Text = "";
		this->textBox18->Text = "";
	}
	else {
		MessageBox::Show("Error in password and email", "fail");
		return;
	}
	show_data_dataf(dh.BloodMap[dh.RecipientMap[EmailRecipient]->getBloodtype()]);
}

void BloodBankManagementSystem::MyForm::Signout_Donor()
{
	EmailDonor = "";
	this->panel9->Show();
	this->panel3->Hide();
}

void BloodBankManagementSystem::MyForm::Signout_Recipient()
{
	EmailRecipient = "";
	this->panel9->Show();
	this->panel6->Hide();
}

void BloodBankManagementSystem::MyForm::Save_Donor()
{
	string name, email, pass, btype;
	int age;
	int ch = 0, oth = 0;
	char g;
	name = toStandardString(this->textBox1->Text);
	email = toStandardString(this->textBox2->Text);
	pass = toStandardString(this->textBox3->Text);
	age = int(this->numericUpDown1->Value);
	if (dh.FindDonor(email)) {
		MessageBox::Show("Email is already in use", "fail");
		return;
	}
	if (this->radioButton1->Checked) {
		g = 'm';
	}
	else if (this->radioButton2->Checked) {
		g = 'f';
	}
	else {
		MessageBox::Show("Fill in the missing data", "fail");
		return;

	}

	if (this->radioButton4->Checked) {
		btype = "A";
	}
	else if (this->radioButton3->Checked) {
		btype = "B";
	}
	else if (this->radioButton5->Checked) {
		btype = "O";
	}
	else if (this->radioButton6->Checked) {
		btype = "AB";
	}
	else {
		MessageBox::Show("Fill in the missing data", "fail");
		return;
	}

	if (this->checkBox1->Checked) {
		ch = 1;
	}
	if (this->checkBox2->Checked) {
		oth = 1;
	}
	int timm = -1;
	Donor* d = new Donor(name, email, pass, age, g, ch, oth, timm, btype);
	dh.AddDonor(d);
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->numericUpDown1->Value = 0;
	this->radioButton1->Checked = false;
	this->radioButton2->Checked = false;
	this->radioButton3->Checked = false;
	this->radioButton4->Checked = false;
	this->radioButton5->Checked = false;
	this->radioButton6->Checked = false;

	this->checkBox1->Checked = false;
	this->checkBox2->Checked = false;

	cout << d->ToString() << endl;
	MessageBox::Show("Congratulations, your account has been added!", "Congratulations");
	return;
}

void BloodBankManagementSystem::MyForm::Save_Recipient()
{
	string name, email, pass, btype;
	int age;
	char g;
	name = toStandardString(this->textBox6->Text);
	email = toStandardString(this->textBox5->Text);
	pass = toStandardString(this->textBox4->Text);
	age = int(this->numericUpDown2->Value);
	if (dh.FindRecipient(email)) {
		MessageBox::Show("Email is already in use", "fail");
		return;
	}
	if (this->radioButton12->Checked) {
		g = 'm';
	}
	else if (this->radioButton11->Checked) {
		g = 'f';
	}
	else {
		MessageBox::Show("Fill in the missing data", "fail");
		return;
	}

	if (this->radioButton10->Checked) {
		btype = "A";
	}
	else if (this->radioButton9->Checked) {
		btype = "B";
	}
	else if (this->radioButton8->Checked) {
		btype = "O";
	}
	else if (this->radioButton7->Checked) {
		btype = "AB";
	}
	else {
		MessageBox::Show("Fill in the missing data", "fail");
		return;
	}
	int timm = -1;
	Recipient* r = new Recipient(name, email, pass, age, g, "null", "null", btype);
	dh.AddRecipient(r);

	this->textBox6->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";

	this->numericUpDown2->Value = 0;
	this->radioButton11->Checked = false;
	this->radioButton12->Checked = false;

	this->radioButton7->Checked = false;
	this->radioButton8->Checked = false;
	this->radioButton9->Checked = false;
	this->radioButton10->Checked = false;
	cout << r->ToString() << endl;
	MessageBox::Show("Congratulations, your account has been added!", "Congratulations");
	return;
}

void BloodBankManagementSystem::MyForm::change_Recipient()
{
	string new_val = toStandardString(this->textBox10->Text);
	string email = toStandardString(this->textBox12->Text);
	string pass = toStandardString(this->textBox11->Text);
	if (new_val == "") {
		MessageBox::Show("Write new value right", "fail");
		return;
	}
	if ((email == EmailRecipient) && (dh.RecipientMap[EmailRecipient]->getPassword() == pass)) {
		if (this->radioButton18->Checked) {
			dh.RecipientMap[EmailRecipient]->setName(new_val);
		}
		else if (this->radioButton17->Checked) {
			if (dh.FindRecipient(new_val)) {
				MessageBox::Show("Email is already in use", "fail");
				return;
			}
			dh.RecipientMap[EmailRecipient]->setEmail(new_val);
			dh.AddRecipient(dh.RecipientMap[EmailRecipient]);
			dh.RemoveRecipient(EmailRecipient);
			EmailRecipient = new_val;
		}
		else if (this->radioButton16->Checked) {
			dh.RecipientMap[EmailRecipient]->setPassword(new_val);
		}
		else {
			MessageBox::Show("Choose which one you want to modify", "fail");
			return;
		}
	}
	else {
		MessageBox::Show("Error in password and email", "fail");
		return;
	}
	MessageBox::Show("Account details have been modified successfully", "success");
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";

	this->radioButton16->Checked = false;
	this->radioButton17->Checked = false;
	this->radioButton18->Checked = false;
}

void BloodBankManagementSystem::MyForm::change_Donor()
{
	string new_val = toStandardString(this->textBox7->Text);
	string email = toStandardString(this->textBox8->Text);
	string pass = toStandardString(this->textBox9->Text);
	if (new_val == "") {
		MessageBox::Show("Write new value right", "fail");
		return;
	}
	if ((email == EmailDonor) && (dh.DonorMap[EmailDonor]->getPassword() == pass)) {
		if (this->radioButton13->Checked) {
			dh.DonorMap[EmailDonor]->setName(new_val);
		}
		else if (this->radioButton14->Checked) {
			if (dh.FindDonor(new_val)) {
				MessageBox::Show("Email is already in use", "fail");
				return;
			}
			dh.DonorMap[EmailDonor]->setEmail(new_val);
			dh.AddDonor(dh.DonorMap[EmailDonor]);
			dh.RemoveDonor(EmailDonor);
			EmailDonor = new_val;
		}
		else if (this->radioButton15->Checked) {
			dh.DonorMap[EmailDonor]->setPassword(new_val);
		}
		else {
			MessageBox::Show("Choose which one you want to modify", "fail");
			return;
		}
	}
	else {
		MessageBox::Show("Error in password and email", "fail");
		return;
	}
	MessageBox::Show("Account details have been modified successfully", "success");
	this->textBox7->Text = "";
	this->textBox8->Text = "";
	this->textBox9->Text = "";

	this->radioButton13->Checked = false;
	this->radioButton14->Checked = false;
	this->radioButton15->Checked = false;
}

void BloodBankManagementSystem::MyForm::delete_Recipient()
{
	dh.RemoveRecipient(EmailRecipient);
	MessageBox::Show("The account has been deleted successfully", "success");
	Signout_Recipient();
	return;
}

void BloodBankManagementSystem::MyForm::delete_Donor()
{
	dh.RemoveDonor(EmailDonor);
	MessageBox::Show("The account has been deleted successfully", "success");
	Signout_Donor();
	return;
}

void BloodBankManagementSystem::MyForm::make_Donation()
{
	int qu = (int)this->numericUpDown3->Value;
	string typ = dh.DonorMap[EmailDonor]->getBloodtype();
	int id = dh.DonorMap[EmailDonor]->getId();
	time_t now = time(0);
	Blood* b = new Blood(id, typ, qu, now);
	dh.AddBlood(b);
	MessageBox::Show("Donate successfully", "success");
	this->numericUpDown3->Value = 0;
}

void BloodBankManagementSystem::MyForm::make_Request()
{
	string hospital, doctor;
	int id, qu;
	hospital = toStandardString(this->textBox16->Text);
	doctor = toStandardString(this->textBox15->Text);
	id = stoi(toStandardString((this->textBox14->Text)));
	qu = stoi(toStandardString((this->textBox13->Text)));
	Blood* b = dh.BloodMap[dh.RecipientMap[EmailRecipient]->getBloodtype()][id];
	if (qu <= b->getQuantity()) {
		b->setQuantity(b->getQuantity() - qu);
	}
	else {
		MessageBox::Show("Not enough blood", "fail");
		return;
	}
	this->textBox13->Text = "";
	this->textBox14->Text = "";
	this->textBox15->Text = "";
	this->textBox16->Text = "";
	MessageBox::Show("Request successfully", "success");
	show_data_dataf(dh.BloodMap[dh.RecipientMap[EmailRecipient]->getBloodtype()]);


}

void BloodBankManagementSystem::MyForm::start()
{
	dh.BloodFile_To_app();
	dh.DonorFile_To_app();
	dh.RecipientFile_To_app();
}

void BloodBankManagementSystem::MyForm::end()
{
	dh.Bloods_To_file();
	dh.Donors_To_file();
	dh.Recipients_To_file();
}

void BloodBankManagementSystem::MyForm::show_data_dataf(unordered_map<int,Blood*> a) {

	this->dataGridView1->Rows->Clear();
	this->dataGridView1->Refresh();
	for (auto it = a.begin(); it != a.end(); it++)
	{
		time_t a = (it->second->getDatedonation());
		string time = ctime(&a);
		this->dataGridView1->Rows->Add(toSystemString(to_string(it->second->getId())), toSystemString(it->second->getBloodtype()), toSystemString(to_string(it->second->getQuantity())), toSystemString(time));
	}
}
