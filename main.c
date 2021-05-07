#include <avr/io.h>
#define LED1EN PORTB |= (1<<PB6)

// Testen GitHub
// Test regel Bewijs materiaal Tutorial Versiebeheer
int Test_Variabele_Bjorn_Romberg = 0;

void init(void)
{
    DDRB |= (1<<PB6); //Output Led
    PORTB |= (1<<PB6);
}


int main(void)
{
    init();

    Test_Variabele_Bjorn_Romberg ++;

    if(Test_Variabele_Bjorn_Romberg == 1)
    {
        LED1EN;
        Test_Variabele_Bjorn_Romberg = 0;
    }
    return 0;
}
