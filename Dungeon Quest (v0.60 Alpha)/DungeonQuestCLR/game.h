#pragma once

namespace DungeonQuestCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� game
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->startgame = (gcnew System::Windows::Forms::Button());
			this->about = (gcnew System::Windows::Forms::Button());
			this->exitgame = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(23, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(528, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dungeon Quest (v0.60 Alpha)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &game::label1_Click);
			// 
			// startgame
			// 
			this->startgame->Location = System::Drawing::Point(226, 231);
			this->startgame->Name = L"startgame";
			this->startgame->Size = System::Drawing::Size(122, 23);
			this->startgame->TabIndex = 1;
			this->startgame->Text = L"������ ����";
			this->startgame->UseVisualStyleBackColor = true;
			this->startgame->Click += gcnew System::EventHandler(this, &game::startgame_Click);
			// 
			// about
			// 
			this->about->Location = System::Drawing::Point(226, 270);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(122, 23);
			this->about->TabIndex = 2;
			this->about->Text = L"�� ����";
			this->about->UseVisualStyleBackColor = true;
			this->about->Click += gcnew System::EventHandler(this, &game::about_Click);
			// 
			// exitgame
			// 
			this->exitgame->Location = System::Drawing::Point(226, 310);
			this->exitgame->Name = L"exitgame";
			this->exitgame->Size = System::Drawing::Size(122, 23);
			this->exitgame->TabIndex = 3;
			this->exitgame->Text = L"�����";
			this->exitgame->UseVisualStyleBackColor = true;
			this->exitgame->Click += gcnew System::EventHandler(this, &game::exitgame_Click);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(574, 374);
			this->Controls->Add(this->exitgame);
			this->Controls->Add(this->about);
			this->Controls->Add(this->startgame);
			this->Controls->Add(this->label1);
			this->Name = L"game";
			this->Text = L"Dungeon Quest (v0.60 Alpha)";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
		{

		}
	private: System::Void exitgame_Click(System::Object^ sender, System::EventArgs^ e)
		{
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("����� �� ����?", "�����", MessageBoxButtons::YesNo);
		if (dialogResult == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
		else game::Show();
		}
	private: System::Void startgame_Click(System::Object^ sender, System::EventArgs^ e)
		{

		}
	private: System::Void about_Click(System::Object^ sender, System::EventArgs^ e)
		{
		MessageBox::Show("Dungeon Quest - ���� � ����� ���������� ������ � ���������� RPG." \
			+ "\n" + "���� ������: ��������� �� ���������� �����. ��, ��-������� ���� ����������.",\
			"�� ����", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
}	;
}