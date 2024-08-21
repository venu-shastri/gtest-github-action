//interface
class INetworkAlerter{
public:
vitual ~INetworkAlerter(){}
virtual int alert(float celcius)=0;
virtual int  getFailureCount()=0;
virtual void icrementFailureCount(int seed)=0;
virtual vod resetFailureCount()=0;
};

void alertInCelcius(float farenheit,INetworkAlerter* networkAlerter);
