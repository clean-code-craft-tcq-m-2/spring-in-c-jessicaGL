#include "stats.h"
#include "alerts.h"


void emailAlerter()
{
	emailAlertCallCount++;
}

void ledAlerter()
{
	ledAlertCallCount++;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
{
	//lo que hace esta funcion es checar que el max sea menos que el max de computed stats
	
	if(maxThreshold < computedStats.max)
	{
		emailAlerter();
		ledAlerter();
		
	}
	
	
}