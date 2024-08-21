//interface
class INetworkAlerter{
public:
vitual ~INetworkAlerter(){}
virtual int alert(float celcius)=0;
virtual int  getFailureCount()=0;
};

void alertInCelcius(float farenheit,INetworkAlerter* networkAlerter);
