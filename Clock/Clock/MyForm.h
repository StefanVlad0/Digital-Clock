#pragma once
#pragma comment(lib, "winmm.lib")

#include <time.h>
#include <Windows.h>
#include <MMSystem.h>
namespace Clock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CurrentTime;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Button^ AlarmB;
	private: System::Windows::Forms::Button^ ChronometerB;

	private: System::Windows::Forms::Label^ Chrono;
	private: System::Windows::Forms::Button^ ChronoResetB;

	private: System::Windows::Forms::Button^ ChronoStopB;

	private: System::Windows::Forms::Button^ ChronoStartB;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::NumericUpDown^ HourSetB;
	private: System::Windows::Forms::NumericUpDown^ SecondSetB;


	private: System::Windows::Forms::Button^ SetAlarmB;
	private: System::Windows::Forms::Label^ AlarmText;
	private: System::Windows::Forms::Timer^ timer3;









	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->CurrentTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->AlarmText = (gcnew System::Windows::Forms::Label());
			this->SetAlarmB = (gcnew System::Windows::Forms::Button());
			this->SecondSetB = (gcnew System::Windows::Forms::NumericUpDown());
			this->HourSetB = (gcnew System::Windows::Forms::NumericUpDown());
			this->ChronoResetB = (gcnew System::Windows::Forms::Button());
			this->ChronoStopB = (gcnew System::Windows::Forms::Button());
			this->ChronoStartB = (gcnew System::Windows::Forms::Button());
			this->Chrono = (gcnew System::Windows::Forms::Label());
			this->AlarmB = (gcnew System::Windows::Forms::Button());
			this->ChronometerB = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SecondSetB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HourSetB))->BeginInit();
			this->SuspendLayout();
			// 
			// CurrentTime
			// 
			this->CurrentTime->AutoSize = true;
			this->CurrentTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->CurrentTime->Location = System::Drawing::Point(149, 41);
			this->CurrentTime->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CurrentTime->Name = L"CurrentTime";
			this->CurrentTime->Size = System::Drawing::Size(220, 55);
			this->CurrentTime->TabIndex = 0;
			this->CurrentTime->Text = L"00:00:00";
			this->CurrentTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->CurrentTime->Click += gcnew System::EventHandler(this, &MyForm::CurrentTime_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// panel
			// 
			this->panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel->Controls->Add(this->AlarmText);
			this->panel->Controls->Add(this->SetAlarmB);
			this->panel->Controls->Add(this->SecondSetB);
			this->panel->Controls->Add(this->HourSetB);
			this->panel->Controls->Add(this->ChronoResetB);
			this->panel->Controls->Add(this->ChronoStopB);
			this->panel->Controls->Add(this->ChronoStartB);
			this->panel->Controls->Add(this->Chrono);
			this->panel->Location = System::Drawing::Point(32, 160);
			this->panel->Margin = System::Windows::Forms::Padding(2);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(450, 169);
			this->panel->TabIndex = 1;
			this->panel->Visible = false;
			// 
			// AlarmText
			// 
			this->AlarmText->AutoSize = true;
			this->AlarmText->BackColor = System::Drawing::SystemColors::Control;
			this->AlarmText->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AlarmText->ForeColor = System::Drawing::Color::Red;
			this->AlarmText->Location = System::Drawing::Point(171, 142);
			this->AlarmText->Name = L"AlarmText";
			this->AlarmText->Size = System::Drawing::Size(0, 16);
			this->AlarmText->TabIndex = 7;
			// 
			// SetAlarmB
			// 
			this->SetAlarmB->Location = System::Drawing::Point(192, 106);
			this->SetAlarmB->Name = L"SetAlarmB";
			this->SetAlarmB->Size = System::Drawing::Size(75, 23);
			this->SetAlarmB->TabIndex = 6;
			this->SetAlarmB->Text = L"Set";
			this->SetAlarmB->UseVisualStyleBackColor = true;
			this->SetAlarmB->Visible = false;
			this->SetAlarmB->Click += gcnew System::EventHandler(this, &MyForm::SetAlarmB_Click);
			// 
			// SecondSetB
			// 
			this->SecondSetB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->SecondSetB->Location = System::Drawing::Point(230, 41);
			this->SecondSetB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->SecondSetB->Name = L"SecondSetB";
			this->SecondSetB->Size = System::Drawing::Size(60, 49);
			this->SecondSetB->TabIndex = 5;
			this->SecondSetB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->SecondSetB->Visible = false;
			// 
			// HourSetB
			// 
			this->HourSetB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->HourSetB->Location = System::Drawing::Point(164, 41);
			this->HourSetB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->HourSetB->Name = L"HourSetB";
			this->HourSetB->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->HourSetB->Size = System::Drawing::Size(60, 49);
			this->HourSetB->TabIndex = 4;
			this->HourSetB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->HourSetB->Visible = false;
			// 
			// ChronoResetB
			// 
			this->ChronoResetB->Enabled = false;
			this->ChronoResetB->Location = System::Drawing::Point(273, 106);
			this->ChronoResetB->Name = L"ChronoResetB";
			this->ChronoResetB->Size = System::Drawing::Size(75, 23);
			this->ChronoResetB->TabIndex = 3;
			this->ChronoResetB->TabStop = false;
			this->ChronoResetB->Text = L"Reset";
			this->ChronoResetB->UseVisualStyleBackColor = true;
			this->ChronoResetB->Visible = false;
			this->ChronoResetB->Click += gcnew System::EventHandler(this, &MyForm::ChronoResetB_Click);
			// 
			// ChronoStopB
			// 
			this->ChronoStopB->Location = System::Drawing::Point(192, 106);
			this->ChronoStopB->Name = L"ChronoStopB";
			this->ChronoStopB->Size = System::Drawing::Size(75, 23);
			this->ChronoStopB->TabIndex = 2;
			this->ChronoStopB->TabStop = false;
			this->ChronoStopB->Text = L"Stop";
			this->ChronoStopB->UseVisualStyleBackColor = true;
			this->ChronoStopB->Visible = false;
			this->ChronoStopB->Click += gcnew System::EventHandler(this, &MyForm::ChronoStopB_Click);
			// 
			// ChronoStartB
			// 
			this->ChronoStartB->Location = System::Drawing::Point(111, 106);
			this->ChronoStartB->Name = L"ChronoStartB";
			this->ChronoStartB->Size = System::Drawing::Size(75, 23);
			this->ChronoStartB->TabIndex = 1;
			this->ChronoStartB->TabStop = false;
			this->ChronoStartB->Text = L"Start";
			this->ChronoStartB->UseVisualStyleBackColor = true;
			this->ChronoStartB->Visible = false;
			this->ChronoStartB->Click += gcnew System::EventHandler(this, &MyForm::ChronoStartB_Click);
			// 
			// Chrono
			// 
			this->Chrono->AutoSize = true;
			this->Chrono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Chrono->Location = System::Drawing::Point(147, 43);
			this->Chrono->Name = L"Chrono";
			this->Chrono->Size = System::Drawing::Size(164, 42);
			this->Chrono->TabIndex = 0;
			this->Chrono->Text = L"00:00:00";
			this->Chrono->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Chrono->Visible = false;
			this->Chrono->Click += gcnew System::EventHandler(this, &MyForm::Chrono_Click);
			// 
			// AlarmB
			// 
			this->AlarmB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AlarmB->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AlarmB->Location = System::Drawing::Point(173, 111);
			this->AlarmB->Margin = System::Windows::Forms::Padding(2);
			this->AlarmB->Name = L"AlarmB";
			this->AlarmB->Size = System::Drawing::Size(84, 28);
			this->AlarmB->TabIndex = 2;
			this->AlarmB->TabStop = false;
			this->AlarmB->Text = L"Alarm";
			this->AlarmB->UseVisualStyleBackColor = true;
			this->AlarmB->Click += gcnew System::EventHandler(this, &MyForm::AlarmB_Click);
			// 
			// ChronometerB
			// 
			this->ChronometerB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ChronometerB->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChronometerB->Location = System::Drawing::Point(263, 111);
			this->ChronometerB->Margin = System::Windows::Forms::Padding(2);
			this->ChronometerB->Name = L"ChronometerB";
			this->ChronometerB->Size = System::Drawing::Size(84, 28);
			this->ChronometerB->TabIndex = 3;
			this->ChronometerB->TabStop = false;
			this->ChronometerB->Text = L"Chronometer";
			this->ChronometerB->UseVisualStyleBackColor = true;
			this->ChronometerB->Click += gcnew System::EventHandler(this, &MyForm::ChronometerB_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 358);
			this->Controls->Add(this->ChronometerB);
			this->Controls->Add(this->AlarmB);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->CurrentTime);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Clock";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SecondSetB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HourSetB))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CurrentTime_f(System::Object^ sender, System::EventArgs^ e)
		{

		
		
		
		
		}
	private: System::Void CurrentTime_Click(System::Object^ sender, System::EventArgs^ e) {
		
			
			
				
			
		
		
	}
		   
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		time_t theTime = time(NULL);
		struct tm* aTime = localtime(&theTime);
		
		int hour = aTime->tm_hour;
		int min = aTime->tm_min;
		int sec = aTime->tm_sec;
		if (hour < 10)
		{
			if (min < 10 && sec < 10)
			{
				CurrentTime->Text ="0"+ hour.ToString() + ":0" + min.ToString() + ":0" + sec.ToString();
			}
			else
			{
				if (min < 10)
					CurrentTime->Text ="0"+ hour.ToString() + ":0" + min.ToString() + ":" + sec.ToString();
				else
				{
					if (sec < 10)
						CurrentTime->Text ="0"+ hour.ToString() + ":" + min.ToString() + ":0" + sec.ToString();
					else
						CurrentTime->Text ="0"+ hour.ToString() + ":" + min.ToString() + ":" + sec.ToString();
				}
			}
		}
		else
		{
			if (min < 10 && sec < 10)
			{
				CurrentTime->Text = hour.ToString() + ":0" + min.ToString() + ":0" + sec.ToString();
			}
			else
			{
				if (min < 10)
					CurrentTime->Text = hour.ToString() + ":0" + min.ToString() + ":" + sec.ToString();
				else
				{
					if (sec < 10)
						CurrentTime->Text = hour.ToString() + ":" + min.ToString() + ":0" + sec.ToString();
					else
						CurrentTime->Text = hour.ToString() + ":" + min.ToString() + ":" + sec.ToString();
				}
			}
		}
		if (hour == h && min == m && alarm == 1)
		{
			timer3->Enabled = true;
		}
		
			
			
		
	}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
