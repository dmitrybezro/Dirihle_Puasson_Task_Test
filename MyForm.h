#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::DataGridView^ dataGridView2;






	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(928, 338);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(807, 47);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Число разбиений по X";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1055, 45);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 28);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"20";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(807, 115);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Число разбиений по Y";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1055, 115);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 28);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"20";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(817, 249);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Точность метода";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(1055, 249);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 28);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,00000001";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1055, 181);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(99, 28);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1000";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(807, 181);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 52);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Максимальное число \r\n             шагов";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(25, 47);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(749, 565);
			this->dataGridView2->TabIndex = 14;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 668);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа №3. Тестовая задача";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double func(double _x, double _y) {
			return pow(M_PI, 2) * sin(M_PI * _x * _y) * (pow(_y, 2) + pow(_x, 2));
		}

		double func2(double _x, double _y) {
			return sin(M_PI * _x * _y);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//  Число разбиений по X и по Y
		double number_x = Convert::ToDouble(textBox1->Text);
		double number_y = Convert::ToDouble(textBox2->Text);

		//  Максимальное число шагов
		double Nmax = Convert::ToDouble(textBox4->Text);

		//  Точность метода
		double eps = Convert::ToDouble(textBox3->Text);

		//  Число итераций метода
		int Step = 0;

		//  Границы прямоугольника
		double a = 1, b = 2;
		double c = 2, d = 3;

		//  Шаги
		double h = (b - a) / number_x;
		double k = (d - c) / number_y;

		//  Параметры шаблона сетки
		double param_x = 1 / pow(h, 2);
		double param_y = 1 / pow(k, 2);
		double A_p = -2 * (param_x + param_y);

		vector<double> x(number_x + 1);
		vector<double> y(number_y + 1);
		for (int i = 0; i < x.size(); i++) {
			x[i] = a + i * h;
		}

		for (int i = 0; i < y.size(); i++) {
			y[i] = c + i * k;
		}

		vector<vector<double>> Main_Grid(number_y + 1);
		for (int i = 0; i < number_y + 1; i++) {
			Main_Grid[i] = vector<double>(number_x + 1, 0);
		}

		//  Заполнение граничных условий
			//  Левая граница
		for (int i = 0; i < number_y + 1; i++) {
			if (sin(a * y[i] * M_PI) > 0) {
				Main_Grid[i][0] = floor(sin(a * y[i] * M_PI) * 10000) / 10000;
			}
			else {
				Main_Grid[i][0] = ceil(sin(a * y[i] * M_PI) * 10000) / 10000;
			}

		}


		//  Правая граница
		for (int i = 0; i < number_y + 1; i++) {
			if (sin(b * y[i] * M_PI) > 0) {
				Main_Grid[i][number_x] = floor(sin(b * y[i] * M_PI) * 10000) / 10000;
			}
			else {
				Main_Grid[i][number_x] = ceil(sin(b * y[i] * M_PI) * 10000) / 10000;
			}
		}

		//  Нижняя граница
		for (int i = 1; i < number_x; i++) {
			if (sin(M_PI * x[i] * c) > 0) {
				Main_Grid[0][i] = floor(sin(M_PI * x[i] * c) * 10000) / 10000;
			}
			else {
				Main_Grid[0][i] = ceil(sin(M_PI * x[i] * c) * 10000) / 10000;
			}
		}

		//  Верхняя граница
		for (int i = 1; i < number_x; i++) {
			if (sin(M_PI * x[i] * d) > 0) {
				Main_Grid[number_y][i] = floor(sin(M_PI * x[i] * d) * 10000) / 10000;
			}
			else {
				Main_Grid[number_y][i] = ceil(sin(M_PI * x[i] * d) * 10000) / 10000;
			}
		}


		//  Матрица коэффициентов при неизвестных 
		vector<vector<double>> A((number_x - 1) * (number_y - 1));

		for (int i = 0; i < A.size(); i++) {
			A[i] = vector<double>((number_x - 1) * (number_y - 1), 0);
		}

		//  вектор свободныых членов
		vector<double> F((number_y - 1) * (number_x - 1), 0);

		for (int i = 1, row = 0; i < number_y; i++) {
			for (int j = 1; j < number_x; j++, row++) {

				bool flag = true;

				if (j == 1) {  //  Сразу после левой границы

					//  Просто левая граница
					A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
					F[row] = -func(x[j], y[i]);
					F[row] -= param_x * Main_Grid[i][j - 1];
					A[row][(i - 1) * (number_x - 1) + j + 1 - 1] = param_x;

					//  Нижняя левая точка
					if (i == 1) {
						A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
						F[row] -= param_y * Main_Grid[i - 1][j];

					}
					else {
						//  Верхняя левая точка
						if (i == number_y - 1) {
							A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
							F[row] -= param_y * Main_Grid[i + 1][j];
						}
						else {
							A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
							A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
						}
					}



					flag = false;
				}

				if (j == (number_x - 1)) {  //  Сразу перед правой границей
					//  Просто левая граница
					A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
					F[row] = -func(x[j], y[i]);
					F[row] -= param_x * Main_Grid[i][j + 1];
					A[row][(i - 1) * (number_x - 1) + j - 1 - 1] = param_x;

					//  Нижняя левая точка
					if (i == 1) {
						A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
						F[row] -= param_y * Main_Grid[i - 1][j];
					}
					else {
						//  Верхняя левая точка
						if (i == number_y - 1) {
							A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
							F[row] -= param_y * Main_Grid[i + 1][j];
						}
						else {
							A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
							A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
						}
					}


					flag = false;
				}

				if ((i == 1) && ((j > 1) && (j < number_x - 1))) {
					A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
					F[row] = -func(x[j], y[i]);
					F[row] -= param_y * Main_Grid[i - 1][j];
					A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
					A[row][(i - 1) * (number_x - 1) + j - 1 - 1] = param_x;
					A[row][(i - 1) * (number_x - 1) + j + 1 - 1] = param_x;
					flag = false;
				}

				if ((i == (number_y - 1)) && ((j > 1) && (j < number_x - 1))) {
					A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
					F[row] = -func(x[j], y[i]);
					F[row] -= param_y * Main_Grid[i + 1][j];
					A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
					A[row][(i - 1) * (number_x - 1) + j - 1 - 1] = param_x;
					A[row][(i - 1) * (number_x - 1) + j + 1 - 1] = param_x;
					flag = false;

				}

				if (flag) {
					A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
					A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
					A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
					A[row][(i - 1) * (number_x - 1) + j + 1 - 1] = param_x;
					A[row][(i - 1) * (number_x - 1) + j - 1 - 1] = param_x;
					F[row] = -func(x[j], y[i]);
				}
			}
		}

		//  Согласно теоретическому методу
		for (int i = 0; i < (number_y - 1) * (number_x - 1); i++) {
			for (int j = 0; j < (number_y - 1) * (number_x - 1); j++) {
				A[i][j] = -A[i][j];
			}
		}

		for (int i = 0; i < F.size(); i++) {
			F[i] = -F[i];
		}


		double max = 0.0;
		double eps_max = 0.0; // текущее значение прироста
		double eps_cur = 0.0; // для подсчета текущего значения прироста
		int n = (number_x - 1) * (number_y - 1); //размерность системы линейных уравнений
		vector<double> V(n, 0); // искомый вектор x
		vector<double> U(n, 0);
		int i, j; //индексы
		double v_old; // старое значение преобразуемой компоненты вектора x
		double v_new; // новое значение преобразуемой компоненты вектора x
		bool f = false; // условие остановки
		while (!f) {
			eps_max = 0.0;
			for (i = 0; i < n; i++) {
				v_old = V[i];
				v_new = F[i];
				for (j = 0; j < n; j++)
					if (j != i) {
						v_new -= A[i][j] * V[j];
					}
				v_new /= A[i][i];
				eps_cur = fabs(v_old - v_new);
				if (eps_cur > eps_max) {
					eps_max = eps_cur;
				}
				V[i] = v_new;				
			}
			Step++;
			if ((eps_max < eps) || (Step >= Nmax)) {
				f = true;
			}


		}
		for (int i = 1, m=0; i < number_y; i++) {
			for (int j = 1; j < number_x; j++, m++) {
				U[m] = func2(x[j], y[i]);
			}
		}

		for (int i = 0; i < V.size(); i++) {
			double tmp = fabs(V[i] - U[i]);
			if (tmp > max) {
				max = tmp;
			}
		}
		for (int i = 1, m = 0; i < number_y; i++) {
			for (int j = 1; j < number_x; j++, m++) {
				Main_Grid[i][j] = V[m];
			}
		}
		//  Сощдаем таблицу
		dataGridView2->RowCount = number_y + 2;
		dataGridView2->ColumnCount = number_x + 3;

		//  Уберем заголовки строк
		dataGridView2->RowHeadersVisible = false;

		//  Меняем цвет строки и столбца, где лежат исходные x и у
		 dataGridView2->Rows[0]->DefaultCellStyle->BackColor = Color::CornflowerBlue;
		 for (int i = 1; i < number_y + 2; i++) {
				 dataGridView2->Rows[i]->Cells[1]->Style->BackColor = Color::CornflowerBlue;
		 }
		 dataGridView2->Rows[0]->Cells[0]->Style->BackColor = Color::White;

		//  Заполняем заголовки таблицы
		for (int i = number_x, col = 2; i >= 0; i--, col++) {
			dataGridView2->Columns[col]->HeaderText = Convert::ToString(number_x - i);
			dataGridView2->Rows[0]->Cells[i + 2]->Value = floor(x[i] * 1000) / 1000;
		}

		for (int i = number_y, row =1; i >=0; i--, row++) {
			dataGridView2->Rows[row]->Cells[0]->Value = i;
			dataGridView2->Rows[row]->Cells[1]->Value = floor(y[i] * 1000)/ 1000;
		}

		dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView2->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView2->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");

		//  Основное заполнение таблицы
		for (int i = number_y + 1, k = 0; i > 0; i--, k++) {
			for (int j = 2, p = 0; j < number_x + 3; j++, p++) {
				dataGridView2->Rows[i]->Cells[j]->Value = floor(Main_Grid[k][p] * 1000)/1000;
			}
		}
		
		System::Windows::Forms::MessageBox::Show(
			"Тестовая задача решалась методом Зейделя \nна сетке размером (" + Convert::ToString(number_x) + ", " + Convert::ToString(number_y)+ ").\n"
			+ "\nЧисло выполненных итераций метода = " + Convert::ToString(Step) + "\n\nДостигнутая погрешность = " + Convert::ToString(eps_max)
			+ "\nпри заданной погрешности метода " + Convert::ToString(eps) +
			"\n Задача решена с точность " + Convert::ToString(max),
			"Выходные данные",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1);



	};
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	};

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
