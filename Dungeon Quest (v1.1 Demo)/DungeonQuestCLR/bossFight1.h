#pragma once
#include <cstdlib>
#include <stdio.h> 
#include <stdlib.h> 
#include <ctime>
#include "GlobalClass.h"
#include "level3.h"
	namespace DungeonQuestCLR {

		using namespace Globals;
		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Сводка для bossFight1
		/// </summary>
		public ref class bossFight1 : public System::Windows::Forms::Form
		{
		public:
			bossFight1(void)
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
			~bossFight1()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ locationName1;
		private: System::Windows::Forms::Label^ textWindow1;
		private: System::Windows::Forms::Button^ choice1;
		private: System::Windows::Forms::Button^ choice2;
		private: System::Windows::Forms::Button^ choice3;
		private: System::Windows::Forms::Button^ choice4;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::Button^ helpButton;
		private: System::Windows::Forms::Button^ gameExit;
		private: System::Windows::Forms::Button^ winButton;
		private: System::Windows::Forms::TextBox^ cheatBox;


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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(bossFight1::typeid));
				this->locationName1 = (gcnew System::Windows::Forms::Label());
				this->textWindow1 = (gcnew System::Windows::Forms::Label());
				this->choice1 = (gcnew System::Windows::Forms::Button());
				this->choice2 = (gcnew System::Windows::Forms::Button());
				this->choice3 = (gcnew System::Windows::Forms::Button());
				this->choice4 = (gcnew System::Windows::Forms::Button());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->helpButton = (gcnew System::Windows::Forms::Button());
				this->gameExit = (gcnew System::Windows::Forms::Button());
				this->winButton = (gcnew System::Windows::Forms::Button());
				this->cheatBox = (gcnew System::Windows::Forms::TextBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				this->SuspendLayout();
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
				this->locationName1->TabIndex = 0;
				this->locationName1->Text = L"Уровень 1.2.\r\nКабинет библиотекаря.";
				// 
				// textWindow1
				// 
				this->textWindow1->ForeColor = System::Drawing::SystemColors::ControlText;
				this->textWindow1->Location = System::Drawing::Point(402, 9);
				this->textWindow1->Name = L"textWindow1";
				this->textWindow1->Size = System::Drawing::Size(283, 337);
				this->textWindow1->TabIndex = 1;
				// 
				// choice1
				// 
				this->choice1->Location = System::Drawing::Point(31, 136);
				this->choice1->Name = L"choice1";
				this->choice1->Size = System::Drawing::Size(123, 27);
				this->choice1->TabIndex = 5;
				this->choice1->Text = L"Легкий удар ножом";
				this->choice1->UseVisualStyleBackColor = true;
				this->choice1->Click += gcnew System::EventHandler(this, &bossFight1::choice1_Click);
				// 
				// choice2
				// 
				this->choice2->Location = System::Drawing::Point(31, 183);
				this->choice2->Name = L"choice2";
				this->choice2->Size = System::Drawing::Size(123, 41);
				this->choice2->TabIndex = 6;
				this->choice2->Text = L"Тяжелый удар ножом";
				this->choice2->UseVisualStyleBackColor = true;
				this->choice2->Click += gcnew System::EventHandler(this, &bossFight1::choice2_Click);
				// 
				// choice3
				// 
				this->choice3->Location = System::Drawing::Point(31, 242);
				this->choice3->Name = L"choice3";
				this->choice3->Size = System::Drawing::Size(123, 27);
				this->choice3->TabIndex = 7;
				this->choice3->Text = L"Бездействовать";
				this->choice3->UseVisualStyleBackColor = true;
				this->choice3->Click += gcnew System::EventHandler(this, &bossFight1::choice3_Click);
				// 
				// choice4
				// 
				this->choice4->Location = System::Drawing::Point(31, 290);
				this->choice4->Name = L"choice4";
				this->choice4->Size = System::Drawing::Size(123, 27);
				this->choice4->TabIndex = 8;
				this->choice4->Text = L"Лечение";
				this->choice4->UseVisualStyleBackColor = true;
				this->choice4->Click += gcnew System::EventHandler(this, &bossFight1::choice4_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackColor = System::Drawing::Color::DarkSlateGray;
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->pictureBox1->Location = System::Drawing::Point(211, 136);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(162, 210);
				this->pictureBox1->TabIndex = 9;
				this->pictureBox1->TabStop = false;
				// 
				// helpButton
				// 
				this->helpButton->Location = System::Drawing::Point(16, 430);
				this->helpButton->Name = L"helpButton";
				this->helpButton->Size = System::Drawing::Size(75, 23);
				this->helpButton->TabIndex = 10;
				this->helpButton->Text = L"Помощь";
				this->helpButton->UseVisualStyleBackColor = true;
				this->helpButton->Click += gcnew System::EventHandler(this, &bossFight1::helpButton_Click);
				// 
				// gameExit
				// 
				this->gameExit->Location = System::Drawing::Point(610, 430);
				this->gameExit->Name = L"gameExit";
				this->gameExit->Size = System::Drawing::Size(75, 23);
				this->gameExit->TabIndex = 11;
				this->gameExit->Text = L"Выход";
				this->gameExit->UseVisualStyleBackColor = true;
				this->gameExit->Click += gcnew System::EventHandler(this, &bossFight1::gameExit_Click);
				// 
				// winButton
				// 
				this->winButton->Location = System::Drawing::Point(295, 404);
				this->winButton->Name = L"winButton";
				this->winButton->Size = System::Drawing::Size(123, 49);
				this->winButton->TabIndex = 12;
				this->winButton->Text = L"Перейти на следующую локацию";
				this->winButton->UseVisualStyleBackColor = true;
				this->winButton->Click += gcnew System::EventHandler(this, &bossFight1::winButton_Click);
				// 
				// cheatBox
				// 
				this->cheatBox->Location = System::Drawing::Point(851, 204);
				this->cheatBox->Name = L"cheatBox";
				this->cheatBox->Size = System::Drawing::Size(100, 20);
				this->cheatBox->TabIndex = 13;
				// 
				// bossFight1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->ClientSize = System::Drawing::Size(697, 465);
				this->Controls->Add(this->cheatBox);
				this->Controls->Add(this->winButton);
				this->Controls->Add(this->gameExit);
				this->Controls->Add(this->helpButton);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->choice4);
				this->Controls->Add(this->choice3);
				this->Controls->Add(this->choice2);
				this->Controls->Add(this->choice1);
				this->Controls->Add(this->textWindow1);
				this->Controls->Add(this->locationName1);
				this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				this->Name = L"bossFight1";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"Dungeon Quest (v1.1 Demo)";
				this->Load += gcnew System::EventHandler(this, &bossFight1::bossFight1_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		int strength = 5, luck = 5, dex = 5;
		int playerHealth = 100, bossHealth = 200;
		int healCount, countNoHeal;
		int maxHealCount = 5;
		public: System::Void bossFight1_Load(System::Object^ sender, System::EventArgs^ e)
		{
			System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("Music//FirstFight.wav");
			simpleSound->Play();
			winButton->Visible = 0;
			textWindow1->Text = "<Dungeon Quest Helper>: Достигнута контрольная точка!" "\n" \
				"Открыв дверь, вы внезапно поняли, что находитесь в начале огромной комнаты. Дверь в следующее помещение была в паре десятков метров от вас. Было только одно но...перед вами стоял человек в длинной робе с капюшоном, из-за которого вы не смогли разглядеть его черты лица. Вы чувствовали как тяжелая аура зла исходит от одного лишь его взгляда. Хуже всего то, что он заметил вас." "\n" \
				"Бой неизбежен.";

		}
		private: System::Void gameExit_Click(System::Object^ sender, System::EventArgs^ e)
		{
			System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Вы хотите бросить персонажа в подземелье?", "Сбегаем?", MessageBoxButtons::YesNo);
			if (dialogResult == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
			else bossFight1::Show();
		}
		private: System::Void helpButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("В этом бою вам придется научиться пользоваться вашими умениями." "\n" \
				"На данный момент в игре сущетсвует 3 умения: сила (STR), удача (LUCK) и ловкость (DEX)." "\n" \
				"Эти три параметра влияют на тот урон, который вы наносите, который получаете, и на шанс нанести критичиский удар." "\n" \
				"Рассчёт навыка СИЛА идёт по формуле: \"Моментальный урон/Уровень умения = Добавка к урону\"" "\n" \
				"Система остальных навыков пока находится в разработке и имеет чисто косметический характер." "\n" \
				"Ваши навыки будут автоматически повышаться при битве с боссами и нахождении особых предметов, раскиданных по всему подземелью." "\n" \
				"Навыки на этот бой начнутся с 5 очков. Удачи!", "<Dungeon Quest Guide>", MessageBoxButtons::OK);
			bossFight1::Show();
		}
		public: System::Void choice1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			countNoHeal++;
			if (countNoHeal >= 3)
			{
				countNoHeal = 0;
				healCount = 0;
				choice4->Enabled = 1;
			}
			textWindow1->Text = " ";
			choice3->Enabled = 0;
			srand(time(0));
			int bossHealChance = rand() % 25 + 1;
			int bossDamage1 = rand() % 20 + 1;
			int momentalDamage1 = rand() % 10 + 1;
			int playerDamage1 = (momentalDamage1)+(momentalDamage1 / strength);
			bossHealth = bossHealth - playerDamage1;
			playerHealth = playerHealth - bossDamage1;
			textWindow1->Text = "Вы нанесли быстрый удар ножом, нанеся " + playerDamage1 + " единиц урона." "\n" \
				"Здоровье врага: " + bossHealth + " HP" "\n" \
				"В ответ Библиотекарь наносит заклинание порчи, нанося " + bossDamage1 + " единиц урона." "\n" \
				"Ваше здоровье: " + playerHealth + " HP";
			if (bossHealChance == 25)
			{
				int bossHeal = rand() % 100 + 1;
				textWindow1->Text += "\n"  "Библиотекарь кастует заклинание излечения, восстанавливая себе " + bossHeal + " очков здоровья.";
				if (bossHeal == 100)
				{
					textWindow1->Text += "\n"  "<Dungeon Quest Helper>: \"Маг только что восстановил себе 100 единиц здоровья! Будьте осторожны!\"";
				}
				bossHealth = bossHealth + bossHeal;
				if (bossHealth > 200)
				{
					bossHealth = 200;
				}
				textWindow1->Text += "\n" "Здоровье врага: " + bossHealth + " HP";
			}
			if (playerHealth <= 0)
			{
				System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("\"Кажется, ваш земной путь завершен. Ваша душа обретет покой...\"" "\n" \
					"Начать заново?", "Вы погибли...", MessageBoxButtons::YesNo);
				if (dialogResult == System::Windows::Forms::DialogResult::No)
				{
					Application::Exit();
				}
				else bossFight1::Show();
				bossFight1::RecreateHandle();
				textWindow1->Text = "Открыв дверь, вы внезапно поняли, что находитесь в начале огромной комнаты. Дверь в следующее помещение была в паре десятков метров от вас. Было только одно но...перед вами стоял человек в длинной робе с капюшоном, из-за которого вы не смогли разглядеть его черты лица. Вы чувствовали как тяжелая аура зла исходит от одного лишь его взгляда. Хуже всего то, что он заметил вас." "\n";
				"Бой неизбежен.";
				playerHealth = 100;
				bossHealth = 200;
				choice3->Enabled = 1;
			}
			if (bossHealth <= 0)
			{
				textWindow1->Text = "Вы победили!";
				System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("<Dungeon Quest Helper>: Отличная работа! Продолжайте в том же духе!", "Победа!", MessageBoxButtons::OK);
				winButton->Visible = 1;
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
			textWindow1->Text = " ";
			choice3->Enabled = 0;
			srand(time(0));
			int bossHealChance = rand() % 25 + 1;
			int bossDamage2 = rand() % 30 + 1;
			int momentalDamage2 = rand() % 20 + 1;
			int playerDamage2 = (momentalDamage2)+(momentalDamage2 / strength);
			bossHealth = bossHealth - playerDamage2;
			playerHealth = playerHealth - bossDamage2;
			textWindow1->Text = "Вы вкладываете все силы в удар, нанеся " + playerDamage2 + " единиц урона." "\n" \
				"Здоровье врага: " + bossHealth + " HP" "\n" \
				"Библиотекарь в ярости атакует своим огненным магическим посохом, нанося " + bossDamage2 + " единиц урона!" "\n" \
				"Ваше здоровье: " + playerHealth + " HP";
			if (bossHealChance == 25)
			{
				int bossHeal = rand() % 100 + 1;
				bossHealth = bossHealth + bossHeal;
				textWindow1->Text += "\n" "Библиотекарь кастует заклинание излечения, восстанавливая себе " + bossHeal + " очков здоровья.";
				if (bossHeal == 100)
				{
					textWindow1->Text += "\n"  "<Dungeon Quest Helper>: \"Маг только что восстановил себе 100 единиц здоровья! Будьте осторожны!\"";
				}
				if (bossHealth > 200)
				{
					bossHealth = 200;
				}
				textWindow1->Text += "\n" "Здоровье врага: " + bossHealth + " HP";
			}
			if (playerHealth <= 0)
			{
				System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("\"Кажется, ваш земной путь завершен. Ваша душа обретет покой...\"" "\n" \
					"Начать заново?", "Вы погибли...", MessageBoxButtons::YesNo);
				if (dialogResult == System::Windows::Forms::DialogResult::No)
				{
					Application::Exit();
				}
				else bossFight1::Show();
				bossFight1::RecreateHandle();
				textWindow1->Text = "Открыв дверь, вы внезапно поняли, что находитесь в начале огромной комнаты. Дверь в следующее помещение была в паре десятков метров от вас. Было только одно но...перед вами стоял человек в длинной робе с капюшоном, из-за которого вы не смогли разглядеть его черты лица. Вы чувствовали как тяжелая аура зла исходит от одного лишь его взгляда. Хуже всего то, что он заметил вас." "\n";
				"Бой неизбежен.";
				playerHealth = 100;
				bossHealth = 200;
				choice3->Enabled = 1;
			}
			if (bossHealth <= 0)
			{
				textWindow1->Text = "Вы победили!";
				System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("<Dungeon Quest Helper>: Отличная работа! Продолжайте в том же духе!", "Победа!", MessageBoxButtons::OK);
				winButton->Visible = 1;
			}
		}
		private: System::Void choice3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (cheatBox->Text->Length == 0)
			{
				srand(time(0));
				playerHealth = 100;
				int bossRandomAttack = rand() % 30 + 1;
				playerHealth = playerHealth - bossRandomAttack;
				textWindow1->Text = "Вы смотрите на Библиотекаря, не делая никаких движений." "\n" \
					"Тем не менее, маг заметил Вас и бросил в вашу сторону Огненный шар. Едва успев отскочить, Вы пришли в себя, однако Вас всё-равно обожгло, нанеся " + bossRandomAttack + " единиц урона!" "\n" \
					"В следующий раз Вам стоит быть внимательнее..." "\n" \
					"Ваше здоровье: " + playerHealth + " HP";
				choice3->Enabled = 0;
			}
			else
			{
				String^ cheatCode = "IwantToSkip";
				String^ userCheatCode = cheatBox->Text;
				if (userCheatCode == cheatCode)
				{
					System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Ты....Как ты сюда попал, черт возьми?..", "LOOOOL", MessageBoxButtons::OK);
					level3^ dungeon3 = gcnew level3();
					dungeon3->Show();
					this->Hide();
				}
			}
		}
		private: System::Void choice4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			healCount++;
			textWindow1->Text = " ";
			srand(time(0));
			int heal = rand() % 15 + 1;
			int bossHealChance = rand() % 25 + 1;
			textWindow1->Text = "Вы делаете небольшую передышку, отойдя от мага на расстояние." "\n" \
				"Вы успокоили дыхание, восстановив " + heal + " очков здоровья.";
			playerHealth = playerHealth + heal;
			if (playerHealth > 100)
			{
				textWindow1->Text += "\n" "Ваши силы превысили все границы. Часть сил высвободилась, нанося врагу 10 единиц урона." "\n" \
					"Ваше здоровье восполнилось до максимума";
				bossHealth = bossHealth - 10;
				textWindow1->Text += "\n" "Здоровье врага: " + bossHealth + " HP";
				playerHealth = 100;
			}
			textWindow1->Text += "\n" "Ваше здоровье: " + playerHealth + " HP";
			if (healCount >= maxHealCount)
			{
				textWindow1->Text += "\n" "Вы пытались вылечить себя еще немного, но почувствовали, что у вас совсем нет сил...(максимальное количество излечений - 5)";
				choice4->Enabled = 0;

			}
			if (bossHealChance == 25)
			{
				int bossHeal = rand() % 100 + 1;
				textWindow1->Text += "\n" "Библиотекарь кастует заклинание излечения, восстанавливая себе " + bossHeal + " очков здоровья.";
				if (bossHeal == 100)
				{
					textWindow1->Text += "\n"  "<Dungeon Quest Helper>: \"Маг только что восстановил себе 100 единиц здоровья! Будьте осторожны!\"";
				}
				bossHealth = bossHealth + bossHeal;
				if (bossHealth > 200)
				{
					bossHealth = 200;
				}
				textWindow1->Text += "\n" "Здоровье врага: " + bossHealth + " HP";
			}
			if (bossHealth <= 0)
			{
				textWindow1->Text = "Вы победили!";
				System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("<Dungeon Quest Helper>: Отличная работа! Продолжайте в том же духе!", "Победа!", MessageBoxButtons::OK);
				winButton->Visible = 1;
			}
		}
		private: System::Void winButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			level3^ dungeon3 = gcnew level3();
			dungeon3->Show();
			this->Hide();
		}
		};
	}
