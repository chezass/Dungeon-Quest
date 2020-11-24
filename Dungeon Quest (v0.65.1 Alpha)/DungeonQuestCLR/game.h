#pragma once
#include "gameStart.h"

namespace DungeonQuestCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
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
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ startgame;
	private: System::Windows::Forms::Button^ about;
	private: System::Windows::Forms::Button^ exitgame;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->startgame = (gcnew System::Windows::Forms::Button());
			this->about = (gcnew System::Windows::Forms::Button());
			this->exitgame = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"PerfectDOSVGA437", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(65, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(583, 128);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dungeon Quest\r\n(v0.65.1 Alpha)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &game::label1_Click);
			// 
			// startgame
			// 
			this->startgame->Location = System::Drawing::Point(260, 231);
			this->startgame->Name = L"startgame";
			this->startgame->Size = System::Drawing::Size(122, 23);
			this->startgame->TabIndex = 1;
			this->startgame->Text = L"Начать игру";
			this->startgame->UseVisualStyleBackColor = true;
			this->startgame->Click += gcnew System::EventHandler(this, &game::startgame_Click);
			// 
			// about
			// 
			this->about->Location = System::Drawing::Point(260, 270);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(122, 23);
			this->about->TabIndex = 2;
			this->about->Text = L"Об игре";
			this->about->UseVisualStyleBackColor = true;
			this->about->Click += gcnew System::EventHandler(this, &game::about_Click);
			// 
			// exitgame
			// 
			this->exitgame->Location = System::Drawing::Point(260, 309);
			this->exitgame->Name = L"exitgame";
			this->exitgame->Size = System::Drawing::Size(122, 23);
			this->exitgame->TabIndex = 3;
			this->exitgame->Text = L"Выход";
			this->exitgame->UseVisualStyleBackColor = true;
			this->exitgame->Click += gcnew System::EventHandler(this, &game::exitgame_Click);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(697, 465);
			this->Controls->Add(this->exitgame);
			this->Controls->Add(this->about);
			this->Controls->Add(this->startgame);
			this->Controls->Add(this->label1);
			this->Name = L"game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dungeon Quest (v0.65.1 Alpha)";
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void game_Load(System::Object^ sender, System::EventArgs^ e)
		{
			System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("Dark.wav");
			simpleSound->Play();

		}

		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
		{

		}

		private: System::Void startgame_Click(System::Object^ sender, System::EventArgs^ e)
		{
			gameStart ^ newGame = gcnew gameStart();
			newGame->Show();
			this->Hide();
		}
	
	private: System::Void exitgame_Click(System::Object^ sender, System::EventArgs^ e)
		{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Выйти из игры?", "Выход", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else game::Show();
		}
	
	private: System::Void about_Click(System::Object^ sender, System::EventArgs^ e)
		{
		MessageBox::Show("Dungeon Quest - игра в жанре текстового квеста с элементами RPG." \
			+ "\n" + "Ваша задача: выбраться из подземелья живым. Ну, по-крайней мере попытаться.",\
			"Об игре", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

};
}
