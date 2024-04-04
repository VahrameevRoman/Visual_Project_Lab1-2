#pragma once
#include "GraphForm.h"

namespace VisualProjectCLab12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;  //для ввода/вывода 
	using namespace System::Text;

	double GetF(double a, double b, double c, double x);
	void MessageShow();

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public: GraphForm^ graphForm = gcnew GraphForm();

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ aBox;
	private: System::Windows::Forms::TextBox^ bBox;
	private: System::Windows::Forms::TextBox^ cBox;
	private: System::Windows::Forms::TextBox^ xBox;
	private: System::Windows::Forms::TextBox^ xBeginBox;
	private: System::Windows::Forms::TextBox^ xEndBox;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ очиститьПоляToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обАвтореToolStripMenuItem;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButtonCalculationInterval;

	private: System::Windows::Forms::RadioButton^ radioButtonCalculationPoint;


	private: System::Windows::Forms::ToolStripMenuItem^ таблицаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ построитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветТекстаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ параметрыШрифтаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ графикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ построитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ цветЛинииToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ параметрыШрифтаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ цветТекстаToolStripMenuItem1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ xColomn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FColomn;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::ComponentModel::IContainer^ components;

	protected:
	private: 
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->aBox = (gcnew System::Windows::Forms::TextBox());
			this->bBox = (gcnew System::Windows::Forms::TextBox());
			this->cBox = (gcnew System::Windows::Forms::TextBox());
			this->xBox = (gcnew System::Windows::Forms::TextBox());
			this->xBeginBox = (gcnew System::Windows::Forms::TextBox());
			this->xEndBox = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->таблицаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->построитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветТекстаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->параметрыШрифтаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->графикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->построитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветЛинииToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->параметрыШрифтаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветТекстаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьПоляToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обАвтореToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonCalculationInterval = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCalculationPoint = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->xColomn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FColomn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 117);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 206);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"a = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(252, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите переменные:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 33);
			this->label3->TabIndex = 3;
			this->label3->Text = L"b = ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 33);
			this->label4->TabIndex = 4;
			this->label4->Text = L"c = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(8, 344);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 33);
			this->label5->TabIndex = 5;
			this->label5->Text = L"x = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 390);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 33);
			this->label6->TabIndex = 6;
			this->label6->Text = L"x(нач) = ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(3, 436);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 33);
			this->label7->TabIndex = 7;
			this->label7->Text = L"x(кон) = ";
			// 
			// aBox
			// 
			this->aBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->aBox->Location = System::Drawing::Point(82, 203);
			this->aBox->Name = L"aBox";
			this->aBox->Size = System::Drawing::Size(176, 40);
			this->aBox->TabIndex = 8;
			// 
			// bBox
			// 
			this->bBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bBox->Location = System::Drawing::Point(83, 249);
			this->bBox->Name = L"bBox";
			this->bBox->Size = System::Drawing::Size(176, 40);
			this->bBox->TabIndex = 9;
			// 
			// cBox
			// 
			this->cBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->cBox->Location = System::Drawing::Point(82, 295);
			this->cBox->Name = L"cBox";
			this->cBox->Size = System::Drawing::Size(176, 40);
			this->cBox->TabIndex = 10;
			// 
			// xBox
			// 
			this->xBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->xBox->Location = System::Drawing::Point(83, 341);
			this->xBox->Name = L"xBox";
			this->xBox->Size = System::Drawing::Size(176, 40);
			this->xBox->TabIndex = 11;
			// 
			// xBeginBox
			// 
			this->xBeginBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->xBeginBox->Location = System::Drawing::Point(143, 387);
			this->xBeginBox->Name = L"xBeginBox";
			this->xBeginBox->Size = System::Drawing::Size(115, 40);
			this->xBeginBox->TabIndex = 12;
			// 
			// xEndBox
			// 
			this->xEndBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->xEndBox->Location = System::Drawing::Point(143, 433);
			this->xEndBox->Name = L"xEndBox";
			this->xEndBox->Size = System::Drawing::Size(115, 40);
			this->xEndBox->TabIndex = 13;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->таблицаToolStripMenuItem,
					this->графикToolStripMenuItem, this->очиститьПоляToolStripMenuItem, this->обАвтореToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1140, 33);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// таблицаToolStripMenuItem
			// 
			this->таблицаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->построитьToolStripMenuItem,
					this->цветТекстаToolStripMenuItem, this->параметрыШрифтаToolStripMenuItem, this->сохранитьToolStripMenuItem
			});
			this->таблицаToolStripMenuItem->Name = L"таблицаToolStripMenuItem";
			this->таблицаToolStripMenuItem->Size = System::Drawing::Size(97, 29);
			this->таблицаToolStripMenuItem->Text = L"Таблица";
			// 
			// построитьToolStripMenuItem
			// 
			this->построитьToolStripMenuItem->Name = L"построитьToolStripMenuItem";
			this->построитьToolStripMenuItem->Size = System::Drawing::Size(257, 30);
			this->построитьToolStripMenuItem->Text = L"Построить";
			this->построитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::построитьToolStripMenuItem_Click);
			// 
			// цветТекстаToolStripMenuItem
			// 
			this->цветТекстаToolStripMenuItem->Name = L"цветТекстаToolStripMenuItem";
			this->цветТекстаToolStripMenuItem->Size = System::Drawing::Size(257, 30);
			this->цветТекстаToolStripMenuItem->Text = L"Цвет текста";
			this->цветТекстаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::цветТекстаToolStripMenuItem_Click);
			// 
			// параметрыШрифтаToolStripMenuItem
			// 
			this->параметрыШрифтаToolStripMenuItem->Name = L"параметрыШрифтаToolStripMenuItem";
			this->параметрыШрифтаToolStripMenuItem->Size = System::Drawing::Size(257, 30);
			this->параметрыШрифтаToolStripMenuItem->Text = L"Параметры шрифта";
			this->параметрыШрифтаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::параметрыШрифтаToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(257, 30);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::сохранитьToolStripMenuItem_Click);
			// 
			// графикToolStripMenuItem
			// 
			this->графикToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->построитьToolStripMenuItem1,
					this->цветЛинииToolStripMenuItem, this->параметрыШрифтаToolStripMenuItem1, this->цветТекстаToolStripMenuItem1
			});
			this->графикToolStripMenuItem->Name = L"графикToolStripMenuItem";
			this->графикToolStripMenuItem->Size = System::Drawing::Size(87, 29);
			this->графикToolStripMenuItem->Text = L"График";
			// 
			// построитьToolStripMenuItem1
			// 
			this->построитьToolStripMenuItem1->Name = L"построитьToolStripMenuItem1";
			this->построитьToolStripMenuItem1->Size = System::Drawing::Size(345, 30);
			this->построитьToolStripMenuItem1->Text = L"Построить в новом окне";
			this->построитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::построитьToolStripMenuItem1_Click);
			// 
			// цветЛинииToolStripMenuItem
			// 
			this->цветЛинииToolStripMenuItem->Name = L"цветЛинииToolStripMenuItem";
			this->цветЛинииToolStripMenuItem->Size = System::Drawing::Size(345, 30);
			this->цветЛинииToolStripMenuItem->Text = L"Цвет линии";
			this->цветЛинииToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::цветЛинииToolStripMenuItem_Click);
			// 
			// параметрыШрифтаToolStripMenuItem1
			// 
			this->параметрыШрифтаToolStripMenuItem1->Name = L"параметрыШрифтаToolStripMenuItem1";
			this->параметрыШрифтаToolStripMenuItem1->Size = System::Drawing::Size(345, 30);
			this->параметрыШрифтаToolStripMenuItem1->Text = L"Параметры шрифта надписей";
			this->параметрыШрифтаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::параметрыШрифтаToolStripMenuItem1_Click);
			// 
			// цветТекстаToolStripMenuItem1
			// 
			this->цветТекстаToolStripMenuItem1->Name = L"цветТекстаToolStripMenuItem1";
			this->цветТекстаToolStripMenuItem1->Size = System::Drawing::Size(345, 30);
			this->цветТекстаToolStripMenuItem1->Text = L"Цвет текста надписей";
			this->цветТекстаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::цветТекстаToolStripMenuItem1_Click);
			// 
			// очиститьПоляToolStripMenuItem
			// 
			this->очиститьПоляToolStripMenuItem->Name = L"очиститьПоляToolStripMenuItem";
			this->очиститьПоляToolStripMenuItem->Size = System::Drawing::Size(153, 29);
			this->очиститьПоляToolStripMenuItem->Text = L"Очистить поля";
			this->очиститьПоляToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::очиститьПоляToolStripMenuItem_Click);
			// 
			// обАвтореToolStripMenuItem
			// 
			this->обАвтореToolStripMenuItem->Name = L"обАвтореToolStripMenuItem";
			this->обАвтореToolStripMenuItem->Size = System::Drawing::Size(114, 29);
			this->обАвтореToolStripMenuItem->Text = L"Об авторе";
			this->обАвтореToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::обАвтореToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonCalculationInterval);
			this->groupBox1->Controls->Add(this->radioButtonCalculationPoint);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(9, 488);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(429, 90);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выберите:";
			// 
			// radioButtonCalculationInterval
			// 
			this->radioButtonCalculationInterval->AutoSize = true;
			this->radioButtonCalculationInterval->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButtonCalculationInterval->Location = System::Drawing::Point(6, 55);
			this->radioButtonCalculationInterval->Name = L"radioButtonCalculationInterval";
			this->radioButtonCalculationInterval->Size = System::Drawing::Size(414, 24);
			this->radioButtonCalculationInterval->TabIndex = 1;
			this->radioButtonCalculationInterval->TabStop = true;
			this->radioButtonCalculationInterval->Text = L"Вычисление значения функции на интервале";
			this->radioButtonCalculationInterval->UseVisualStyleBackColor = true;
			// 
			// radioButtonCalculationPoint
			// 
			this->radioButtonCalculationPoint->AutoSize = true;
			this->radioButtonCalculationPoint->Checked = true;
			this->radioButtonCalculationPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButtonCalculationPoint->Location = System::Drawing::Point(6, 25);
			this->radioButtonCalculationPoint->Name = L"radioButtonCalculationPoint";
			this->radioButtonCalculationPoint->Size = System::Drawing::Size(362, 24);
			this->radioButtonCalculationPoint->TabIndex = 0;
			this->radioButtonCalculationPoint->TabStop = true;
			this->radioButtonCalculationPoint->Text = L"Вычисление значения функции в точке";
			this->radioButtonCalculationPoint->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->xColomn,
					this->FColomn
			});
			this->dataGridView1->Location = System::Drawing::Point(529, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(371, 417);
			this->dataGridView1->TabIndex = 18;
			// 
			// xColomn
			// 
			this->xColomn->HeaderText = L"x";
			this->xColomn->Name = L"xColomn";
			// 
			// FColomn
			// 
			this->FColomn->HeaderText = L"F";
			this->FColomn->Name = L"FColomn";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1140, 596);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->xEndBox);
			this->Controls->Add(this->xBeginBox);
			this->Controls->Add(this->xBox);
			this->Controls->Add(this->cBox);
			this->Controls->Add(this->bBox);
			this->Controls->Add(this->aBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Визуальное программирование_Вахрамеев_Вариант 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void обАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(
		"Автор: Вахрамеев Роман Алексеевич. Группа ИСТ-21.",
		"Об авторе");
}
private: System::Void очиститьПоляToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->aBox->Text = "";
	this->bBox->Text = "";
	this->cBox->Text = "";
	this->xBox->Text = "";
	this->xBeginBox->Text = "";
	this->xEndBox->Text = "";
}
private: System::Void построитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->radioButtonCalculationPoint->Checked == true) //при расчёте в точке
	{
		if (this->aBox->Text == "" || //проверка на введённое значение для расчёта в точке
			this->bBox->Text == "" ||
			this->cBox->Text == "" ||
			this->xBox->Text == "")
		{
			MessageShow();
			return;
		}
		else //рассчитываем в точке
		{
			//изначально очищаем таблицу
			this->dataGridView1->Rows->Clear();
			this->dataGridView1->Refresh();

			double a = System::Convert::ToDouble(this->aBox->Text);
			double b = System::Convert::ToDouble(this->bBox->Text);
			double c = System::Convert::ToDouble(this->cBox->Text);
			double x = System::Convert::ToDouble(this->xBox->Text);

			if ((x < -5) && (c == 0) && (a == 0))
			{
				MessageShow();
				return;
			}
			else if ((c != 0) && (x == 0))
			{
				MessageShow();
				return;
			}
			else if ((c == 4) && (x <= -5))
			{
				MessageShow();
				return;
			}
			double f = GetF(a, b, c, x);
			this->dataGridView1->Rows->Add(x, f);
		}
	}
	else if (this->radioButtonCalculationInterval->Checked == true) //при расчёте на интервале
	{
		if (this->aBox->Text == "" || // проверка для расчёта на введенное значение на интервале
			this->bBox->Text == "" ||
			this->cBox->Text == "" ||
			this->xBeginBox->Text == "" ||
			this->xEndBox->Text == "")
		{
			MessageShow();
			return;
		}
		else //рассчитываем на интервале
		{
			//изначально очищаем таблицу
			this->dataGridView1->Rows->Clear();
			this->dataGridView1->Refresh();

			double a = System::Convert::ToDouble(this->aBox->Text);
			double b = System::Convert::ToDouble(this->bBox->Text);
			double c = System::Convert::ToDouble(this->cBox->Text);
			double xBegin = System::Convert::ToDouble(this->xBeginBox->Text);
			double xEnd = System::Convert::ToDouble(this->xEndBox->Text);

			if ((xEnd < -5) && (c == 0) && (a == 0))
			{
				MessageShow();
				return;
			}
			else if ((c != 0) && (xBegin <= 0) && (xEnd >= 0))
			{
				MessageShow();
				return;
			}
			else if ((c == 4) && (xBegin <= -5))
			{
				MessageShow();
				return;
			}

			int amountDivisions = 10;//количество делений
			double step = (xEnd - xBegin) / amountDivisions;
			for (int i = 0; i < amountDivisions+1; i++)
			{
				double x = xBegin + step*i;
				double f = GetF(a, b, c, x);
				this->dataGridView1->Rows->Add(x, f);
			}
		}
	}

}
private: System::Void параметрыШрифтаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->fontDialog1->ShowDialog();
	this->dataGridView1->Font = fontDialog1->Font;
}

