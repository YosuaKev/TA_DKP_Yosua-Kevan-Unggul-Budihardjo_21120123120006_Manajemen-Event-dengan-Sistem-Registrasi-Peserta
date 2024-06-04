#pragma once
#include <array>
#include <stack>
#include <queue>
#include <msclr\marshal_cppstd.h>

namespace EventManagementSystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class SecondForm : public System::Windows::Forms::Form
    {
    public:
        SecondForm(void)
        {
            InitializeComponent();
            InitializeEventData();
            eventHistory = gcnew System::Collections::Generic::Stack<String^>();
            eventQueue = gcnew System::Collections::Generic::Queue<String^>();
            eventsConfirmed = false;

            Button^ doneButton = gcnew Button();
            doneButton->Text = "DONE";
            doneButton->Location = Point(640, 350);
            doneButton->Size = System::Drawing::Size(100, 30);
            doneButton->BackColor = confirmButton->BackColor;
            doneButton->ForeColor = confirmButton->ForeColor;
            doneButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            doneButton->Click += gcnew System::EventHandler(this, &SecondForm::DoneButton_Click);
            this->Controls->Add(doneButton);
        }

        property String^ TechConferenceImagePath {
            String^ get() {
                return techConferenceImagePath;
            }
            void set(String^ value) {
                techConferenceImagePath = value;
            }
        }

        property String^ ArtWorkshopImagePath {
            String^ get() {
                return artWorkshopImagePath;
            }
            void set(String^ value) {
                artWorkshopImagePath = value;
            }
        }

        property String^ MusicFestivalImagePath {
            String^ get() {
                return musicFestivalImagePath;
            }
            void set(String^ value) {
                musicFestivalImagePath = value;
            }
        }

    protected:
        ~SecondForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        bool eventsConfirmed;
        System::Collections::Generic::Stack<System::String^>^ eventHistory;
        System::Collections::Generic::Queue<System::String^>^ eventQueue;

        String^ techConferenceImagePath = "Images/tech_conference.jpg";
        String^ artWorkshopImagePath = "Images/art_workshop.jpg";
        String^ musicFestivalImagePath = "Images/music_festival.jpeg";

    private: System::Windows::Forms::Label^ titleLabel;
    private: System::Windows::Forms::CheckBox^ event1CheckBox;
    private: System::Windows::Forms::CheckBox^ event2CheckBox;
    private: System::Windows::Forms::CheckBox^ event3CheckBox;
    private: System::Windows::Forms::Label^ event1Details;
    private: System::Windows::Forms::Label^ event2Details;
    private: System::Windows::Forms::Label^ event3Details;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Button^ confirmButton;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Button^ historyButton;
    private: System::Windows::Forms::Button^ clearHistoryButton;
    private: System::ComponentModel::Container^ components;

           array<array<String^>^>^ eventData;
           array<CheckBox^>^ eventCheckBoxes;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->titleLabel = (gcnew System::Windows::Forms::Label());
               this->event1CheckBox = (gcnew System::Windows::Forms::CheckBox());
               this->event2CheckBox = (gcnew System::Windows::Forms::CheckBox());
               this->event3CheckBox = (gcnew System::Windows::Forms::CheckBox());
               this->event1Details = (gcnew System::Windows::Forms::Label());
               this->event2Details = (gcnew System::Windows::Forms::Label());
               this->event3Details = (gcnew System::Windows::Forms::Label());
               this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
               this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
               this->confirmButton = (gcnew System::Windows::Forms::Button());
               this->panel1 = (gcnew System::Windows::Forms::Panel());
               this->historyButton = (gcnew System::Windows::Forms::Button());
               this->clearHistoryButton = (gcnew System::Windows::Forms::Button());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
               this->panel1->SuspendLayout();
               this->SuspendLayout();
               // 
               // Judul Label
               // 
               this->titleLabel->AutoSize = true;
               this->titleLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                   static_cast<System::Int32>(static_cast<System::Byte>(0)));
               this->titleLabel->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->titleLabel->ForeColor = System::Drawing::Color::White;
               this->titleLabel->Location = System::Drawing::Point(370, 5);
               this->titleLabel->Name = L"titleLabel";
               this->titleLabel->Size = System::Drawing::Size(203, 41);
               this->titleLabel->TabIndex = 0;
               this->titleLabel->Text = L"Event Selection";
               // 
               // CekBoxAcara1
               // 
               this->event1CheckBox->AutoSize = true;
               this->event1CheckBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
                   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
               this->event1CheckBox->Location = System::Drawing::Point(30, 70);
               this->event1CheckBox->Name = L"event1CheckBox";
               this->event1CheckBox->Size = System::Drawing::Size(125, 24);
               this->event1CheckBox->TabIndex = 1;
               this->event1CheckBox->Text = L"Tech Conference";
               this->event1CheckBox->UseVisualStyleBackColor = true;
               // 
               // CekBoxAcara2
               // 
               this->event2CheckBox->AutoSize = true;
               this->event2CheckBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
                   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
               this->event2CheckBox->Location = System::Drawing::Point(350, 70);
               this->event2CheckBox->Name = L"event2CheckBox";
               this->event2CheckBox->Size = System::Drawing::Size(112, 24);
               this->event2CheckBox->TabIndex = 3;
               this->event2CheckBox->Text = L"Music Festival";
               this->event2CheckBox->UseVisualStyleBackColor = true;
               // 
               // CekBoxAcara3
               // 
               this->event3CheckBox->AutoSize = true;
               this->event3CheckBox->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed Extra Bold", 12, System::Drawing::FontStyle::Regular,
                   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
               this->event3CheckBox->Location = System::Drawing::Point(670, 70);
               this->event3CheckBox->Name = L"event3CheckBox";
               this->event3CheckBox->Size = System::Drawing::Size(113, 24);
               this->event3CheckBox->TabIndex = 5;
               this->event3CheckBox->Text = L"Art Workshop";
               this->event3CheckBox->UseVisualStyleBackColor = true;
               // 
               // DetailAcara1
               // 
               this->event1Details->AutoSize = true;
               this->event1Details->Location = System::Drawing::Point(30, 100);
               this->event1Details->Name = L"event1Details";
               this->event1Details->Padding = System::Windows::Forms::Padding(0, 0, 0, 15);
               this->event1Details->Size = System::Drawing::Size(252, 67);
               this->event1Details->TabIndex = 2;
               this->event1Details->Text = L"InnovateTech 2024: Shaping the Future\nDate: 2024-08-04\nDescription: Dapatkan pand"
                   L"angan terbaru tentang \ninovasi dan teknologi terkini di InnovateTech 2024. ";
               // 
               // DetailAcara2
               // 
               this->event2Details->AutoSize = true;
               this->event2Details->Location = System::Drawing::Point(350, 100);
               this->event2Details->Name = L"event2Details";
               this->event2Details->Padding = System::Windows::Forms::Padding(0, 0, 0, 15);
               this->event2Details->Size = System::Drawing::Size(251, 80);
               this->event2Details->TabIndex = 4;
               this->event2Details->Text = L"HarmonyFest 2024\r\nDate: 2024-07-19\r\nDescription: Festival musik tahunan yang meng"
                   L"ha-\rndirkan beragam penampilan artis internasional dan \r\nlokal.";
               // 
               // DetailAcara3
               // 
               this->event3Details->AutoSize = true;
               this->event3Details->Location = System::Drawing::Point(670, 100);
               this->event3Details->Name = L"event3Details";
               this->event3Details->Padding = System::Windows::Forms::Padding(0, 0, 15, 0);
               this->event3Details->Size = System::Drawing::Size(232, 65);
               this->event3Details->TabIndex = 6;
               this->event3Details->Text = L"Creative Canvas Unleash Your Inner Artist\r\nDate: 2024-12-30\r\nDescription: Worksho"
                   L"p seni interaktif yang \r\nmenginspirasi peserta untuk mengeksplorasi \r\nkreativita"
                   L"s mereka.";
               // 
               // BoxGambar1
               // 
               this->pictureBox1->Image = Image::FromFile(techConferenceImagePath);
               this->pictureBox1->Location = System::Drawing::Point(30, 180);
               this->pictureBox1->Name = L"pictureBox1";
               this->pictureBox1->Size = System::Drawing::Size(237, 150);
               this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox1->TabIndex = 7;
               this->pictureBox1->TabStop = false;
               // 
               // BoxGambar2
               // 
               this->pictureBox2->Image = Image::FromFile(musicFestivalImagePath);
               this->pictureBox2->Location = System::Drawing::Point(350, 180);
               this->pictureBox2->Name = L"pictureBox2";
               this->pictureBox2->Size = System::Drawing::Size(237, 150);
               this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox2->TabIndex = 8;
               this->pictureBox2->TabStop = false;
               // 
               // BoxGambar3
               // 
               this->pictureBox3->Image = Image::FromFile(artWorkshopImagePath);
               this->pictureBox3->Location = System::Drawing::Point(670, 180);
               this->pictureBox3->Name = L"pictureBox3";
               this->pictureBox3->Size = System::Drawing::Size(235, 150);
               this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox3->TabIndex = 9;
               this->pictureBox3->TabStop = false;
               // 
               // TombolKonfirmasi
               // 
               this->confirmButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                   static_cast<System::Int32>(static_cast<System::Byte>(0)));
               this->confirmButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->confirmButton->ForeColor = System::Drawing::Color::White;
               this->confirmButton->Location = System::Drawing::Point(350, 350);
               this->confirmButton->Name = L"confirmButton";
               this->confirmButton->Size = System::Drawing::Size(100, 30);
               this->confirmButton->TabIndex = 10;
               this->confirmButton->Text = L"CONFIRM";
               this->confirmButton->UseVisualStyleBackColor = false;
               this->confirmButton->Click += gcnew System::EventHandler(this, &SecondForm::confirmButton_Click);
               // 
               // Panel1
               // 
               this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                   static_cast<System::Int32>(static_cast<System::Byte>(0)));
               this->panel1->Controls->Add(this->titleLabel);
               this->panel1->Location = System::Drawing::Point(0, 0);
               this->panel1->Name = L"panel1";
               this->panel1->Size = System::Drawing::Size(935, 50);
               this->panel1->TabIndex = 11;
               // 
               // TombolRiwayat
               // 
               this->historyButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                   static_cast<System::Int32>(static_cast<System::Byte>(0)));
               this->historyButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->historyButton->ForeColor = System::Drawing::Color::White;
               this->historyButton->Location = System::Drawing::Point(205, 350);
               this->historyButton->Name = L"historyButton";
               this->historyButton->Size = System::Drawing::Size(100, 30);
               this->historyButton->TabIndex = 11;
               this->historyButton->Text = L"HISTORY";
               this->historyButton->UseVisualStyleBackColor = false;
               this->historyButton->Click += gcnew System::EventHandler(this, &SecondForm::ShowEventHistory);
               // 
               // TombolMembersihkanRiwayat
               // 
               this->clearHistoryButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                   static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
               this->clearHistoryButton->Font = (gcnew System::Drawing::Font(L"Tw Cen MT Condensed", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->clearHistoryButton->ForeColor = System::Drawing::Color::White;
               this->clearHistoryButton->Location = System::Drawing::Point(487, 350);
               this->clearHistoryButton->Name = L"clearHistoryButton";
               this->clearHistoryButton->Size = System::Drawing::Size(100, 30);
               this->clearHistoryButton->TabIndex = 12;
               this->clearHistoryButton->Text = L"CLEAR HISTORY";
               this->clearHistoryButton->UseVisualStyleBackColor = false;
               this->clearHistoryButton->Click += gcnew System::EventHandler(this, &SecondForm::ClearEventHistory);
               // 
               // Form ke 2
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::Gainsboro;
               this->ClientSize = System::Drawing::Size(935, 400);
               this->Controls->Add(this->confirmButton);
               this->Controls->Add(this->pictureBox3);
               this->Controls->Add(this->pictureBox2);
               this->Controls->Add(this->pictureBox1);
               this->Controls->Add(this->event3Details);
               this->Controls->Add(this->event3CheckBox);
               this->Controls->Add(this->event2Details);
               this->Controls->Add(this->event2CheckBox);
               this->Controls->Add(this->event1Details);
               this->Controls->Add(this->event1CheckBox);
               this->Controls->Add(this->panel1);
               this->Controls->Add(this->historyButton);
               this->Controls->Add(this->clearHistoryButton);
               this->Name = L"SecondForm";
               this->Text = L"Event Selection";
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
               this->panel1->ResumeLayout(false);
               this->panel1->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();
           }
#pragma endregion
    private:
        void InitializeEventData()
        {
            eventData = gcnew array<array<String^>^>(3);
            eventCheckBoxes = gcnew array<CheckBox^> {event1CheckBox, event2CheckBox, event3CheckBox};

            eventData[0] = gcnew array<String^> {"Tech Conference", "2024-08-04", "Dapatkan pandangan terbaru tentang inovasi dan teknologi terkini di InnovateTech 2024."};
            eventData[1] = gcnew array<String^> {"Music Festival", "2024-07-19", "Festival musik tahunan yang menghadirkan beragam penampilan artis internasional dan lokal."};
            eventData[2] = gcnew array<String^> {"Art Workshop", "2024-12-30", "Workshop seni interaktif yang menginspirasi peserta untuk mengeksplorasi kreativitas mereka."};
        }

    private: System::Void ShowEventHistory(System::Object^ sender, System::EventArgs^ e)
    {
        if (eventHistory->Count == 0) {
            MessageBox::Show("No event history available.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        else {
            String^ history = "Event Selection History:\n";

            for each (String ^ eventDetails in eventHistory) {
                history += eventDetails + "\n";
            }

            MessageBox::Show(history, "Event History", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }

    private: System::Void ClearEventHistory(System::Object^ sender, System::EventArgs^ e)
    {
        while (eventHistory->Count > 0) {
            eventHistory->Pop();
        }
        MessageBox::Show("Event history has been cleared.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
    }

    private: System::Void confirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ selectedEvents = "";
        bool eventAlreadyRegistered = false;


        for (int i = 0; i < eventCheckBoxes->Length; i++)
        {
            if (eventCheckBoxes[i]->Checked) {
                String^ eventDetails = "Event " + (i + 1) + ": " + eventData[i][0] + "\n"; 
                eventDetails += "Date: " + eventData[i][1] + "\n"; 
                eventDetails += "Description: " + eventData[i][2] + "\n\n"; 

                for each (String ^ registeredEvent in eventHistory) {
                    if (registeredEvent->Contains(eventData[i][0])) {
                        eventAlreadyRegistered = true;
                        break;
                    }
                }

                if (eventAlreadyRegistered) {
                    MessageBox::Show("Event " + eventData[i][0] + " is already registered.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    return;
                }

                selectedEvents += eventDetails;
                eventHistory->Push(eventDetails);
                eventQueue->Enqueue(eventDetails);
            }
        }

        if (selectedEvents == "") {
            MessageBox::Show("No events selected. Please select at least one event.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
        else {
            String^ message = "You have selected the following events:\n" + selectedEvents + "Are you sure?";
            System::Windows::Forms::DialogResult result = MessageBox::Show(message, "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

            if (result == System::Windows::Forms::DialogResult::Yes) {
                String^ confirmationMessage = "Your selection has been confirmed:\n";

                while (eventQueue->Count > 0) {
                    confirmationMessage += eventQueue->Peek() + "\n";
                    eventQueue->Dequeue();
                }

                MessageBox::Show(confirmationMessage, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
                eventsConfirmed = true;
            }
        }
    }

    private: System::Void DoneButton_Click(System::Object^ sender, System::EventArgs^ e) {
        bool anyEventSelected = false;

        for (int i = 0; i < eventCheckBoxes->Length; i++) {
            if (eventCheckBoxes[i]->Checked) {
                anyEventSelected = true;
                break;
            }
        }

        if (!anyEventSelected) {
            MessageBox::Show("Please select at least one event.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
        else if (!eventsConfirmed) {
            MessageBox::Show("Please confirm your selected events before proceeding.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        }
        else {
            this->Close();
        }
    }

    };
}
