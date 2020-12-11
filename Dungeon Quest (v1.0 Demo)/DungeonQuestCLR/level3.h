#pragma once
#include <cstdlib>
#include <stdio.h> 
#include <stdlib.h> 
#include <ctime>
#include <fstream>
#include <iostream>
#include "GlobalClass.h"
#include "level4.h"

namespace DungeonQuestCLR {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� level3
	/// </summary>
	public ref class level3 : public System::Windows::Forms::Form
	{
	public:
		level3(void)
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
		~level3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ choice1;
	private: System::Windows::Forms::Button^ choice2;
	private: System::Windows::Forms::Button^ choice3;
	private: System::Windows::Forms::Button^ choice4;
	private: System::Windows::Forms::Button^ helpButton;
	private: System::Windows::Forms::Button^ gameExit;
	private: System::Windows::Forms::Label^ textWindow1;
	private: System::Windows::Forms::Label^ locationName1;
	private: System::Windows::Forms::Button^ answer1;
	private: System::Windows::Forms::Button^ answer2;
	private: System::Windows::Forms::Button^ answer3;
	private: System::Windows::Forms::Button^ answer4;
	private: System::Windows::Forms::Button^ choice5;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(level3::typeid));
			this->choice1 = (gcnew System::Windows::Forms::Button());
			this->choice2 = (gcnew System::Windows::Forms::Button());
			this->choice3 = (gcnew System::Windows::Forms::Button());
			this->choice4 = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->gameExit = (gcnew System::Windows::Forms::Button());
			this->textWindow1 = (gcnew System::Windows::Forms::Label());
			this->locationName1 = (gcnew System::Windows::Forms::Label());
			this->answer1 = (gcnew System::Windows::Forms::Button());
			this->answer2 = (gcnew System::Windows::Forms::Button());
			this->answer3 = (gcnew System::Windows::Forms::Button());
			this->answer4 = (gcnew System::Windows::Forms::Button());
			this->choice5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// choice1
			// 
			this->choice1->Location = System::Drawing::Point(31, 136);
			this->choice1->Name = L"choice1";
			this->choice1->Size = System::Drawing::Size(123, 27);
			this->choice1->TabIndex = 6;
			this->choice1->Text = L"�����������";
			this->choice1->UseVisualStyleBackColor = true;
			this->choice1->Click += gcnew System::EventHandler(this, &level3::choice1_Click);
			// 
			// choice2
			// 
			this->choice2->Location = System::Drawing::Point(31, 183);
			this->choice2->Name = L"choice2";
			this->choice2->Size = System::Drawing::Size(123, 41);
			this->choice2->TabIndex = 7;
			this->choice2->Text = L"���������� �� ������";
			this->choice2->UseVisualStyleBackColor = true;
			this->choice2->Click += gcnew System::EventHandler(this, &level3::choice2_Click);
			// 
			// choice3
			// 
			this->choice3->Location = System::Drawing::Point(31, 242);
			this->choice3->Name = L"choice3";
			this->choice3->Size = System::Drawing::Size(123, 27);
			this->choice3->TabIndex = 8;
			this->choice3->Text = L"������ �� �������";
			this->choice3->UseVisualStyleBackColor = true;
			this->choice3->Click += gcnew System::EventHandler(this, &level3::choice3_Click);
			// 
			// choice4
			// 
			this->choice4->Location = System::Drawing::Point(31, 290);
			this->choice4->Name = L"choice4";
			this->choice4->Size = System::Drawing::Size(123, 27);
			this->choice4->TabIndex = 9;
			this->choice4->Text = L"�������� �������";
			this->choice4->UseVisualStyleBackColor = true;
			this->choice4->Click += gcnew System::EventHandler(this, &level3::choice4_Click);
			// 
			// helpButton
			// 
			this->helpButton->Location = System::Drawing::Point(16, 430);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(75, 23);
			this->helpButton->TabIndex = 11;
			this->helpButton->Text = L"������";
			this->helpButton->UseVisualStyleBackColor = true;
			this->helpButton->Click += gcnew System::EventHandler(this, &level3::helpButton_Click);
			// 
			// gameExit
			// 
			this->gameExit->Location = System::Drawing::Point(610, 430);
			this->gameExit->Name = L"gameExit";
			this->gameExit->Size = System::Drawing::Size(75, 23);
			this->gameExit->TabIndex = 12;
			this->gameExit->Text = L"�����";
			this->gameExit->UseVisualStyleBackColor = true;
			this->gameExit->Click += gcnew System::EventHandler(this, &level3::gameExit_Click_1);
			// 
			// textWindow1
			// 
			this->textWindow1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textWindow1->Location = System::Drawing::Point(402, 9);
			this->textWindow1->Name = L"textWindow1";
			this->textWindow1->Size = System::Drawing::Size(283, 337);
			this->textWindow1->TabIndex = 13;
			// 
			// locationName1
			// 
			this->locationName1->BackColor = System::Drawing::Color::Maroon;
			this->locationName1->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->locationName1->ForeColor = System::Drawing::Color::Gold;
			this->locationName1->Location = System::Drawing::Point(12, 9);
			this->locationName1->Name = L"locationName1";
			this->locationName1->Size = System::Drawing::Size(225, 48);
			this->locationName1->TabIndex = 14;
			this->locationName1->Text = L"������� 2. \r\n������� ������";
			// 
			// answer1
			// 
			this->answer1->Location = System::Drawing::Point(240, 129);
			this->answer1->Name = L"answer1";
			this->answer1->Size = System::Drawing::Size(123, 41);
			this->answer1->TabIndex = 15;
			this->answer1->Text = L"\"��� �\? ��� ��� �� �����\?\"";
			this->answer1->UseVisualStyleBackColor = true;
			this->answer1->Click += gcnew System::EventHandler(this, &level3::answer1_Click);
			// 
			// answer2
			// 
			this->answer2->Location = System::Drawing::Point(240, 183);
			this->answer2->Name = L"answer2";
			this->answer2->Size = System::Drawing::Size(123, 41);
			this->answer2->TabIndex = 16;
			this->answer2->Text = L"\"� �� ��� ��� �� �����\?\"";
			this->answer2->UseVisualStyleBackColor = true;
			this->answer2->Click += gcnew System::EventHandler(this, &level3::answer2_Click);
			// 
			// answer3
			// 
			this->answer3->Location = System::Drawing::Point(240, 237);
			this->answer3->Name = L"answer3";
			this->answer3->Size = System::Drawing::Size(123, 71);
			this->answer3->TabIndex = 17;
			this->answer3->Text = L"\"��� ��� ��� � ����������\?\r\n�� ���� �� ���� ����...\"";
			this->answer3->UseVisualStyleBackColor = true;
			this->answer3->Click += gcnew System::EventHandler(this, &level3::answer3_Click);
			// 
			// answer4
			// 
			this->answer4->Location = System::Drawing::Point(240, 325);
			this->answer4->Name = L"answer4";
			this->answer4->Size = System::Drawing::Size(123, 52);
			this->answer4->TabIndex = 18;
			this->answer4->Text = L"\"��� ��� ��������� ������\?\"";
			this->answer4->UseVisualStyleBackColor = true;
			this->answer4->Click += gcnew System::EventHandler(this, &level3::answer4_Click);
			// 
			// choice5
			// 
			this->choice5->Location = System::Drawing::Point(31, 332);
			this->choice5->Name = L"choice5";
			this->choice5->Size = System::Drawing::Size(123, 45);
			this->choice5->TabIndex = 19;
			this->choice5->Text = L"����� �� ������� � �������";
			this->choice5->UseVisualStyleBackColor = true;
			this->choice5->Click += gcnew System::EventHandler(this, &level3::choice5_Click);
			// 
			// level3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->choice5);
			this->Controls->Add(this->answer4);
			this->Controls->Add(this->answer3);
			this->Controls->Add(this->answer2);
			this->Controls->Add(this->answer1);
			this->Controls->Add(this->locationName1);
			this->Controls->Add(this->textWindow1);
			this->Controls->Add(this->gameExit);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->choice4);
			this->Controls->Add(this->choice3);
			this->Controls->Add(this->choice2);
			this->Controls->Add(this->choice1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"level3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Quest (v1.0 Demo)";
			this->Load += gcnew System::EventHandler(this, &level3::level3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
int strength = 10, luck = 10, dex = 5;
String^ powerStone = "������ ����";
String^ rabbitFoot = "�������� �����";
String^ dexRing = "���������� ������ �������������� ������������";
int answerCount = 4;
int playerAnswer;
int isChestOpened;
int choice5Open;
int answerCount2;
int choice3Open;
private: System::Void level3_Load(System::Object^ sender, System::EventArgs^ e)
	{
	choice3->Visible = 0;
	choice4->Visible = 0;
	choice2->Visible = 0;
	choice5->Visible = 0;
	System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("Music//Calmness.wav");
	simpleSound->Play();
	answer1->Visible = 0;
	answer2->Visible = 0;
	answer3->Visible = 0;
	answer4->Visible = 0;
	answer1->Enabled = 0;
	answer2->Enabled = 0;
	answer3->Enabled = 0;
	answer4->Enabled = 0;
	textWindow1->Text = "<Dungeon Quest Helper>: LEVEL UP" "\n" \
		"���� ������ ���� � ����� ��������� �� 5 ������!";
	}
private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("����������� ��� ����������� ������ �����.", "<Dungeon Quest Guide>", MessageBoxButtons::OK);
		level3::Show();
	}
private: System::Void gameExit_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("�� ������ ������� ��������� � �����?", "�������?", MessageBoxButtons::YesNo);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
	else level3::Show();
	}

