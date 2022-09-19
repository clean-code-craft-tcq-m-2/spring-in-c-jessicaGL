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

	
	if(maxThreshold < computedStats.max)
	{
		emailAlerter();
		ledAlerter();
		
	}
	
	
}
