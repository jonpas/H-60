class vtx_uh60_jvmf_inboxDialog {
    idd = 20001;
    movingEnable = 1;
    onLoad = "_this call vtx_uh60_jvmf_fnc_prepareInboxDialog;";
    class Controls {
        class IGUIBack_2200: IGUIBack
        {
        	idc = 2200;
        	x = QUOTE(0.386562 * safezoneW + safezoneX);
        	y = QUOTE(0.225 * safezoneH + safezoneY);
        	w = QUOTE(0.237187 * safezoneW);
        	h = QUOTE(0.484 * safezoneH);
            colorBackground[] = {0.1,0.1,0.1,1};
        };
		class backgroundPicture: RscPicture {
			idc = 999;
			text = "z\vtx\addons\uh60_jvmf\data\screen2.paa";
        	x = QUOTE(0.350562 * safezoneW + safezoneX);
        	y = QUOTE(0.065 * safezoneH + safezoneY);
        	w = QUOTE(0.305187 * safezoneW);
        	h = QUOTE(0.800 * safezoneH);
		};
        class RscText_1001: RscText
        {
        	idc = 1001;
        	text = "NEW MSG"; //--- ToDo: Localize;
        	x = QUOTE(0.47875 * safezoneW + safezoneX);
        	y = QUOTE(0.235 * safezoneH + safezoneY);
        	w = QUOTE(0.825 * safezoneW);
        	h = QUOTE(0.022 * safezoneH);
        };
        class RscButton_1602: RscButton
        {
        	idc = 1602;
        	text = "FREETEXT"; //--- ToDo: Localize;
        	x = QUOTE(0.456875 * safezoneW + safezoneX);
        	y = QUOTE(0.255 * safezoneH + safezoneY);
        	w = QUOTE(0.04125 * safezoneW);
        	h = QUOTE(0.022 * safezoneH);
            onButtonClick="closeDialog 2;createDialog ""vtx_uh60_jvmf_writeDialog"";";
        };
        class RscButton_1603: RscButton
        {
        	idc = 1603;
        	text = "POSREP"; //--- ToDo: Localize;
        	x = QUOTE(0.50 * safezoneW + safezoneX);
        	y = QUOTE(0.255 * safezoneH + safezoneY);
        	w = QUOTE(0.04125 * safezoneW);
        	h = QUOTE(0.022 * safezoneH);
            onButtonClick="closeDialog 2;createDialog ""vtx_uh60_jvmf_positionDialog"";";
        };
        class RscButton_1604: RscButton
        {
        	idc = 1604;
        	text = "JVMF INBOX"; //--- ToDo: Localize;
        	x = QUOTE(0.4 * safezoneW + safezoneX);
        	y = QUOTE(0.235 * safezoneH + safezoneY);
        	w = QUOTE(0.054 * safezoneW);
        	h = QUOTE(0.044 * safezoneH);
            onButtonClick="";
        };
		class RscListBox1: RscListBox
		{
			font = "EtelkaMonospacePro";
        	idc = 1337;
        	x = QUOTE(0.396875 * safezoneW + safezoneX);
        	y = QUOTE(0.29 * safezoneH + safezoneY);
        	w = QUOTE(0.215 * safezoneW);
        	h = QUOTE(0.38 * safezoneH);
		};
        class RscButton_1600: RscButton
        {
        	idc = 1600;
        	text = "Open"; //--- ToDo: Localize;
        	x = QUOTE(0.572187 * safezoneW + safezoneX);
        	y = QUOTE(0.67 * safezoneH + safezoneY);
        	w = QUOTE(0.04125 * safezoneW);
        	h = QUOTE(0.022 * safezoneH);
            onButtonClick="_this spawn vtx_uh60_jvmf_fnc_openMessage";
        };
    };
};
