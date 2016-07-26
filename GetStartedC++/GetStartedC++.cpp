// GetStartedC++.cpp : main project file.

#include "stdafx.h"
#include "GetStartedC++.h"
#include "Person.h"

using namespace System;
using namespace Microsoft::Office::Interop::Excel;
#define Excel Microsoft::Office::Interop::Excel


ref class Animal
{
public:
	int legs;
	void SetName(String ^nm)
	{
		name = nm;
	}
	String^ GetName()
	{
		return name;
	}

private:
	String ^name;
};

void main()
{
	//Microsoft::Office::Interop::Excel::Application ^app = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
	//app->Workbooks->Add(Type::Missing);
	//app->Visible = true;
	Excel::Application ^app = gcnew Excel::ApplicationClass();


	Person p;
	String^ v= p.GetInfo("Jimmy",20);
	Console::WriteLine(v);
	Person ^person;
	person = gcnew Person;
	person->age = 12;
	person->SetName("Jim");
	String^ value= person->GetInfo("Tom",15);
	Console::WriteLine(value);
	Console::ReadLine();
}

