Action1()
{
	
	//Вывод в output цены первого билета
    web_reg_save_param_ex(
        "ParamName=TotalCost", 
        "LB/IC=Total Charge: $ ",                 //Ограничение слева
        "RB/IC= <BR/>",                            //Ограничение справа
        "Ordinal=1",                             //Какое значение взять
    LAST); 

    //Вывод в output количества билетов впервого класса
    web_reg_find("Text=A First class ticket for",
                 "SaveCount=FirstCount",
                 LAST);
	
	/* Itinerary */

	web_url("welcome.pl", 
		"URL={Host}/cgi-bin/welcome.pl?page=itinerary",          
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

		
		
	return 0;
}