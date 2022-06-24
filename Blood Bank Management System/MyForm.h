#pragma once
#include"DataHandler.h"

namespace BloodBankManagementSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			start();

		}
		// sign in Donor
		void Sign_Donor();
		void Sign_Recipient();

		void Signout_Donor();
		void Signout_Recipient();

		void Save_Donor();
		void Save_Recipient();

		void change_Recipient();
		void change_Donor();

		void delete_Recipient();
		void delete_Donor();

		void make_Donation();
		void make_Request();

		void start();
		void end();
		void show_data_dataf(unordered_map<int, Blood*> a);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			end();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::RadioButton^ radioButton18;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::GroupBox^ groupBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::GroupBox^ groupBox13;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->groupBox10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->panel4->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->groupBox9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel8->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->panel9->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Location = System::Drawing::Point(1, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1167, 737);
			this->panel1->TabIndex = 0;
			this->panel1->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(241, 20);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(713, 621);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Register New Donor Account";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(126, 268);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(418, 69);
			this->groupBox3->TabIndex = 29;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Blood Types";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(327, 28);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(51, 24);
			this->radioButton6->TabIndex = 3;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"AB";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(220, 28);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(40, 24);
			this->radioButton5->TabIndex = 2;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"O";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(116, 29);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(39, 24);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"B";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(17, 29);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(39, 24);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"A";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(410, 545);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 33);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(106, 548);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 33);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(245, 384);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(161, 24);
			this->checkBox2->TabIndex = 30;
			this->checkBox2->Text = L"Others Diseases";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label4->Location = System::Drawing::Point(5, -1);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(323, 29);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Register New Donor Account";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(245, 354);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(168, 24);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"Chronic Diseases";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(238, 438);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(206, 84);
			this->groupBox1->TabIndex = 28;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gender";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(84, 29);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(86, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 29);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(65, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(209, 217);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(320, 26);
			this->numericUpDown1->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(129, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 20);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Age";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(209, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(320, 26);
			this->textBox3->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(103, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 20);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(209, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(320, 26);
			this->textBox2->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(132, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Email";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(209, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 26);
			this->textBox1->TabIndex = 19;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(238, 655);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L" Chronic Diseases : ";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Maroon;
			this->richTextBox1->Location = System::Drawing::Point(242, 678);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(731, 47);
			this->richTextBox1->TabIndex = 19;
			this->richTextBox1->Text = L"(blood pressure disorders, thyroid disease, diabetes, cancer, heart disorders, he"
				L"patitis) \n";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox4);
			this->panel2->Location = System::Drawing::Point(1, 23);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1167, 737);
			this->panel2->TabIndex = 23;
			this->panel2->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox5);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->groupBox6);
			this->groupBox4->Controls->Add(this->numericUpDown2);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(239, 31);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(713, 621);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Register New Donor Account";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton7);
			this->groupBox5->Controls->Add(this->radioButton8);
			this->groupBox5->Controls->Add(this->radioButton9);
			this->groupBox5->Controls->Add(this->radioButton10);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(126, 268);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(418, 69);
			this->groupBox5->TabIndex = 29;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Blood Types";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(327, 28);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(51, 24);
			this->radioButton7->TabIndex = 3;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"AB";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(220, 28);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(40, 24);
			this->radioButton8->TabIndex = 2;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"O";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(116, 29);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(39, 24);
			this->radioButton9->TabIndex = 1;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"B";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(17, 29);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(39, 24);
			this->radioButton10->TabIndex = 0;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"A";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Location = System::Drawing::Point(410, 545);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 33);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Lime;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(106, 548);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 33);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Save";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label7->Location = System::Drawing::Point(5, -1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(359, 29);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Register New Recipient Account";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton11);
			this->groupBox6->Controls->Add(this->radioButton12);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(238, 365);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(206, 84);
			this->groupBox6->TabIndex = 28;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Gender";
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(84, 29);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(86, 24);
			this->radioButton11->TabIndex = 1;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Female";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(6, 29);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(65, 24);
			this->radioButton12->TabIndex = 0;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Male";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(209, 217);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(320, 26);
			this->numericUpDown2->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(129, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 20);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Age";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(209, 165);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(320, 26);
			this->textBox4->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(103, 168);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Password";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(209, 114);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(320, 26);
			this->textBox5->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(132, 117);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Email";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(209, 66);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(320, 26);
			this->textBox6->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(130, 69);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 20);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Name";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(1, 14);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1167, 737);
			this->panel3->TabIndex = 24;
			this->panel3->Visible = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->groupBox10);
			this->panel5->Location = System::Drawing::Point(374, 9);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(788, 717);
			this->panel5->TabIndex = 12;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Crimson;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(612, 673);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(169, 37);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Sign out";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->dateTimePicker1);
			this->groupBox10->Controls->Add(this->numericUpDown3);
			this->groupBox10->Controls->Add(this->button11);
			this->groupBox10->Controls->Add(this->label17);
			this->groupBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox10->Location = System::Drawing::Point(29, 46);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(327, 216);
			this->groupBox10->TabIndex = 1;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Donation";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Location = System::Drawing::Point(14, 74);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(253, 24);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(90, 31);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 24);
			this->numericUpDown3->TabIndex = 9;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Turquoise;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(44, 145);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(223, 37);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Make a donation";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(17, 32);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 18);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Quantity";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightGreen;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(11, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(153, 39);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Edit Profile";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->groupBox8);
			this->panel4->Controls->Add(this->groupBox7);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Location = System::Drawing::Point(11, 9);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(356, 717);
			this->panel4->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Crimson;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(17, 627);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(315, 37);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Delete Account";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Desktop;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(265, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 39);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Hide";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->radioButton15);
			this->groupBox8->Controls->Add(this->radioButton14);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->radioButton13);
			this->groupBox8->Controls->Add(this->textBox7);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->Location = System::Drawing::Point(44, 60);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(267, 204);
			this->groupBox8->TabIndex = 9;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Edit";
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(28, 86);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(93, 22);
			this->radioButton15->TabIndex = 6;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"Password";
			this->radioButton15->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(28, 59);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(63, 22);
			this->radioButton14->TabIndex = 5;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"Email";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(31, 153);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 18);
			this->label12->TabIndex = 2;
			this->label12->Text = L"NEW";
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(28, 31);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(66, 22);
			this->radioButton13->TabIndex = 4;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"Name";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(90, 150);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(120, 24);
			this->textBox7->TabIndex = 1;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textBox9);
			this->groupBox7->Controls->Add(this->textBox8);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Controls->Add(this->label13);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox7->Location = System::Drawing::Point(44, 365);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(267, 114);
			this->groupBox7->TabIndex = 1;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Confirmation";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(90, 74);
			this->textBox9->Name = L"textBox9";
			this->textBox9->PasswordChar = '*';
			this->textBox9->Size = System::Drawing::Size(120, 24);
			this->textBox9->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(90, 29);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(120, 24);
			this->textBox8->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 77);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 18);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Password";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(31, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 18);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Email";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Lime;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(17, 563);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(315, 37);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Save Change";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->button13);
			this->panel6->Controls->Add(this->panel8);
			this->panel6->Location = System::Drawing::Point(1, 11);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1167, 737);
			this->panel6->TabIndex = 25;
			this->panel6->Visible = false;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->groupBox9);
			this->panel7->Controls->Add(this->dataGridView1);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Location = System::Drawing::Point(374, 9);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(788, 717);
			this->panel7->TabIndex = 12;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textBox15);
			this->groupBox9->Controls->Add(this->textBox16);
			this->groupBox9->Controls->Add(this->label21);
			this->groupBox9->Controls->Add(this->label22);
			this->groupBox9->Controls->Add(this->button12);
			this->groupBox9->Controls->Add(this->textBox13);
			this->groupBox9->Controls->Add(this->textBox14);
			this->groupBox9->Controls->Add(this->label15);
			this->groupBox9->Controls->Add(this->label20);
			this->groupBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox9->Location = System::Drawing::Point(73, 395);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(557, 195);
			this->groupBox9->TabIndex = 9;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Make request";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(346, 75);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(120, 24);
			this->textBox15->TabIndex = 15;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(112, 75);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(120, 24);
			this->textBox16->TabIndex = 13;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(280, 78);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 18);
			this->label21->TabIndex = 16;
			this->label21->Text = L"Doctor";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(47, 78);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 18);
			this->label22->TabIndex = 14;
			this->label22->Text = L"Hospital";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Lime;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(205, 124);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(158, 33);
			this->button12->TabIndex = 12;
			this->button12->Text = L"Make request";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(346, 31);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(120, 24);
			this->textBox13->TabIndex = 7;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(112, 32);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(120, 24);
			this->textBox14->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(275, 34);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 18);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Quantity";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(45, 35);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(62, 18);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Blood Id";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 44);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(697, 336);
			this->dataGridView1->TabIndex = 12;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Gray;
			this->Column4->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column4->HeaderText = L"Blood Id";
			this->Column4->Name = L"Column4";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle8;
			this->Column1->HeaderText = L"Blood type";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle9;
			this->Column2->HeaderText = L"Quantity";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column3->DefaultCellStyle = dataGridViewCellStyle10;
			this->Column3->HeaderText = L"Received date";
			this->Column3->Name = L"Column3";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Crimson;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(612, 673);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(169, 37);
			this->button10->TabIndex = 11;
			this->button10->Text = L"Sign out";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightGreen;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(11, 12);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(153, 39);
			this->button13->TabIndex = 11;
			this->button13->Text = L"Edit Profile";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->button14);
			this->panel8->Controls->Add(this->button15);
			this->panel8->Controls->Add(this->groupBox11);
			this->panel8->Controls->Add(this->groupBox12);
			this->panel8->Controls->Add(this->button16);
			this->panel8->Location = System::Drawing::Point(11, 9);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(356, 717);
			this->panel8->TabIndex = 0;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Crimson;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(17, 627);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(315, 37);
			this->button14->TabIndex = 11;
			this->button14->Text = L"Delete Account";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::Desktop;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::Control;
			this->button15->Location = System::Drawing::Point(265, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(88, 39);
			this->button15->TabIndex = 10;
			this->button15->Text = L"Hide";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->radioButton16);
			this->groupBox11->Controls->Add(this->radioButton17);
			this->groupBox11->Controls->Add(this->label16);
			this->groupBox11->Controls->Add(this->radioButton18);
			this->groupBox11->Controls->Add(this->textBox10);
			this->groupBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox11->Location = System::Drawing::Point(44, 60);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(267, 204);
			this->groupBox11->TabIndex = 9;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Edit";
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(28, 86);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(93, 22);
			this->radioButton16->TabIndex = 6;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"Password";
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Location = System::Drawing::Point(28, 59);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(63, 22);
			this->radioButton17->TabIndex = 5;
			this->radioButton17->TabStop = true;
			this->radioButton17->Text = L"Email";
			this->radioButton17->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(31, 153);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 18);
			this->label16->TabIndex = 2;
			this->label16->Text = L"NEW";
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Location = System::Drawing::Point(28, 31);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(66, 22);
			this->radioButton18->TabIndex = 4;
			this->radioButton18->TabStop = true;
			this->radioButton18->Text = L"Name";
			this->radioButton18->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(90, 150);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(120, 24);
			this->textBox10->TabIndex = 1;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->textBox11);
			this->groupBox12->Controls->Add(this->textBox12);
			this->groupBox12->Controls->Add(this->label18);
			this->groupBox12->Controls->Add(this->label19);
			this->groupBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox12->Location = System::Drawing::Point(44, 365);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(267, 114);
			this->groupBox12->TabIndex = 1;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Confirmation";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(90, 74);
			this->textBox11->Name = L"textBox11";
			this->textBox11->PasswordChar = '*';
			this->textBox11->Size = System::Drawing::Size(120, 24);
			this->textBox11->TabIndex = 7;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(90, 29);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(120, 24);
			this->textBox12->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 77);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 18);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Password";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(31, 32);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 18);
			this->label19->TabIndex = 6;
			this->label19->Text = L"Email";
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Lime;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(17, 563);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(315, 37);
			this->button16->TabIndex = 4;
			this->button16->Text = L"Save Change";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->linkLabel2);
			this->panel9->Controls->Add(this->linkLabel1);
			this->panel9->Controls->Add(this->groupBox13);
			this->panel9->Controls->Add(this->label23);
			this->panel9->Location = System::Drawing::Point(1, 8);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1167, 737);
			this->panel9->TabIndex = 26;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(478, 474);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(105, 20);
			this->linkLabel2->TabIndex = 7;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Create Donor";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(647, 472);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(128, 20);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Create Recipient";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->button18);
			this->groupBox13->Controls->Add(this->button17);
			this->groupBox13->Controls->Add(this->textBox18);
			this->groupBox13->Controls->Add(this->label24);
			this->groupBox13->Controls->Add(this->textBox17);
			this->groupBox13->Controls->Add(this->label25);
			this->groupBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox13->ForeColor = System::Drawing::SystemColors::Desktop;
			this->groupBox13->Location = System::Drawing::Point(377, 168);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(476, 291);
			this->groupBox13->TabIndex = 5;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Login";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Khaki;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button18->Location = System::Drawing::Point(267, 203);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(139, 32);
			this->button18->TabIndex = 6;
			this->button18->Text = L"Sign in Recipient";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Khaki;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button17->Location = System::Drawing::Point(80, 204);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(129, 31);
			this->button17->TabIndex = 5;
			this->button17->Text = L"Sign in Donor";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox18->Location = System::Drawing::Point(189, 112);
			this->textBox18->Name = L"textBox18";
			this->textBox18->PasswordChar = '*';
			this->textBox18->Size = System::Drawing::Size(216, 29);
			this->textBox18->TabIndex = 4;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label24->Location = System::Drawing::Point(97, 74);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(57, 24);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Email";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textBox17->Location = System::Drawing::Point(189, 70);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(216, 29);
			this->textBox17->TabIndex = 3;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label25->Location = System::Drawing::Point(77, 115);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(92, 24);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Password";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"HP Simplified", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(399, 24);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(420, 34);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Blood Bank Management System";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1175, 758);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel8->ResumeLayout(false);
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel4->Hide();
		this->button6->Show();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		this->panel4->Show();
		this->button6->Hide();
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel8->Show();
		this->button13->Hide();

	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel8->Hide();
		this->button13->Show();
	}
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//Create Donor
		this->panel9->Hide();
		this->panel1->Show();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//Create Recipient
		this->panel9->Hide();
		this->panel2->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel2->Hide();
		this->panel9->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Hide();
		this->panel9->Show();
	}


	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		// sign in Donor
		Sign_Donor();
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		// sign in Recipient
		Sign_Recipient();

	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		//make Donation
		make_Donation();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		// save change donor
		change_Donor();

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		// delete donor
		delete_Donor();

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		// signout_donor
		Signout_Donor();
	}

		   //Recipient
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		//make request
		make_Request();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		// save change Recipient
		change_Recipient();
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		// delete Recipient
		delete_Recipient();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		// signout_Recipient
		Signout_Recipient();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// save donor
		Save_Donor();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// save Recipient
		Save_Recipient();
	}
	};
}
