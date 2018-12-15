#include <iostream>
using std::cout;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h" // inclui a definição da classe Time a partir de Time.h

// Construtor de Time inicializa cada membro de dados como zero;
// assegura que os objetos Time iniciem em um estado consistente
Time::Time( int hr, int min, int sec )
{
setTime( hr, min, sec ); // valida e configura time
} // fim do construtor de Time

19 // configura novo valor de Time utilizando a hora universal; assegura que
20 // os dados permaneçam consistentes configurando valores inválidos como zero
21 void Time::setTime( int h, int m, int s )
22 {
23 setHour( h ); // configura campo private hour
24 setMinute( m ); // configura campo private minute
25 setSecond( s ); // configura campo private second
26 } // fim da função setTime
27
28 // configura valor de hour
29 void Time::setHour( int h )
30 {
31 hour = ( h >= 0 && h < 24 ) ? h : 0; // valida horas
32 } // fim da função setHour
33
34 // configura valor de minute
35 void Time::setMinute( int m )
36 {
37 minute = ( m >= 0 && m < 60 ) ? m : 0; // valida minutos
38 }
