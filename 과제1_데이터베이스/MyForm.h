#pragma once
#include <cliext/vector>

namespace 과제1데이터베이스 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//cliext::vector<String> sen;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		String^ windir;

	public:
		MyForm(void)
		{
			 windir = System::Environment::GetEnvironmentVariable("windir");
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;
	protected:

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button1->Location = System::Drawing::Point(80, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1. FileLoad";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button2->Location = System::Drawing::Point(80, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2. FilePrint";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoEB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button3->Location = System::Drawing::Point(786, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 22);
			this->button3->TabIndex = 7;
			this->button3->Text = L"3. FileUpdate";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button4->Location = System::Drawing::Point(786, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 22);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4. FileDelete";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button5->Location = System::Drawing::Point(786, 233);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 22);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5. FileFind";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button6->Location = System::Drawing::Point(786, 448);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 22);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6. FileSave";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button7->Location = System::Drawing::Point(786, 531);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(115, 22);
			this->button7->TabIndex = 6;
			this->button7->Text = L"8. Exit";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalExtent = 100;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(80, 122);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(650, 340);
			this->listBox1->TabIndex = 8;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(317, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(287, 21);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1023, 451);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(287, 21);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1023, 204);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(287, 21);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1023, 130);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(287, 21);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1023, 157);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(287, 21);
			this->textBox5->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label1->Location = System::Drawing::Point(231, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"파일 이름";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label2->Location = System::Drawing::Point(937, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"수정 문자열";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label3->Location = System::Drawing::Point(937, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"변경 문자열";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label4->Location = System::Drawing::Point(937, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 17);
			this->label4->TabIndex = 17;
			this->label4->Text = L"삭제 문자열";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->Location = System::Drawing::Point(937, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 17);
			this->label5->TabIndex = 19;
			this->label5->Text = L"검색 문자열";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1023, 235);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(287, 21);
			this->textBox6->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label6->Location = System::Drawing::Point(937, 454);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"파일 이름";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalExtent = 100;
			this->listBox2->ItemHeight = 12;
			this->listBox2->Location = System::Drawing::Point(80, 473);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(650, 340);
			this->listBox2->TabIndex = 21;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->HorizontalExtent = 100;
			this->listBox3->ItemHeight = 12;
			this->listBox3->Location = System::Drawing::Point(1023, 265);
			this->listBox3->Name = L"listBox3";
			this->listBox3->ScrollAlwaysVisible = true;
			this->listBox3->Size = System::Drawing::Size(287, 160);
			this->listBox3->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label7->Location = System::Drawing::Point(937, 265);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 17);
			this->label7->TabIndex = 23;
			this->label7->Text = L"검색 결과";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label8->Location = System::Drawing::Point(19, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 17);
			this->label8->TabIndex = 24;
			this->label8->Text = L" 반영 전";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label9->Location = System::Drawing::Point(19, 473);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 17);
			this->label9->TabIndex = 25;
			this->label9->Text = L" 반영 후";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->button8->Location = System::Drawing::Point(786, 493);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(115, 22);
			this->button8->TabIndex = 26;
			this->button8->Text = L"7. FlieInsert";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"AppleSDGothicNeoB00", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label10->Location = System::Drawing::Point(937, 496);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"추가 문자열";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1023, 493);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(287, 21);
			this->textBox7->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1352, 821);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//String^ fileName = "textfile.txt";
		String^ fileName = this->textBox1->Text;
		try
		{
			StreamReader^ din = File::OpenText(fileName);
			MessageBox::Show("Open file Success!!", fileName);
		}
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				MessageBox::Show("file not found", fileName);
			else
				MessageBox::Show("problem reading file", fileName);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//text 파일 출력
		listBox1->Items->Clear();
		listBox2->Items->Clear();

		try {
			String^ fileName = this->textBox1->Text;
			StreamReader^ din = File::OpenText(fileName);
			do{
				listBox1->Items->Add(din->ReadLine());
			}while (din->Peek() != -1);

			//listbox2에 내용저장하고 사용
			for (int i = 0; i < listBox1->Items->Count; i++) {
				listBox2->Items->Add(listBox1->Items[i]->ToString());
			}
		}
		catch (FileNotFoundException^ ex)
		{
			listBox1->Items->Add(ex);
		}

		catch (System::Exception^ e)
		{
			listBox1->Items->Add(e);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ now = this->textBox4->Text;
		String^ next = this->textBox5->Text;

		cliext::vector<String^> sen;

		for (int i = 0; i < listBox2->Items->Count; i++) {
			sen.push_back(listBox2->Items[i]->ToString());
		}

		for (int i = 0; i < sen.size(); i++) {
			sen[i] = sen[i]->Replace(now, next);
		}
		listBox2->Items->Clear();

		//변경
		for (int i = 0; i < sen.size(); i++) {
			listBox2->Items->Add(sen[i]->ToString());
		}
		MessageBox::Show("Change word successful!!");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ now = this->textBox3->Text;

		cliext::vector<String^> sen;

		for (int i = 0; i < listBox2->Items->Count; i++) {
			sen.push_back(listBox2->Items[i]->ToString());
		}

		for (int i = 0; i < sen.size(); i++) {
			sen[i] = sen[i]->Replace(now, "");
		}
		listBox2->Items->Clear();

		//변경
		for (int i = 0; i < sen.size(); i++) {
			if (sen[i]->Length == 0) continue;
			listBox2->Items->Add(sen[i]->ToString());
		}
		MessageBox::Show("Delete word successful!!");
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ now = this->textBox6->Text;
		listBox3->Items->Clear();

		for (int i = 0; i < listBox1->Items->Count; i++) {
			//문자열 포함 여부 : https://skanky.dev/visualcpp/strings/working-with-strings
			//if (listBox1->Items[i]->Contains(now)) {
			String^ mystring = listBox1->Items[i]->ToString();
			if (mystring->Contains(now)) {
				listBox3->Items->Add(now);
			}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		//변경 내용 업로드
		String^ fileName = this->textBox2->Text;

		StreamWriter^ sw = gcnew StreamWriter(fileName);

		//int c = listBox1->Items->Count;
		for (int i = 0; i < listBox2->Items->Count; i++) {
			sw->WriteLine(listBox2->Items[i]->ToString());
		}

		//sw->WriteLine("A text file is born!");
		sw->Close();
		MessageBox::Show("Save file successful!!");
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	 //문자열 추가
		String^ now = this->textBox7->Text;
		
		listBox2->Items->Add(now);
		
		MessageBox::Show("Insert word successful!!");
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
