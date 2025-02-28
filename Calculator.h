#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	double firstNumber;
	char operation;
	double secondNumber;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ display;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Button^ buttonSubstraction;
	private: System::Windows::Forms::Button^ buttonMultiplication;
	private: System::Windows::Forms::Button^ buttonDivision;
	private: System::Windows::Forms::Button^ buttonEqual;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonDecimal;






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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->display = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonSubstraction = (gcnew System::Windows::Forms::Button());
			this->buttonMultiplication = (gcnew System::Windows::Forms::Button());
			this->buttonDivision = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonDecimal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(28, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button2->Location = System::Drawing::Point(94, 92);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// display
			// 
			this->display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->display->Location = System::Drawing::Point(28, 23);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(260, 45);
			this->display->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button3->Location = System::Drawing::Point(160, 92);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button4->Location = System::Drawing::Point(28, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button5->Location = System::Drawing::Point(94, 167);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button6->Location = System::Drawing::Point(160, 167);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button7->Location = System::Drawing::Point(28, 242);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button8->Location = System::Drawing::Point(94, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button9->Location = System::Drawing::Point(160, 242);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::button9_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->buttonAdd->Location = System::Drawing::Point(228, 92);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonAdd->Size = System::Drawing::Size(60, 60);
			this->buttonAdd->TabIndex = 10;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Calculator::buttonAdd_Click);
			// 
			// buttonSubstraction
			// 
			this->buttonSubstraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->buttonSubstraction->Location = System::Drawing::Point(228, 167);
			this->buttonSubstraction->Name = L"buttonSubstraction";
			this->buttonSubstraction->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonSubstraction->Size = System::Drawing::Size(60, 60);
			this->buttonSubstraction->TabIndex = 11;
			this->buttonSubstraction->Text = L"-";
			this->buttonSubstraction->UseVisualStyleBackColor = true;
			this->buttonSubstraction->Click += gcnew System::EventHandler(this, &Calculator::buttonSubstraction_Click);
			// 
			// buttonMultiplication
			// 
			this->buttonMultiplication->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->buttonMultiplication->Location = System::Drawing::Point(228, 242);
			this->buttonMultiplication->Name = L"buttonMultiplication";
			this->buttonMultiplication->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonMultiplication->Size = System::Drawing::Size(60, 60);
			this->buttonMultiplication->TabIndex = 12;
			this->buttonMultiplication->Text = L"x";
			this->buttonMultiplication->UseVisualStyleBackColor = true;
			this->buttonMultiplication->Click += gcnew System::EventHandler(this, &Calculator::buttonMultiplication_Click);
			// 
			// buttonDivision
			// 
			this->buttonDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->buttonDivision->Location = System::Drawing::Point(228, 321);
			this->buttonDivision->Name = L"buttonDivision";
			this->buttonDivision->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonDivision->Size = System::Drawing::Size(60, 60);
			this->buttonDivision->TabIndex = 13;
			this->buttonDivision->Text = L"/";
			this->buttonDivision->UseVisualStyleBackColor = true;
			this->buttonDivision->Click += gcnew System::EventHandler(this, &Calculator::buttonDivision_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->buttonEqual->Location = System::Drawing::Point(162, 399);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonEqual->Size = System::Drawing::Size(126, 60);
			this->buttonEqual->TabIndex = 14;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &Calculator::buttonEqual_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->buttonClear->Location = System::Drawing::Point(28, 321);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonClear->Size = System::Drawing::Size(60, 60);
			this->buttonClear->TabIndex = 15;
			this->buttonClear->Text = L"C";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &Calculator::buttonClear_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button0->Location = System::Drawing::Point(94, 321);
			this->button0->Name = L"button0";
			this->button0->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button0->Size = System::Drawing::Size(60, 60);
			this->button0->TabIndex = 16;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Calculator::button0_Click);
			// 
			// buttonDecimal
			// 
			this->buttonDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->buttonDecimal->Location = System::Drawing::Point(160, 321);
			this->buttonDecimal->Name = L"buttonDecimal";
			this->buttonDecimal->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonDecimal->Size = System::Drawing::Size(60, 60);
			this->buttonDecimal->TabIndex = 17;
			this->buttonDecimal->Text = L".";
			this->buttonDecimal->UseVisualStyleBackColor = true;
			this->buttonDecimal->Click += gcnew System::EventHandler(this, &Calculator::buttonDecimal_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 482);
			this->Controls->Add(this->buttonDecimal);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonDivision);
			this->Controls->Add(this->buttonMultiplication);
			this->Controls->Add(this->buttonSubstraction);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->display);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Location = System::Drawing::Point(78, 50);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "1";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "9";
}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Text += "0";
}
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Convert::ToDouble(display->Text);
	display->Clear();
	operation = '+';

}
private: System::Void buttonSubstraction_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Convert::ToDouble(display->Text);
	display->Clear();
	operation = '-';
}
private: System::Void buttonMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Convert::ToDouble(display->Text);
	display->Clear();
	operation = '*';
}
private: System::Void buttonDivision_Click(System::Object^ sender, System::EventArgs^ e) {
	firstNumber = Convert::ToDouble(display->Text);
	display->Clear();
	operation = '/';
}

private: System::Void buttonDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!display->Text->Contains("."))
	{
		display->Text += '.';
	}
}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	display->Clear();
	firstNumber = 0;
	secondNumber = 0;
	//operation = nullptr;
}
private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	secondNumber = Convert::ToDouble(display->Text);

	if (operation == '+')
	{
		display->Text = (firstNumber + secondNumber).ToString();
	}
	else if (operation == '-')
	{
		display->Text = (firstNumber - secondNumber).ToString();
	}
	else if (operation == '*')
	{
		display->Text = (firstNumber * secondNumber).ToString();
	}
	else if (operation == '/')
	{
		if (secondNumber != 0)
		{
			display->Text = (firstNumber / secondNumber).ToString();
		}
		else
		{
			display->Text = "Error";
		}
	}
}
};
}
