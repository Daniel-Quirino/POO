#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time
{
    public:
        Time();
        void setTime( int, int, int );
        void printUniversal();
        void printStandard();
    private:
        int hour;
        int minute;
        int second;
};

#endif // TIME_H_INCLUDED
