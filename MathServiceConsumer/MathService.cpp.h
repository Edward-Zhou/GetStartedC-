#pragma once

#using <mscorlib.dll>
#using <System.ServiceModel.dll>
#using <System.Runtime.Serialization.dll>
#using <System.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
using namespace System;
interface class IMathService;
interface class IMathServiceChannel;
ref class MathServiceClient;


[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0"), 
System::ServiceModel::ServiceContractAttribute(ConfigurationName=L"IMathService")]
public interface class IMathService
{
    
    [System::ServiceModel::OperationContractAttribute(Action=L"http://tempuri.org/IMathService/Square", ReplyAction=L"http://tempuri.org/IMathService/SquareResponse")]
    System::Double Square(System::Double d);
    
    [System::ServiceModel::OperationContractAttribute(Action=L"http://tempuri.org/IMathService/Square", ReplyAction=L"http://tempuri.org/IMathService/SquareResponse")]
    System::Threading::Tasks::Task<System::Double >^  SquareAsync(System::Double d);
    
    [System::ServiceModel::OperationContractAttribute(Action=L"http://tempuri.org/IMathService/Cube", ReplyAction=L"http://tempuri.org/IMathService/CubeResponse")]
    System::Double Cube(System::Double d);
    
    [System::ServiceModel::OperationContractAttribute(Action=L"http://tempuri.org/IMathService/Cube", ReplyAction=L"http://tempuri.org/IMathService/CubeResponse")]
    System::Threading::Tasks::Task<System::Double >^  CubeAsync(System::Double d);
};

[System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public interface class IMathServiceChannel : public IMathService, public System::ServiceModel::IClientChannel
{
};

[System::Diagnostics::DebuggerStepThroughAttribute, 
System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.ServiceModel", L"4.0.0.0")]
public ref class MathServiceClient : public System::ServiceModel::ClientBase<IMathService^ >, public IMathService
{
    
    public: MathServiceClient();
    public: MathServiceClient(System::String^  endpointConfigurationName);
    public: MathServiceClient(System::String^  endpointConfigurationName, System::String^  remoteAddress);
    public: MathServiceClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: MathServiceClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress);
    public: virtual System::Double Square(System::Double d) sealed;
    
    public: virtual System::Threading::Tasks::Task<System::Double >^  SquareAsync(System::Double d) sealed;
    
    public: virtual System::Double Cube(System::Double d) sealed;
    
    public: virtual System::Threading::Tasks::Task<System::Double >^  CubeAsync(System::Double d) sealed;
};








inline MathServiceClient::MathServiceClient()
{
}

inline MathServiceClient::MathServiceClient(System::String^  endpointConfigurationName) : 
        System::ServiceModel::ClientBase<IMathService^ >(endpointConfigurationName)
{
}

inline MathServiceClient::MathServiceClient(System::String^  endpointConfigurationName, System::String^  remoteAddress) : 
        System::ServiceModel::ClientBase<IMathService^ >(endpointConfigurationName, remoteAddress)
{
}

inline MathServiceClient::MathServiceClient(System::String^  endpointConfigurationName, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<IMathService^ >(endpointConfigurationName, remoteAddress)
{
}

inline MathServiceClient::MathServiceClient(System::ServiceModel::Channels::Binding^  binding, System::ServiceModel::EndpointAddress^  remoteAddress) : 
        System::ServiceModel::ClientBase<IMathService^ >(binding, remoteAddress)
{
}

inline System::Double MathServiceClient::Square(System::Double d)
{
    return __super::Channel->Square(d);
}

inline System::Threading::Tasks::Task<System::Double >^  MathServiceClient::SquareAsync(System::Double d)
{
    return __super::Channel->SquareAsync(d);
}

inline System::Double MathServiceClient::Cube(System::Double d)
{
    return __super::Channel->Cube(d);
}

inline System::Threading::Tasks::Task<System::Double >^  MathServiceClient::CubeAsync(System::Double d)
{
    return __super::Channel->CubeAsync(d);
}
