#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
public:
    enum Mode
    {
        STONE,
        INT_POUND,
        DOUBLE_POUND
    };

private:
    enum
    {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;
    int pounds_int;
    Mode mode;
    void set_stone();      //设置stone英石变量;
    void set_pounds();     //设置pounds英镑变量;
    void set_pounds_int(); //设置pounds整型英镑变量;

public:
    Stonewt(double lbs, Mode form);
    Stonewt(int stn, double lbs, Mode form);
    Stonewt();
    ~Stonewt();
    void set_stone_mode();                                 //设置英石格式;
    void set_pounds_mode();                                //设置整数磅格式;
    void set_int_pounds_mode();                            //设置浮点磅格式;
    Stonewt operator+(const Stonewt &stonewt) const;
    Stonewt operator-(const Stonewt &stonewt) const;
    Stonewt operator*(double multi) const;
    friend std::ostream &operator<<(std::ostream &os, const Stonewt & stonewt);
    friend Stonewt operator*(double multi, const Stonewt &stonewt);
};
#endif