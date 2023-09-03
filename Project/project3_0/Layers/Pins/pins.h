/* Port A */
#define PINA    _SFR_IO8(0x19)
#define DDRA    _SFR_IO8(0x1A)
#define PORTA   _SFR_IO8(0x1B)

/* Port B */
#define PINB    _SFR_IO8(0x16)
#define DDRB    _SFR_IO8(0x17)
#define PORTB   _SFR_IO8(0x18)

/* Port C */
#define PINC    _SFR_IO8(0x13)
#define DDRC    _SFR_IO8(0x14)
#define PORTC   _SFR_IO8(0x15)

/* Port D */
#define PIND    _SFR_IO8(0x10)
#define DDRD    _SFR_IO8(0x11)
#define PORTD   _SFR_IO8(0x12)

/* Timer 1 */
#define ICR1L   _SFR_IO8(0x26)
#define ICR1H   _SFR_IO8(0x27)
#define OCR1BH  _SFR_IO8(0x29)
#define OCR1AL  _SFR_IO8(0x2A)
#define OCR1AH  _SFR_IO8(0x2B)
#define TCNT1L  _SFR_IO8(0x2C)
#define TCNT1H  _SFR_IO8(0x2D)
#define TCCR1B  _SFR_IO8(0x2E)
#define TCCR1A  _SFR_IO8(0x2F)
#define SFIOR   _SFR_IO8(0x30)
#define OSCCAL  _SFR_IO8(0x31)
#define OCDR    OSCCAL

/* Timer 0 */
#define TCNT0   _SFR_IO8(0x32)
#define TCCR0   _SFR_IO8(0x33)
#define MCUSR   _SFR_IO8(0x34)
#define MCUCR   _SFR_IO8(0x35)
#define TIFR    _SFR_IO8(0x38)
#define TIMSK   _SFR_IO8(0x39)
#define GIFR    _SFR_IO8(0x3A)
#define GIMSK   _SFR_IO8(0x3B)
#define OCR0    _SFR_IO8(0x3C)
#define ICR1    _SFR_IO16(0x26)
#define OCR1B   _SFR_IO16(0x28)
#define OCR1A   _SFR_IO16(0x2A)
#define TCNT1   _SFR_IO16(0x2C)
#define GICR    GIMSK
#define MCUCSR  MCUSR

/* GICR */
#define INT1    7
#define INT0    6
#define INT2    5
#define IVSEL   1
#define IVCE    0
#define INTF1   7
#define INTF0   6
#define INTF2   5

/* TIFR */
#define OCF1A   4

/* MCUCR */
#define ISC11   3
#define ISC10   2
#define ISC01   1
#define ISC00   0

#define WGM13   4
#define WGM12   3
#define CS12    2
#define CS11    1
#define CS10    0
