#pragma once
namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminStudent
	/// </summary>
	public ref class AdminStudent : public System::Windows::Forms::Form
	{
	public:
		AdminStudent(void)
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
		~AdminStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ sId;
	private: System::Windows::Forms::TextBox^ sPhone;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ sCnic;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ sAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ sEmail;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ sAge;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ sName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ remBtn;
	private: System::Windows::Forms::Button^ updateBtn;

	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::TextBox^ sPass;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ sSession;
	private: System::Windows::Forms::TextBox^ sDegree;
	private: System::Windows::Forms::Label^ label10;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->remBtn = (gcnew System::Windows::Forms::Button());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->sSession = (gcnew System::Windows::Forms::TextBox());
			this->sDegree = (gcnew System::Windows::Forms::TextBox());
			this->sPass = (gcnew System::Windows::Forms::TextBox());
			this->sPhone = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->sCnic = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->sAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->sEmail = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->sAge = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->sId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(689, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Information";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &AdminStudent::label1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(724, 79);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->remBtn);
			this->panel2->Controls->Add(this->updateBtn);
			this->panel2->Controls->Add(this->addBtn);
			this->panel2->Controls->Add(this->sSession);
			this->panel2->Controls->Add(this->sDegree);
			this->panel2->Controls->Add(this->sPass);
			this->panel2->Controls->Add(this->sPhone);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->sCnic);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->sAddress);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->sEmail);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->sAge);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->sName);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->sId);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(3, 85);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(720, 427);
			this->panel2->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(48, 308);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(162, 34);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Student_Session";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// remBtn
			// 
			this->remBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remBtn->Location = System::Drawing::Point(470, 369);
			this->remBtn->Name = L"remBtn";
			this->remBtn->Size = System::Drawing::Size(160, 46);
			this->remBtn->TabIndex = 2;
			this->remBtn->Text = L"Remove";
			this->remBtn->UseVisualStyleBackColor = true;
			this->remBtn->Click += gcnew System::EventHandler(this, &AdminStudent::remBtn_Click);
			// 
			// updateBtn
			// 
			this->updateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateBtn->Location = System::Drawing::Point(252, 369);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(160, 46);
			this->updateBtn->TabIndex = 2;
			this->updateBtn->Text = L"Update";
			this->updateBtn->UseVisualStyleBackColor = true;
			this->updateBtn->Click += gcnew System::EventHandler(this, &AdminStudent::updateBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addBtn->Location = System::Drawing::Point(50, 366);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(160, 46);
			this->addBtn->TabIndex = 2;
			this->addBtn->Text = L"ADD";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &AdminStudent::addBtn_Click);
			// 
			// sSession
			// 
			this->sSession->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sSession->Location = System::Drawing::Point(298, 316);
			this->sSession->Name = L"sSession";
			this->sSession->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->sSession->Size = System::Drawing::Size(321, 26);
			this->sSession->TabIndex = 1;
			this->sSession->TextChanged += gcnew System::EventHandler(this, &AdminStudent::sSession_TextChanged);
			// 
			// sDegree
			// 
			this->sDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sDegree->Location = System::Drawing::Point(298, 282);
			this->sDegree->Name = L"sDegree";
			this->sDegree->Size = System::Drawing::Size(321, 26);
			this->sDegree->TabIndex = 1;
			// 
			// sPass
			// 
			this->sPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sPass->Location = System::Drawing::Point(298, 248);
			this->sPass->Name = L"sPass";
			this->sPass->PasswordChar = '*';
			this->sPass->Size = System::Drawing::Size(321, 26);
			this->sPass->TabIndex = 1;
			// 
			// sPhone
			// 
			this->sPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sPhone->Location = System::Drawing::Point(298, 214);
			this->sPhone->Name = L"sPhone";
			this->sPhone->Size = System::Drawing::Size(321, 26);
			this->sPhone->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(48, 274);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(162, 34);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Student Degree";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label10->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(48, 240);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(162, 34);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Student_Password";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(48, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 34);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Student_Phone";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// sCnic
			// 
			this->sCnic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sCnic->Location = System::Drawing::Point(298, 182);
			this->sCnic->Name = L"sCnic";
			this->sCnic->Size = System::Drawing::Size(321, 26);
			this->sCnic->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(59, 174);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 34);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Student_CNIC";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// sAddress
			// 
			this->sAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sAddress->Location = System::Drawing::Point(298, 150);
			this->sAddress->Name = L"sAddress";
			this->sAddress->Size = System::Drawing::Size(321, 26);
			this->sAddress->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(59, 140);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 34);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Student_Address";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// sEmail
			// 
			this->sEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sEmail->Location = System::Drawing::Point(298, 118);
			this->sEmail->Name = L"sEmail";
			this->sEmail->Size = System::Drawing::Size(321, 26);
			this->sEmail->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(59, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 34);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Student_Email";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// sAge
			// 
			this->sAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sAge->Location = System::Drawing::Point(298, 86);
			this->sAge->Name = L"sAge";
			this->sAge->Size = System::Drawing::Size(321, 26);
			this->sAge->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(59, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 34);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Student Age";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// sName
			// 
			this->sName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sName->Location = System::Drawing::Point(298, 54);
			this->sName->Name = L"sName";
			this->sName->Size = System::Drawing::Size(321, 26);
			this->sName->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(59, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 34);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Student_Name";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// sId
			// 
			this->sId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sId->Location = System::Drawing::Point(298, 22);
			this->sId->Name = L"sId";
			this->sId->Size = System::Drawing::Size(321, 26);
			this->sId->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 34);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Student_Id";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &AdminStudent::label2_Click);
			// 
			// AdminStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(724, 517);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminStudent";
			this->Text = L"AdminStudent";
			this->Load += gcnew System::EventHandler(this, &AdminStudent::AdminStudent_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	//************************Add This Connection*****************************8
	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cnn = gcnew SqlCommand("INSERT INTO student_info VALUES (@Id, @Name, @Age, @Email, @Address, @CNIC, @Phone, @Password, @Degree,@Session)", con);

		cnn->Parameters->AddWithValue("@Id", Int32::Parse(sId->Text));
		cnn->Parameters->AddWithValue("@Name", sName->Text);
		cnn->Parameters->AddWithValue("@Age", Int32::Parse(sAge->Text));
		cnn->Parameters->AddWithValue("@Email", sEmail->Text);
		cnn->Parameters->AddWithValue("@Address", sAddress->Text);
		cnn->Parameters->AddWithValue("@CNIC", Int32::Parse(sCnic->Text));
		cnn->Parameters->AddWithValue("@Phone", Int32::Parse(sPhone->Text));
		cnn->Parameters->AddWithValue("@Password", sPass->Text);
		cnn->Parameters->AddWithValue("@Degree", sDegree->Text);
		cnn->Parameters->AddWithValue("@Session", Int32::Parse(sSession->Text));
	
		
		cnn->ExecuteNonQuery();
		con->Close();
		MessageBox::Show("Added SucessFully"
			,"Add", MessageBoxButtons::OK);

	}
	catch (SqlException^ ex)
	{
		MessageBox::Show(ex->Message, "SQL Error", MessageBoxButtons::OK);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}


}
private: System::Void AdminStudent_Load(System::Object^ sender, System::EventArgs^ e) {
	//************************Add This Connection*****************************8

	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");
		SqlCommand^ cnn = gcnew SqlCommand("select * from student_info", con);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(cnn);
		DataTable^ table = gcnew DataTable();
		da->Fill(table);
		DataGridView^ dataGridView = gcnew DataGridView();

		dataGridView->DataSource = table;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
}
private: System::Void sSession_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void updateBtn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//************************Update This Connection*****************************8
	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("UPDATE student_info SET Name=@Name, Age=@Age, Email=@Email, Address=@Address, CNIC=@CNIC, Phone=@Phone, Password=@Password, Degree=@Degree, Session=@Session WHERE Id=@Id", con);

		cmd->Parameters->AddWithValue("@Id", Int32::Parse(sId->Text));
		cmd->Parameters->AddWithValue("@Name", sName->Text);
		cmd->Parameters->AddWithValue("@Age", Int32::Parse(sAge->Text));
		cmd->Parameters->AddWithValue("@Email", sEmail->Text);
		cmd->Parameters->AddWithValue("@Address", sAddress->Text);
		cmd->Parameters->AddWithValue("@CNIC", Int32::Parse(sCnic->Text));
		cmd->Parameters->AddWithValue("@Phone", Int32::Parse(sPhone->Text));
		cmd->Parameters->AddWithValue("@Password", sPass->Text);
		cmd->Parameters->AddWithValue("@Degree", sDegree->Text);
		cmd->Parameters->AddWithValue("@Session", Int32::Parse(sSession->Text));

		cmd->ExecuteNonQuery();
		con->Close();
		MessageBox::Show("Updated Successfully", "Update", MessageBoxButtons::OK);
	}
	catch (SqlException^ ex)
	{
		MessageBox::Show(ex->Message, "SQL Error", MessageBoxButtons::OK);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}
}
private: System::Void remBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//************************ Delete This Connection*****************************8
	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("DELETE FROM student_info WHERE Id=@Id", con);

		cmd->Parameters->AddWithValue("@Id", Int32::Parse(sId->Text));

		cmd->ExecuteNonQuery();
		con->Close();
		MessageBox::Show("Deleted Successfully", "Delete", MessageBoxButtons::OK);
	}
	catch (SqlException^ ex)
	{
		MessageBox::Show(ex->Message, "SQL Error", MessageBoxButtons::OK);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK);
	}

}
};
}
