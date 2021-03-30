Action()
{
   
	/* Flights */


	web_url("Search Flights Button", 
		"URL={Host}/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param_ex(
		"ParamName=OFlight",
    	"LB=name=\"outboundFlight\" value=\"",
    	"RB=\"",
    	"Ordinal={Random1}",
    	"NotFound=Warning",
			LAST);

	
	/* Continue 1 Change City/Date/Type */
	
	web_submit_data("reservations.pl", 
		"Action={Host}/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={City1}", ENDITEM, 
		"Name=departDate", "Value={Date1}", ENDITEM, 
		"Name=arrive", "Value={City2}", ENDITEM, 
		"Name=returnDate", "Value={Date2}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value={SeatingPref}", ENDITEM, 
		"Name=seatType", "Value={TypeOfSeat}", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=62", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	/* Continue 2 */


	web_submit_data("reservations.pl_2", 
		"Action={Host}/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/reservations.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={OFlight}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value={TypeOfSeat}", ENDITEM, 
		"Name=seatPref", "Value={SeatingPref}", ENDITEM, 
		"Name=reserveFlights.x", "Value=71", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		LAST);

	/* Continue 3 */


	web_submit_data("reservations.pl_3", 
		"Action={Host}/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/reservations.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value={TypeOfSeat}", ENDITEM, 
		"Name=seatPref", "Value={SeatingPref}", ENDITEM, 
		"Name=outboundFlight", "Value={OFlight}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=39", ENDITEM, 
		"Name=buyFlights.y", "Value=12", ENDITEM, 
		LAST);

	return 0;
}