private: System::Void цветТекстаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->colorDialog1->ShowDialog();
	this->dataGridView1->ForeColor = colorDialog1->Color;
}

	   void SaveToFile(String^ File, DataGridView^ dgw1)
	   {
		   String^ a, ^ b;
		   File::Delete(File);
		   int rowCount = dgw1->RowCount;
		   int columnCount = dgw1->ColumnCount;

		   for (int i = 0; i < rowCount-1; i++)
		   {
			   for (int j = 0; j < columnCount; j++)
			   {
				   a = dgw1->Rows[i]->Cells[j]->Value->ToString();
				   b += a->Concat(a, "\t");
			   }
			   b += "\n";
		   }
		   File::AppendAllText(File, b);
	   }

private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	this->saveFileDialog1->ShowDialog();
	String ^a = saveFileDialog1->FileName;
	SaveToFile(a, dataGridView1);
}
private: System::Void построитьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (this->aBox->Text == "" || // проверка для расчёта на интервале
		this->bBox->Text == "" ||
		this->cBox->Text == "" ||
		this->xBeginBox->Text == "" ||
		this->xEndBox->Text == "")
	{
		MessageShow();
		return;
	}
	else 
	{

		double a = System::Convert::ToDouble(this->aBox->Text);
		double b = System::Convert::ToDouble(this->bBox->Text);
		double c = System::Convert::ToDouble(this->cBox->Text);
		double xBegin = System::Convert::ToDouble(this->xBeginBox->Text);
		double xEnd = System::Convert::ToDouble(this->xEndBox->Text);

		if ((xEnd < -5) && (c == 0) && (a == 0))
		{
			MessageShow();
			return;
		}
		else if ((c != 0) && (xBegin <= 0) && (xEnd >= 0))
		{
			MessageShow();
			return;
		}
		else if ((c == 4) && (xBegin <= -5))
		{
			MessageShow();
			return;
		}

		int amountDivisions = 10;
		double step = (xEnd - xBegin) / amountDivisions;
		
		//открываем форму с таблицей
		graphForm->Show();
		graphForm->graph->Series[0]->Points->Clear();

		
		for (int i = 0; i < amountDivisions + 1; i++)
		{
			double x = xBegin + step * i;
			double f = GetF(a, b, c, x);
			graphForm->graph->Series[0]->Points->AddXY(x, f);
		}
	}
}
private: System::Void цветЛинииToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->colorDialog1->ShowDialog();
	graphForm->graph->Series[0]->Color = colorDialog1->Color;
}
private: System::Void параметрыШрифтаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->fontDialog1->ShowDialog();
	graphForm->graph->Titles[0]->Font = fontDialog1->Font;
}
private: System::Void цветТекстаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->colorDialog1->ShowDialog();
	graphForm->graph->Titles[0]->ForeColor = colorDialog1->Color;
}
};

double GetF(double a, double b, double c, double x)
{
	double f;
	if (x < -5 && c == 0)
	{
		f = (1 / (a * x)) - b;
	}
	else if (x > -5 && c != 0)
	{
		f = (x - a) / x;
	}
	else f = ((10 * x) / (c - 4));
	return f;
}
void MessageShow()
{
	MessageBox::Show(
		"Введены некорректные значения. Введите корректные значения переменных и повторите действие",
		"Ошибка",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}

}
