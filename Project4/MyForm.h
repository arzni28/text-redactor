#pragma once

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(11, 10);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 333);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(309, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"�����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(422, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"����������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(273, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"������ ������";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"10", L"12", L"14", L"16" });
			this->comboBox1->Location = System::Drawing::Point(386, 138);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(71, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(412, 38);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(91, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"����������";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(412, 62);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(62, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"������";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(412, 86);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(99, 17);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"������������";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(284, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"��� ����� ��� �������� �����";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"1.txt" });
			this->comboBox2->Location = System::Drawing::Point(287, 251);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(163, 21);
			this->comboBox2->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"�������� �";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(283, 38);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 17);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Arial";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(283, 62);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(58, 17);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Courier";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(283, 86);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(115, 17);
			this->radioButton3->TabIndex = 13;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Times New Roman";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 353);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Font = gcnew System::Drawing::Font("Arial", textBox1->Font->Size, textBox1->Font->Style);
		
		
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Bold);
	else
	{
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style & FontStyle::Regular);
		if (checkBox2->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Italic);
		if (checkBox3->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Underline);
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedIndex == 0) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 10, textBox1->Font->Style);
	if (comboBox1->SelectedIndex == 1) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 12, textBox1->Font->Style);
	if (comboBox1->SelectedIndex == 2) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 14, textBox1->Font->Style);
	if (comboBox1->SelectedIndex == 3) textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 16, textBox1->Font->Style);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->SelectedIndex == 0)
	{
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("C:\\Users\\student\\Documents\\Reznikov\\1.txt"); //����� ��������� ����� ����
		System::String^ text = sr->ReadToEnd(); //�������� ���� � text
		textBox1->Text = textBox1->Text + text;//���������� � textbox �������� ��������� text
		sr->Close(); //�������� �����
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font("Courier", textBox1->Font->Size, textBox1->Font->Style);
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font("times New Roman", textBox1->Font->Size, textBox1->Font->Style);
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Italic);
	else
	{
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style & FontStyle::Regular);
		if (checkBox2->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Italic);
		if (checkBox3->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Underline);
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true)
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Underline);
	else
	{
		textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style & FontStyle::Regular);
		if (checkBox2->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Italic);
		if (checkBox3->Checked == true)
			textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, textBox1->Font->Style | FontStyle::Underline);
	}
}
};
}
