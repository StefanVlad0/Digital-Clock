#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Clock::MyForm form;
	Application::Run(% form);
}
