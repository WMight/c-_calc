#pragma once
#include <iostream>
namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// calcwin 摘要
	/// </summary>
	public ref class calcwin : public System::Windows::Forms::Form
	{
	public:
		calcwin(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~calcwin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;

	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->Font = (gcnew System::Drawing::Font(L"宋体", 16));
			this->label->Location = System::Drawing::Point(12, 36);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(300, 29);
			this->label->TabIndex = 0;
			this->label->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &calcwin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &calcwin::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(173, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &calcwin::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 149);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 39);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &calcwin::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(94, 149);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 39);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &calcwin::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(173, 149);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 39);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &calcwin::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 205);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 39);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &calcwin::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(94, 205);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 39);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &calcwin::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(173, 205);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 39);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &calcwin::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(94, 260);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 39);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &calcwin::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(255, 93);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(41, 39);
			this->button11->TabIndex = 11;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &calcwin::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(255, 149);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 39);
			this->button12->TabIndex = 12;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &calcwin::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(255, 205);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(41, 39);
			this->button13->TabIndex = 13;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &calcwin::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(255, 260);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(41, 39);
			this->button14->TabIndex = 14;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &calcwin::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(173, 260);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(41, 39);
			this->button15->TabIndex = 15;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &calcwin::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(3, 250);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(32, 49);
			this->button16->TabIndex = 16;
			this->button16->Text = L"C";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &calcwin::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(41, 250);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(32, 49);
			this->button17->TabIndex = 17;
			this->button17->Text = L"Del";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &calcwin::button17_Click);
			// 
			// calcwin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 320);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label);
			this->Name = L"calcwin";
			this->Text = L"calcwin";
			this->ResumeLayout(false);

		}
#pragma endregion
		static double x=0.0, y=0.0, sum=0.0;
		static char flag;
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (sum) {
			sum = 0.0;
			label->Text = Convert::ToString(0);
		}
		if (label->Text == "0") {
			x = Convert::ToDouble(2);
			label->Text = Convert::ToString(x);
		}
		else {
			x = Convert::ToDouble(2);
			label->Text += Convert::ToString(x);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (sum) {
			sum = 0.0;
			label->Text = Convert::ToString(0);
		}
		if (label->Text == "0") {
			x = Convert::ToDouble(1);
			label->Text = Convert::ToString(x);
		}
		else {
			x = Convert::ToDouble(1);
			label->Text += Convert::ToString(x);
		}
	}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	y = Convert::ToDouble(label->Text);
	label->Text = "";
	flag = '+';
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label->Text == "" || label->Text == "0") {
		label->Text = Convert::ToString("-");
	}else{
		y = Convert::ToDouble(label->Text);
		label->Text = "";
		flag = '-';
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	y = Convert::ToDouble(label->Text);
	label->Text = "";
	flag = '*';
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	y = Convert::ToDouble(label->Text);
	label->Text = "";
	flag = '/';
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sum) {
		sum = 0.0;
		label->Text = Convert::ToString(0);
	}
	if (label->Text == "0") {
		x = Convert::ToDouble(3);
		label->Text = Convert::ToString(x);
	}
	else {
		x = Convert::ToDouble(3);
		label->Text += Convert::ToString(x);
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sum) {
		label->Text = Convert::ToString(0);
	}
	if (label->Text == "0") {
		x = Convert::ToDouble(4);
		label->Text = Convert::ToString(x);
	}
	else {
		x = Convert::ToDouble(4);
		label->Text += Convert::ToString(x);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sum) {
		sum = 0.0;
		label->Text = Convert::ToString(0);
	}
	if (label->Text == "0") {
		x = Convert::ToDouble(5);
		label->Text = Convert::ToString(x);
	}
	else {
		x = Convert::ToDouble(5);
		label->Text += Convert::ToString(x);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sum) {
		sum = 0.0;
		label->Text = Convert::ToString(0);
	}
	if (label->Text == "0") {
		x = Convert::ToDouble(6);
		label->Text = Convert::ToString(x);
	}
	else {
		x = Convert::ToDouble(6);
		label->Text += Convert::ToString(x);
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sum) {
		sum = 0.0;
		label->Text = Convert::ToString(0);
	}
	if (label->Text == "0") {
		x = Convert::ToDouble(7);
		label->Text = Convert::ToString(x);
	}
	else {
		x = Convert::ToDouble(7);
		label->Text += Convert::ToString(x);
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sum) {
		sum = 0.0;
		label->Text = Convert::ToString(0);
	}
	if (label->Text == "0") {
		x = Convert::ToDouble(8);
		label->Text = Convert::ToString(x);
	}
	else {
		x = Convert::ToDouble(8);
		label->Text += Convert::ToString(x);
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sum) {
		sum = 0.0;
		label->Text = Convert::ToString(0);
	}
	if (label->Text == "0") {
		x = Convert::ToDouble(9);
		label->Text = Convert::ToString(x);
	}
	else {
		x = Convert::ToDouble(9);
		label->Text += Convert::ToString(x);
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sum) {
		sum = 0.0;
	}
	if (label->Text != "0") {
		x = Convert::ToDouble(0);
		label->Text += Convert::ToString(x);
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	x = Convert::ToDouble(label->Text);
	label->Text = "";
	switch (flag) {
	case '+':
		sum = y + x;
		label->Text= Convert::ToString(sum);
		x, y = 0.0;
		break;
	case '-':
		sum = y - x;
		label->Text = Convert::ToString(sum);
		x, y = 0.0;
		break;
		
	case '*':
		sum = y * x;
		label->Text = Convert::ToString(sum);
		x, y = 0.0;
		break;
	case '/':
		sum = y / x;
		label->Text = Convert::ToString(sum);
		x, y = 0.0;
		break;
	} 
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label->Text == "") {
		label->Text = Convert::ToString("");
	}else{
		x = Convert::ToDouble(label->Text);
		x = (long int)x / 10;
		label->Text = Convert::ToString(x);
	}
}	
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	x, y, sum = 0.0;
	label->Text = "";
}
};
}
