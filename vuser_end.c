vuser_end()
{
	
	//����� ���� 1�� ������
    lr_output_message("Price first ticket = %d",atoi(lr_eval_string("{TotalCost}")));

    //����� ���-�� ������� 1�� ������
    lr_output_message("Number of ticket 1 class= %d",atoi(lr_eval_string("{FirstCount}")));
	
	/* Sign Off */

	web_url("SignOff Button", 
		"URL={Host}/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	
	return 0;
}
