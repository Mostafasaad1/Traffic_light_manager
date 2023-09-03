/* vectors */

/* External Interrupt Request 0 */
#define INT0_vect_num		1
#define INT0_vect			_VECTOR(1)
#define SIG_INTERRUPT0			_VECTOR(1)
#define INT1_vect_num		2
#define INT1_vect			_VECTOR(2)
#define SIG_INTERRUPT1			_VECTOR(2)
/* Timer/Counter1 Capture Event */
#define TIMER1_CAPT_vect_num	6
#define TIMER1_CAPT_vect		_VECTOR(6)
#define SIG_INPUT_CAPTURE1		_VECTOR(6)
/* Timer/Counter1 Compare Match A */
#define TIMER1_COMPA_vect_num	7
#define TIMER1_COMPA_vect		_VECTOR(7)
#define SIG_OUTPUT_COMPARE1A	_VECTOR(7)
/* Timer/Counter1 Compare Match B */
#define TIMER1_COMPB_vect_num	8
#define TIMER1_COMPB_vect		_VECTOR(8)
#define SIG_OUTPUT_COMPARE1B		_VECTOR(8)
/* Timer/Counter1 Overflow */
#define TIMER1_OVF_vect_num		9
#define TIMER1_OVF_vect			_VECTOR(9)
#define SIG_OVERFLOW1			_VECTOR(9)
/* Timer/Counter0 Compare Match */
#define TIMER0_COMP_vect_num	10
#define TIMER0_COMP_vect		_VECTOR(10)
#define SIG_OUTPUT_COMPARE0		_VECTOR(10)
/* Timer/Counter0 Overflow */
#define TIMER0_OVF_vect_num		11
#define TIMER0_OVF_vect			_VECTOR(11)
#define SIG_OVERFLOW0			_VECTOR(11)

#define _VECTORS_SIZE 84
