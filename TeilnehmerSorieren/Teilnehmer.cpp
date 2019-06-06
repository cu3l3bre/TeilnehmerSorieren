#include "Teilnehmer.h"

int sortiereNachNachname(Teilnehmer ^ t1, Teilnehmer ^ t2)
{
	return t1->nachname->CompareTo(t2->nachname);
}

int sortiereNachStandort(Teilnehmer ^ t1, Teilnehmer ^ t2)
{
	
	return t1->standort->CompareTo(t2->standort);
}