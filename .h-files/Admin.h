#pragma once
#include"AdminStudent.h"
#include"AdminTeacher.h"
namespace StudentManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ studentBtn;
	private: System::Windows::Forms::Button^ feeBtn;

	private: System::Windows::Forms::Button^ courseBtn;

	private: System::Windows::Forms::Button^ teacherBtn;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ editStdMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ editTeacherInformationToolStripMenuItem;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->feeBtn = (gcnew System::Windows::Forms::Button());
			this->courseBtn = (gcnew System::Windows::Forms::Button());
			this->teacherBtn = (gcnew System::Windows::Forms::Button());
			this->studentBtn = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->editStdMenu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editTeacherInformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Peru;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(724, 70);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(461, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Management System";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Peru;
			this->panel2->Controls->Add(this->feeBtn);
			this->panel2->Controls->Add(this->courseBtn);
			this->panel2->Controls->Add(this->teacherBtn);
			this->panel2->Controls->Add(this->studentBtn);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 94);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(151, 440);
			this->panel2->TabIndex = 1;
			// 
			// feeBtn
			// 
			this->feeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->feeBtn->Location = System::Drawing::Point(19, 277);
			this->feeBtn->Name = L"feeBtn";
			this->feeBtn->Size = System::Drawing::Size(121, 49);
			this->feeBtn->TabIndex = 1;
			this->feeBtn->Text = L"Fees";
			this->feeBtn->UseVisualStyleBackColor = true;
			// 
			// courseBtn
			// 
			this->courseBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courseBtn->Location = System::Drawing::Point(19, 222);
			this->courseBtn->Name = L"courseBtn";
			this->courseBtn->Size = System::Drawing::Size(121, 49);
			this->courseBtn->TabIndex = 1;
			this->courseBtn->Text = L"Course";
			this->courseBtn->UseVisualStyleBackColor = true;
			// 
			// teacherBtn
			// 
			this->teacherBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacherBtn->Location = System::Drawing::Point(19, 167);
			this->teacherBtn->Name = L"teacherBtn";
			this->teacherBtn->Size = System::Drawing::Size(121, 49);
			this->teacherBtn->TabIndex = 1;
			this->teacherBtn->Text = L"Teacher";
			this->teacherBtn->UseVisualStyleBackColor = true;
			// 
			// studentBtn
			// 
			this->studentBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentBtn->Location = System::Drawing::Point(19, 112);
			this->studentBtn->Name = L"studentBtn";
			this->studentBtn->Size = System::Drawing::Size(121, 49);
			this->studentBtn->TabIndex = 1;
			this->studentBtn->Text = L"Student";
			this->studentBtn->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(12, 19);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(129, 56);
			this->panel3->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 37);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Admin";
			this->label2->Click += gcnew System::EventHandler(this, &Admin::label2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->editStdMenu, this->editTeacherInformationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(724, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// editStdMenu
			// 
			this->editStdMenu->Name = L"editStdMenu";
			this->editStdMenu->Size = System::Drawing::Size(149, 20);
			this->editStdMenu->Text = L"Edit Student Information";
			this->editStdMenu->Click += gcnew System::EventHandler(this, &Admin::editStdMenu_Click);
			// 
			// editTeacherInformationToolStripMenuItem
			// 
			this->editTeacherInformationToolStripMenuItem->Name = L"editTeacherInformationToolStripMenuItem";
			this->editTeacherInformationToolStripMenuItem->Size = System::Drawing::Size(148, 20);
			this->editTeacherInformationToolStripMenuItem->Text = L"Edit Teacher Information";
			this->editTeacherInformationToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::editTeacherInformationToolStripMenuItem_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(20, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(724, 534);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void adminLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void adminTeacherBtn_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void editStdMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	StudentManagementSystem::AdminStudent AdminStudentForm;
	AdminStudentForm.ShowDialog();
}
private: System::Void editTeacherInformationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	StudentManagementSystem::AdminTeacher adminteacherForm;
	adminteacherForm.ShowDialog();
}
};
}
