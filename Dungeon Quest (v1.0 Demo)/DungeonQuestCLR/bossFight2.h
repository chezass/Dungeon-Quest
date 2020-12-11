#pragma once
#include <cstdlib>
#include <stdio.h> 
#include <stdlib.h> 
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
#include "GlobalClass.h"

namespace DungeonQuestCLR {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// ������ ��� bossFight2
	/// </summary>
	public ref class bossFight2 : public System::Windows::Forms::Form
	{
	public:
		bossFight2(void)
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
		~bossFight2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textWindow1;
	private: System::Windows::Forms::Button^ gameExit;
	private: System::Windows::Forms::Button^ helpButton;
	private: System::Windows::Forms::Label^ locationName1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ choice1;
	private: System::Windows::Forms::Button^ choice2;
	private: System::Windows::Forms::Button^ choice3;
	private: System::Windows::Forms::Button^ choice4;


	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(bossFight2::typeid));
			this->textWindow1 = (gcnew System::Windows::Forms::Label());
			this->gameExit = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->locationName1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->choice1 = (gcnew System::Windows::Forms::Button());
			this->choice2 = (gcnew System::Windows::Forms::Button());
			this->choice3 = (gcnew System::Windows::Forms::Button());
			this->choice4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textWindow1
			// 
			this->textWindow1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textWindow1->Location = System::Drawing::Point(402, 9);
			this->textWindow1->Name = L"textWindow1";
			this->textWindow1->Size = System::Drawing::Size(283, 337);
			this->textWindow1->TabIndex = 3;
			// 
			// gameExit
			// 
			this->gameExit->Location = System::Drawing::Point(610, 430);
			this->gameExit->Name = L"gameExit";
			this->gameExit->Size = System::Drawing::Size(75, 23);
			this->gameExit->TabIndex = 4;
			this->gameExit->Text = L"�����";
			this->gameExit->UseVisualStyleBackColor = true;
			this->gameExit->Click += gcnew System::EventHandler(this, &bossFight2::gameExit_Click);
			// 
			// helpButton
			// 
			this->helpButton->Location = System::Drawing::Point(12, 430);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(75, 23);
			this->helpButton->TabIndex = 5;
			this->helpButton->Text = L"������";
			this->helpButton->UseVisualStyleBackColor = true;
			this->helpButton->Click += gcnew System::EventHandler(this, &bossFight2::helpButton_Click);
			// 
			// locationName1
			// 
			this->locationName1->BackColor = System::Drawing::Color::Maroon;
			this->locationName1->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->locationName1->ForeColor = System::Drawing::Color::Gold;
			this->locationName1->Location = System::Drawing::Point(12, 9);
			this->locationName1->Name = L"locationName1";
			this->locationName1->Size = System::Drawing::Size(195, 48);
			this->locationName1->TabIndex = 6;
			this->locationName1->Text = L"������� 2.2.\r\n������� ���\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(174, 115);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(222, 231);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// choice1
			// 
			this->choice1->Location = System::Drawing::Point(31, 136);
			this->choice1->Name = L"choice1";
			this->choice1->Size = System::Drawing::Size(123, 27);
			this->choice1->TabIndex = 8;
			this->choice1->Text = L"������ ���� �����";
			this->choice1->UseVisualStyleBackColor = true;
			this->choice1->Click += gcnew System::EventHandler(this, &bossFight2::choice1_Click);
			// 
			// choice2
			// 
			this->choice2->Location = System::Drawing::Point(31, 183);
			this->choice2->Name = L"choice2";
			this->choice2->Size = System::Drawing::Size(123, 41);
			this->choice2->TabIndex = 9;
			this->choice2->Text = L"������� ���� �����";
			this->choice2->UseVisualStyleBackColor = true;
			this->choice2->Click += gcnew System::EventHandler(this, &bossFight2::choice2_Click);
			// 
			// choice3
			// 
			this->choice3->Location = System::Drawing::Point(31, 242);
			this->choice3->Name = L"choice3";
			this->choice3->Size = System::Drawing::Size(123, 42);
			this->choice3->TabIndex = 10;
			this->choice3->Text = L"���������� � �������";
			this->choice3->UseVisualStyleBackColor = true;
			this->choice3->Click += gcnew System::EventHandler(this, &bossFight2::choice3_Click);
			// 
			// choice4
			// 
			this->choice4->Location = System::Drawing::Point(31, 303);
			this->choice4->Name = L"choice4";
			this->choice4->Size = System::Drawing::Size(123, 27);
			this->choice4->TabIndex = 11;
			this->choice4->Text = L"�������";
			this->choice4->UseVisualStyleBackColor = true;
			this->choice4->Click += gcnew System::EventHandler(this, &bossFight2::choice4_Click);
			// 
			// bossFight2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->choice4);
			this->Controls->Add(this->choice3);
			this->Controls->Add(this->choice2);
			this->Controls->Add(this->choice1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->locationName1);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->gameExit);
			this->Controls->Add(this->textWindow1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"bossFight2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Quest (v1.0 Demo)";
			this->Load += gcnew System::EventHandler(this, &bossFight2::bossFight2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int playerHealth = 300, bossHealth = 5000;
		int strength, luck, dex;
		int healCount, countNoHeal, countNoDodge, dodgeCount, deathCount;
		int maxHealCount = 10;
		int maxDodgeCount = 2;
		int maxDeathCount = 5;
	private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(" " "\n" \
			" " "\n" \
			"		    \"��� �� ������� � �������\" " "\n" \
			" " "\n" \
			" " "\n" \
			" " "\n" \
			" " "\n" \
			" " "\n" \
			"				     �������� � �������� 8:24", "<Dungeon Quest Guide>", MessageBoxButtons::OK);
		bossFight2::Show();
	}
	private: System::Void gameExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("�� ������ ������� ��������� � �����?", "�������?", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else bossFight2::Show();
	}
	private: System::Void choice1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		countNoHeal++;
		if (countNoHeal >= 3)
		{
			countNoHeal = 0;
			healCount = 0;
			choice4->Enabled = 1;
		}
		countNoDodge++;
		if (countNoDodge >= 5)
		{
			countNoDodge = 0;
			dodgeCount = 0;
			choice3->Enabled = 1;
		}
		textWindow1->Text = " ";
		srand(time(0));
		int bossHealChance = rand() % 10 + 1;
		int bossDamage1 = rand() % 70 + 1;
		int momentalDamage1 = rand() % 10 + 1;
		String^ skillFile = "skills.txt";
		StreamReader^ sr = File::OpenText(skillFile);
		String^ fileString;
		String^ fileString2;
		while ((fileString = sr->ReadLine()) != nullptr)
		{
			fileString2 = fileString;
		}
		int i = 0;
		array<String^>^ skillsLevel;
		skillsLevel = fileString2->Split(' ');
		while ((fileString2 = sr->ReadLine()) != nullptr)
		{
			for (int skillNum = 0; skillNum < skillsLevel->Length; skillNum++)
			{
				i++;
				if (i = 3)
				{
					break;
				}
			}
		}
		strength = Int32::Parse(skillsLevel[0]);
		luck = Int32::Parse(skillsLevel[1]);
		dex = Int32::Parse(skillsLevel[2]);
		int playerDamage1 = (momentalDamage1)+(momentalDamage1 / strength);
		bossHealth = bossHealth - playerDamage1;
		playerHealth = playerHealth - bossDamage1;
		textWindow1->Text = "�� ������� ������� ���� �����, ������ " + playerDamage1 + " ������ �����." "\n" \
				"�������� �����: " + bossHealth + " HP" "\n" \
				"� ����� ���� ���������� ���������� ����� �����, ������ " + bossDamage1 + " ������ �����." "\n" \
				"���� ��������: " + playerHealth + " HP";
			if (bossHealChance == 40)
			{
				int bossHeal = rand() % 100 + 1;
				textWindow1->Text += "\n"  "���� ������� ���������� ���������, �������������� ���� " + bossHeal + " ����� ��������.";
				if (bossHeal == 500)
				{
					textWindow1->Text += "\n"  "<Dungeon Quest Helper>: \"���� ������ ��� ����������� ���� 500 ������ ��������! ������ ���������!\"";
				}
				bossHealth = bossHealth + bossHeal;
				if (bossHealth > 5000)
				{
					bossHealth = 5000;
				}
				textWindow1->Text += "\n" "�������� �����: " + bossHealth + " HP";
			}
			if (playerHealth <= 0)
			{
				deathCount++;
				System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("\"�������, ��� ������ ���� ��������. ���� ���� ������� �����...\"" "\n" \
					"������ ������?", "�� �������...", MessageBoxButtons::OK);
				bossFight2::Show();
				bossFight2::RecreateHandle();
				using namespace Globals;
				textWindow1->Text = "���� ����� �� ������� ���. ����� ����� ���� ��������� ����, �� ������� �� ������� ��� - �������� ����� - ��� ����� �������� ����������� ���, ��� ������� ���� ����� " "\n" \
					"� � ���� ����, " + GlobalClass::playerName + ". � ���� ��� �������������� � �������� ��� ������� ������� ������, �� � �� ��� ���� ����� �����������." "\n" \
					"���� ����� ������ ����� �������, � � ���� ����� �����������...";
				playerHealth = 300;
				bossHealth = 5000;
				choice3->Enabled = 1;
			}
			if (deathCount == maxDeathCount)
			{
				System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("\"� ���� ������� ��� �� ��������. ����-������ ���� ������� � �����. ������ ���������� �������� �������� �������� �����?\"" , "�� �������...", MessageBoxButtons::YesNo);
				if (dialogResult == System::Windows::Forms::DialogResult::No)
				{
					Application::Exit();
				}
				else bossFight2::Show();
				bossFight2::RecreateHandle();
				using namespace Globals;
				textWindow1->Text = "���� ����� �� ������� ���. ����� ����� ���� ��������� ����, �� ������� �� ������� ��� - �������� ����� - ��� ����� �������� ����������� ���, ��� ������� ���� ����� " "\n" \
					"� � ���� ����, " + GlobalClass::playerName + ". � ���� ��� �������������� � �������� ��� ������� ������� ������, �� � �� ��� ���� ����� �����������." "\n" \
					"���� ����� ������ ����� �������, � � ���� ����� �����������...";
				playerHealth = 300;
				bossHealth = 5000;
				choice3->Enabled = 1;
				deathCount = 0;
			}
	}
