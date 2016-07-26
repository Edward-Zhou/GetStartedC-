// MathServiceConsumer.cpp : main project file.

#include "stdafx.h"
#include "MathService.cpp.h"

using namespace System;
using namespace System::ServiceModel;
using namespace System::ServiceModel::Channels;
int main(array<System::String ^> ^args)
{
	MathServiceClient ^client = gcnew MathServiceClient();
	int result= client->Cube(3);
	Console::WriteLine(result);
	Console::ReadLine();
	return 0;
}
