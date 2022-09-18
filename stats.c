#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
	int i;
	float min = numberset[0], max = numberset[0], prom, sum = 0;

	//antes de la cuenta comprobar que no sea cero
	//si es el caso devolver NAN
	
	//tomar el arreglo entrante y calcular los maximos minimos y promedio

    for(i = 0 ; i < setlength; i++)
    {
        if(numberset[i]> max)
        {
            max = numberset[i];
        }
        if(numberset[i] < min)
        {
            min = numberset[i];
        }
      sum += numberset[i];  
    }
	if(sum == 0)
	{
		s.average = NAN;
		s.min = NAN;
		s.max = NAN;
	}
	else
	{
	prom  = sum/setlength;
	
    s.average = prom;
    s.min = min;
    s.max = max;
	}
	
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
