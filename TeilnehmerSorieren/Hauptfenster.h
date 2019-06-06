#pragma once
#include "Teilnehmer.h"


namespace TeilnehmerSorieren {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Hauptfenster
	/// </summary>
	public ref class Hauptfenster : public System::Windows::Forms::Form
	{
	public:
		Hauptfenster(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//

			// mehrere Zahlen in die Liste einfügen
			zahlenListe.Add(3);
			zahlenListe.Add(13);
			zahlenListe.Add(4);
			zahlenListe.Add(1);

			// Speicherplatz für die Liste selbst reservieren
			teilnehmerListe = gcnew System::Collections::Generic::List<Teilnehmer^>;

			// neuen Teilnehmeer zur Liste hinzufügen
			Teilnehmer^ klaus = gcnew Teilnehmer;
			klaus->vorname = "Klaus";
			klaus->nachname = "Hanser";
			klaus->standort = "Hamburg";
			teilnehmerListe->Add(klaus);

			// neuen Teilnehmeer zur Liste hinzufügen
			Teilnehmer^ lisa = gcnew Teilnehmer;
			lisa->vorname = "Lisa";
			lisa->nachname = "Meerbusch";
			lisa->standort = "Köln";
			teilnehmerListe->Add(lisa);

			// neuen Teilnehmeer zur Liste hinzufügen
			Teilnehmer^ bernd = gcnew Teilnehmer;
			bernd->vorname = "Bernd";
			bernd->nachname = "Schmidt";
			bernd->standort = "Aachen";
			teilnehmerListe->Add(bernd);
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Hauptfenster()
		{
			if (components)
			{
				delete components;
			}
		}


		// Eine CLI Liste mit Zahlen
		System::Collections::Generic::List<int> zahlenListe;

		// Eine CLI Liste mit Teilnehmern
		System::Collections::Generic::List<Teilnehmer^>^ teilnehmerListe;



	private: System::Windows::Forms::TextBox^  textBox_Ausgabe;
	private: System::Windows::Forms::Button^  button_WerteAnzeigen;
	private: System::Windows::Forms::Button^  button_WerteSortieren;
	private: System::Windows::Forms::Button^  button_TeilnehmerAnzeigen;
	private: System::Windows::Forms::Button^  button_TeilnehmerSortieren;
	private: System::Windows::Forms::Button^  button_ListeLoeschen;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_Ausgabe = (gcnew System::Windows::Forms::TextBox());
			this->button_WerteAnzeigen = (gcnew System::Windows::Forms::Button());
			this->button_WerteSortieren = (gcnew System::Windows::Forms::Button());
			this->button_TeilnehmerAnzeigen = (gcnew System::Windows::Forms::Button());
			this->button_TeilnehmerSortieren = (gcnew System::Windows::Forms::Button());
			this->button_ListeLoeschen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_Ausgabe
			// 
			this->textBox_Ausgabe->Location = System::Drawing::Point(12, 12);
			this->textBox_Ausgabe->Multiline = true;
			this->textBox_Ausgabe->Name = L"textBox_Ausgabe";
			this->textBox_Ausgabe->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_Ausgabe->Size = System::Drawing::Size(258, 181);
			this->textBox_Ausgabe->TabIndex = 0;
			// 
			// button_WerteAnzeigen
			// 
			this->button_WerteAnzeigen->Location = System::Drawing::Point(276, 12);
			this->button_WerteAnzeigen->Name = L"button_WerteAnzeigen";
			this->button_WerteAnzeigen->Size = System::Drawing::Size(159, 23);
			this->button_WerteAnzeigen->TabIndex = 1;
			this->button_WerteAnzeigen->Text = L"Werte Anzeigen";
			this->button_WerteAnzeigen->UseVisualStyleBackColor = true;
			this->button_WerteAnzeigen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_WerteAnzeigen_Click);
			// 
			// button_WerteSortieren
			// 
			this->button_WerteSortieren->Location = System::Drawing::Point(276, 41);
			this->button_WerteSortieren->Name = L"button_WerteSortieren";
			this->button_WerteSortieren->Size = System::Drawing::Size(159, 23);
			this->button_WerteSortieren->TabIndex = 2;
			this->button_WerteSortieren->Text = L"Werte Sortieren";
			this->button_WerteSortieren->UseVisualStyleBackColor = true;
			this->button_WerteSortieren->Click += gcnew System::EventHandler(this, &Hauptfenster::button_WerteSortieren_Click);
			// 
			// button_TeilnehmerAnzeigen
			// 
			this->button_TeilnehmerAnzeigen->Location = System::Drawing::Point(276, 141);
			this->button_TeilnehmerAnzeigen->Name = L"button_TeilnehmerAnzeigen";
			this->button_TeilnehmerAnzeigen->Size = System::Drawing::Size(159, 23);
			this->button_TeilnehmerAnzeigen->TabIndex = 3;
			this->button_TeilnehmerAnzeigen->Text = L"Teilnehmner Anzeigen";
			this->button_TeilnehmerAnzeigen->UseVisualStyleBackColor = true;
			this->button_TeilnehmerAnzeigen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_TeilnehmerAnzeigen_Click);
			// 
			// button_TeilnehmerSortieren
			// 
			this->button_TeilnehmerSortieren->Location = System::Drawing::Point(276, 170);
			this->button_TeilnehmerSortieren->Name = L"button_TeilnehmerSortieren";
			this->button_TeilnehmerSortieren->Size = System::Drawing::Size(159, 23);
			this->button_TeilnehmerSortieren->TabIndex = 4;
			this->button_TeilnehmerSortieren->Text = L"Teilnehmer Sortieren";
			this->button_TeilnehmerSortieren->UseMnemonic = false;
			this->button_TeilnehmerSortieren->UseVisualStyleBackColor = true;
			this->button_TeilnehmerSortieren->Click += gcnew System::EventHandler(this, &Hauptfenster::button_TeilnehmerSortieren_Click);
			// 
			// button_ListeLoeschen
			// 
			this->button_ListeLoeschen->Location = System::Drawing::Point(276, 94);
			this->button_ListeLoeschen->Name = L"button_ListeLoeschen";
			this->button_ListeLoeschen->Size = System::Drawing::Size(159, 23);
			this->button_ListeLoeschen->TabIndex = 5;
			this->button_ListeLoeschen->Text = L"Liste Löschen";
			this->button_ListeLoeschen->UseVisualStyleBackColor = true;
			this->button_ListeLoeschen->Click += gcnew System::EventHandler(this, &Hauptfenster::button_ListeLoeschen_Click);
			// 
			// Hauptfenster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 206);
			this->Controls->Add(this->button_ListeLoeschen);
			this->Controls->Add(this->button_TeilnehmerSortieren);
			this->Controls->Add(this->button_TeilnehmerAnzeigen);
			this->Controls->Add(this->button_WerteSortieren);
			this->Controls->Add(this->button_WerteAnzeigen);
			this->Controls->Add(this->textBox_Ausgabe);
			this->Name = L"Hauptfenster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hauptfenster";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_WerteAnzeigen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_WerteSortieren_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_TeilnehmerAnzeigen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_TeilnehmerSortieren_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_ListeLoeschen_Click(System::Object^  sender, System::EventArgs^  e);
};
}
