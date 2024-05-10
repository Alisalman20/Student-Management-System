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
	/// Summary for AdminCourse
	/// </summary>
	public ref class AdminCourse : public System::Windows::Forms::Form
	{
	public:
		AdminCourse(void)
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
		~AdminCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ cName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ cId;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ creditComboBox;

	private: System::Windows::Forms::Button^ remBtn;
	private: System::Windows::Forms::Button^ updateBtn;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ searchCourseId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ okSearchId;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->creditComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->remBtn = (gcnew System::Windows::Forms::Button());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->okSearchId = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->searchCourseId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(675, 79);
			this->panel1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(657, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course Information";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(50, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 34);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Course Credit";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cName
			// 
			this->cName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cName->Location = System::Drawing::Point(268, 139);
			this->cName->Name = L"cName";
			this->cName->Size = System::Drawing::Size(321, 26);
			this->cName->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 34);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Course Name";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &AdminCourse::label3_Click);
			// 
			// cId
			// 
			this->cId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cId->Location = System::Drawing::Point(268, 103);
			this->cId->Name = L"cId";
			this->cId->Size = System::Drawing::Size(321, 26);
			this->cId->TabIndex = 23;
			this->cId->TextChanged += gcnew System::EventHandler(this, &AdminCourse::tId_TextChanged);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(39, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 34);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Couse Id";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->Click += gcnew System::EventHandler(this, &AdminCourse::label6_Click);
			// 
			// creditComboBox
			// 
			this->creditComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->creditComboBox->FormattingEnabled = true;
			this->creditComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->creditComboBox->Location = System::Drawing::Point(268, 171);
			this->creditComboBox->Name = L"creditComboBox";
			this->creditComboBox->Size = System::Drawing::Size(321, 28);
			this->creditComboBox->TabIndex = 24;
			this->creditComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminCourse::comboBox1_SelectedIndexChanged);
			// 
			// remBtn
			// 
			this->remBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remBtn->Location = System::Drawing::Point(474, 213);
			this->remBtn->Name = L"remBtn";
			this->remBtn->Size = System::Drawing::Size(160, 46);
			this->remBtn->TabIndex = 25;
			this->remBtn->Text = L"Remove";
			this->remBtn->UseVisualStyleBackColor = true;
			this->remBtn->Click += gcnew System::EventHandler(this, &AdminCourse::remBtn_Click);
			// 
			// updateBtn
			// 
			this->updateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateBtn->Location = System::Drawing::Point(256, 213);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(160, 46);
			this->updateBtn->TabIndex = 26;
			this->updateBtn->Text = L"Update";
			this->updateBtn->UseVisualStyleBackColor = true;
			this->updateBtn->Click += gcnew System::EventHandler(this, &AdminCourse::updateBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addBtn->Location = System::Drawing::Point(54, 213);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(160, 46);
			this->addBtn->TabIndex = 27;
			this->addBtn->Text = L"ADD";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &AdminCourse::addBtn_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->okSearchId);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->searchCourseId);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Location = System::Drawing::Point(15, 277);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(648, 214);
			this->panel2->TabIndex = 28;
			// 
			// okSearchId
			// 
			this->okSearchId->Location = System::Drawing::Point(522, 47);
			this->okSearchId->Name = L"okSearchId";
			this->okSearchId->Size = System::Drawing::Size(75, 23);
			this->okSearchId->TabIndex = 21;
			this->okSearchId->Text = L"OK";
			this->okSearchId->UseVisualStyleBackColor = true;
			this->okSearchId->Click += gcnew System::EventHandler(this, &AdminCourse::okSearchId_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(328, 149);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"courseCredit";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(328, 117);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"courseName";
			// 
			// searchCourseId
			// 
			this->searchCourseId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchCourseId->Location = System::Drawing::Point(276, 15);
			this->searchCourseId->Name = L"searchCourseId";
			this->searchCourseId->Size = System::Drawing::Size(321, 26);
			this->searchCourseId->TabIndex = 7;
			this->searchCourseId->Text = L"Search Id";
			this->searchCourseId->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 34);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter Course Id";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(41, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(274, 34);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Course Details";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &AdminCourse::label6_Click);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(91, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 34);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Course Name ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label7->Click += gcnew System::EventHandler(this, &AdminCourse::label3_Click);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(102, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 34);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Course Credit";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AdminCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 503);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->remBtn);
			this->Controls->Add(this->updateBtn);
			this->Controls->Add(this->addBtn);
			this->Controls->Add(this->creditComboBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel1);
			this->Name = L"AdminCourse";
			this->Text = L"AdminCourse";
			this->Load += gcnew System::EventHandler(this, &AdminCourse::AdminCourse_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//************************Add This Connection*****************************8
	try
	{
		String^ cCredit = safe_cast<System::String^>(creditComboBox->SelectedItem);

		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO course_info (Id, Name,Credit) VALUES (@Id, @Name, @Credit)", con);

		cmd->Parameters->AddWithValue("@Id", Int32::Parse(cId->Text));
		cmd->Parameters->AddWithValue("@Name", cName->Text);
		cmd->Parameters->AddWithValue("@Credit", Int32::Parse(cCredit));


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
private: System::Void AdminCourse_Load(System::Object^ sender, System::EventArgs^ e) {
	//************************Add This Connection*****************************8

	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");
		SqlCommand^ cnn = gcnew SqlCommand("select * from course_info", con);
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
private: System::Void updateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//************************Update This Connection*****************************8
	try
	{
		String^ cCredit = safe_cast<System::String^>(creditComboBox->SelectedItem);

		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("UPDATE course_info SET Name=@Name, Credit=@Credit WHERE Id=@Id", con);

		cmd->Parameters->AddWithValue("@Id", Int32::Parse(cId->Text));
		cmd->Parameters->AddWithValue("@Name", cName->Text);
		cmd->Parameters->AddWithValue("@Credit", Int32::Parse(cCredit));

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
	//************************Delete This Connection*****************************8
	try
	{
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-FHNM1MD;Initial Catalog=student management system;Integrated Security=True;");

		con->Open();
		SqlCommand^ cmd = gcnew SqlCommand("DELETE FROM course_info WHERE Id=@Id", con);

		cmd->Parameters->AddWithValue("@Id", Int32::Parse(cId->Text));

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
private: System::Void okSearchId_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*this->searchCourseId->Text = "";*/
}
};
}
