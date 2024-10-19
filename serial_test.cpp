/*
  Control Intensity of LED using PWM on Raspberry pi
  http://www.electronicwings.com
 */

#include <wiringPi.h> /* include wiringPi library */
#include <stdio.h>    
#include <softPwm.h>  /* include header file for software PWM */

int main(){
	int PWM_pin = 7;		/* GPIO1 as per WiringPi,GPIO18 as per BCM */
	int intensity;
	wiringPiSetup();		/* initialize wiringPi setup */
	pinMode(PWM_pin,OUTPUT);	/* set GPIO as output */
	softPwmCreate(PWM_pin,1,100);	/* set PWM channel along with range*/
	while (1)
	  {
		softPwmWrite(PWM_pin, 100);
	}
}