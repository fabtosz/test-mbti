#pragma once
#include "stdafx.h"
#include "Personality.h"
#include "Form2.h"

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	// Obiekt z danymi z danymi
	Personality^ personality = gcnew Personality;

	// Licznik pytañ i do klucza odpowiedzi
	System::Int32 nrPytania = 0;
	System::Int32 dim = 1;
	StreamReader^ sr;
	String^ mbtiType;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelForm1;
	private: System::Windows::Forms::Label^  labelQuestion;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanelAnswers;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;





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
			this->tableLayoutPanelForm1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanelAnswers = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanelForm1->SuspendLayout();
			this->tableLayoutPanelAnswers->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanelForm1
			// 
			this->tableLayoutPanelForm1->ColumnCount = 1;
			this->tableLayoutPanelForm1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanelForm1->Controls->Add(this->labelQuestion, 0, 0);
			this->tableLayoutPanelForm1->Controls->Add(this->tableLayoutPanelAnswers, 0, 1);
			this->tableLayoutPanelForm1->Controls->Add(this->progressBar1, 0, 3);
			this->tableLayoutPanelForm1->Controls->Add(this->button1, 0, 2);
			this->tableLayoutPanelForm1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanelForm1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanelForm1->Name = L"tableLayoutPanelForm1";
			this->tableLayoutPanelForm1->RowCount = 4;
			this->tableLayoutPanelForm1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->tableLayoutPanelForm1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				65)));
			this->tableLayoutPanelForm1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				45)));
			this->tableLayoutPanelForm1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanelForm1->Size = System::Drawing::Size(512, 289);
			this->tableLayoutPanelForm1->TabIndex = 0;
			// 
			// labelQuestion
			// 
			this->labelQuestion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelQuestion->ForeColor = System::Drawing::Color::Maroon;
			this->labelQuestion->Location = System::Drawing::Point(3, 26);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(506, 25);
			this->labelQuestion->TabIndex = 0;
			this->labelQuestion->Text = L"Test MBTI - ROZPOCZNIJ!";
			this->labelQuestion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanelAnswers
			// 
			this->tableLayoutPanelAnswers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanelAnswers->ColumnCount = 1;
			this->tableLayoutPanelAnswers->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelAnswers->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanelAnswers->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanelAnswers->Location = System::Drawing::Point(3, 100);
			this->tableLayoutPanelAnswers->Name = L"tableLayoutPanelAnswers";
			this->tableLayoutPanelAnswers->RowCount = 2;
			this->tableLayoutPanelAnswers->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelAnswers->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanelAnswers->Size = System::Drawing::Size(506, 100);
			this->tableLayoutPanelAnswers->TabIndex = 1;
			this->tableLayoutPanelAnswers->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrange;
			this->label2->Location = System::Drawing::Point(3, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->progressBar1->Location = System::Drawing::Point(3, 271);
			this->progressBar1->Maximum = 56;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(506, 15);
			this->progressBar1->TabIndex = 1;
			this->progressBar1->Visible = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::Chartreuse;
			this->button1->Location = System::Drawing::Point(3, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(506, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->ClientSize = System::Drawing::Size(512, 289);
			this->Controls->Add(this->tableLayoutPanelForm1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Test MBTI - kwestionariusz";
			this->tableLayoutPanelForm1->ResumeLayout(false);
			this->tableLayoutPanelForm1->PerformLayout();
			this->tableLayoutPanelAnswers->ResumeLayout(false);
			this->tableLayoutPanelAnswers->PerformLayout();
			this->ResumeLayout(false);

			sr = File::OpenText("question.txt");
		}
#pragma endregion

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					 tableLayoutPanelAnswers->Visible = true;
					 button1->Visible = false;
					 progressBar1->Visible = true;
					 labelQuestion-> Text = sr->ReadLine();
					 label1->Text = sr->ReadLine();
					 label2->Text = sr->ReadLine();
					 nrPytania++;
		}
		private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
					 personality->IncreaseScore1(nrPytania);
					 if (nrPytania == 56)
					 {
						 personality->EvaluatePersonalityType();
						 mbtiType = personality->GetPersonalityType();
						 this->Hide();
						 Form2^ f2 = gcnew Form2(mbtiType);
						 f2->ShowDialog();
					 }
					 if (dim != 4)
					 {
						 nrPytania++;
						 dim++;
					 }
					 else
					 {
						 nrPytania++;
						 dim = 1;
					 }
					 labelQuestion->Text = sr->ReadLine();
					 label1->Text = sr->ReadLine();
					 label2->Text = sr->ReadLine();
					 progressBar1->Value++;
		}
		private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
					 personality->IncreaseScore2(nrPytania);
					 if (nrPytania == 56)
					 {
						 personality->EvaluatePersonalityType();
						 mbtiType = personality->GetPersonalityType();
						 this->Hide();
						 Form2^ f2 = gcnew Form2(mbtiType);
						 f2->ShowDialog();
					 }
					 if (dim != 4)
					 {
						 nrPytania++;
						 dim++;
					 }
					 else
					 {
						 nrPytania++;
						 dim = 1;
					 }
					 labelQuestion->Text = sr->ReadLine();
					 label1->Text = sr->ReadLine();
					 label2->Text = sr->ReadLine();
					 progressBar1->Value++;
		}
	};
}
///////////////
/*
*/