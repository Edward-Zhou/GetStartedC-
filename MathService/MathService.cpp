// MathService.cpp : main project file.

#include "stdafx.h"
#include "IMathService.h"

using namespace System;
using namespace System::ServiceModel;
using namespace System::ServiceModel::Channels;
using namespace System::ServiceModel::Description;

ref class MathService:IMathService
{
public:
	virtual double Square(double d)
	{
		return d*d;
	}
	virtual double Cube(double d)
	{
		return d*d*d;
	}

};


int main(array<System::String ^> ^args)
{
	WSHttpBinding ^binding = gcnew WSHttpBinding();
	Uri ^baseAddress = gcnew Uri("http://localhost:8080/MathService");
	ServiceHost ^host = gcnew ServiceHost(MathService::typeid,baseAddress);
	host->AddServiceEndpoint(IMathService::typeid,binding,baseAddress);
	ServiceMetadataBehavior ^smb = gcnew ServiceMetadataBehavior();
	smb->HttpGetEnabled = true;
	host->Description->Behaviors->Add(smb);
	host->Open();
	Console::WriteLine("Service is open");
	Console::ReadLine();
	host->Close();
    return 0;
}
