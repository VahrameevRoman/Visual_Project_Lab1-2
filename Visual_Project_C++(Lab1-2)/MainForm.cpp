#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;



[STAThreadAttribute]
int main(array<String^>^)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	VisualProjectCLab12::MainForm form;
	Application::Run(% form);

	return 0;
}