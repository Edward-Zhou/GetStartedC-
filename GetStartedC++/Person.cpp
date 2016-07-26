#include "stdafx.h"
#include "Person.h"

using namespace System;

void Person::SetName(String ^nm)
{
	name = nm;
}

String^ Person::GetInfo(String^ nm, int age)
{
	String^ info = "Name is " + nm + ", age is " + age.ToString();
	return info;
}