public: int ss=0,mm=0,hh=0;
public: int s = 0, m = 0, h = 0, alarm = 0;
public: Void Clear()
{
	panel->Visible = true;
	Chrono->Visible = false;
	ChronoStartB->Visible = false;
	ChronoStopB->Visible = false;
	ChronoResetB->Visible = false;
	HourSetB->Visible = false;
	SecondSetB->Visible = false;
	SetAlarmB->Visible = false;
	AlarmText->Visible = false;
}
private: System::Void ChronometerB_Click(System::Object^ sender, System::EventArgs^ e) {
	AlarmB->Enabled = true;
	ChronometerB->Enabled = false;
	Clear();
	Chrono->Visible = true;
	if (hh < 10)
	{
		if (mm < 10 && ss < 10)
			Chrono->Text = "0" + hh.ToString() + ":0" + mm.ToString() + ":0" + ss.ToString();
		else
		{
			if (mm < 10)
				Chrono->Text = "0" + hh.ToString() + ":0" + mm.ToString() + ":" + ss.ToString();
			else
			{
				if (ss < 10)
					Chrono->Text = "0" + hh.ToString() + ":" + mm.ToString() + ":0" + ss.ToString();
				else
					Chrono->Text = "0" + hh.ToString() + ":" + mm.ToString() + ":" + ss.ToString();
			}
		}
	}
	else
	{
		if (mm < 10 && ss < 10)
			Chrono->Text = hh.ToString() + ":0" + mm.ToString() + ":0" + ss.ToString();
		else
		{
			if (mm < 10)
				Chrono->Text = hh.ToString() + ":0" + mm.ToString() + ":" + ss.ToString();
			else
			{
				if (ss < 10)
					Chrono->Text = hh.ToString() + ":" + mm.ToString() + ":0" + ss.ToString();
				else
					Chrono->Text = hh.ToString() + ":" + mm.ToString() + ":" + ss.ToString();
			}
		}
	}
	ChronoStartB->Visible = true;
	ChronoStopB->Visible = true;
	ChronoResetB->Visible = true;
}
private: System::Void AlarmB_Click(System::Object^ sender, System::EventArgs^ e) {
	AlarmB->Enabled = false;
	ChronometerB->Enabled = true;
	Clear();
	HourSetB->Visible = true;
	SecondSetB->Visible = true;
	SetAlarmB->Visible = true;
	AlarmText->Visible = true;
}