private: System::Void choice1_Click(System::Object^ sender, System::EventArgs^ e)
{
	choice3Open++;
	answerCount2++;
	choice5Open++;
	textWindow1->Text = "����� �� ����������, �� ������ � ��������� ��� � ����� ������������ ������, ������ � ��������. �� ������ �� ���� ���� ����������, �� ������, ��� " "\n" \
		"������ � ������� ������, ���� ����� ����� ���� ����� ������� ����� � ���������, �������� ������� �� ���, ������." "\n" \
		"������ ������ ���������, �� �������� ��������, ��������� �������� �� ���� ������. �� ��� ���� �� ��������, ��� ��� ������� �����, ���� ���� �� ��� ���� �� ������." "\n" \
		"�� �� �������� � ��� ������� ��������� �������� �, �������, ��� ��������� �������, ����� �� ���.";
	choice2->Visible = 1;
	choice1->Enabled = 0;
	if (choice5Open >= 4)
	{
		choice5->Visible = 1;
		choice5->Enabled = 1;
	}
	if (answerCount2 >= 4)
	{
		choice1->Enabled = 0;
		choice2->Enabled = 0;
		choice3->Enabled = 0;
		choice4->Enabled = 0;
	}
	choice1->Enabled = 0;
}
public: System::Void choice2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	choice3Open++;
	answerCount2++;
	choice5Open++;
	using namespace Globals;
	choice1->Enabled = 0;
	choice2->Enabled = 0;
	choice3->Enabled = 0;
	choice4->Enabled = 0;
	choice5->Enabled = 0;
	answer1->Visible = 1;
	answer2->Visible = 1;
	answer3->Visible = 1;
	answer4->Visible = 1;
	answer1->Enabled = 1;
	answer2->Enabled = 1;
	answer3->Enabled = 1;
	answer4->Enabled = 1;
	if (choice5Open >= 8)
	{
		choice5->Visible = 1;
		choice5->Enabled = 1;
	}
	textWindow1->Text = "\"������� ���, " + GlobalClass::playerName + ". �����������, ��� � ���� ���� ������� �� ���. �������, �� ���������, ���������� �� �� ��������\" - ��������� ������� ������ �����" "\n" \
		"� ������ �� ������ �� ���?" "\n" \
		"� ��� ���� ������� � ������ ����, ����� ���?" "\n" \
		"�� ������� ���, ��� ������ � ��� ������� �����, ���� ��, ������ ������, ������� �� ����� ��� �� �� �� ����� ���� ���...";
	if (answerCount2 >= 4)
	{
		choice1->Enabled = 0;
		choice2->Enabled = 0;
		choice3->Enabled = 0;
		choice4->Enabled = 0;
	}
}
private: System::Void answer1_Click(System::Object^ sender, System::EventArgs^ e)
{
	choice3Open++;
	choice5Open++;
	playerAnswer++;
	textWindow1->Text = "\"� � ��� ������ �� ����� ��������� ����� ��� ��. ���� ������ ��� ������� ����� ����� ����������� ����� ���������� ����� ���." "\n" \
		"�������� � ���� ��� ����� ��������...��..���..�, ����� - ����� �������, �������� ��������.\"";
	answer1->Enabled = 0;
	if (playerAnswer == answerCount)
	{
		choice1->Enabled = 0;
		choice3->Enabled = 1;
		choice4->Enabled = 1;
		answer1->Enabled = 0;
		answer2->Enabled = 0;
		answer3->Enabled = 0;
		answer4->Enabled = 0;
		if (isChestOpened > 1)
		{
			choice4->Enabled = 0;
		}
		if (choice5Open >= 8)
		{
			choice5->Visible = 1;
			choice5->Enabled = 1;
			choice1->Enabled = 0;
			choice3->Enabled = 0;
			choice4->Enabled = 0;
		}
		if (choice3Open >= 6)
		{
			choice3->Visible = 1;
		}
	}
}
private: System::Void answer2_Click(System::Object^ sender, System::EventArgs^ e)
{
	choice3Open++;
	choice5Open++;
	playerAnswer++;
	textWindow1->Text = "\"������� ��� � ����� �������, � ������������ �� ������. ��, ������ �� ���, ��� �� ���� ��������.\"";
	answer2->Enabled = 0;
	if (playerAnswer == answerCount)
	{
		choice1->Enabled = 0;
		choice3->Enabled = 1;
		choice4->Enabled = 1;
		answer1->Enabled = 0;
		answer2->Enabled = 0;
		answer3->Enabled = 0;
		answer4->Enabled = 0;
		if (isChestOpened > 1)
		{
			choice4->Enabled = 0;
		}
		if (choice5Open >= 8)
		{
			choice5->Visible = 1;
			choice5->Enabled = 1;
			choice1->Enabled = 0;
			choice3->Enabled = 0;
			choice4->Enabled = 0;
		}
		if (choice3Open >= 6)
		{
			choice3->Visible = 1;
		}
	}
}
private: System::Void answer3_Click(System::Object^ sender, System::EventArgs^ e)
{
	choice3Open++;
	choice5Open++;
	playerAnswer++;
	textWindow1->Text = "\"���...��� �� ������ �������, ���...���...��� ���-�� �������, ��� ������ �������. ��� ����� ������ ������� - ������������ � ������ ���� ����� �����." "\n" \
		"�� �����, ��� �� ������� ������. �� ����� �� � ��� �� ��������, �� ��� ��������� � �� ��� ����� ���� ������ ������ ��������� ��� ������ � ����� � ����������� � �����. ���� ������\"";
	answer3->Enabled = 0;
	if (playerAnswer == answerCount)
	{
		choice1->Enabled = 0;
		choice3->Enabled = 1;
		choice4->Enabled = 1;
		answer1->Enabled = 0;
		answer2->Enabled = 0;
		answer3->Enabled = 0;
		answer4->Enabled = 0;
		if (isChestOpened > 1)
		{
			choice4->Enabled = 0;
		}
		if (choice5Open >= 8)
		{
			choice5->Visible = 1;
			choice5->Enabled = 1;
			choice1->Enabled = 0;
			choice3->Enabled = 0;
			choice4->Enabled = 0;
		}
		if (choice3Open >= 6)
		{
			choice3->Visible = 1;
		}
	}
}
private: System::Void answer4_Click(System::Object^ sender, System::EventArgs^ e)
{
	choice3Open++;
	choice5Open++;
	playerAnswer++;
	textWindow1->Text = "\"����� �� ����� ������� ������ ����. ���� ����� ����� ������� � ������� ���, ��� ���� �������� �����, ������� � ����� ����� � ������ �� �������." "\n" \
		"� ���������, ��� ��������� ����� ���� ��������� �� ������� �����, � ���������� �� ����� ��������� �����...\"" "\n" \
		"� � ��� ��������� ������, ��� ���� ����� ��� ������� ���� �����? ��� ���� ������?" "\n" \
		"� � ���� � ����, ��� ��� ��� �������� �������� � ��� ����, ���� ����� ��������. ������ �����, ���� � �����-�� �������������, ������� ���� �������� � �����������..." "\n" \
		"� ������������?" "\n" \
		"� ��, �����-�� ������������, �� ������ - ����� �� ���� � ���, � ���������� �������� ��������� ������, ���� ���� �� ������� ����." "\n" \
		"� � ��� � ���� ������ �����?" "\n" \
		"� �� ������ ��� �����??? ��� ������������ �� ���� �����, � ������� �� ����." "\n" \
		"� �����-���?" "\n" \
		"� �� �����. ����� ����� � ������, ����?" "\n" \
		"� �����..." "\n" \
		"� ��� ��������� ����������� �������, ������ � ������� ����, ������ �����������." "\n" \
		"� ������, � �����. �������, �������.";
	answer4->Enabled = 0;
	if (playerAnswer == answerCount)
	{
		choice1->Enabled = 0;
		choice3->Enabled = 1;
		choice4->Enabled = 1;
		answer1->Enabled = 0;
		answer2->Enabled = 0;
		answer3->Enabled = 0;
		answer4->Enabled = 0;
		if (isChestOpened > 1)
		{
			choice4->Enabled = 0;
		}
		if (answerCount2 >= 8)
		{
			choice1->Enabled = 0;
			choice2->Enabled = 0;
			choice3->Enabled = 0;
			choice4->Enabled = 0;
		}
		if (choice5Open >= 8)
		{
			choice5->Visible = 1;
			choice5->Enabled = 1;
			choice1->Enabled = 0;
			choice3->Enabled = 0;
			choice4->Enabled = 0;
		}
		if (choice3Open >= 6)
		{
			choice3->Visible = 1;
		}
	}
}
private: System::Void choice3_Click(System::Object^ sender, System::EventArgs^ e)
{
	answerCount2++;
	choice5Open++;
	textWindow1->Text = "�� ������ ��������� ������� ������� � ��������� � ������� ��������� ������� ������." "\n" \
		"������ ������� � �������, �� �������� ������, ��������� �������� � �����������. �� ����� ������ ������ �����������, �� ������� � �������, ����� ��� ������ ������.";
	
	choice4->Visible = 1;
	if (isChestOpened > 1)
	{
		choice4->Enabled = 0;
	}
	if (choice5Open >= 8)
	{
		choice5->Visible = 1;
		choice5->Enabled = 1;
	}
	choice3->Enabled = 0;
	if (answerCount2 >= 4)
	{
		choice1->Enabled = 0;
		choice2->Enabled = 0;
		choice3->Enabled = 0;
		choice4->Enabled = 0;
	}
}
private: System::Void choice4_Click(System::Object^ sender, System::EventArgs^ e)
{
	using namespace Globals;
	answerCount2++;
	choice5Open++;
	srand(time(0));
	int lootChance = luck + rand() % 50 + 1;
	int itemLevelUpChance = rand() % 10 + 1;
	if (lootChance > 30 && lootChance <= 40)
	{
		textWindow1->Text = "������ ������, �� ����� � ��� " + powerStone;
		strength = strength + itemLevelUpChance;
		textWindow1->Text += "\n������� ���� ���������� �� " + itemLevelUpChance + " �����";
		isChestOpened++;
		choice4->Enabled = 0;
		FileStream^ skillFile = gcnew FileStream("skills.txt", FileMode::Create, FileAccess::Write);
		StreamWriter^ sw = gcnew StreamWriter(skillFile);
		sw->WriteLine(strength + " " + luck + " " + dex + " ");
		sw->Close();
		skillFile->Close();
	
	}
	if (lootChance > 40 && lootChance <= 50)
	{
		textWindow1->Text = "������ ������, �� ����� � ��� " + rabbitFoot;
		luck = luck + itemLevelUpChance;
		textWindow1->Text += "\n������� ����� ���������� �� " + itemLevelUpChance + " �����";
		isChestOpened++;
		choice4->Enabled = 0;
		FileStream^ skillFile = gcnew FileStream("skills.txt", FileMode::Create, FileAccess::Write);
		StreamWriter^ sw = gcnew StreamWriter(skillFile);
		sw->WriteLine(strength + " " + luck + " " + dex + " ");
		sw->Close();
		skillFile->Close();
	}
	if (lootChance > 50 && lootChance < 60)
	{
		textWindow1->Text = "������ ������, �� ����� � ��� " + dexRing;
		dex = dex + itemLevelUpChance;
		textWindow1->Text += "\n������� ������������ ���������� �� " + itemLevelUpChance + " �����";
		isChestOpened++;
		choice4->Enabled = 0;
		FileStream^ skillFile = gcnew FileStream("skills.txt", FileMode::Create, FileAccess::Write);
		StreamWriter^ sw = gcnew StreamWriter(skillFile);
		sw->WriteLine(strength + " " + luck + " " + dex + " ");
		sw->Close();
		skillFile->Close();
	}
	if (lootChance <= 30)
	{
		textWindow1->Text = "������ �������� ����.";
		isChestOpened++;
		choice4->Enabled = 0;
	}
	if (choice5Open >= 8)
	{
		choice5->Visible = 1; 
		choice5->Enabled = 1;
	}
	if (answerCount2 >= 4)
	{
		choice1->Enabled = 0;
		choice2->Enabled = 0;
		choice3->Enabled = 0;
		choice4->Enabled = 0;
	}
}
private: System::Void choice5_Click(System::Object^ sender, System::EventArgs^ e)
{
	level4 ^ dungeon4 = gcnew level4();
	dungeon4->Show();
	this->Hide();
}
};
}
