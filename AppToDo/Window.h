#pragma once

namespace AppToDo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
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
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::TextBox^ name_todo_textbox;
	private: System::Windows::Forms::TextBox^ content_todo_texbox;
	private: System::Windows::Forms::Button^ button_create;

	private: String^ nameTodo;
	private: String^ contentTodo;
	private: String^ fileName = "plans.txt";
	private: String^ fileContent;
	private: DateTime currentTime;
	private: int yAxis = 70;

	protected:

	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->name_todo_textbox = (gcnew System::Windows::Forms::TextBox());
			this->content_todo_texbox = (gcnew System::Windows::Forms::TextBox());
			this->button_create = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();

			// 
			// button_close
			// 
			this->button_close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->button_close->FlatAppearance->BorderSize = 0;
			this->button_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_close->ForeColor = System::Drawing::SystemColors::Window;
			this->button_close->Location = System::Drawing::Point(776, 12);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(46, 32);
			this->button_close->TabIndex = 0;
			this->button_close->Text = L"X";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &Window::button_close_Click);

			// 
			// label_name
			// 
			this->label_name->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_name->ForeColor = System::Drawing::SystemColors::Window;
			this->label_name->Location = System::Drawing::Point(12, 12);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(733, 44);
			this->label_name->TabIndex = 1;
			this->label_name->Text = L"GreatFormas ToDo`s";

			// 
			// name_todo_textbox
			// 
			this->name_todo_textbox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->name_todo_textbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->name_todo_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name_todo_textbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->name_todo_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->name_todo_textbox->ForeColor = System::Drawing::SystemColors::Window;
			this->name_todo_textbox->Location = System::Drawing::Point(593, 74);
			this->name_todo_textbox->Multiline = true;
			this->name_todo_textbox->Name = L"name_todo_textbox";
			this->name_todo_textbox->Size = System::Drawing::Size(229, 33);
			this->name_todo_textbox->TabIndex = 2;

			// 
			// content_todo_texbox
			// 
			this->content_todo_texbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->content_todo_texbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->content_todo_texbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->content_todo_texbox->ForeColor = System::Drawing::SystemColors::Window;
			this->content_todo_texbox->Location = System::Drawing::Point(593, 113);
			this->content_todo_texbox->Multiline = true;
			this->content_todo_texbox->Name = L"content_todo_texbox";
			this->content_todo_texbox->Size = System::Drawing::Size(229, 201);
			this->content_todo_texbox->TabIndex = 3;

			// 
			// button_create
			// 
			this->button_create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button_create->FlatAppearance->BorderSize = 0;
			this->button_create->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_create->ForeColor = System::Drawing::SystemColors::Window;
			this->button_create->Location = System::Drawing::Point(593, 320);
			this->button_create->Name = L"button_create";
			this->button_create->Size = System::Drawing::Size(229, 41);
			this->button_create->TabIndex = 4;
			this->button_create->Text = L"Create";
			this->button_create->UseVisualStyleBackColor = false;
			this->button_create->Click += gcnew System::EventHandler(this, &Window::button_create_Click);

			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(834, 738);
			this->Controls->Add(this->button_create);
			this->Controls->Add(this->content_todo_texbox);
			this->Controls->Add(this->name_todo_textbox);
			this->Controls->Add(this->label_name);
			this->Controls->Add(this->button_close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Window";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Window";
			this->Load += gcnew System::EventHandler(this, &Window::Window_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Window_Load(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			StreamWriter^ outputFile = gcnew StreamWriter(this->fileName);
			outputFile->Close();
		}
		catch (IOException^ error)
		{
			Console::WriteLine("Error in work with file: " + error->Message);
		}
	}

	private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button_create_Click(System::Object^ sender, System::EventArgs^ e) {
		this->nameTodo = this->name_todo_textbox->Text;
		this->contentTodo = this->content_todo_texbox->Text;
		this->currentTime = DateTime::Now;

		try
		{
			StreamReader^ outputFile = gcnew StreamReader(this->fileName);
			this->fileContent = outputFile->ReadToEnd();
			outputFile->Close();
		}
		catch (IOException^ error)
		{
			Console::WriteLine("Error in work with file: " + error->Message);
		}

		try
		{
			StreamWriter^ inputFile = gcnew StreamWriter(this->fileName);
			inputFile->Write(this->fileContent);
			inputFile->WriteLine(this->nameTodo);
			inputFile->WriteLine(this->contentTodo);
			
			if (currentTime.Month < 10) {
				inputFile->WriteLine(currentTime.Day + ".0" + currentTime.Month + " " + currentTime.Hour + ":" + currentTime.Minute);
			} else {
				inputFile->WriteLine(currentTime.Day + "." + currentTime.Month + " " + currentTime.Hour + ":" + currentTime.Minute);
			}

			inputFile->WriteLine(false);
			inputFile->Close();
		}
		catch (IOException^ error)
		{
			Console::WriteLine("Error in work with file: " + error->Message);
		}

		this->name_todo_textbox->Text = "";
		this->content_todo_texbox->Text = "";
		// create_todobox();
	}

	private: System::Void create_todobox() {
		Label^ headerLabel = gcnew Label();
		Label^ contentLabel = gcnew Label();
		Label^ dateTimeLabel = gcnew Label();

		headerLabel->Location = Point(20, this-> yAxis);
		headerLabel->Text = System::Convert::ToString(this->nameTodo);
		headerLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		headerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		headerLabel->ForeColor = System::Drawing::SystemColors::Window;
		headerLabel->AutoSize = true;

		this->yAxis += 20;

		contentLabel->Location = Point(20, this->yAxis);
		contentLabel->Text = System::Convert::ToString(this->contentTodo);
		contentLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		contentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		contentLabel->ForeColor = System::Drawing::SystemColors::Window;
		contentLabel->AutoSize = true;

		this->yAxis += 20;

		dateTimeLabel->Location = Point(20, this->yAxis);
		dateTimeLabel->Text = System::Convert::ToString(this->currentTime);
		dateTimeLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		dateTimeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		dateTimeLabel->ForeColor = System::Drawing::SystemColors::Window;
		dateTimeLabel->AutoSize = true;

		this->yAxis += 40;

		this->Controls->Add(headerLabel);
		this->Controls->Add(contentLabel);
		this->Controls->Add(dateTimeLabel);
		this->Invalidate();
	}
};
}
