#pragma once

using namespace System;

ref class Teilnehmer
{
public:
	String^ vorname;
	String^ nachname;
	String^ standort;
};


int sortiereNachNachname(Teilnehmer^ t1, Teilnehmer^ t2);
int sortiereNachStandort(Teilnehmer^ t1, Teilnehmer^ t2);
