#pragma once
#include"SignIn.h"
#include"Admin.h"
namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Button^ loginCancel;
	private: System::Windows::Forms::Button^ loginOk;
	private: System::Windows::Forms::TextBox^ loginPass;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ loginUser;

	private: System::Windows::Forms::Label^ label2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginCancel = (gcnew System::Windows::Forms::Button());
			this->loginOk = (gcnew System::Windows::Forms::Button());
			this->loginPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->loginUser = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(603, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// loginCancel
			// 
			this->loginCancel->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->loginCancel->Location = System::Drawing::Point(404, 235);
			this->loginCancel->Name = L"loginCancel";
			this->loginCancel->Size = System::Drawing::Size(196, 64);
			this->loginCancel->TabIndex = 11;
			this->loginCancel->Text = L"Cancel";
			this->loginCancel->UseVisualStyleBackColor = false;
			this->loginCancel->Click += gcnew System::EventHandler(this, &Login::loginCancel_Click);
			// 
			// loginOk
			// 
			this->loginOk->BackColor = System::Drawing::Color::Gainsboro;
			this->loginOk->Location = System::Drawing::Point(185, 235);
			this->loginOk->Name = L"loginOk";
			this->loginOk->Size = System::Drawing::Size(196, 64);
			this->loginOk->TabIndex = 12;
			this->loginOk->Text = L"OK";
			this->loginOk->UseVisualStyleBackColor = false;
			this->loginOk->Click += gcnew System::EventHandler(this, &Login::loginOk_Click);
			// 
			// loginPass
			// 
			this->loginPass->Location = System::Drawing::Point(185, 168);
			this->loginPass->Name = L"loginPass";
			this->loginPass->PasswordChar = '*';
			this->loginPass->Size = System::Drawing::Size(415, 31);
			this->loginPass->TabIndex = 10;
			this->loginPass->TextChanged += gcnew System::EventHandler(this, &Login::loginPass_TextChanged);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(-1, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 28);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Password";
			// 
			// loginUser
			// 
			this->loginUser->Location = System::Drawing::Point(185, 115);
			this->loginUser->Name = L"loginUser";
			this->loginUser->Size = System::Drawing::Size(415, 31);
			this->loginUser->TabIndex = 8;
			this->loginUser->TextChanged += gcnew System::EventHandler(this, &Login::loginUser_TextChanged);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(-1, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"User Name";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(627, 448);
			this->Controls->Add(this->loginCancel);
			this->Controls->Add(this->loginOk);
			this->Controls->Add(this->loginPass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->loginUser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginPass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void loginOk_Click(System::Object^ sender, System::EventArgs^ e) {
	SignIn^ obj = gcnew SignIn();

	//if (loginUser->Text == obj->getUserName() && loginPass->Text == obj->getPassword())
	//{
	//	String^ namee = loginUser->Text;
	//	String^ pass = loginPass->Text;
	//	MessageBox::Show("Login SuccessFully of User name:" + namee + " Password:" + pass);
	//}
	//else if(loginUser->Text != obj->getUserName() && loginPass->Text != obj->getPassword())
	//{
	//	MessageBox::Show("Invalid Information");
	//}
	//else
	//{
	//	MessageBox::Show("You Entered Empty");
	//}
	obj->setUserName(loginUser->Text);
	obj->setPassword(loginPass->Text);
	String^ namee = obj->getUserName();
	String^ pass = obj->getPassword();

	if (obj->getUserName() == "admin" && obj->getPassword() == "admin")
	{
		MessageBox::Show("Login SuccessFully of User name:" + namee + " Password:" + pass);
		StudentManagementSystem::Admin AdminStudentForm;
		this->Hide();
		AdminStudentForm.ShowDialog();
	}
	else
		MessageBox::Show("Invalid User Name or Password ","Wrong Data",MessageBoxButtons::OK);
}
private: System::Void loginToRegisterLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void loginUser_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void loginCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}