#pragma once
#include "bossFight1.h"

namespace DungeonQuestCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для level2
	/// </summary>
	public ref class level2 : public System::Windows::Forms::Form
	{
	public:
		level2(void)
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
		~level2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ textWindow1;
	private: System::Windows::Forms::Label^ locationName1;
	private: System::Windows::Forms::Button^ choice1;
	private: System::Windows::Forms::Button^ choice2;
	private: System::Windows::Forms::Button^ choice3;
	private: System::Windows::Forms::Button^ helpButton;
	private: System::Windows::Forms::Button^ gameExit;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(level2::typeid));
			this->textWindow1 = (gcnew System::Windows::Forms::Label());
			this->locationName1 = (gcnew System::Windows::Forms::Label());
			this->choice1 = (gcnew System::Windows::Forms::Button());
			this->choice2 = (gcnew System::Windows::Forms::Button());
			this->choice3 = (gcnew System::Windows::Forms::Button());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->gameExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textWindow1
			// 
			this->textWindow1->Location = System::Drawing::Point(402, 9);
			this->textWindow1->Name = L"textWindow1";
			this->textWindow1->Size = System::Drawing::Size(283, 337);
			this->textWindow1->TabIndex = 0;
			this->textWindow1->Click += gcnew System::EventHandler(this, &level2::textWindow1_Click);
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
			this->locationName1->Size = System::Drawing::Size(280, 48);
			this->locationName1->TabIndex = 1;
			this->locationName1->Text = L"Уровень 1.1.\r\nКоридор библиотеки";
			// 
			// choice1
			// 
			this->choice1->Location = System::Drawing::Point(31, 136);
			this->choice1->Name = L"choice1";
			this->choice1->Size = System::Drawing::Size(123, 27);
			this->choice1->TabIndex = 2;
			this->choice1->Text = L"Пойти прямо";
			this->choice1->UseVisualStyleBackColor = true;
			this->choice1->Click += gcnew System::EventHandler(this, &level2::choice1_Click);
			// 
			// choice2
			// 
			this->choice2->Location = System::Drawing::Point(31, 183);
			this->choice2->Name = L"choice2";
			this->choice2->Size = System::Drawing::Size(123, 27);
			this->choice2->TabIndex = 3;
			this->choice2->Text = L"Пойти налево";
			this->choice2->UseVisualStyleBackColor = true;
			this->choice2->Click += gcnew System::EventHandler(this, &level2::choice2_Click);
			// 
			// choice3
			// 
			this->choice3->Location = System::Drawing::Point(31, 230);
			this->choice3->Name = L"choice3";
			this->choice3->Size = System::Drawing::Size(123, 27);
			this->choice3->TabIndex = 4;
			this->choice3->Text = L"Пойти направо";
			this->choice3->UseVisualStyleBackColor = true;
			this->choice3->Click += gcnew System::EventHandler(this, &level2::choice3_Click);
			// 
			// helpButton
			// 
			this->helpButton->Location = System::Drawing::Point(16, 430);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(75, 23);
			this->helpButton->TabIndex = 5;
			this->helpButton->Text = L"Помощь";
			this->helpButton->UseVisualStyleBackColor = true;
			this->helpButton->Click += gcnew System::EventHandler(this, &level2::helpButton_Click);
			// 
			// gameExit
			// 
			this->gameExit->Location = System::Drawing::Point(610, 430);
			this->gameExit->Name = L"gameExit";
			this->gameExit->Size = System::Drawing::Size(75, 23);
			this->gameExit->TabIndex = 6;
			this->gameExit->Text = L"Выход";
			this->gameExit->UseVisualStyleBackColor = true;
			this->gameExit->Click += gcnew System::EventHandler(this, &level2::gameExit_Click);
			// 
			// level2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->gameExit);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->choice3);
			this->Controls->Add(this->choice2);
			this->Controls->Add(this->choice1);
			this->Controls->Add(this->locationName1);
			this->Controls->Add(this->textWindow1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"level2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Quest (v0.90 Beta)";
			this->Load += gcnew System::EventHandler(this, &level2::level2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void level2_Load(System::Object^ sender, System::EventArgs^ e)
	{
		choice3->Enabled = 1;
		choice2->Enabled = 1;
		textWindow1->Text = "Вы вышли в коридор и медленно дошли до двух дверей, находящихся по бокам от вас. Куда пойдете?";
	}
	private: System::Void gameExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы хотите бросить персонажа в подземелье?", "Сбегаем?", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else level2::Show();
	}
	private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Краткий гайд: в центре экрана находится изображение того, что на данный момент видит ваш персонаж. На данном уровне - это дверь. Справа от иконки двери находится текстовое поле, в котором и проходит весь геймплей. Советую читать аккуратно, велик шанс пропустить что-то важное." "\n" \
			"Слева от иконки находятся варианты действий персонажа, результаты которых будут отбражаться на текстовом поле. На этом пока всё. Удачи!", "<Dungeon Quest Guide>", MessageBoxButtons::OK);
		level2::Show();
	}
private: System::Void textWindow1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void choice1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		bossFight1 ^ boss1 = gcnew bossFight1();
		boss1->Show();
		this->Hide();
	}
private: System::Void choice2_Click(System::Object^ sender, System::EventArgs^ e)
	{
	textWindow1->Text = "Вы дошли до середины коридора и попытались открыть дверь слева, но она оказалась заперта. Вы решили вернуться обратно, чтобы еще раз осмотреть коридор.";
	choice2->Enabled = 0;
	}
private: System::Void choice3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textWindow1->Text = "Вы дошли до середины коридора и попытались открыть дверь справа, но она оказалась заперта. Вы решили вернуться обратно, чтобы еще раз осмотреть коридор.";
		choice3->Enabled = 0;
	}
};
}
