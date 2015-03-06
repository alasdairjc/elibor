#pragma once
#include <cliext/vector>
namespace Elibor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			Initialise();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  warriorButton;
	protected: 
	private: System::Windows::Forms::RadioButton^  mageButton;
	private: System::Windows::Forms::RadioButton^  rogueButton;
	private: System::Windows::Forms::RadioButton^  rangerButton;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  nameBox;
	private: System::Windows::Forms::NumericUpDown^  levelBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  cpBox;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  cpSpentBox;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  xpBox;
	private: System::Windows::Forms::TextBox^  xpNextLevelBox;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  hpBox;
	private: System::Windows::Forms::TextBox^  mpBox;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::CheckedListBox^  armsList;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::CheckedListBox^  abilitiesList;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::CheckedListBox^  profList;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::CheckedListBox^  spellList;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::CheckedListBox^  raceList;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::DataGridView^  subClassBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->warriorButton = (gcnew System::Windows::Forms::RadioButton());
			this->mageButton = (gcnew System::Windows::Forms::RadioButton());
			this->rogueButton = (gcnew System::Windows::Forms::RadioButton());
			this->rangerButton = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->subClassBox = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->levelBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cpBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cpSpentBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->xpBox = (gcnew System::Windows::Forms::TextBox());
			this->xpNextLevelBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->hpBox = (gcnew System::Windows::Forms::TextBox());
			this->mpBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->armsList = (gcnew System::Windows::Forms::CheckedListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->abilitiesList = (gcnew System::Windows::Forms::CheckedListBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->profList = (gcnew System::Windows::Forms::CheckedListBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->spellList = (gcnew System::Windows::Forms::CheckedListBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->raceList = (gcnew System::Windows::Forms::CheckedListBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subClassBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->levelBox))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// warriorButton
			// 
			this->warriorButton->AutoSize = true;
			this->warriorButton->Location = System::Drawing::Point(41, 9);
			this->warriorButton->Name = L"warriorButton";
			this->warriorButton->Size = System::Drawing::Size(59, 17);
			this->warriorButton->TabIndex = 0;
			this->warriorButton->TabStop = true;
			this->warriorButton->Text = L"Warrior";
			this->warriorButton->UseVisualStyleBackColor = true;
			this->warriorButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::warriorButton_CheckedChanged);
			// 
			// mageButton
			// 
			this->mageButton->AutoSize = true;
			this->mageButton->Location = System::Drawing::Point(169, 11);
			this->mageButton->Name = L"mageButton";
			this->mageButton->Size = System::Drawing::Size(52, 17);
			this->mageButton->TabIndex = 1;
			this->mageButton->TabStop = true;
			this->mageButton->Text = L"Mage";
			this->mageButton->UseVisualStyleBackColor = true;
			this->mageButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::mageButton_CheckedChanged);
			// 
			// rogueButton
			// 
			this->rogueButton->AutoSize = true;
			this->rogueButton->Location = System::Drawing::Point(106, 9);
			this->rogueButton->Name = L"rogueButton";
			this->rogueButton->Size = System::Drawing::Size(57, 17);
			this->rogueButton->TabIndex = 2;
			this->rogueButton->TabStop = true;
			this->rogueButton->Text = L"Rogue";
			this->rogueButton->UseVisualStyleBackColor = true;
			this->rogueButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::rogueButton_CheckedChanged);
			// 
			// rangerButton
			// 
			this->rangerButton->AutoSize = true;
			this->rangerButton->Location = System::Drawing::Point(227, 11);
			this->rangerButton->Name = L"rangerButton";
			this->rangerButton->Size = System::Drawing::Size(60, 17);
			this->rangerButton->TabIndex = 3;
			this->rangerButton->TabStop = true;
			this->rangerButton->Text = L"Ranger";
			this->rangerButton->UseVisualStyleBackColor = true;
			this->rangerButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::rangerButton_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->subClassBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->warriorButton);
			this->panel1->Controls->Add(this->rangerButton);
			this->panel1->Controls->Add(this->mageButton);
			this->panel1->Controls->Add(this->rogueButton);
			this->panel1->Location = System::Drawing::Point(12, 105);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(295, 122);
			this->panel1->TabIndex = 4;
			// 
			// subClassBox
			// 
			this->subClassBox->AllowUserToAddRows = false;
			this->subClassBox->AllowUserToDeleteRows = false;
			this->subClassBox->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->subClassBox->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column1, 
				this->Column2, this->Column3});
			this->subClassBox->Location = System::Drawing::Point(6, 32);
			this->subClassBox->MultiSelect = false;
			this->subClassBox->Name = L"subClassBox";
			this->subClassBox->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->subClassBox->Size = System::Drawing::Size(281, 85);
			this->subClassBox->TabIndex = 23;
			this->subClassBox->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::subClassBox_CellContentClick);
			this->subClassBox->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::subClassBox_CellValueChanged);
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"SubClass";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 75;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Select";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Description";
			this->Column3->Name = L"Column3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Class";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Character Name";
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(102, 3);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(161, 20);
			this->nameBox->TabIndex = 6;
			// 
			// levelBox
			// 
			this->levelBox->Location = System::Drawing::Point(102, 30);
			this->levelBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {30, 0, 0, 0});
			this->levelBox->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->levelBox->Name = L"levelBox";
			this->levelBox->Size = System::Drawing::Size(45, 20);
			this->levelBox->TabIndex = 7;
			this->levelBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->levelBox->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Level";
			// 
			// cpBox
			// 
			this->cpBox->Location = System::Drawing::Point(102, 55);
			this->cpBox->Name = L"cpBox";
			this->cpBox->Size = System::Drawing::Size(45, 20);
			this->cpBox->TabIndex = 9;
			this->cpBox->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"CP Remaining";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"CP Spent";
			// 
			// cpSpentBox
			// 
			this->cpSpentBox->Location = System::Drawing::Point(102, 79);
			this->cpSpentBox->Name = L"cpSpentBox";
			this->cpSpentBox->Size = System::Drawing::Size(45, 20);
			this->cpSpentBox->TabIndex = 12;
			this->cpSpentBox->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(513, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Total XP";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(480, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"XP to next level";
			// 
			// xpBox
			// 
			this->xpBox->Location = System::Drawing::Point(567, 6);
			this->xpBox->Name = L"xpBox";
			this->xpBox->Size = System::Drawing::Size(45, 20);
			this->xpBox->TabIndex = 15;
			this->xpBox->Text = L"0";
			this->xpBox->TextChanged += gcnew System::EventHandler(this, &Form1::xpBox_TextChanged);
			// 
			// xpNextLevelBox
			// 
			this->xpNextLevelBox->Location = System::Drawing::Point(567, 28);
			this->xpNextLevelBox->Name = L"xpNextLevelBox";
			this->xpNextLevelBox->Size = System::Drawing::Size(45, 20);
			this->xpNextLevelBox->TabIndex = 16;
			this->xpNextLevelBox->Text = L"100";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(539, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"HP";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(539, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"MP";
			// 
			// hpBox
			// 
			this->hpBox->Location = System::Drawing::Point(567, 51);
			this->hpBox->Name = L"hpBox";
			this->hpBox->Size = System::Drawing::Size(45, 20);
			this->hpBox->TabIndex = 19;
			this->hpBox->Text = L"0";
			// 
			// mpBox
			// 
			this->mpBox->Location = System::Drawing::Point(567, 75);
			this->mpBox->Name = L"mpBox";
			this->mpBox->Size = System::Drawing::Size(45, 20);
			this->mpBox->TabIndex = 20;
			this->mpBox->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Armaments";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
			// 
			// armsList
			// 
			this->armsList->FormattingEnabled = true;
			this->armsList->Location = System::Drawing::Point(3, 16);
			this->armsList->Name = L"armsList";
			this->armsList->Size = System::Drawing::Size(284, 79);
			this->armsList->TabIndex = 23;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->armsList);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Location = System::Drawing::Point(12, 233);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(295, 102);
			this->panel2->TabIndex = 25;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->abilitiesList);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Location = System::Drawing::Point(313, 341);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(295, 102);
			this->panel3->TabIndex = 26;
			// 
			// abilitiesList
			// 
			this->abilitiesList->FormattingEnabled = true;
			this->abilitiesList->Location = System::Drawing::Point(3, 16);
			this->abilitiesList->Name = L"abilitiesList";
			this->abilitiesList->Size = System::Drawing::Size(284, 79);
			this->abilitiesList->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(70, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Class Abilities";
			// 
			// profList
			// 
			this->profList->FormattingEnabled = true;
			this->profList->Location = System::Drawing::Point(3, 16);
			this->profList->Name = L"profList";
			this->profList->Size = System::Drawing::Size(284, 79);
			this->profList->TabIndex = 23;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->profList);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Location = System::Drawing::Point(12, 341);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(295, 102);
			this->panel4->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Professions";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->spellList);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Location = System::Drawing::Point(12, 449);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(295, 102);
			this->panel6->TabIndex = 29;
			// 
			// spellList
			// 
			this->spellList->FormattingEnabled = true;
			this->spellList->Location = System::Drawing::Point(3, 16);
			this->spellList->Name = L"spellList";
			this->spellList->Size = System::Drawing::Size(284, 79);
			this->spellList->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Spellbook";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->radioButton8);
			this->panel5->Controls->Add(this->radioButton7);
			this->panel5->Controls->Add(this->radioButton6);
			this->panel5->Controls->Add(this->radioButton5);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->raceList);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->radioButton1);
			this->panel5->Controls->Add(this->radioButton2);
			this->panel5->Controls->Add(this->radioButton3);
			this->panel5->Controls->Add(this->radioButton4);
			this->panel5->Location = System::Drawing::Point(314, 105);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(295, 230);
			this->panel5->TabIndex = 23;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(236, 32);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(47, 17);
			this->radioButton8->TabIndex = 26;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Fairy";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(167, 32);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(63, 17);
			this->radioButton7->TabIndex = 25;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Undead";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(89, 32);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(72, 17);
			this->radioButton6->TabIndex = 24;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Half-Giant";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(41, 32);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(42, 17);
			this->radioButton5->TabIndex = 23;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Orc";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 52);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 13);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Racial Traits";
			// 
			// raceList
			// 
			this->raceList->FormattingEnabled = true;
			this->raceList->Location = System::Drawing::Point(75, 55);
			this->raceList->Name = L"raceList";
			this->raceList->Size = System::Drawing::Size(164, 49);
			this->raceList->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 11);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(33, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Race";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(41, 9);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(53, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Dwarf";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(208, 11);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(60, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Halfling";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(143, 9);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 17);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Human";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(100, 9);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(37, 17);
			this->radioButton4->TabIndex = 2;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Elf";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 590);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->mpBox);
			this->Controls->Add(this->hpBox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->xpNextLevelBox);
			this->Controls->Add(this->xpBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cpSpentBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cpBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->levelBox);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Elibor Character Creator";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->subClassBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->levelBox))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int level;
	public: int XP;
	public: int XPNextLevel;
	public: cliext::vector <int> XPList;
	public: cliext::vector <int> XPNextLevelList;
	public: int CPSpent;
	public: int CPRemaining;
	public: int Class;
	public: int SubClass;
	public: void Initialise()
			{
				SubClass=0;
				CPSpent=0;
				int XPNextarray [30]={100,100,100,200,200,200,300,300,300,500,500,500,800,800,800,1200,1200,1200,2000,2000,2000,3000,3000,3000,5000,5000,5000,5000,5000,5000};
				int XPCumArray [30]={0,100,200,300,500,700,900,1200,1500,1800,2300,2800,3300,4100,4900,5700,6900,8100,9300,11300,13300,15300,18300,21300,24300,29300,34300,39300,44300,49300};
				int i = 0;
				while(i<30)
				{
					XPNextLevelList.push_back(XPNextarray[i]);
					XPList.push_back(XPCumArray[i]);
					i++;
				}
			}
	public: void Update()
			{
				UpdateSubClass();
			}
	public: void SubClassBoxChange()
			{
							 if(subClassBox->CurrentRow)
			 {
				 if(subClassBox->CurrentRow->Cells[1]->Value!= NULL && (bool)subClassBox->CurrentRow->Cells[1]->Value)
				 {
					 SubClass=1+subClassBox->CurrentRow->Index;
				 }
				 else
				 {
					 SubClass=0;
				 }
			hpBox->Text=SubClass.ToString();

			 }
			}
	public: void UpdateSubClass()
			{
				subClassBox->Rows->Clear();
				if(level>=10)
				{
					if(Class==0)
					{
						subClassBox->Rows->Add("Knight");
						subClassBox->Rows->Add("Templar");
						subClassBox->Rows->Add("Bezerker");
					}
					if(Class==1)
					{
						subClassBox->Rows->Add("Thief");
						subClassBox->Rows->Add("Assassin");
						subClassBox->Rows->Add("Pirate");
					}
					if(Class==2)
					{
						subClassBox->Rows->Add("Archer");
						subClassBox->Rows->Add("Scout");
						subClassBox->Rows->Add("Stalker");
					}
					if(Class==3)
					{
						subClassBox->Rows->Add("Warlock");
						subClassBox->Rows->Add("Battlemage");
						
					}

					if(SubClass>0)
					{
					}
				}
			}
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			/* level=(int)levelBox->Value;
			 XP=XPList.at(level-1);
			 XPNextLevel=XPNextLevelList.at(level-1);
			 xpNextLevelBox->Text=XPNextLevel.ToString();
			 xpBox->Text=XP.ToString();*/

		 }
private: System::Void xpBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 XP=System::Convert::ToInt32(xpBox->Text);
			 int i=0;
			 while(i<30)
			 {
				 if(XP<XPList.at(i))
				 {
					 level=i;
					 i=30;
				 }
				 i++;
			 }
			 XPNextLevel=XPList.at(level)-XP;
			 xpNextLevelBox->Text=XPNextLevel.ToString();
			 levelBox->Value=level;
			 CPRemaining=level-CPSpent;
			 cpBox->Text=CPRemaining.ToString();
			 cpSpentBox->Text=CPSpent.ToString();
			 Update();
		 }
private: System::Void warriorButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (warriorButton->Checked){Class=0;}
			 Update();
		 }
private: System::Void rogueButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (rogueButton->Checked){Class=1;}
			 Update();
		 }
private: System::Void mageButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (mageButton->Checked){Class=2;}
			 Update();
		 }
private: System::Void rangerButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (rangerButton->Checked){Class=3;}
			 Update();
		 }

private: System::Void subClassBox_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 SubClassBoxChange();
		 }
private: System::Void subClassBox_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 SubClassBoxChange();
		 }
};
}

