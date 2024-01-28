#pragma once
#include "user.h"

using namespace System::Data::SqlClient;

namespace LoginRegForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ PhoneTb;
	private: System::Windows::Forms::TextBox^ AddressTb;
	private: System::Windows::Forms::TextBox^ PasswordTb;

	private: System::Windows::Forms::TextBox^ ConfirmPasswordTb;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ EmaiLTb;

	private: System::Windows::Forms::TextBox^ NameTb;
	private: System::Windows::Forms::Button^ RegisterBtn;
	private: System::Windows::Forms::Button^ CancelBtn;
	private: System::Windows::Forms::LinkLabel^ LoginLink;
	private: System::Windows::Forms::CheckBox^ ShowPasswordBox;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PhoneTb = (gcnew System::Windows::Forms::TextBox());
			this->AddressTb = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTb = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmPasswordTb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->EmaiLTb = (gcnew System::Windows::Forms::TextBox());
			this->NameTb = (gcnew System::Windows::Forms::TextBox());
			this->RegisterBtn = (gcnew System::Windows::Forms::Button());
			this->CancelBtn = (gcnew System::Windows::Forms::Button());
			this->LoginLink = (gcnew System::Windows::Forms::LinkLabel());
			this->ShowPasswordBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(-2, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(526, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(12, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(12, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(12, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Phone";
			// 
			// PhoneTb
			// 
			this->PhoneTb->Location = System::Drawing::Point(204, 143);
			this->PhoneTb->Name = L"PhoneTb";
			this->PhoneTb->Size = System::Drawing::Size(295, 20);
			this->PhoneTb->TabIndex = 5;
			// 
			// AddressTb
			// 
			this->AddressTb->Location = System::Drawing::Point(204, 182);
			this->AddressTb->Name = L"AddressTb";
			this->AddressTb->Size = System::Drawing::Size(295, 20);
			this->AddressTb->TabIndex = 6;
			// 
			// PasswordTb
			// 
			this->PasswordTb->Location = System::Drawing::Point(204, 221);
			this->PasswordTb->Name = L"PasswordTb";
			this->PasswordTb->Size = System::Drawing::Size(295, 20);
			this->PasswordTb->TabIndex = 7;
			this->PasswordTb->TextChanged += gcnew System::EventHandler(this, &RegisterForm::PassworTb_TextChanged);
			// 
			// ConfirmPasswordTb
			// 
			this->ConfirmPasswordTb->Location = System::Drawing::Point(204, 261);
			this->ConfirmPasswordTb->Name = L"ConfirmPasswordTb";
			this->ConfirmPasswordTb->Size = System::Drawing::Size(295, 20);
			this->ConfirmPasswordTb->TabIndex = 8;
			this->ConfirmPasswordTb->TextChanged += gcnew System::EventHandler(this, &RegisterForm::ConfirmPasswordTb_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(12, 221);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 25);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(12, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(186, 25);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Confirm Password";
			// 
			// EmaiLTb
			// 
			this->EmaiLTb->Location = System::Drawing::Point(204, 102);
			this->EmaiLTb->Name = L"EmaiLTb";
			this->EmaiLTb->Size = System::Drawing::Size(295, 20);
			this->EmaiLTb->TabIndex = 11;
			// 
			// NameTb
			// 
			this->NameTb->Location = System::Drawing::Point(204, 61);
			this->NameTb->Name = L"NameTb";
			this->NameTb->Size = System::Drawing::Size(295, 20);
			this->NameTb->TabIndex = 12;
			// 
			// RegisterBtn
			// 
			this->RegisterBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterBtn->Location = System::Drawing::Point(204, 310);
			this->RegisterBtn->Name = L"RegisterBtn";
			this->RegisterBtn->Size = System::Drawing::Size(150, 35);
			this->RegisterBtn->TabIndex = 13;
			this->RegisterBtn->Text = L"Register";
			this->RegisterBtn->UseMnemonic = false;
			this->RegisterBtn->UseVisualStyleBackColor = true;
			this->RegisterBtn->Click += gcnew System::EventHandler(this, &RegisterForm::RegisterBtn_Click);
			// 
			// CancelBtn
			// 
			this->CancelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelBtn->Location = System::Drawing::Point(360, 310);
			this->CancelBtn->Name = L"CancelBtn";
			this->CancelBtn->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->CancelBtn->Size = System::Drawing::Size(139, 35);
			this->CancelBtn->TabIndex = 14;
			this->CancelBtn->Text = L"Cancel";
			this->CancelBtn->UseVisualStyleBackColor = true;
			this->CancelBtn->Click += gcnew System::EventHandler(this, &RegisterForm::CancelBtn_Click);
			// 
			// LoginLink
			// 
			this->LoginLink->AutoSize = true;
			this->LoginLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginLink->Location = System::Drawing::Point(434, 348);
			this->LoginLink->Name = L"LoginLink";
			this->LoginLink->Size = System::Drawing::Size(65, 25);
			this->LoginLink->TabIndex = 15;
			this->LoginLink->TabStop = true;
			this->LoginLink->Text = L"Login";
			this->LoginLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::LoginLink_LinkClicked);
			// 
			// ShowPasswordBox
			// 
			this->ShowPasswordBox->AutoSize = true;
			this->ShowPasswordBox->BackColor = System::Drawing::Color::Transparent;
			this->ShowPasswordBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShowPasswordBox->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ShowPasswordBox->Location = System::Drawing::Point(204, 287);
			this->ShowPasswordBox->Name = L"ShowPasswordBox";
			this->ShowPasswordBox->Size = System::Drawing::Size(115, 17);
			this->ShowPasswordBox->TabIndex = 16;
			this->ShowPasswordBox->Text = L"Show Password";
			this->ShowPasswordBox->UseVisualStyleBackColor = false;
			this->ShowPasswordBox->CheckedChanged += gcnew System::EventHandler(this, &RegisterForm::ShowPasswordBox_CheckedChanged);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(525, 428);
			this->Controls->Add(this->ShowPasswordBox);
			this->Controls->Add(this->LoginLink);
			this->Controls->Add(this->CancelBtn);
			this->Controls->Add(this->RegisterBtn);
			this->Controls->Add(this->NameTb);
			this->Controls->Add(this->EmaiLTb);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->ConfirmPasswordTb);
			this->Controls->Add(this->PasswordTb);
			this->Controls->Add(this->AddressTb);
			this->Controls->Add(this->PhoneTb);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
private: System::Void CancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	}

	   public: bool switchToLogin = false;
private: System::Void LoginLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
	}

private: System::Void ShowPasswordBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// Toggle the PasswordChar based on checkbox state
	char passwordChar = ShowPasswordBox->Checked ? '\0' : '*'; // Show characters when checked, otherwise keep it '*'

	PasswordTb->PasswordChar = passwordChar;
	ConfirmPasswordTb->PasswordChar = passwordChar;
}
	  
public: Users^ user = nullptr;

private: System::Void RegisterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = NameTb->Text;
	String^ email = EmaiLTb->Text;
	String^ phone = PhoneTb->Text;
	String^ address = AddressTb->Text;
	String^ password = PasswordTb->Text;
	String^ confirmPassword = ConfirmPasswordTb->Text;	

	if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 ||
		password->Length == 0 || confirmPassword->Length == 0) {

		MessageBox::Show("Please no empty field, put N/A if not applicable",
			"Error Missing Input", MessageBoxButtons::OK);
		return;
		}
	if (String::Compare(password, confirmPassword) != 0) {
		MessageBox::Show("ConfirmPassword and Password does not match",
			"Password Error", MessageBoxButtons::OK);
		return;
		}

	//show error if connection fail
	try {
		//Obtain connection string from Data Connections in ServerExplorer
		String^ connString = "Data Source=localhost\\SQLexpress;Initial Catalog=loginregdatabase;Integrated Security=True;Encrypt=False";
		SqlConnection sqlConnect(connString); //set up connection to SQL server
		sqlConnect.Open();

		//query insert all data field into users
		String^ sqlQuery = "INSERT INTO Users " + "(name, email, phone, address, password) VALUES " +
							"(@Name, @Email, @Phone, @Address, @Password);";

		SqlCommand control(sqlQuery, % sqlConnect);
		//replace placeholder with actual arguement of input field accordingly
		control.Parameters->AddWithValue("@Name", name);
		control.Parameters->AddWithValue("@Email", email);
		control.Parameters->AddWithValue("@Phone", phone);
		control.Parameters->AddWithValue("@Address", address);
		control.Parameters->AddWithValue("@Password", password);

		control.ExecuteNonQuery();
			user = gcnew Users;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;

			this->Close();
		}
	catch (Exception^ ex) {
		MessageBox::Show("Fail to register new user. Details: " + ex->Message,
			"Registration Error", MessageBoxButtons::OK);
	}
}
private: System::Void PassworTb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordTb->PasswordChar = '*';
}
private: System::Void ConfirmPasswordTb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->ConfirmPasswordTb->PasswordChar = '*';
}
};
}
