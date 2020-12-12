#pragma once
#include "bossFight2.h"

namespace DungeonQuestCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для level4
	/// </summary>
	public ref class level4 : public System::Windows::Forms::Form
	{
	public:
		level4(void)
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
		~level4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ gameExit;
	private: System::Windows::Forms::Button^ helpButton;
	private: System::Windows::Forms::Label^ textWindow1;
	private: System::Windows::Forms::Label^ locationName1;
	private: System::Windows::Forms::Button^ choice1;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(level4::typeid));
			this->gameExit = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->textWindow1 = (gcnew System::Windows::Forms::Label());
			this->locationName1 = (gcnew System::Windows::Forms::Label());
			this->choice1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// gameExit
			// 
			this->gameExit->Location = System::Drawing::Point(610, 430);
			this->gameExit->Name = L"gameExit";
			this->gameExit->Size = System::Drawing::Size(75, 23);
			this->gameExit->TabIndex = 0;
			this->gameExit->Text = L"Выход";
			this->gameExit->UseVisualStyleBackColor = true;
			this->gameExit->Click += gcnew System::EventHandler(this, &level4::gameExit_Click);
			// 
			// helpButton
			// 
			this->helpButton->Location = System::Drawing::Point(16, 430);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(75, 23);
			this->helpButton->TabIndex = 1;
			this->helpButton->Text = L"Помощь";
			this->helpButton->UseVisualStyleBackColor = true;
			this->helpButton->Click += gcnew System::EventHandler(this, &level4::helpButton_Click);
			// 
			// textWindow1
			// 
			this->textWindow1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->textWindow1->Location = System::Drawing::Point(402, 9);
			this->textWindow1->Name = L"textWindow1";
			this->textWindow1->Size = System::Drawing::Size(283, 337);
			this->textWindow1->TabIndex = 2;
			// 
			// locationName1
			// 
			this->locationName1->BackColor = System::Drawing::Color::Maroon;
			this->locationName1->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->locationName1->ForeColor = System::Drawing::Color::Gold;
			this->locationName1->Location = System::Drawing::Point(12, 9);
			this->locationName1->Name = L"locationName1";
			this->locationName1->Size = System::Drawing::Size(325, 48);
			this->locationName1->TabIndex = 3;
			this->locationName1->Text = L"Уровень 2.1.\r\nГлавный Холл Замка.";
			// 
			// choice1
			// 
			this->choice1->Location = System::Drawing::Point(31, 220);
			this->choice1->Name = L"choice1";
			this->choice1->Size = System::Drawing::Size(123, 27);
			this->choice1->TabIndex = 4;
			this->choice1->Text = L"Идти вперёд";
			this->choice1->UseVisualStyleBackColor = true;
			this->choice1->Click += gcnew System::EventHandler(this, &level4::choice1_Click);
			// 
			// level4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->choice1);
			this->Controls->Add(this->locationName1);
			this->Controls->Add(this->textWindow1);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->gameExit);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"level4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Quest (v1.1 Demo)";
			this->Load += gcnew System::EventHandler(this, &level4::level4_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void level4_Load(System::Object^ sender, System::EventArgs^ e)
	{
		System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("Music//Hope.wav");
		simpleSound->Play();
		textWindow1->Text = "Вы вышли в Холл Замка, почувствовав на себе тепло лучей солнца, еле-еле пробивающихся сквозь густые темные облака. Страх перед неизвестным начал притупляться." "\n" \
			"Но в то же время вы ощутили неимоверно тяжелую ауру, и вам показалось, что её источник был буквально за поворотом. Ваше желание выбраться из Замка стало еще сильнее, хоть вы и понимали, что вряд-ли выживите в следующей схватке...";
	}
	private: System::Void gameExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы хотите бросить персонажа в замке?", "Сбегаем?", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else level4::Show();
	}
	private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(" " "\n" \
			" " "\n" \
			"		    \"Ибо мы спасены в надежде\" " "\n" \
			" " "\n" \
			" " "\n" \
			" " "\n" \
			" " "\n" \
			" " "\n" \
			"				     Послание к Римлянам 8:24", "<Dungeon Quest Guide>", MessageBoxButtons::OK);
		level4::Show();
	}
	private: System::Void choice1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		bossFight2^ boss2 = gcnew bossFight2();
		boss2->Show();
		this->Hide();
	}
};
}