private: System::Void choice2_Click(System::Object^ sender, System::EventArgs^ e)
{
	countNoHeal++;
	if (countNoHeal >= 3)
	{
		countNoHeal = 0;
		healCount = 0;
		choice4->Enabled = 1;
	}
	if (countNoDodge >= 5)
	{
		countNoDodge = 0;
		dodgeCount = 0;
		choice3->Enabled = 1;
	}
	textWindow1->Text = " ";
	int bossHealChance = rand() % 10 + 1;
	int bossDamage2 = rand() % 150 + 1;
	int momentalDamage2 = rand() % 100 + 1;
	String^ skillFile = "skills.txt";
	StreamReader^ sr = File::OpenText(skillFile);
	String^ fileString;
	String^ fileString2;
	while ((fileString = sr->ReadLine()) != nullptr)
	{
		fileString2 = fileString;
	}
	int i = 0;
	array<String^>^ skillsLevel;
	skillsLevel = fileString2->Split(' ');
	while ((fileString2 = sr->ReadLine()) != nullptr)
	{
		for (int skillNum = 0; skillNum < skillsLevel->Length; skillNum++)
		{
			i++;
			if (i = 3)
			{
				break;
			}
		}
	}
	strength = Int32::Parse(skillsLevel[0]);
	luck = Int32::Parse(skillsLevel[1]);
	dex = Int32::Parse(skillsLevel[2]);
	srand(time(0));
	int playerDamage2 = (momentalDamage2)+(momentalDamage2 / strength);
	bossHealth = bossHealth - playerDamage2;
	playerHealth = playerHealth - bossDamage2;
	textWindow1->Text = "� �������� � ������, �� �� ���� ���� ����� ����� �������, ������ " + playerDamage2 + " ������ �����." "\n" \
		"�������� �����: " + bossHealth + " HP" "\n" \
		"���� � ������ ������� ����������� �������� �������, ������ �� ������ � ������ " + bossDamage2 + " ������ �����!" "\n" \
		"���� ��������: " + playerHealth + " HP";
	if (bossHealChance == 10)
	{
		int bossHeal = rand() % 500 + 1;
		bossHealth = bossHealth + bossHeal;
		textWindow1->Text += "\n" "���� ������� ���������� ���������, �������������� ���� " + bossHeal + " ����� ��������.";
		if (bossHeal == 500)
		{
			textWindow1->Text += "\n"  "<Dungeon Quest Helper>: \"���� ������ ��� ����������� ���� 100 ������ ��������! ������ ���������!\"";
		}
		if (bossHealth > 5000)
		{
			bossHealth = 5000;
		}
		textWindow1->Text += "\n" "�������� �����: " + bossHealth + " HP";
	}
	if (playerHealth <= 0)
	{
		deathCount++;
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("\"�������, ��� ������ ���� ��������. ���� ���� ������� �����...\"" "\n" \
			"������ ������?", "�� �������...", MessageBoxButtons::OK);
		bossFight2::Show();
		bossFight2::RecreateHandle();
		using namespace Globals;
		textWindow1->Text = "���� ����� �� ������� ���. ����� ����� ���� ��������� ����, �� ������� �� ������� ��� - �������� ����� - ��� ����� �������� ����������� ���, ��� ������� ���� ����� " "\n" \
			"� � ���� ����, " + GlobalClass::playerName + ". � ���� ��� �������������� � �������� ��� ������� ������� ������, �� � �� ��� ���� ����� �����������." "\n" \
			"���� ����� ������ ����� �������, � � ���� ����� �����������...";
		playerHealth = 300;
		bossHealth = 5000;
		choice3->Enabled = 1;
	}
	if (deathCount == maxDeathCount)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("\"� ���� ������� ��� �� ��������. ����-������ ���� ������� � �����. ������ ���������� �������� �������� �������� �����?\"", "�� �������...", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::No)
		{
			Application::Exit();
		}
		else bossFight2::Show();
		bossFight2::RecreateHandle();
		using namespace Globals;
		textWindow1->Text = "���� ����� �� ������� ���. ����� ����� ���� ��������� ����, �� ������� �� ������� ��� - �������� ����� - ��� ����� �������� ����������� ���, ��� ������� ���� ����� " "\n" \
			"� � ���� ����, " + GlobalClass::playerName + ". � ���� ��� �������������� � �������� ��� ������� ������� ������, �� � �� ��� ���� ����� �����������." "\n" \
			"���� ����� ������ ����� �������, � � ���� ����� �����������...";
		playerHealth = 300;
		bossHealth = 5000;
		choice3->Enabled = 1;
		deathCount = 0;
	}
}
private: System::Void choice3_Click(System::Object^ sender, System::EventArgs^ e)
{
	dodgeCount++;
	if (dodgeCount <= 2)
	{
		String^ skillFile = "skills.txt";
		StreamReader^ sr = File::OpenText(skillFile);
		String^ fileString;
		String^ fileString2;
		while ((fileString = sr->ReadLine()) != nullptr)
		{
			fileString2 = fileString;
		}
		int i = 0;
		array<String^>^ skillsLevel;
		skillsLevel = fileString2->Split(' ');
		while ((fileString2 = sr->ReadLine()) != nullptr)
		{
			for (int skillNum = 0; skillNum < skillsLevel->Length; skillNum++)
			{
				i++;
				if (i = 3)
				{
					break;
				}
			}
		}
		strength = Int32::Parse(skillsLevel[0]);
		luck = Int32::Parse(skillsLevel[1]);
		dex = Int32::Parse(skillsLevel[2]);
		int dodge = dex + rand() % 50 + 1;
		int spellSoulTake = rand() % 40 + 1;
		if (dodge > 40 && dodge <= 50)
		{
			textWindow1->Text = "�� �������������� �� ��������� ����� �����, �������� ������� � �������!";
		}
		if (dodge > 30 && dodge <= 40)
		{
			playerHealth = playerHealth - spellSoulTake;
			textWindow1->Text = "���� ���������� ���������� ���������� ����, �� �� ���� ������ ��������� �� �������. ��� ������, ������ " + spellSoulTake + " ������ �����." "\n" \
				"������� ���� �� �� ���� ������ �����, �� ��, ������ �����, �������" "\n" \
				"���� ��������: " + playerHealth + " HP";
		}
		if (dodge <= 30)
		{
			playerHealth = playerHealth - 60;
			textWindow1->Text = "���� ��������� �������� ���. � ���������, �� �� ����� ����������...."  "\n" \
				"���� ��������: " + playerHealth + " HP";
		}
	}
	else
	{
		choice3->Enabled = 0;
	}
	if (playerHealth <= 0)
	{
		deathCount++;
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("\"�������, ��� ������ ���� ��������. ���� ���� ������� �����...\"" "\n" \
			"������ ������?", "�� �������...", MessageBoxButtons::OK);
		bossFight2::Show();
		bossFight2::RecreateHandle();
		using namespace Globals;
		textWindow1->Text = "���� ����� �� ������� ���. ����� ����� ���� ��������� ����, �� ������� �� ������� ��� - �������� ����� - ��� ����� �������� ����������� ���, ��� ������� ���� ����� " "\n" \
			"� � ���� ����, " + GlobalClass::playerName + ". � ���� ��� �������������� � �������� ��� ������� ������� ������, �� � �� ��� ���� ����� �����������." "\n" \
			"���� ����� ������ ����� �������, � � ���� ����� �����������...";;
		playerHealth = 300;
		bossHealth = 5000;
		choice3->Enabled = 1;
	}
	if (deathCount == maxDeathCount)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("\"� ���� ������� ��� �� ��������. ����-������ ���� ������� � �����. ������ ���������� �������� �������� �������� �����?\"", "�� �������...", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::No)
		{
			Application::Exit();
		}
		else bossFight2::Show();
		bossFight2::RecreateHandle();
		using namespace Globals;
		textWindow1->Text = "���� ����� �� ������� ���. ����� ����� ���� ��������� ����, �� ������� �� ������� ��� - �������� ����� - ��� ����� �������� ����������� ���, ��� ������� ���� ����� " "\n" \
			"� � ���� ����, " + GlobalClass::playerName + ". � ���� ��� �������������� � �������� ��� ������� ������� ������, �� � �� ��� ���� ����� �����������." "\n" \
			"���� ����� ������ ����� �������, � � ���� ����� �����������...";
		playerHealth = 300;
		bossHealth = 5000;
		choice3->Enabled = 1;
		deathCount = 0;
	}
}
private: System::Void choice4_Click(System::Object^ sender, System::EventArgs^ e)
{
	healCount++;
	textWindow1->Text = " ";
	srand(time(0));
	int heal = rand() % 15 + 1;
	int bossHealChance = rand() % 10 + 1;
	textWindow1->Text = "�� ������� ��������� ���������, ������ �� ���� �� ����������." "\n" \
		"�� ��������� �������, ����������� " + heal + " ����� ��������.";
	playerHealth = playerHealth + heal;
	if (playerHealth > 300)
	{
		textWindow1->Text += "\n" "���� ���� ��������� ��� �������. ����� ��� �������������, ������ ����� 10 ������ �����." "\n" \
			"���� �������� ������������ �� ���������";
		bossHealth = bossHealth - 50;
		textWindow1->Text += "\n" "�������� �����: " + bossHealth + " HP";
		playerHealth = 300;
	}
	textWindow1->Text += "\n" "���� ��������: " + playerHealth + " HP";
	if (healCount >= maxHealCount)
	{
		textWindow1->Text += "\n" "�� �������� �������� ���� ��� �������, �� �������������, ��� � ��� ������ ��� ���...(������������ ���������� ��������� - 10)";
		choice4->Enabled = 0;

	}
	if (bossHealChance == 10)
	{
		int bossHeal = rand() % 500 + 1;
		textWindow1->Text += "\n" "���� ������� ���������� ���������, �������������� ���� " + bossHeal + " ����� ��������.";
		if (bossHeal == 500)
		{
			textWindow1->Text += "\n"  "<Dungeon Quest Helper>: \"���� ������ ��� ����������� ���� 500 ������ ��������! �������, ��� �� ��������...\"";
		}
		bossHealth = bossHealth + bossHeal;
		if (bossHealth > 5000)
		{
			bossHealth = 5000;
		}
		textWindow1->Text += "\n" "�������� �����: " + bossHealth + " HP";
	}
}
private: System::Void bossFight2_Load(System::Object^ sender, System::EventArgs^ e)
{
	using namespace Globals;
	textWindow1->Text = "\"<Dungeon Quest Helper>: ���������� ������� ��� ���. ���� �������� � ���� �� ������� ����������� � 2 ����.\"";
	textWindow1->Text += "���� ����� �� ������� ���. ����� ����� ���� ��������� ����, �� ������� �� ������� ��� - �������� ����� - ��� ����� �������� ����������� ���, ��� ������� ���� ����� " "\n" \
		"� � ���� ����, " + GlobalClass::playerName + ". � ���� ��� �������������� � �������� ��� ������� ������� ������, �� � �� ��� ���� ����� �����������." "\n" \
		"���� ����� ������ ����� �������, � � ���� ����� �����������...";
}
};
}
