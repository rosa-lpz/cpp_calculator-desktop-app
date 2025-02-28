#include "Calculator.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace calculator;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	calculator::Calculator form;
	Application::Run(% form);
}


 