#include "Hauptfenster.h"


System::Void TeilnehmerSorieren::Hauptfenster::button_WerteAnzeigen_Click(System::Object^  sender, System::EventArgs^  e)
{
	for (int i = 0; i < zahlenListe.Count; i++)
	{
		textBox_Ausgabe->Text += zahlenListe[i].ToString();
		textBox_Ausgabe->Text += "\r\n";
	}
}


System::Void TeilnehmerSorieren::Hauptfenster::button_WerteSortieren_Click(System::Object^  sender, System::EventArgs^  e)
{
	textBox_Ausgabe->Text += "\r\n";

	zahlenListe.Sort();
	zahlenListe.Reverse();

}



System::Void TeilnehmerSorieren::Hauptfenster::button_TeilnehmerAnzeigen_Click(System::Object^  sender, System::EventArgs^  e)
{
	for (int i = 0; i < teilnehmerListe->Count; i++)
	{
		textBox_Ausgabe->Text += teilnehmerListe[i]->vorname + " ";
		textBox_Ausgabe->Text += teilnehmerListe[i]->nachname + " ";
		textBox_Ausgabe->Text += teilnehmerListe[i]->standort + " ";
		textBox_Ausgabe->Text += "\r\n";
	
	}

}


System::Void TeilnehmerSorieren::Hauptfenster::button_TeilnehmerSortieren_Click(System::Object^  sender, System::EventArgs^  e)
{
	// Adresse einer Funktion angeben, die 2 Teilnehmer vergleichen kann
	Comparison<Teilnehmer^>^ funktionsZeiger = gcnew Comparison<Teilnehmer^>(&sortiereNachStandort);
	//Comparison<Teilnehmer^>^ funktionsZeiger = gcnew Comparison<Teilnehmer^>(&sortiereNachNachname);

	// dieser Funkttionszeiger kann zum Sortieren verwendet werden
	teilnehmerListe->Sort(funktionsZeiger);

	// alternativ in einer Zeile
	teilnehmerListe->Sort(gcnew Comparison<Teilnehmer^>(&sortiereNachStandort));

	textBox_Ausgabe->Text += "\r\n";

}



System::Void TeilnehmerSorieren::Hauptfenster::button_ListeLoeschen_Click(System::Object^  sender, System::EventArgs^  e)
{
	textBox_Ausgabe->Text = "";
}