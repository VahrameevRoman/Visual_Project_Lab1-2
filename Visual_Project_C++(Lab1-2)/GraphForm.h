#pragma once

namespace VisualProjectCLab12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ GraphForm
	/// </summary>
	public ref class GraphForm : public System::Windows::Forms::Form
	{
	public:
		GraphForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~GraphForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataVisualization::Charting::Chart^ graph;
	private: System::Windows::Forms::Button^ exitButton;
	public:

	public:
	protected:

	protected:


	private:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->graph = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graph))->BeginInit();
			this->SuspendLayout();
			// 
			// graph
			// 
			chartArea1->Name = L"ChartArea1";
			this->graph->ChartAreas->Add(chartArea1);
			legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			legend1->TitleForeColor = System::Drawing::Color::IndianRed;
			this->graph->Legends->Add(legend1);
			this->graph->Location = System::Drawing::Point(14, 46);
			this->graph->Name = L"graph";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->LegendText = L"F(x)";
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->graph->Series->Add(series1);
			this->graph->Size = System::Drawing::Size(696, 359);
			this->graph->TabIndex = 0;
			this->graph->Text = L"chart";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"√рафик функции F(x)";
			this->graph->Titles->Add(title1);
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::Color::Red;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitButton->ForeColor = System::Drawing::Color::White;
			this->exitButton->Location = System::Drawing::Point(675, 3);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(35, 37);
			this->exitButton->TabIndex = 1;
			this->exitButton->Text = L"X";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &GraphForm::button1_Click);
			// 
			// GraphForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 420);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->graph);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GraphForm";
			this->Text = L"GraphForm";
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphForm::GraphForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graph))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
	}

private: System::Drawing::Point lastPoint;
private: System::Void GraphForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Left += e->X - lastPoint.X;
		this->Top += e->Y - lastPoint.Y;
	}
}
};
}
