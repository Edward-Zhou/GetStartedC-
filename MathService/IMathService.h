#pragma once
#ifndef IMATHSERVICE_H
#define IMATHSERVICE_H
#include "stdafx.h"

using namespace System;
using namespace System::ServiceModel;
using namespace System::ServiceModel::Channels;

[ServiceContract]
public interface class IMathService
{
	[OperationContractAttribute]
	virtual double Square(double d);
	[OperationContractAttribute]
	virtual double Cube(double d);
};

#endif // !IMATHSERVICE_H
