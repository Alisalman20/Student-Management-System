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
	/// Summary for AdminTeacher
	/// </summary>
	public ref class AdminTeacher : public System::Windows::Forms::Form
	{
	public:
		AdminTeacher(void)
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
		~AdminTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:

	private: System::Windows::Forms::Button^ remBtn;
	private: System::Windows::Forms::Button^ updateBtn;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::TextBox^ tEmail;












	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tCourse;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tId;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tPass;
	private: System::Windows::Forms::Label^ label9;

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tPass = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->remBtn = (gcnew System::Windows::Forms::Button());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->tEmail = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tCourse = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel2->Controls->Add(this->tPass);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->remBtn);
			this->panel2->Controls->Add(this->updateBtn);
			this->panel2->Controls->Add(this->addBtn);
			this->panel2->Controls->Add(this->tEmail);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->tCourse);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->tName);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->tId);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(2, 107);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(720, 427);
			this->panel2->TabIndex = 4;
			// 
			// tPass
			// 
			this->tPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tPass->Location = System::Drawing::Point(298, 161);
			this->tPass->Name = L"tPass";
			this->tPass->PasswordChar = '*';
			this->tPass->Size = System::Drawing::Size(321, 26);
			this->tPass->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(48, 153);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(162, 34);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Password";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// remBtn
			// 
			this->remBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remBtn->Location = System::Drawing::Point(484, 224);
			this->remBtn->Name = L"remBtn";
			this->remBtn->Size = System::Drawing::Size(160, 46);
			this->remBtn->TabIndex = 2;
			this->remBtn->Text = L"Remove";
			this->remBtn->UseVisualStyleBackColor = true;
			this->remBtn->Click += gcnew System::EventHandler(this, &AdminTeacher::remBtn_Click);
			// 
			// updateBtn
			// 
			this->updateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateBtn->Location = System::Drawing::Point(266, 224);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(160, 46);
			this->updateBtn->TabIndex = 2;
			this->updateBtn->Text = L"Update";
			this->updateBtn->UseVisualStyleBackColor = true;
			this->updateBtn->Click += gcnew System::EventHandler(this, &AdminTeacher::updateBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addBtn->Location = System::Drawing::Point(64, 221);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(160, 46);
			this->addBtn->TabIndex = 2;
			this->addBtn->Text = L"ADD";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &AdminTeacher::addBtn_Click);
			// 
			// tEmail
			// 
			this->tEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tEmail->Location = System::Drawing::Point(298, 118);
			this->tEmail->Name = L"tEmail";
			this->tEmail->Size = System::Drawing::Size(321, 26);
			this->tEmail->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(59, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 34);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Email";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tCourse
			// 
			this->tCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tCourse->Location = System::Drawing::Point(298, 86);
			this->tCourse->Name = L"tCourse";
			this->tCourse->Size = System::Drawing::Size(321, 26);
			this->tCourse->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(59, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 34);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Course";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tName
			// 
			this->tName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tName->Location = System::Drawing::Point(298, 54);
			this->tName->Name = L"tName";
			this->tName->Size = System::Drawing::Size(321, 26);
			this->tName->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(59, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 34);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Name";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tId
			// 
			this->tId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tId->Location = System::Drawing::Point(298, 22);
			this->tId->Name = L"tId";
			this->tId->Size = System::Drawing::Size(321, 26);
			this->tId->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 34);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(729, 79);
			this->panel1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(689, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Teacher Information";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AdminTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 556);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminTeacher";
			this->Text = L"AdminTeacher";
			this->Load += gcnew System::EventHandler(this, &AdminTeacher::AdminTeacher_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	//************************Add This Connection*****************************8
	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO teacher_info (Id, Name,Course, Email, [Password]) VALUES (@Id, @Name, @Course, @Email, @Password)", con);

		cmd->Parameters->AddWithValue("@Id", Int32::Parse(tId->Text));
		cmd->Parameters->AddWithValue("@Name", tName->Text);
		cmd->Parameters->AddWithValue("@Course", tCourse->Text);
		cmd->Parameters->AddWithValue("@Email", tEmail->Text);
		cmd->Parameters->AddWithValue("@Password", tPass->Text);

		cmd->ExecuteNonQuery();
		con->Close();
		MessageBox::Show("Added Successfully", "Add", MessageBoxButtons::OK);
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
private: System::Void updateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//************************Update This Connection*****************************8
	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("UPDATE teacher_info SET Name=@Name,Course=@Course, Email=@Email, Password=@Password WHERE Id=@Id", con);

		cmd->Parameters->AddWithValue("@Id", Int32::Parse(tId->Text));
		cmd->Parameters->AddWithValue("@Name", tName->Text);
		cmd->Parameters->AddWithValue("@Email", tEmail->Text);
		cmd->Parameters->AddWithValue("@Password", tPass->Text);
		cmd->Parameters->AddWithValue("@Course", tCourse->Text);

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
private: System::Void AdminTeacher_Load(System::Object^ sender, System::EventArgs^ e) {
	//************************Add This Connection*****************************8

	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");
		SqlCommand^ cnn = gcnew SqlCommand("select * from teacher_info", con);
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
private: System::Void remBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//************************ Delete This Connection*****************************8
	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("DELETE FROM teacher_info WHERE Id=@Id", con);

		cmd->Parameters->AddWithValue("@Id", Int32::Parse(tId->Text));

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
