#pragma once
#include "stdafx.h"
using namespace System;
ref class Person
{
public:
	int age;
	void SetName(String ^nm);
	String^ GetInfo(String^ nm, int age);
private:
	String^ name;
	
};
