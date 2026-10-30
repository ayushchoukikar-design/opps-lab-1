//A smart home control engine needs to control a hardware hub that integrates two independent communication modules with overlapping method names.
#include <iostream>
using namespace std;

class WiFiModule {
public:
    void connect() {
        cout << "Connecting through WiFi..." << endl;
    }
};

class BluetoothModule {
public:
    void connect() {
        cout << "Connecting through Bluetooth..." << endl;
    }
};

class SmartHub : public WiFiModule, public BluetoothModule {
public:
    void control() {
        cout << "Smart Hub controlling devices." << endl;
    }
};

int main() {
    SmartHub hub;

    hub.WiFiModule::connect();
    hub.BluetoothModule::connect();
    hub.control();

    return 0;
}