private: System::Void Chrono_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ChronoStartB_Click(System::Object^ sender, System::EventArgs^ e) {
	ChronoStartB->Enabled = false;
	ChronoStopB->Enabled = true;
	ChronoResetB->Enabled = true;
	timer2->Enabled = true;
}
private: System::Void ChronoStopB_Click(System::Object^ sender, System::EventArgs^ e) {
	ChronoStartB->Enabled = true;
	ChronoStopB->Enabled = false;
	ChronoResetB->Enabled = true;
	timer2->Enabled = false;
}
private: System::Void ChronoResetB_Click(System::Object^ sender, System::EventArgs^ e) {
	ChronoStartB->Enabled = true;
	ChronoStopB->Enabled = true;
	ChronoResetB->Enabled = false;
	timer2->Enabled = false;
	hh = 0;
	mm = 0;
	ss = 0;
	Chrono->Text = "00:00:00";
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	ss++;
	if (ss > 59)
	{
		mm++;
		ss = 0;
	}
		
	if (mm > 59)
	{
		hh++;
		mm = 0;
	}
		
	if (hh < 10)
	{
		if(mm<10 && ss<10)
			Chrono->Text = "0" + hh.ToString() + ":0" + mm.ToString() + ":0" + ss.ToString();
		else
		{
			if (mm < 10)
				Chrono->Text = "0" + hh.ToString() + ":0" + mm.ToString() + ":" + ss.ToString();
			else
			{
				if(ss<10)
					Chrono->Text = "0" + hh.ToString() + ":" + mm.ToString() + ":0" + ss.ToString();
				else
					Chrono->Text = "0" + hh.ToString() + ":" + mm.ToString() + ":" + ss.ToString();
			}
		}
	}
	else
	{
		if (mm < 10 && ss < 10)
			Chrono->Text =hh.ToString() + ":0" + mm.ToString() + ":0" + ss.ToString();
		else
		{
			if (mm < 10)
				Chrono->Text =hh.ToString() + ":0" + mm.ToString() + ":" + ss.ToString();
			else
			{
				if (ss < 10)
					Chrono->Text =hh.ToString() + ":" + mm.ToString() + ":0" + ss.ToString();
				else
					Chrono->Text =hh.ToString() + ":" + mm.ToString() + ":" + ss.ToString();
			}
		}
	}
}
private: System::Void SetAlarmB_Click(System::Object^ sender, System::EventArgs^ e) {
	SetAlarmB->Enabled = false;
	HourSetB->Enabled = false;
	SecondSetB->Enabled = false;
	h = (int)(HourSetB->Value);
	m = (int)(SecondSetB->Value);
	alarm = 1;
	if (h < 10 && m<10)
	{
		AlarmText->Text = "Alarm set for 0" + h + ":0" + m;
	}
	else
	{
		if(h<10)
			AlarmText->Text = "Alarm set for 0" + h + ":" + m;
		else
		{
			if(m<10)
				AlarmText->Text = "Alarm set for " + h + ":0" + m;
			else
				AlarmText->Text = "Alarm set for " + h + ":" + m;
		}
	}

}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	
		PlaySound(TEXT("Alarm.wav"), NULL, SND_FILENAME | SND_ASYNC);
		if (alarm == 1)
		{
			timer3->Enabled = false;
			alarm = 0;
			SetAlarmB->Enabled = true;
			HourSetB->Enabled = true;
			SecondSetB->Enabled = true;
			AlarmText->Text = "";
		}
		
}
};
}
