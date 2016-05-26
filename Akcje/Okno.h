#pragma once
#include <list>
#include "obliczenie.h"
using namespace std;


namespace Akcje {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Okno
	/// </summary>
	public ref class Okno : public System::Windows::Forms::Form
	{
	public:
		Okno(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Okno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  wygeneruj;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;




















































	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->wygeneruj = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea8->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->chart1->Legends->Add(legend8);
			this->chart1->Location = System::Drawing::Point(63, 32);
			this->chart1->Name = L"chart1";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Legend = L"Legend1";
			series8->Name = L"cena";
			this->chart1->Series->Add(series8);
			this->chart1->Size = System::Drawing::Size(556, 396);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Okno::chart1_Click);
			// 
			// wygeneruj
			// 
			this->wygeneruj->Location = System::Drawing::Point(63, 434);
			this->wygeneruj->Name = L"wygeneruj";
			this->wygeneruj->Size = System::Drawing::Size(130, 31);
			this->wygeneruj->TabIndex = 1;
			this->wygeneruj->Text = L"wygeneruj\r\n\r\n";
			this->wygeneruj->UseVisualStyleBackColor = true;
			this->wygeneruj->Click += gcnew System::EventHandler(this, &Okno::wygeneruj_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column11,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9,
					this->Column10
			});
			this->dataGridView1->Location = System::Drawing::Point(63, 501);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1084, 150);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Okno::dataGridView1_CellContentClick);
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"k";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 50;
			// 
			// Column1
			// 
			this->Column1->DividerWidth = 2;
			this->Column1->HeaderText = L"1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"3";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"4";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"5";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"6";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"7";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"8";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"9";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"10";
			this->Column10->Name = L"Column10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(339, 478);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(559, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Wartoœci empirycznej funkcji autokorelacji analizowanego szeregu czasowego ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Okno::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(141, 663);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(297, 40);
			this->label2->TabIndex = 4;
			this->label2->Text = L"r - estymator funkcji autokorelacji \r\ns - b³¹d standardowy funkcji autokorelacji";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(224, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(316, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Wykres analizowanego szeregu czasowego";
			// 
			// Okno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1378, 944);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->wygeneruj);
			this->Controls->Add(this->chart1);
			this->MinimumSize = System::Drawing::Size(1400, 1000);
			this->Name = L"Okno";
			this->Text = L"Okno";
			this->Load += gcnew System::EventHandler(this, &Okno::Okno_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Okno_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 int i = 1;
	private: System::Void wygeneruj_Click(System::Object^  sender, System::EventArgs^  e) {
		for (vector<double>::iterator it = dane.begin()+1; it != dane.end(); it++) {
			this->chart1->Series["cena"]->Points->AddXY(i, *it);
			i++;
		}
		this->dataGridView1->Rows->Add();
		this->dataGridView1->Rows[0]->SetValues("r",autokorelacja[0], autokorelacja[1], autokorelacja[2], autokorelacja[3], autokorelacja[4], 
												autokorelacja[5], autokorelacja[6], autokorelacja[7], autokorelacja[8], autokorelacja[9]);
		this->dataGridView1->Rows[1]->SetValues("s",bladstandardowy[0], bladstandardowy[1], bladstandardowy[2], bladstandardowy[3], bladstandardowy[4],
												bladstandardowy[5], bladstandardowy[6], bladstandardowy[7], bladstandardowy[8], bladstandardowy[9]);
	
	}
			 private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 }
	
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
