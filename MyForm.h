#pragma once

#include "SecondForm.h"

namespace EventManagementSystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    enum class Gender { Male, Female, Other };

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            gender = Gender::Male;

            SetPlaceholderText(txtName, L"Nama Lengkap");
            SetPlaceholderText(txtEmail, L"Email");
            SetPlaceholderText(txtPhone, L"Nomor Telepon");
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: String^ phoneNumberText;
    private: System::Windows::Forms::Button^ openSecondFormButton;
    private: System::ComponentModel::Container^ components;

    private: SecondForm^ secondForm;
    private: System::Windows::Forms::Label^ labelTitle;
    private: System::Windows::Forms::Label^ labelName;
    private: System::Windows::Forms::Label^ labelEmail;


    private: System::Windows::Forms::Label^ labelPhone;

    private: System::Windows::Forms::Label^ labelGender;
    private: System::Windows::Forms::TextBox^ txtName;
    private: System::Windows::Forms::TextBox^ txtEmail;


    private: System::Windows::Forms::TextBox^ txtPhone;

    private: System::Windows::Forms::RadioButton^ radioMale;
    private: System::Windows::Forms::RadioButton^ radioFemale;
    private: System::Windows::Forms::RadioButton^ radioOther;
    private: System::Windows::Forms::Button^ btnRegister;
    private: System::Windows::Forms::GroupBox^ groupGender;
    private: Gender gender;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->labelTitle = (gcnew System::Windows::Forms::Label());
               this->labelName = (gcnew System::Windows::Forms::Label());
               this->labelEmail = (gcnew System::Windows::Forms::Label());
               this->labelPhone = (gcnew System::Windows::Forms::Label());
               this->labelGender = (gcnew System::Windows::Forms::Label());
               this->txtName = (gcnew System::Windows::Forms::TextBox());
               this->txtEmail = (gcnew System::Windows::Forms::TextBox());
               this->txtPhone = (gcnew System::Windows::Forms::TextBox());
               this->radioMale = (gcnew System::Windows::Forms::RadioButton());
               this->radioFemale = (gcnew System::Windows::Forms::RadioButton());
               this->radioOther = (gcnew System::Windows::Forms::RadioButton());
               this->btnRegister = (gcnew System::Windows::Forms::Button());
               this->groupGender = (gcnew System::Windows::Forms::GroupBox());
               this->openSecondFormButton = (gcnew System::Windows::Forms::Button());
               this->groupGender->SuspendLayout();
               this->SuspendLayout();
               // 
               // JudulLabel
               // 
               this->labelTitle->AutoSize = true;
               this->labelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelTitle->ForeColor = System::Drawing::Color::White;
               this->labelTitle->Location = System::Drawing::Point(30, 20);
               this->labelTitle->Name = L"labelTitle";
               this->labelTitle->Size = System::Drawing::Size(215, 24);
               this->labelTitle->TabIndex = 0;
               this->labelTitle->Text = L"Form Registrasi Event";
               // 
               // NamaLabel
               // 
               this->labelName->AutoSize = true;
               this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->labelName->Location = System::Drawing::Point(30, 60);
               this->labelName->Name = L"labelName";
               this->labelName->Size = System::Drawing::Size(92, 13);
               this->labelName->TabIndex = 1;
               this->labelName->Text = L"Nama Lengkap";
               // 
               // EmailLabel
               // 
               this->labelEmail->AutoSize = true;
               this->labelEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->labelEmail->Location = System::Drawing::Point(30, 90);
               this->labelEmail->Name = L"labelEmail";
               this->labelEmail->Size = System::Drawing::Size(37, 13);
               this->labelEmail->TabIndex = 2;
               this->labelEmail->Text = L"Email";
               // 
               // TeleponLabel
               // 
               this->labelPhone->AutoSize = true;
               this->labelPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelPhone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->labelPhone->Location = System::Drawing::Point(31, 119);
               this->labelPhone->Name = L"labelPhone";
               this->labelPhone->Size = System::Drawing::Size(93, 13);
               this->labelPhone->TabIndex = 5;
               this->labelPhone->Text = L"Nomor Telepon";
               this->labelPhone->Click += gcnew System::EventHandler(this, &MyForm::labelPhone_Click);
               // 
               // JenisKelaminLabel
               // 
               this->labelGender->AutoSize = true;
               this->labelGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->labelGender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->labelGender->Location = System::Drawing::Point(31, 158);
               this->labelGender->Name = L"labelGender";
               this->labelGender->Size = System::Drawing::Size(84, 13);
               this->labelGender->TabIndex = 7;
               this->labelGender->Text = L"Jenis Kelamin";
               // 
               // NamaTeks
               // 
               this->txtName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->txtName->Location = System::Drawing::Point(130, 57);
               this->txtName->Name = L"txtName";
               this->txtName->Size = System::Drawing::Size(200, 20);
               this->txtName->TabIndex = 8;
               // 
               // EmailTeks
               // 
               this->txtEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->txtEmail->Location = System::Drawing::Point(130, 87);
               this->txtEmail->Name = L"txtEmail";
               this->txtEmail->Size = System::Drawing::Size(200, 20);
               this->txtEmail->TabIndex = 9;
               // 
               // NomorTeleponText
               // 
               this->txtPhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->txtPhone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
               this->txtPhone->Location = System::Drawing::Point(130, 117);
               this->txtPhone->Name = L"txtPhone";
               this->txtPhone->Size = System::Drawing::Size(200, 20);
               this->txtPhone->TabIndex = 12;
               // 
               // TombolJenisKelaminLaki-laki
               // 
               this->radioMale->AutoSize = true;
               this->radioMale->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->radioMale->Location = System::Drawing::Point(6, 19);
               this->radioMale->Name = L"radioMale";
               this->radioMale->Size = System::Drawing::Size(64, 17);
               this->radioMale->TabIndex = 14;
               this->radioMale->TabStop = true;
               this->radioMale->Text = L"Laki-laki";
               this->radioMale->UseVisualStyleBackColor = true;
               this->radioMale->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioGender_CheckedChanged);
               // 
               // TombolJenisKelaminPerempuan
               // 
               this->radioFemale->AutoSize = true;
               this->radioFemale->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->radioFemale->Location = System::Drawing::Point(80, 19);
               this->radioFemale->Name = L"radioFemale";
               this->radioFemale->Size = System::Drawing::Size(79, 17);
               this->radioFemale->TabIndex = 15;
               this->radioFemale->TabStop = true;
               this->radioFemale->Text = L"Perempuan";
               this->radioFemale->UseVisualStyleBackColor = true;
               this->radioFemale->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioGender_CheckedChanged);
               // 
               // TombolJenisKelaminLainnya
               // 
               this->radioOther->AutoSize = true;
               this->radioOther->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->radioOther->Location = System::Drawing::Point(165, 19);
               this->radioOther->Name = L"radioOther";
               this->radioOther->Size = System::Drawing::Size(62, 17);
               this->radioOther->TabIndex = 16;
               this->radioOther->TabStop = true;
               this->radioOther->Text = L"Lainnya";
               this->radioOther->UseVisualStyleBackColor = true;
               this->radioOther->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioGender_CheckedChanged);
               // 
               // TombolRegistrasi
               // 
               this->btnRegister->Location = System::Drawing::Point(130, 211);
               this->btnRegister->Name = L"btnRegister";
               this->btnRegister->Size = System::Drawing::Size(75, 23);
               this->btnRegister->TabIndex = 18;
               this->btnRegister->Text = L"Daftar";
               this->btnRegister->UseVisualStyleBackColor = true;
               this->btnRegister->Click += gcnew System::EventHandler(this, &MyForm::btnRegister_Click);
               // 
               // JenisKelaminGroup
               // 
               this->groupGender->Controls->Add(this->radioMale);
               this->groupGender->Controls->Add(this->radioOther);
               this->groupGender->Controls->Add(this->radioFemale);
               this->groupGender->Location = System::Drawing::Point(130, 143);
               this->groupGender->Name = L"groupGender";
               this->groupGender->Size = System::Drawing::Size(235, 50);
               this->groupGender->TabIndex = 17;
               this->groupGender->TabStop = false;
               // 
               // TombolMembukaSecondForm
               // 
               this->openSecondFormButton->Location = System::Drawing::Point(100, 100);
               this->openSecondFormButton->Name = L"openSecondFormButton";
               this->openSecondFormButton->Size = System::Drawing::Size(150, 50);
               this->openSecondFormButton->TabIndex = 0;
               this->openSecondFormButton->Text = L"Open Second Form";
               this->openSecondFormButton->UseVisualStyleBackColor = true;
               this->openSecondFormButton->Click += gcnew System::EventHandler(this, &MyForm::openSecondFormButton_Click);
               // 
               // MyForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::DarkRed;
               this->ClientSize = System::Drawing::Size(416, 261);
               this->Controls->Add(this->btnRegister);
               this->Controls->Add(this->groupGender);
               this->Controls->Add(this->txtPhone);
               this->Controls->Add(this->txtEmail);
               this->Controls->Add(this->txtName);
               this->Controls->Add(this->labelGender);
               this->Controls->Add(this->labelPhone);
               this->Controls->Add(this->labelEmail);
               this->Controls->Add(this->labelName);
               this->Controls->Add(this->labelTitle);
               this->Name = L"MyForm";
               this->Text = L"MyForm";
               this->groupGender->ResumeLayout(false);
               this->groupGender->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private: System::Void openSecondFormButton_Click(System::Object^ sender, System::EventArgs^ e) {
    };

    private:
        void SetPlaceholderText(System::Windows::Forms::TextBox^ textBox, System::String^ placeholder)
        {
            textBox->Tag = placeholder;
            textBox->Text = placeholder;
            textBox->ForeColor = System::Drawing::Color::Gray;
            textBox->GotFocus += gcnew System::EventHandler(this, &MyForm::RemovePlaceholder);
            textBox->LostFocus += gcnew System::EventHandler(this, &MyForm::SetPlaceholder);
        }

        void RemovePlaceholder(System::Object^ sender, System::EventArgs^ e)
        {
            System::Windows::Forms::TextBox^ textBox = (System::Windows::Forms::TextBox^)sender;
            if (textBox->ForeColor == System::Drawing::Color::Gray)
            {
                textBox->Text = "";
                textBox->ForeColor = System::Drawing::Color::Black;
            }
        }

        void SetPlaceholder(System::Object^ sender, System::EventArgs^ e)
        {
            System::Windows::Forms::TextBox^ textBox = (System::Windows::Forms::TextBox^)sender;
            if (String::IsNullOrWhiteSpace(textBox->Text))
            {
                textBox->ForeColor = System::Drawing::Color::Gray;
                textBox->Text = textBox->Tag->ToString();
            }
        }

        System::Void radioGender_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
        {
            if (radioMale->Checked)
            {
                gender = Gender::Male;
            }
            else if (radioFemale->Checked)
            {
                gender = Gender::Female;
            }
            else if (radioOther->Checked)
            {
                gender = Gender::Other;
            }
        }

        System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrWhiteSpace(txtName->Text) || txtName->ForeColor == System::Drawing::Color::Gray ||
                String::IsNullOrWhiteSpace(txtEmail->Text) || txtEmail->ForeColor == System::Drawing::Color::Gray ||
                String::IsNullOrWhiteSpace(txtPhone->Text) || txtPhone->ForeColor == System::Drawing::Color::Gray)
            {
                MessageBox::Show(L"Harap masukkan data anda dengan lengkap", L"Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }
        
            bool isLetterOnly = true;
            for (int i = 0; i < txtName->Text->Length; i++)
            {
                if (!Char::IsLetter(txtName->Text[i]) && txtName->Text[i] != ' ')
                {
                    isLetterOnly = false;
                    break;
                }
            }

            if (!isLetterOnly)
            {
                MessageBox::Show(L"Name harus berupa huruf saja", L"Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            if (!txtEmail->Text->Contains("@gmail.com"))
            {
                MessageBox::Show(L"Email tidak valid", L"Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            Int64 phoneNumber;
            if (!Int64::TryParse(txtPhone->Text, phoneNumber))
            {
                MessageBox::Show(L"Nomor telepon harus berupa angka", L"Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            if (!radioMale->Checked && !radioFemale->Checked && !radioOther->Checked)
            {
                MessageBox::Show(L"Harap pilih jenis kelamin Anda", L"Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            System::Windows::Forms::DialogResult result = MessageBox::Show(L"Apakah Anda yakin?", L"Konfirmasi", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
            if (result == System::Windows::Forms::DialogResult::No)
            {
                return;
            }


            this->Hide();

            secondForm = gcnew SecondForm();
            secondForm->ShowDialog();

            this->Close();

        }
    private: System::Void labelPhone_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
