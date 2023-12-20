#pragma once
#include <cmath>
namespace groupProject {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		String^ selectedFilePath;
	public:
		MyForm(void)
		{
			InitializeComponent();
			openFileDialog1 = gcnew System::Windows::Forms::OpenFileDialog();
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
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>



		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(248, 470);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Метод 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(460, 470);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Метод 3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(21, 508);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 27);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Про авторів";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Silver;
			this->pictureBox1->Location = System::Drawing::Point(21, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(749, 383);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(21, 541);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(123, 24);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Про програму";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(351, 470);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 52);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Метод 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(655, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 48);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Вибрати файл";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(680, 540);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 33);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Зберегти";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(248, 527);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 45);
			this->button8->TabIndex = 13;
			this->button8->Text = L"Колірна схема 1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(351, 528);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 45);
			this->button9->TabIndex = 14;
			this->button9->Text = L"Колірна схема 2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(460, 528);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 45);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Колірна схема 3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(790, 584);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Drawing::Bitmap^ selectedImage;
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			selectedFilePath = openFileDialog1->FileName;
			pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
			pictureBox1->Image = Image::FromFile(selectedFilePath);
		}

	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Image == nullptr) {
			MessageBox::Show("Виберіть зображення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Bitmap^ bitMap1 = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ bitMap2 = gcnew Bitmap(bitMap1);

		int w = bitMap2->Width;
		int h = bitMap2->Height;

		for (int x = 0; x < w; x++) {
			for (int y = 0; y < h; y++) {
				unsigned char red = y / (h / 255.);
				unsigned char green = x / (w / 255.);
				unsigned char blue = tan(x + y);



				Color pixelColor = Color::FromArgb(red, green, blue);
				bitMap2->SetPixel(x, y, pixelColor);
			}
		}
		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->Image = bitMap2;
		delete bitMap1;
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Image == nullptr) {
			MessageBox::Show("Виберіть зображення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Bitmap^ bitMap1 = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ bitMap2 = gcnew Bitmap(bitMap1);

		int w = bitMap1->Width;
		int h = bitMap1->Height;

		for (int x = 0; x < w; x++) {
			for (int y = 0; y < h; y++) {
				unsigned char red = tan(x * y);
				unsigned char blue = x * x / (w / 255.) / 4 + y / (h / 255.);
				unsigned char green = y / (h / 255.);				

				Color pixelColor = Color::FromArgb(red, green, blue);
				bitMap2->SetPixel(x, y, pixelColor);
			}
		}

		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->Image = bitMap2;
		delete bitMap1;
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Image == nullptr) {
			MessageBox::Show("Виберіть зображення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Bitmap^ bitMap1 = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ bitMap2 = gcnew Bitmap(bitMap1);

		int w = bitMap1->Width;
		int h = bitMap1->Height;

		for (int x = 0; x < w; x++) {
			for (int y = 0; y < h; y++) {
				unsigned char red = x / (w / 255.);
				unsigned char blue = sin(y) * cos(x) * h / 2;
				unsigned char green = 255 - sqrt(x * y);

				Color pixelColor = Color::FromArgb(red, green, blue);
				bitMap2->SetPixel(x, y, pixelColor);
			}
		}

		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->Image = bitMap2;
		delete bitMap1;
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Завдання виконали студенти групи ІСТ-21 Рудка Артем, Федик Юрій і Гутовський Юрій", "Info");
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Програма дає змогу користувачеві вибрати зображення в форматі bmp і створити нове зображення, використавши шапку оригіального файлу", "Helper");
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Image == nullptr) {
			MessageBox::Show("Виберіть зображення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
		saveDialog->Filter = "Bitmap Image|*.bmp";
		saveDialog->Title = "Зберегти зображення як...";

		if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			String^ filePath = saveDialog->FileName;
			pictureBox1->Image->Save(filePath, System::Drawing::Imaging::ImageFormat::Bmp);

			MessageBox::Show("Зображення збережено.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Image == nullptr) {
			MessageBox::Show("Виберіть зображення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		Bitmap^ colorScheme = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ newScheme = gcnew Bitmap(colorScheme);

		for (int y = 0; y < colorScheme->Height; y++) {
			for (int x = 0; x < colorScheme->Width; x++) {
				Color pixelColor = colorScheme->GetPixel(x, y);

				unsigned char red = 255 - pixelColor.R;
				unsigned char green = 255 - pixelColor.G;
				unsigned char blue = 255 - pixelColor.B;

				Color newColor = Color::FromArgb(red, green, blue);
				newScheme->SetPixel(x, y, newColor);
			}
		}

		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->Image = newScheme;
		delete colorScheme;

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Image == nullptr) {
			MessageBox::Show("Виберіть зображення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		Bitmap^ colorScheme = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ newScheme = gcnew Bitmap(colorScheme);

		for (int y = 0; y < colorScheme->Height; y++) {
			for (int x = 0; x < colorScheme->Width; x++) {
				Color pixelColor = colorScheme->GetPixel(x, y);

				unsigned char red = fmin(255, pixelColor.R * 1.3);
				unsigned char green = fmin(255, pixelColor.G * 1.3);
				unsigned char blue = fmin(255, pixelColor.B * 1.3);

				Color newColor = Color::FromArgb(red, green, blue);
				newScheme->SetPixel(x, y, newColor);
			}
		}

		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->Image = newScheme;
		delete colorScheme;


	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Image == nullptr) {
			MessageBox::Show("Виберіть зображення", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		Bitmap^ colorScheme = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ newScheme = gcnew Bitmap(colorScheme);

		for (int y = 0; y < colorScheme->Height; y++) {
			for (int x = 0; x < colorScheme->Width; x++) {
				Color pixelColor = colorScheme->GetPixel(x, y);

				unsigned char red = fmin(255, pixelColor.R * 1.5);
				unsigned char green = pixelColor.G / 1.5;
				unsigned char blue = pixelColor.B;

				Color newColor = Color::FromArgb(red, green, blue);
				newScheme->SetPixel(x, y, newColor);
			}
		}

		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->Image = newScheme;
		delete colorScheme;


	}
	};
}
