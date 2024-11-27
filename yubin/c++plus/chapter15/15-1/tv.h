
#ifndef TV_H_
#define TV_H_
class Remote;
class Tv
{
public:
    friend class Remote;    // Remote가 TV의 private 접근 가능
    enum State{Off, On};
    enum {MinVal,MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, VCR};

    Tv(State s = Off, int mc = 100) : state(s), volume(5),
        maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() {state = (state == On)? Off : On;}
    bool ison() {return state == On ? true : false;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() {mode = (mode == Antenna)? Cable : Antenna;}
    void set_input() {input = (input == TV)? VCR : TV;}
    void settings();
    void rmode(Remote & r);
private:
    State state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};

class Remote
{
friend class Tv;
private:
    int mode;    
    int style;  

public:
    enum Style {Normal, Interactive};
    Remote(int m = Tv::TV, int s = Normal) :
                mode(m), style(s) {}
    bool volup(Tv & t) { return t.volup();}
    bool voldown(Tv & t) { return t.voldown();}
    void onoff(Tv & t) { t.onoff(); }
    void chanup(Tv & t) {t.chanup();}
    void chandown(Tv & t) {t.chandown();}
    void set_chan(Tv & t, int c) {t.channel = c;}
    void set_mode(Tv & t) {t.set_mode();}
    void set_input(Tv & t) {t.set_input();}
    void show_style();
};

// 추가
inline void Tv::rmode(Remote & r)
{
    if(state == Off)
        return;
    if (r.style == Remote::Normal)
        r.style = Remote::Interactive;
    else r.style = Remote::Normal;
}
#endif
