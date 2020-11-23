#pragma once
#include "level1.h"
namespace DungeonQuestCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для gameStart
	/// </summary>
	public ref class gameStart : public System::Windows::Forms::Form
	{
	public:
		gameStart(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~gameStart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::TextBox^ textAge;
	private: System::Windows::Forms::TextBox^ textAns;



	private: System::Windows::Forms::Label^ charName;
	private: System::Windows::Forms::Label^ charAge;
	private: System::Windows::Forms::Label^ charAns1;



	private: System::Windows::Forms::Button^ newGameChar;
	private: System::Windows::Forms::Button^ newGameExit;
	private: System::Windows::Forms::TextBox^ licenseKey;

	private: System::Windows::Forms::Label^ label2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gameStart::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textAge = (gcnew System::Windows::Forms::TextBox());
			this->textAns = (gcnew System::Windows::Forms::TextBox());
			this->charName = (gcnew System::Windows::Forms::Label());
			this->charAge = (gcnew System::Windows::Forms::Label());
			this->charAns1 = (gcnew System::Windows::Forms::Label());
			this->newGameChar = (gcnew System::Windows::Forms::Button());
			this->newGameExit = (gcnew System::Windows::Forms::Button());
			this->licenseKey = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(113, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(449, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Создание персонажа";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(191, 132);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(100, 20);
			this->textName->TabIndex = 1;
			this->textName->TextChanged += gcnew System::EventHandler(this, &gameStart::textName_TextChanged);
			// 
			// textAge
			// 
			this->textAge->Location = System::Drawing::Point(191, 174);
			this->textAge->Name = L"textAge";
			this->textAge->Size = System::Drawing::Size(100, 20);
			this->textAge->TabIndex = 2;
			// 
			// textAns
			// 
			this->textAns->Location = System::Drawing::Point(191, 216);
			this->textAns->Name = L"textAns";
			this->textAns->Size = System::Drawing::Size(100, 20);
			this->textAns->TabIndex = 3;
			// 
			// charName
			// 
			this->charName->AutoSize = true;
			this->charName->BackColor = System::Drawing::Color::Transparent;
			this->charName->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->charName->ForeColor = System::Drawing::Color::Crimson;
			this->charName->Location = System::Drawing::Point(35, 134);
			this->charName->Name = L"charName";
			this->charName->Size = System::Drawing::Size(38, 16);
			this->charName->TabIndex = 4;
			this->charName->Text = L"Имя";
			// 
			// charAge
			// 
			this->charAge->AutoSize = true;
			this->charAge->BackColor = System::Drawing::Color::Transparent;
			this->charAge->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->charAge->ForeColor = System::Drawing::Color::Crimson;
			this->charAge->Location = System::Drawing::Point(21, 176);
			this->charAge->Name = L"charAge";
			this->charAge->Size = System::Drawing::Size(78, 16);
			this->charAge->TabIndex = 5;
			this->charAge->Text = L"Возраст";
			// 
			// charAns1
			// 
			this->charAns1->AutoSize = true;
			this->charAns1->BackColor = System::Drawing::Color::Transparent;
			this->charAns1->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->charAns1->ForeColor = System::Drawing::Color::Crimson;
			this->charAns1->Location = System::Drawing::Point(12, 220);
			this->charAns1->Name = L"charAns1";
			this->charAns1->Size = System::Drawing::Size(118, 16);
			this->charAns1->TabIndex = 6;
			this->charAns1->Text = L"Любимый сок";
			// 
			// newGameChar
			// 
			this->newGameChar->Location = System::Drawing::Point(533, 172);
			this->newGameChar->Name = L"newGameChar";
			this->newGameChar->Size = System::Drawing::Size(142, 23);
			this->newGameChar->TabIndex = 7;
			this->newGameChar->Text = L"Создать персонажа";
			this->newGameChar->UseVisualStyleBackColor = true;
			this->newGameChar->Click += gcnew System::EventHandler(this, &gameStart::newGameChar_Click);
			// 
			// newGameExit
			// 
			this->newGameExit->Location = System::Drawing::Point(610, 430);
			this->newGameExit->Name = L"newGameExit";
			this->newGameExit->Size = System::Drawing::Size(75, 23);
			this->newGameExit->TabIndex = 8;
			this->newGameExit->Text = L"Выход";
			this->newGameExit->UseVisualStyleBackColor = true;
			this->newGameExit->Click += gcnew System::EventHandler(this, &gameStart::newGameExit_Click);
			// 
			// licenseKey
			// 
			this->licenseKey->Location = System::Drawing::Point(191, 430);
			this->licenseKey->Name = L"licenseKey";
			this->licenseKey->Size = System::Drawing::Size(203, 20);
			this->licenseKey->TabIndex = 9;
			this->licenseKey->TextChanged += gcnew System::EventHandler(this, &gameStart::licenseKey_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(7, 432);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Проверка лицензии";
			// 
			// gameStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->licenseKey);
			this->Controls->Add(this->newGameExit);
			this->Controls->Add(this->newGameChar);
			this->Controls->Add(this->charAns1);
			this->Controls->Add(this->charAge);
			this->Controls->Add(this->charName);
			this->Controls->Add(this->textAns);
			this->Controls->Add(this->textAge);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->label1);
			this->Name = L"gameStart";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Quest (v0.65 Alpha)";
			this->Load += gcnew System::EventHandler(this, &gameStart::gameStart_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gameStart_Load(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
	

	private: System::Windows::Forms::Form^ game;
	private: System::Void newGameChar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (licenseKey->Text->Length == 0)
		{
			System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Введите лицензионный ключ!", "Ошибка!", MessageBoxButtons::RetryCancel);
			gameStart::Show();
			
		}
		else
		{
			long long gameKey = 185264739967354182;
			int gameKeyDev = 123419;
			long long userLicenseKey;
			userLicenseKey = __int64::Parse(licenseKey->Text);
			if ((userLicenseKey != gameKey) && (userLicenseKey != gameKeyDev))
			{
				System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы ввели неверный ключ. Повторить? (Отмена - выход из игры)", "Ошибка валидации!", MessageBoxButtons::RetryCancel);
				if (dialogResult == System::Windows::Forms::DialogResult::Cancel)
				{
					Application::Exit();
				}
				else gameStart::Show();
			}
			else
				{
					level1 ^ dungeon1 = gcnew level1();
					dungeon1->Show();
					this->Hide();
				}
		}
	}
private: System::Void newGameExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Выйти из игры?", "Выход", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else gameStart::Show();
	}
private: System::Void textName_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{

	}
private: System::Void licenseKey_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	
	}
};
}
