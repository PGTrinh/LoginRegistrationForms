#pragma once
#include "user.h"

namespace LoginRegForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ EmailTextBox;

	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::Button^ LoginBtn;
	private: System::Windows::Forms::Button^ CancelBtn;
	private: System::Windows::Forms::LinkLabel^ RegisterLink;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EmailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->LoginBtn = (gcnew System::Windows::Forms::Button());
			this->CancelBtn = (gcnew System::Windows::Forms::Button());
			this->RegisterLink = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(-2, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(524, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LOGIN";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->UseMnemonic = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(12, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// EmailTextBox
			// 
			this->EmailTextBox->Location = System::Drawing::Point(122, 84);
			this->EmailTextBox->Name = L"EmailTextBox";
			this->EmailTextBox->Size = System::Drawing::Size(367, 30);
			this->EmailTextBox->TabIndex = 3;
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(122, 155);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->PasswordChar = '*';
			this->PasswordTextBox->Size = System::Drawing::Size(367, 30);
			this->PasswordTextBox->TabIndex = 4;
			// 
			// LoginBtn
			// 
			this->LoginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginBtn->Location = System::Drawing::Point(122, 215);
			this->LoginBtn->Name = L"LoginBtn";
			this->LoginBtn->Size = System::Drawing::Size(167, 44);
			this->LoginBtn->TabIndex = 5;
			this->LoginBtn->Text = L"Login";
			this->LoginBtn->UseVisualStyleBackColor = true;
			this->LoginBtn->Click += gcnew System::EventHandler(this, &LoginForm::LoginBtn_Click);
			// 
			// CancelBtn
			// 
			this->CancelBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelBtn->Location = System::Drawing::Point(325, 215);
			this->CancelBtn->Name = L"CancelBtn";
			this->CancelBtn->Size = System::Drawing::Size(167, 44);
			this->CancelBtn->TabIndex = 6;
			this->CancelBtn->Text = L"Cancel";
			this->CancelBtn->UseVisualStyleBackColor = true;
			this->CancelBtn->Click += gcnew System::EventHandler(this, &LoginForm::CancelBtn_Click);
			// 
			// RegisterLink
			// 
			this->RegisterLink->AutoSize = true;
			this->RegisterLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterLink->Location = System::Drawing::Point(397, 281);
			this->RegisterLink->Name = L"RegisterLink";
			this->RegisterLink->Size = System::Drawing::Size(92, 25);
			this->RegisterLink->TabIndex = 7;
			this->RegisterLink->TabStop = true;
			this->RegisterLink->Text = L"Register";
			this->RegisterLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::RegisterLink_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(515, 325);
			this->Controls->Add(this->RegisterLink);
			this->Controls->Add(this->CancelBtn);
			this->Controls->Add(this->LoginBtn);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->EmailTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Users^ user = nullptr;

	private: System::Void CancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void LoginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->EmailTextBox->Text;
		String^ password = this->PasswordTextBox->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password",
				"Email or Password Missing", MessageBoxButtons::OK); //give message box an OK button
				return;
		}

		//show error if connection fail
		try {
			//Obtain connection string from Data Connections in ServerExplorer
			String^ connString = "Data Source=localhost\\SQLexpress;Initial Catalog=loginregdatabase;Integrated Security=True;Encrypt=False";
			SqlConnection sqlConnect(connString); //set up connection to SQL server
			sqlConnect.Open();

			//query retrieve Email & pass from "users" table in the database based on the provided email and password.
			String^ sqlQuery = "SELECT * FROM Users WHERE email=@Email AND password=@Password;"; 
			SqlCommand control(sqlQuery, % sqlConnect);
			//replace placeholder with actual arguement of input email & password
			control.Parameters->AddWithValue("@Email", email);
			control.Parameters->AddWithValue("@Password", password);

			SqlDataReader^ reader = control.ExecuteReader();
			if (reader->Read()) {
				user = gcnew Users;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);
				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Fail to connect to Database. Details: " + ex->Message,
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	  public: bool switchToRegister = false;
private: System::Void RegisterLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
};
}
