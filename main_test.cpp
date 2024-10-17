#include "main_gyro.c"
#include <iostream>
using namespace std;

struct PID_data{
    float val_ko;
    float int_ko;
    float der_ko;
    float PID(float integral, float dervative, float value){
        return val_ko*value + int_ko*integral + der_ko*dervative;
    }
}

int main(int argc,char* argv[]){
    SensorInit(argc, argv); // start
    GyroData data = SensorGetData(); // gets data
    // cout << "angle : " << data.Angle[0] << " : " << data.Angle[1] << " : " << data.Angle[2] << "\n";

    serial_close(fd); // ends connection
    return 0;
}