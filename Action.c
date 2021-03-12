//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("T00_Launch");
	truclient_step("1", "Navigate to 'https://onlineboutique.dev/'", "snapshot=Action_1.inf");
	lr_end_transaction("T00_Launch",0);
	truclient_step("2", "Evaluate JavaScript code var linkCount = document...nt[randomLink]);", "snapshot=Action_2.inf");
	truclient_step("3", "Click on Random Product link", "snapshot=Action_3.inf");
	truclient_step("4", "Select 4 from Quantity listbox", "snapshot=Action_4.inf");
	lr_start_transaction("T10_AddToCart");
	truclient_step("5", "Click on Add to Cart button", "snapshot=Action_5.inf");
	lr_end_transaction("T10_AddToCart",0);
	lr_start_transaction("T20_PlaceOrder");
	truclient_step("6", "Click on Place order button", "snapshot=Action_6.inf");
	lr_end_transaction("T20_PlaceOrder",0);

	return 0;
}
