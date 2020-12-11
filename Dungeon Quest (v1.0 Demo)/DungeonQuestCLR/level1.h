#pragma once
#include "level2.h"
#include "bossFight1.h"
#include <string>

namespace DungeonQuestCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для level1
	/// </summary>
	public ref class level1 : public System::Windows::Forms::Form
	{
	public:
		level1(void)
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
		~level1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ locationName1;
	private: System::Windows::Forms::Label^ textWindow1;
	private: System::Windows::Forms::Button^ choice1;
	private: System::Windows::Forms::Button^ choice2;
	private: System::Windows::Forms::Button^ choice3;
	private: System::Windows::Forms::Button^ choice4;
	private: System::Windows::Forms::Button^ gameExit;
	private: System::Windows::Forms::Button^ helpButton;
	private: System::Windows::Forms::TextBox^ cheatBox;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(level1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->locationName1 = (gcnew System::Windows::Forms::Label());
			this->textWindow1 = (gcnew System::Windows::Forms::Label());
			this->choice1 = (gcnew System::Windows::Forms::Button());
			this->choice2 = (gcnew System::Windows::Forms::Button());
			this->choice3 = (gcnew System::Windows::Forms::Button());
			this->choice4 = (gcnew System::Windows::Forms::Button());
			this->gameExit = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->cheatBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(211, 136);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 210);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// locationName1
			// 
			this->locationName1->AutoSize = true;
			this->locationName1->BackColor = System::Drawing::Color::Maroon;
			this->locationName1->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->locationName1->ForeColor = System::Drawing::Color::Gold;
			this->locationName1->Location = System::Drawing::Point(12, 9);
			this->locationName1->Name = L"locationName1";
			this->locationName1->Size = System::Drawing::Size(265, 24);
			this->locationName1->TabIndex = 2;
			this->locationName1->Text = L"Уровень 1. Тюрьмы";
			// 
			// textWindow1
			// 
			this->textWindow1->Location = System::Drawing::Point(402, 9);
			this->textWindow1->Name = L"textWindow1";
			this->textWindow1->Size = System::Drawing::Size(283, 337);
			this->textWindow1->TabIndex = 3;
			this->textWindow1->Click += gcnew System::EventHandler(this, &level1::textWindow1_Click);
			// 
			// choice1
			// 
			this->choice1->Location = System::Drawing::Point(31, 136);
			this->choice1->Name = L"choice1";
			this->choice1->Size = System::Drawing::Size(123, 27);
			this->choice1->TabIndex = 4;
			this->choice1->Text = L"Пойти к двери";
			this->choice1->UseVisualStyleBackColor = true;
			this->choice1->Click += gcnew System::EventHandler(this, &level1::choice1_Click);
			// 
			// choice2
			// 
			this->choice2->Location = System::Drawing::Point(31, 183);
			this->choice2->Name = L"choice2";
			this->choice2->Size = System::Drawing::Size(123, 27);
			this->choice2->TabIndex = 5;
			this->choice2->Text = L"Проверить карманы";
			this->choice2->UseVisualStyleBackColor = true;
			this->choice2->Click += gcnew System::EventHandler(this, &level1::choice2_Click);
			// 
			// choice3
			// 
			this->choice3->Location = System::Drawing::Point(31, 232);
			this->choice3->Name = L"choice3";
			this->choice3->Size = System::Drawing::Size(123, 27);
			this->choice3->TabIndex = 6;
			this->choice3->Text = L"Бездействовать";
			this->choice3->UseVisualStyleBackColor = true;
			this->choice3->Click += gcnew System::EventHandler(this, &level1::choice3_Click);
			// 
			// choice4
			// 
			this->choice4->Location = System::Drawing::Point(31, 285);
			this->choice4->Name = L"choice4";
			this->choice4->Size = System::Drawing::Size(123, 27);
			this->choice4->TabIndex = 7;
			this->choice4->Text = L"О, БОЖЕ, ГДЕ Я\?!";
			this->choice4->UseVisualStyleBackColor = true;
			this->choice4->Click += gcnew System::EventHandler(this, &level1::choice4_Click);
			// 
			// gameExit
			// 
			this->gameExit->Location = System::Drawing::Point(610, 430);
			this->gameExit->Name = L"gameExit";
			this->gameExit->Size = System::Drawing::Size(75, 23);
			this->gameExit->TabIndex = 8;
			this->gameExit->Text = L"Выход";
			this->gameExit->UseVisualStyleBackColor = true;
			this->gameExit->Click += gcnew System::EventHandler(this, &level1::gameExit_Click);
			// 
			// helpButton
			// 
			this->helpButton->Location = System::Drawing::Point(16, 430);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(75, 23);
			this->helpButton->TabIndex = 9;
			this->helpButton->Text = L"Помощь";
			this->helpButton->UseVisualStyleBackColor = true;
			this->helpButton->Click += gcnew System::EventHandler(this, &level1::helpButton_Click);
			// 
			// cheatBox
			// 
			this->cheatBox->Location = System::Drawing::Point(766, 212);
			this->cheatBox->Name = L"cheatBox";
			this->cheatBox->Size = System::Drawing::Size(100, 20);
			this->cheatBox->TabIndex = 10;
			// 
			// level1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->cheatBox);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->gameExit);
			this->Controls->Add(this->choice4);
			this->Controls->Add(this->choice3);
			this->Controls->Add(this->choice2);
			this->Controls->Add(this->choice1);
			this->Controls->Add(this->textWindow1);
			this->Controls->Add(this->locationName1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"level1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Quest (v1.0 Demo)";
			this->Load += gcnew System::EventHandler(this, &level1::level1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void level1_Load(System::Object^ sender, System::EventArgs^ e)
	{
	System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("Music//EnterTheDungeon.wav");
	simpleSound->Play();
	choice2->Enabled = 1;
	textWindow1->Text = "Вы очнулись на полу сырой темницы.Вы не помните ни как сюда попали, ни толком кто вы такой." "\n" \
			"Лишь несвязанные мысли с трудом всплывают в вашем помутненом разуме. "  "\n" \
			"Вы понемногу приходите в себя, находясь в сумраке.Вы решаете, что надо что-то делать..."  "\n";
	}
private: System::Void textWindow1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

	
}
private: System::Void textWindow1_Click(System::Object^ sender, System::EventArgs^ e)
{

}
private: System::Void gameExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы хотите бросить персонажа в подземелье?", "Сбегаем?", MessageBoxButtons::YesNo);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
	else level1::Show();
}
private: System::Void choice1_Click(System::Object^ sender, System::EventArgs^ e)
{
		level2 ^ dungeon2 = gcnew level2();
		dungeon2->Show();
		this->Hide();
}
private: System::Void choice2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (cheatBox->Text->Length == 0)
	{
		textWindow1->Text = "Вы похлопали себя по карманам : \"Ножик, кошелек и ключи...какого черта я вообще попёрся сюда с таким набором вещей?..\"";
		choice2->Enabled = 0;
	}
	else
	{
		String^ cheatCode = "IDDQD";
		String^ userCheatCode = cheatBox->Text;
		if (userCheatCode == cheatCode)
		{
			System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Ты....Как ты сюда попал, черт возьми?..", "LOOOOL", MessageBoxButtons::OK);
			bossFight1^ boss1 = gcnew bossFight1();
			boss1->Show();
			this->Hide();
		}
	}
}
private: System::Void choice3_Click(System::Object^ sender, System::EventArgs^ e)
{
	textWindow1->Text = "Понимая, что вы скорее всего погибните, вы решили не покидать темницу и в скором времени умерли от жажды";
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Начать заново?", "Вы умерли", MessageBoxButtons::YesNo);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		System::Void level1_Load();
		choice2->Enabled = 1;
		textWindow1->Text = " ";
	}
	else Application::Exit();
}
private: System::Void choice4_Click(System::Object^ sender, System::EventArgs^ e)
{
	textWindow1->Text = "Страх амнезии и одиночества еще никогда не был настолько сильным для вас.В панике вы начали кричать, " "\n" \
		"после чего упали безсознания...к сожалению, пол в темнице был каменный...";
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Начать заново?", "Вы умерли", MessageBoxButtons::YesNo);
	if (dialogResult == System::Windows::Forms::DialogResult::Yes)
	{
		System::Void level1_Load();
		choice2->Enabled = 1;
		textWindow1->Text = " ";
	}
	else Application::Exit();
}
private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Краткий гайд: в центре экрана находится изображение того, что на данный момент видит ваш персонаж. На данном уровне - это дверь. Справа от иконки двери находится текстовое поле, в котором и проходит весь геймплей. Советую читать аккуратно, велик шанс пропустить что-то важное." "\n" \
	"Слева от иконки находятся варианты действий персонажа, результаты которых будут отбражаться на текстовом поле. На этом пока всё. Удачи!", "<Dungeon Quest Guide>", MessageBoxButtons::OK);
	level1::Show();
}
private: System::Void cheatBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
}
};
}
