#pragma once

#include <string>
#include <vector>

// Structure to hold Galea headset information
struct GaleaHeadsetInfo {
    std::string deviceName;
    std::string serialNumber;
    std::string firmwareVersion;
    bool isConnected;
    float batteryLevel;
};

// Helper class to access Galea headset information
class GaleaHelper {
    
};