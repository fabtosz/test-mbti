#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{

	System::String^ descriptionType;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	StreamReader^ sr2;

	

	public:
		Form2(String^ lblText)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			descriptionType = lblText;
			label1->Text = descriptionType;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	

	

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 22);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Poka¿ wynik";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(923, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 22);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Zakoñcz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click_1);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 40);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 90)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1057, 658);
			this->tableLayoutPanel1->TabIndex = 2;
			this->tableLayoutPanel1->Visible = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::SeaGreen;
			this->label1->Location = System::Drawing::Point(3, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1051, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.50F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(3, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1051, 13);
			this->label2->TabIndex = 1;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Form2
			// 
			this->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->ClientSize = System::Drawing::Size(1081, 710);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 tableLayoutPanel1->Visible = true;
				 button2->Visible = true;
				 button1->Visible = false;
				 label1->Text = descriptionType;
				 if (descriptionType == "ENFJ")
				 {
					 sr2 = File::OpenText("enfj.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ENFP")
				 {
					 sr2 = File::OpenText("enfp.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ENTJ")
				 {
					 sr2 = File::OpenText("entj.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ENTP")
				 {
					 sr2 = File::OpenText("entp.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ESFJ")
				 {
					 sr2 = File::OpenText("esfj.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ESFP")
				 {
					 sr2 = File::OpenText("esfp.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ESTJ")
				 {
					 sr2 = File::OpenText("estj.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ESTP")
				 {
					 sr2 = File::OpenText("estp.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "INFJ")
				 {
					 sr2 = File::OpenText("infj.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "INFP")
				 {
					 sr2 = File::OpenText("infp.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "INTJ")
				 {
					 sr2 = File::OpenText("intj.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "INTP")
				 {
					 sr2 = File::OpenText("intp.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ISFJ")
				 {
					 sr2 = File::OpenText("isfj.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ISFP")
				 {
					 sr2 = File::OpenText("isfp.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ISTJ")
				 {
					 sr2 = File::OpenText("istj.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
				 if (descriptionType == "ISTP")
				 {
					 sr2 = File::OpenText("istp.txt");
					 label2->Text = sr2->ReadToEnd();
				 }
	}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
};
}
