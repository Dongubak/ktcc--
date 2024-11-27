#include <iostream>
#include "tv.h"

bool Tv::volup()
{
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}
bool Tv::voldown()
{
    if (volume > MinVal)
    {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup()
{
    if (channel < maxchannel)
        channel++;
    else
        channel = 1;
}

void Tv::chandown()
{
    if (channel > 1)
        channel--;
    else
        channel = maxchannel;
}

void Tv::settings()
{
    using std::cout;
    cout << "TV is " << (state == Off? "Off\n" : "On\n");
    if (state == On)
    {
        cout << "Volume setting = " << volume << "\n";
        cout << "Channel setting = " << channel << "\n";
        cout << "Mode = "
            << (mode == Antenna? "antenna\n" : "cable\n");
        cout << "Input = "
            << (input == TV? "TV\n" : "VCR\n");
    }
}
// 추가
void Remote::show_style()
{
    if (style == Normal)
        std::cout << "Remote는 일반모드입니다." << '\n';
    else
        std::cout << "Remote는 대화 모드입니다." << '\n';
}
