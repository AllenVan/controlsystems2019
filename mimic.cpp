


void initialize()
{
        //function to intialize all GPIO pins to ESP32
        //Cannot really fill until first mechanical draft completed
}


void readJoints()
{
        readBasePotentiometer();
        readShoulder();
        readElbow();
        readWristPitch();
        readWristRoll();
        sendBacktoMC();
}

bool readCurrent()            //thinking it should be bool so that if false can send feedback to mission control
{
        if(baseCurrent over)
        {
                return false;
        }
        if(shoulderCurrent over)
        {
                return false;
        }
        if(elbowCurrent over)
        {
                return false;
        }
        if(WristPCurrent over)
        {
                return false;
        }
        if(WristRCurrent over)
        {
                return false;
        }
        else
        {
                return true;
        }
}

double clawControl()          //controlling claw will most likely be controlled using a sliding potentiometer
{
        /*
           While doing the gimbal trial project, I found the Map function to be particularly useful translating the accelerometer
           values to easy values for the servo to understanding

           I was thinking perhaps something along the lines of the map function can be used here
         */
}

void statusLED
{
        if(readCurrent() == true) {greenLED();}
        if(readCurrent() == false) {yellowLED();}
        else {redLED();}
}
