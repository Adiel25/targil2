#pragma once
#include <string>
#include "C:\Users\Cyber_User\source\repos\targil2\targil2\DeviceList.h"

class User {
private:
    unsigned int _id;
    std::string _username;
    unsigned int _age;
    DevicesList _devices;

public:
    void init(unsigned int id, std::string username, unsigned int age);
    void clear();

    unsigned int getID() const;
    std::string getUsername() const;
    unsigned int getAge() const;

    DevicesList& getDevices();
    void addDevice(Device newDevice);
    bool checkIfDevicesAreOn() const;
};
