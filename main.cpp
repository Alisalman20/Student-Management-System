#include"Login.h"
#include"SignIn.h"
#include"AdminStudent.h"
#include"Admin.h"
#include"AdminCourse.h"
using namespace StudentManagementSystem;
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

		StudentManagementSystem::AdminCourse loginForm;
		loginForm.ShowDialog();
}