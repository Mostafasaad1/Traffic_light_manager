
// App functions //
#ifndef PORT0
#include "..\Drivers\io.h"
#ifndef Flag_b_1
#include "App_init.h"

int Delayf(){
	//If flag is set toggle the led
	while((TIFR & (1<<OCF1A)) == 0);// wait till the timer overflow flag is SET
	TCNT1 = 0;
	TIFR |= (1<<OCF1A) ; //clear timer1 overflow flag
	return 0 ;
}

void blinking_norm(){
	switch (Flag_b_1)
	{
		case 0:
		PORTA = 0b00000100; // Green
		PORTB = 0b00000001;
		Flag_b_1++;
		break;
		case 1:
		PORTA = 0b00000010; // Yellow
		PORTB = 0b00000001;
		Flag_b_1++;
		break;
		case 2:
		PORTA = 0b00000001; // Red
		PORTB = 0b00000100;
		Flag_b_1++;
		break;
		case 4:
		PORTA = 0b00000000; // off
		PORTB = 0b00000001;
		Flag_b_1++;
		break;
		default:
		PORTA = 0b00000010; // Yellow
		PORTB = 0b00000001;
		Flag_b_1 =0;
		break;
		
	}
Delayf();}

void blinking(){
	switch (Flag_b_1)
	{
		case 0:
		PORTA = 0b00000100; // Green
		break;
		case 1:
		PORTA = 0b00000010; // Yellow
		break;
		case 2:
		PORTA = 0b00000001; // Red
		break;
		case 4:
		PORTA = 0b00000000; // off
		break;
		default:
		PORTA = 0b00000010; // Yellow
		break;
		
	}
Delayf();}

void blinking2(){
	switch (Flag_b_2)
	{
		case 0:
		PORTB = 0b00000100; // Green
		break;
		case 1:
		PORTB = 0b00000010; // Yellow
		break;
		case 2:
		PORTB = 0b00000001; // Red
		break;
		case 4:
		PORTB = 0b00000000; // off
		break;
		default:
		PORTB = 0b00000010; // Yellow
		
		break;
		
	}}


	// Timer0 ISR
	ISR(INT0_vect){
		if ( Flag_b_1 ==2 ){
			Flag_b_2 = 0;
		}
		else if ( Flag_b_1 ==1 || Flag_b_1 ==0 )
		{
			
			Flag_b_2 = 2;  //red
			blinking();
			blinking2();

			// yellow blinking
			Delayf(); // 2.5 s
			PORTB = 0b00000010;
			PORTA = 0b00000010;
			Delayf(); // 2.5 s
			PORTB = 0b00000000;
			PORTA = 0b00000000;
			Delayf(); // 2.5 s
			PORTB = 0b00000010;
			PORTA = 0b00000010;
			Delayf(); // 2.5 s
			PORTB = 0b00000000;
			PORTA = 0b00000000;
			Delayf(); // 2.5 s
			
			// Green
			Flag_b_2 = 0;  //green
			Flag_b_1 = 2;   // red
			blinking();
			blinking2();

			Delayf(); // 2.5 s
			Delayf(); // 2.5 s
			Delayf(); // 2.5 s
			
			PORTB = 0b00000110; 
			PORTA = 0b00000011; 
			Delayf(); // 2.5 s
			PORTB = 0b00000100; 
			PORTA = 0b00000001; 
			Delayf(); // 2.5 s
			PORTB = 0b00000110; 
			PORTA = 0b00000011; 
			Delayf(); // 2.5 s
			PORTB = 0b00000100;
			PORTA = 0b00000001;
			Delayf(); // 2.5 s
			PORTB = 0b00000110;
			PORTA = 0b00000011;
			
			Delayf(); // 2.5 s
			Delayf(); // 2.5 s
			Flag_b_1 = 0;  //green
			Flag_b_2 = 2;   // red
			blinking();
			blinking2();
			
		}}


		void intilizer(){
			Flag_b_1=0;  // Normal State
			Flag_b_2=0;

			DDRA = 0xFF;
			DDRB = 0xFF;
			DDRD = 0x00;						  	/* PORTD as input */
			PORTD= 0xFF;					  	   /* Make pull up high */
			
			//timer 0
			GICR = 1<<INT0;				         	/* Enable INT0*/
			MCUCR = 1<<ISC01 | 1<<ISC00;        	/* Trigger INT0 on rising edge */
			
			// timer 1
			TCCR1B = (1<<CS10) | (1<<CS12); //set the pre-scalar as 1024
			OCR1A = 32750; 	   			//2.5 S delay
			//OCR1A = 3905/2; //Use for Only testing 
			TCNT1 = 0;
			
			// enable global interrupts
			sei();
		}
		void App_start(){
			while(1){blinking_norm();}
		}

		//
		#endif
		#endif
		
