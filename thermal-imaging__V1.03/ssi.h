#ifndef __SSI_H__
#define __SSI_H__

const char *ssitags[] = {"text1",   "text2",   "text3",   "text4",  "text5",    "text6",   "text7",   "text8",   "text9",   "text10",  "text11",  "text12",  "text13",  "text14",  "text15", 
						 "text16",  "text17",  "text18",  "text19",  "text20",  "text21",  "text22",  "text23",  "text24",  "text25",  "text26",  "text27",  "text28",  "text29",  "text30", 
						 "text31",  "text32",  "text33",  "text34",  "text35",  "text36",  "text37",  "text38",  "text39",  "text40",  "text41",  "text42",  "text43",  "text44",  "text45", 
						 "text46",  "text47",  "text48",  "text49",  "text50",  "text51",  "text52",  "text53",  "text54",  "text55",  "text56",  "text57",  "text58",  "text59",  "text60",
	                     "text61",  "text62",  "text63",  "text64",  "text65",  "text66",  "text67",  "text68",  "text69",  "text70",  "text71",  "text72",  "text73",  "text74",  "text75",
	                     "text76",  "text77",  "text78",  "text79",  "text80",  "text81",  "text82",  "text83",  "text84",  "text85",  "text86",  "text87",  "text88",  "text89",  "text90",
	                     "text91",  "text92",  "text93",  "text94",  "text95",  "text96",  "text97",  "text98",  "text99",  "text100", "text101", "text102", "text103", "text104", "text105",
	                     "text106", "text107", "text108", "text109", "text110", "text111", "text112", "text113", "text114", "text115", "text116", "text117", "text118", "text119", "text120",
	                     "text121", "text122", "text123", "text124", "text125", "text126", "text127", "text128", "text129", "text130", "text131", "text132", "text133", "text134", "text135", 
						 "text136", "text137", "text138", "text139", "text140", "text141", "text142", "text143", "text144", "text145", "text146", "text147", "text148", "text149", "text150", 
						 "text151", "text152", "text153", "text154", "text155", "text156", "text157", "text158", "text159", "text160", "text161", "text162", "text163", "text164", "text165", 
						 "text166", "text167", "text168", "text169", "text170", "text171", "text172", "text173", "text174", "text175", "text176", "text177", "text178", "text179", "text180",
	                     "text181", "text182", "text183", "text184", "text185", "text186", "text187", "text188", "text189", "text190", "text191", "text192", "text193", "text194", "text195", 
						 "text196", "text197", "text198", "text199", "text200", "text201", "text202", "text203", "text204", "text205", "text206", "text207", "text208", "text209", "text210", 
						 "text211", "text212", "text213", "text214", "text215", "text216", "text217", "text218", "text219", "text220", "text221", "text222", "text223", "text224", "text225",
	                     "text226", "text227", "text228", "text229", "text230", "text231", "text232", "text233", "text234", "text235", "text236", "text237", "text238", "text239", "text240",
	                     "text241", "text242", "text243", "text244", "text245", "text246", "text247", "text248", "text249", "text250", "text251", "text252", "text253", "text254", "text255",
	                     "text256", "text257", "text258", "text259", "text260", "text261", "text262", "text263", "text264", "text265", "text266", "text267", "text268", "text269", "text270",
						 "text271", "text272", "text273", "text274", "text275", "text276", "text277", "text278", "text279", "text280", "text281", "text282", "text283", "text284", "text285",
	                     "text286", "text287", "text288", "text289", "text290", "text291", "text292", "text293", "text294", "text295", "text296", "text297", "text298", "text299", "text300",
	                     "text301", "text302", "text303", "text304", "text305", "text306", "text307", "text308", "text309", "text310", "text311", "text312", "text313", "text314", "text315",
	                     "text316", "text317", "text318", "text319", "text320", "text321", "text322", "text323", "text324", "text325", "text326", "text327", "text328", "text329", "text330",
	                     "text331", "text332", "text333", "text334", "text335", "text336", "text337", "text338", "text339", "text340", "text341", "text342", "text343", "text344", "text345",
	                     "text346", "text347", "text348", "text349", "text350", "text351", "text352", "text353", "text354", "text355", "text356", "text357", "text358", "text359", "text360",
	                     "text361", "text362", "text363", "text364", "text365", "text366", "text367", "text368", "text369", "text370", "text371", "text372", "text373", "text374", "text375", 
						 "text376", "text377", "text378", "text379", "text380", "text381", "text382", "text383", "text384", "text385", "text386", "text387", "text388", "text389", "text390", 
						 "text391", "text392", "text393", "text394", "text395", "text396", "text397", "text398", "text399", "text400", "text401", "text402", "text403", "text404", "text405", 
						 "text406", "text407", "text408", "text409", "text410", "text411", "text412", "text413", "text414", "text415", "text416", "text417", "text418", "text419", "text420",
	                     "text421", "text422", "text423", "text424", "text425", "text426", "text427", "text428", "text429", "text430", "text431", "text432", "text433", "text434", "text435",
	                     "text436", "text437", "text438", "text439", "text440", "text441", "text442", "text443", "text444", "text445", "text446", "text447", "text448", "text449", "text450",
	                     "text451", "text452", "text453", "text454", "text455", "text456", "text457", "text458", "text459", "text460", "text461", "text462", "text463", "text464", "text465",
	                     "text466", "text467", "text468", "text469", "text470", "text471", "text472", "text473", "text474", "text475", "text476", "text477", "text478", "text479", "text480",
	                     "text481", "text482", "text483", "text484", "text485", "text486", "text487", "text488", "text489", "text490", "text491", "text492", "text493", "text494", "text495", 
						 "text496", "text497", "text498", "text499", "text500", "text501", "text502", "text503", "text504", "text505", "text506", "text507", "text508", "text509", "text510", 
						 "text511", "text512", "text513", "text514", "text515", "text516", "text517", "text518", "text519", "text520", "text521", "text522", "text523", "text524", "text525", 
						 "text526", "text527", "text528", "text529", "text530", "text531", "text532", "text533", "text534", "text535", "text536", "text537", "text538", "text539", "text540",
	                     "text541", "text542", "text543", "text544", "text545", "text546", "text547", "text548", "text549", "text550", "text551", "text552", "text553", "text554", "text555", 
						 "text556", "text557", "text558", "text559", "text560", "text561", "text562", "text563", "text564", "text565", "text566", "text567", "text568", "text569", "text570", 
						 "text571", "text572", "text573", "text574", "text575", "text576", "text577", "text578", "text579", "text580", "text581", "text582", "text583", "text584", "text585",
	                     "text586", "text587", "text588", "text589", "text590", "text591", "text592", "text593", "text594", "text595", "text596", "text597", "text598", "text599", "text600",
	                     "text601", "text602", "text603", "text604", "text605", "text606", "text607", "text608", "text609", "text610", "text611", "text612", "text613", "text614", "text615",
	                     "text616", "text617", "text618", "text619", "text620", "text621", "text622", "text623", "text624", "text625", "text626", "text627", "text628", "text629", "text630",
						 "text631", "text632", "text633", "text634", "text635", "text636", "text637", "text638", "text639", "text640", "text641", "text642", "text643", "text644", "text645",
	                     "text646", "text647", "text648", "text649", "text650", "text651", "text652", "text653", "text654", "text655", "text656", "text657", "text658", "text659", "text660",
	                     "text661", "text662", "text663", "text664", "text665", "text666", "text667", "text668", "text669", "text670", "text671", "text672", "text673", "text674", "text675",
	                     "text676", "text677", "text678", "text679", "text680", "text681", "text682", "text683", "text684", "text685", "text686", "text687", "text688", "text689", "text690",
	                     "text691", "text692", "text693", "text694", "text695", "text696", "text697", "text698", "text699", "text700", "text701", "text702", "text703", "text704", "text705",
	                     "text706", "text707", "text708", "text709", "text710", "text711", "text712", "text713", "text714", "text715", "text716", "text717", "text718", "text719", "text720",
	                     "text721", "text722", "text723", "text724", "text725", "text726", "text727", "text728", "text729", "text730", "text731", "text732", "text733", "text734", "text735",
	                     "text736", "text737", "text738", "text739", "text740", "text741", "text742", "text743", "text744", "text745", "text746", "text747", "text748", "text749", "text750",
	                     "text751", "text752", "text753", "text754", "text755", "text756", "text757", "text758", "text759", "text760", "text761", "text762", "text763", "text764", "text765",
	                     "text766", "text767", "text768", "text769"};

u16_t mySSIHandler(int iIndex, char *pcInsert, int iInsertLen)
{    
    
    switch(iIndex){
        
        case 0:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[0]);
            break;
        case 1:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[1]);
            break;
        case 2:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[2]);
            break;
        case 3:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[3]);
            break;
        case 4:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[4]);
            break;
        case 5:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[5]);
            break;
        case 6:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[6]);
            break;
        case 7:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[7]);
            break;
        case 8:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[8]);
            break;
        case 9:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[9]);
            break;
        case 10:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[10]);
            break;
        case 11:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[11]);
            break;
        case 12:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[12]);
            break;
        case 13:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[13]);
            break;
        case 14:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[14]);
            break;
        case 15:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[15]);
            break;
        case 16:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[16]);
            break;
        case 17:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[17]);
            break;
        case 18:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[18]);
            break;
        case 19:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[19]);
            break;
        case 20:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[20]);
            break;
        case 21:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[21]);
            break;
        case 22:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[22]);
            break;
        case 23:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[23]);
            break;
        case 24:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[24]);
            break;
        case 25:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[25]);
            break;
        case 26:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[26]);
            break;
        case 27:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[27]);
            break;
        case 28:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[28]);
            break;
        case 29:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[29]);
            break;      
        case 30:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[30]);
            break;
        case 31:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow1[31]);
            break;
            
        case 32:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[0]);
            break;
        case 33:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[1]);
            break;
        case 34:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[2]);
            break;
        case 35:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[3]);
            break;
        case 36:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[4]);
            break;
        case 37:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[5]);
            break;
        case 38:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[6]);
            break;
        case 39:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[7]);
            break;
        case 40:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[8]);
            break;
        case 41:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[9]);
            break;
        case 42:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[10]);
            break;
        case 43:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[11]);
            break;
        case 44:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[12]);
            break;
        case 45:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[13]);
            break;
        case 46:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[14]);
            break;
        case 47:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[15]);
            break;
        case 48:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[16]);
            break;
        case 49:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[17]);
            break;
        case 50:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[18]);
            break;
        case 51:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[19]);
            break;
        case 52:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[20]);
            break;
        case 53:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[21]);
            break;
        case 54:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[22]);
            break;
        case 55:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[23]);
            break;
        case 56:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[24]);
            break;
        case 57:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[25]);
            break;
        case 58:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[26]);
            break;
        case 59:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[27]);
            break;
        case 60:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[28]);
            break;
        case 61:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[29]);
            break;
        case 62:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[30]);
            break;
        case 63:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow2[31]);
            break;
            
        case 64:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[0]);
            break;
        case 65:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[1]);
            break;
        case 66:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[2]);
            break;
        case 67:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[3]);
            break;
        case 68:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[4]);
            break;
        case 69:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[5]);
            break;
        case 70:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[6]);
            break;
        case 71:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[7]);
            break;
        case 72:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[8]);
            break;
        case 73:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[9]);
            break;
        case 74:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[10]);
            break;
        case 75:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[11]);
            break;
        case 76:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[12]);
            break;
        case 77:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[13]);
            break;
        case 78:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[14]);
            break;
        case 79:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[15]);
            break;
        case 80:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[16]);
            break;
        case 81:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[17]);
            break;
        case 82:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[18]);
            break;
        case 83:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[19]);
            break;
        case 84:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[20]);
            break;
        case 85:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[21]);
            break;
        case 86:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[22]);
            break;
        case 87:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[23]);
            break;
        case 88:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[24]);
            break;
        case 89:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[25]);
            break;
        case 90:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[26]);
            break;
        case 91:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[27]);
            break;
        case 92:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[28]);
            break;
        case 93:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[29]);
            break;
        case 94:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[30]);
            break;
        case 95:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow3[31]);
            break;
            
        case 96:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[0]);
            break;
        case 97:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[1]);
            break;
        case 98:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[2]);
            break;
        case 99:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[3]);
            break;
        case 100:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[4]);
            break;
        case 101:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[5]);
            break;
        case 102:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[6]);
            break;
        case 103:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[7]);
            break;
        case 104:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[8]);
            break;
        case 105:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[9]);
            break;
        case 106:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[10]);
            break;
        case 107:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[11]);
            break;
        case 108:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[12]);
            break;
        case 109:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[13]);
            break;
        case 110:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[14]);
            break;
        case 111:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[15]);
            break;
        case 112:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[16]);
            break;
        case 113:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[17]);
            break;
        case 114:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[18]);
            break;
        case 115:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[19]);
            break;
        case 116:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[20]);
            break;
        case 117:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[21]);
            break;
        case 118:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[22]);
            break;
        case 119:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[23]);
            break;
        case 120:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[24]);
            break;
        case 121:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[25]);
            break;
        case 122:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[26]);
            break;
        case 123:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[27]);
            break;
        case 124:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[28]);
            break;
        case 125:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[29]);
            break;
        case 126:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[30]);
            break;
        case 127:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow4[31]);
            break;
            
        case 128:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[0]);
            break;
        case 129:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[1]);
            break;
        case 130:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[2]);
            break;
        case 131:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[3]);
            break;
        case 132:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[4]);
            break;
        case 133:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[5]);
            break;
        case 134:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[6]);
            break;
        case 135:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[7]);
            break;
        case 136:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[8]);
            break;
        case 137:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[9]);
            break;
        case 138:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[10]);
            break;
        case 139:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[11]);
            break;
        case 140:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[12]);
            break;
        case 141:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[13]);
            break;
        case 142:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[14]);
            break;
        case 143:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[15]);
            break;
        case 144:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[16]);
            break;
        case 145:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[17]);
            break;
        case 146:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[18]);
            break;
        case 147:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[19]);
            break;
        case 148:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[20]);
            break;
        case 149:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[21]);
            break;
        case 150:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[22]);
            break;
        case 151:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[23]);
            break;
        case 152:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[24]);
            break;
        case 153:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[25]);
            break;
        case 154:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[26]);
            break;
        case 155:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[27]);
            break;
        case 156:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[28]);
            break;
        case 157:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[29]);
            break;
        case 158:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[30]);
            break;            
        case 159:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow5[31]);
            break;
            
        case 160:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[0]);
            break;
        case 161:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[1]);
            break;
        case 162:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[2]);
            break;
        case 163:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[3]);
            break;
        case 164:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[4]);
            break;            
        case 165:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[5]);
            break;
        case 166:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[6]);
            break;
        case 167:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[7]);
            break;
        case 168:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[8]);
            break;
        case 169:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[9]);
            break;
        case 170:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[10]);
            break;
        case 171:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[11]);
            break;
        case 172:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[12]);
            break;
        case 173:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[13]);
            break;
        case 174:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[14]);
            break;
        case 175:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[15]);
            break;
        case 176:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[16]);
            break;
        case 177:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[17]);
            break;
        case 178:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[18]);
            break;
        case 179:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[19]);
            break;            
        case 180:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[20]);
            break;
        case 181:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[21]);
            break;
        case 182:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[22]);
            break;
        case 183:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[23]);
            break;
        case 184:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[24]);
            break;
        case 185:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[25]);
            break;
        case 186:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[26]);
            break;
        case 187:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[27]);
            break;
        case 188:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[28]);
            break;
        case 189:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[29]);
            break;
        case 190:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[30]);
            break;
        case 191:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow6[31]);
            break;
            
        case 192:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[0]);
            break;
        case 193:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[1]);
            break;
        case 194:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[2]);
            break;            
        case 195:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[3]);
            break;
        case 196:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[4]);
            break;
        case 197:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[5]);
            break;
        case 198:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[6]);
            break;
        case 199:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[7]);
            break;
        case 200:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[8]);
            break;
        case 201:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[9]);
            break;
        case 202:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[10]);
            break;
        case 203:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[11]);
            break;
        case 204:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[12]);
            break;
        case 205:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[13]);
            break;
        case 206:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[14]);
            break;
        case 207:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[15]);
            break;
        case 208:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[16]);
            break;
        case 209:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[17]);
            break;
        case 210:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[18]);
            break;
        case 211:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[19]);
            break;
        case 212:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[20]);
            break;
        case 213:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[21]);
            break;
        case 214:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[22]);
            break;
        case 215:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[23]);
            break;
        case 216:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[24]);
            break;
        case 217:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[25]);
            break;
        case 218:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[26]);
            break;
        case 219:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[27]);
            break;
        case 220:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[28]);
            break;
        case 221:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[29]);
            break;
        case 222:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[30]);
            break;
        case 223:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow7[31]);
            break;
            
        case 224:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[0]);
            break;            
        case 225:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[1]);
            break;
        case 226:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[2]);
            break;            
        case 227:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[3]);
            break;
        case 228:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[4]);
            break;
        case 229:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[5]);
            break;
        case 230:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[6]);
            break;
        case 231:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[7]);
            break;
        case 232:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[8]);
            break;
        case 233:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[9]);
            break;
        case 234:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[10]);
            break;
        case 235:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[11]);
            break;
        case 236:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[12]);
            break;
        case 237:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[13]);
            break;
        case 238:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[14]);
            break;
        case 239:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[15]);
            break;            
        case 240:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[16]);
            break;
        case 241:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[17]);
            break;
        case 242:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[18]);
            break;
        case 243:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[19]);
            break;
        case 244:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[20]);
            break;
        case 245:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[21]);
            break;
        case 246:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[22]);
            break;
        case 247:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[23]);
            break;
        case 248:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[24]);
            break;
        case 249:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[25]);
            break;
        case 250:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[26]);
            break;
        case 251:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[27]);
            break;
        case 252:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[28]);
            break;
        case 253:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[29]);
            break;
        case 254:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[30]);
            break;            
        case 255:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow8[31]);
            break;
            
        case 256:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[0]);
            break;
        case 257:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[1]);
            break;
        case 258:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[2]);
            break;
        case 259:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[3]);
            break;
        case 260:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[4]);
            break;
        case 261:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[5]);
            break;
        case 262:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[6]);
            break;
        case 263:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[7]);
            break;
        case 264:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[8]);
            break;
        case 265:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[9]);
            break;
        case 266:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[10]);
            break;
        case 267:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[11]);
            break;
        case 268:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[12]);
            break;
        case 269:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[13]);
            break;            
        case 270:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[14]);
            break;
        case 271:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[15]);
            break;
        case 272:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[16]);
            break;
        case 273:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[17]);
            break;
        case 274:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[18]);
            break;
        case 275:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[19]);
            break;
        case 276:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[20]);
            break;
        case 277:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[21]);
            break;
        case 278:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[22]);
            break;
        case 279:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[23]);
            break;
        case 280:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[24]);
            break;
        case 281:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[25]);
            break;
        case 282:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[26]);
            break;
        case 283:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[27]);
            break;
        case 284:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[28]);
            break;            
        case 285:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[29]);
            break;
        case 286:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[30]);
            break;
        case 287:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow9[31]);
            break;
            
        case 288:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[0]);
            break;
        case 289:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[1]);
            break;
        case 290:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[2]);
            break;
        case 291:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[3]);
            break;
        case 292:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[4]);
            break;
        case 293:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[5]);
            break;
        case 294:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[6]);
            break;
        case 295:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[7]);
            break;
        case 296:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[8]);
            break;
        case 297:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[9]);
            break;
        case 298:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[10]);
            break;
        case 299:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[11]);
            break;
        case 300:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[12]);
            break;
        case 301:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[13]);
            break;
        case 302:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[14]);
            break;
        case 303:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[15]);
            break;
        case 304:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[16]);
            break;
        case 305:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[17]);
            break;
        case 306:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[18]);
            break;
        case 307:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[19]);
            break;
        case 308:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[20]);
            break;
        case 309:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[21]);
            break;
        case 310:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[22]);
            break;
        case 311:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[23]);
            break;
        case 312:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[24]);
            break;
        case 313:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[25]);
            break;
        case 314:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[26]);
            break;            
        case 315:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[27]);
            break;
        case 316:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[28]);
            break;
        case 317:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[29]);
            break;
        case 318:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[30]);
            break;
        case 319:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow10[31]);
            break;
            
        case 320:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[0]);
            break;
        case 321:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[1]);
            break;
        case 322:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[2]);
            break;
        case 323:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[3]);
            break;
        case 324:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[4]);
            break;
        case 325:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[5]);
            break;
        case 326:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[6]);
            break;
        case 327:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[7]);
            break;
        case 328:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[8]);
            break;
        case 329:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[9]);
            break;            
        case 330:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[10]);
            break;
        case 331:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[11]);
            break;
        case 332:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[12]);
            break;
        case 333:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[13]);
            break;
        case 334:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[14]);
            break;
        case 335:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[15]);
            break;
        case 336:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[16]);
            break;
        case 337:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[17]);
            break;
        case 338:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[18]);
            break;
        case 339:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[19]);
            break;
        case 340:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[20]);
            break;
        case 341:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[21]);
            break;
        case 342:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[22]);
            break;
        case 343:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[23]);
            break;
        case 344:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[24]);
            break;            
        case 345:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[25]);
            break;
        case 346:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[26]);
            break;
        case 347:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[27]);
            break;
        case 348:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[28]);
            break;
        case 349:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[29]);
            break;
        case 350:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[30]);
            break;
        case 351:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow11[31]);
            break;
            
        case 352:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[0]);
            break;
        case 353:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[1]);
            break;
        case 354:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[2]);
            break;
        case 355:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[3]);
            break;
        case 356:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[4]);
            break;
        case 357:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[5]);
            break;
        case 358:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[6]);
            break;
        case 359:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[7]);
            break;
        case 360:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[8]);
            break;
        case 361:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[9]);
            break;            
        case 362:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[10]);
            break;
        case 363:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[11]);
            break;
        case 364:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[12]);
            break;
        case 365:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[13]);
            break;
        case 366:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[14]);
            break;
        case 367:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[15]);
            break;
        case 368:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[16]);
            break;
        case 369:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[17]);
            break;
        case 370:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[18]);
            break;
        case 371:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[19]);
            break;
        case 372:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[20]);
            break;
        case 373:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[21]);
            break;
        case 374:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[22]);
            break;
        case 375:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[23]);
            break;
        case 376:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[24]);
            break;            
        case 377:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[25]);
            break;
        case 378:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[26]);
            break;
        case 379:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[27]);
            break;
        case 380:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[28]);
            break;
        case 381:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[29]);
            break;
        case 382:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[30]);
            break;
        case 383:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow12[31]);
            break;
            
        case 384:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[0]);
            break;
        case 385:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[1]);
            break;
        case 386:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[2]);
            break;
        case 387:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[3]);
            break;
        case 388:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[4]);
            break;
        case 389:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[5]);
            break;
        case 390:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[6]);
            break;
        case 391:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[7]);
            break;
        case 392:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[8]);
            break;
        case 393:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[9]);
            break;            
        case 394:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[10]);
            break;
        case 395:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[11]);
            break;
        case 396:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[12]);
            break;
        case 397:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[13]);
            break;
        case 398:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[14]);
            break;
        case 399:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[15]);
            break;
        case 400:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[16]);
            break;
        case 401:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[17]);
            break;
        case 402:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[18]);
            break;
        case 403:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[19]);
            break;
        case 404:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[20]);
            break;
        case 405:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[21]);
            break;
        case 406:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[22]);
            break;
        case 407:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[23]);
            break;
        case 408:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[24]);
            break;            
        case 409:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[25]);
            break;
        case 410:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[26]);
            break;
        case 411:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[27]);
            break;
        case 412:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[28]);
            break;
        case 413:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[29]);
            break;
        case 414:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[30]);
            break;
        case 415:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow13[31]);
            break;
            
        case 416:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[0]);
            break;
        case 417:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[1]);
            break;
        case 418:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[2]);
            break;
        case 419:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[3]);
            break;
        case 420:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[4]);
            break;
        case 421:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[5]);
            break;
        case 422:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[6]);
            break;
        case 423:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[7]);
            break;
        case 424:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[8]);
            break;
        case 425:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[9]);
            break;            
        case 426:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[10]);
            break;
        case 427:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[11]);
            break;
        case 428:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[12]);
            break;
        case 429:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[13]);
            break;
        case 430:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[14]);
            break;
        case 431:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[15]);
            break;
        case 432:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[16]);
            break;
        case 433:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[17]);
            break;
        case 434:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[18]);
            break;
        case 435:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[19]);
            break;
        case 436:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[20]);
            break;
        case 437:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[21]);
            break;
        case 438:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[22]);
            break;
        case 439:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[23]);
            break;
        case 440:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[24]);
            break;            
        case 441:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[25]);
            break;
        case 442:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[26]);
            break;
        case 443:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[27]);
            break;
        case 444:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[28]);
            break;
        case 445:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[29]);
            break;
        case 446:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[30]);
            break;
        case 447:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow14[31]);
            break;
            
        case 448:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[0]);
            break;
        case 449:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[1]);
            break;
        case 450:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[2]);
            break;
        case 451:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[3]);
            break;
        case 452:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[4]);
            break;
        case 453:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[5]);
            break;
        case 454:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[6]);
            break;
        case 455:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[7]);
            break;
        case 456:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[8]);
            break;
        case 457:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[9]);
            break;            
        case 458:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[10]);
            break;
        case 459:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[11]);
            break;
        case 460:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[12]);
            break;
        case 461:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[13]);
            break;
        case 462:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[14]);
            break;
        case 463:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[15]);
            break;
        case 464:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[16]);
            break;
        case 465:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[17]);
            break;
        case 466:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[18]);
            break;
        case 467:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[19]);
            break;
        case 468:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[20]);
            break;
        case 469:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[21]);
            break;
        case 470:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[22]);
            break;
        case 471:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[23]);
            break;
        case 472:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[24]);
            break;            
        case 473:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[25]);
            break;
        case 474:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[26]);
            break;
        case 475:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[27]);
            break;
        case 476:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[28]);
            break;
        case 477:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[29]);
            break;
        case 478:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[30]);
            break;
        case 479:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow15[31]);
            break;
        
        case 480:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[0]);
            break;
        case 481:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[1]);
            break;
        case 482:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[2]);
            break;
        case 483:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[3]);
            break;
        case 484:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[4]);
            break;
        case 485:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[5]);
            break;
        case 486:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[6]);
            break;
        case 487:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[7]);
            break;
        case 488:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[8]);
            break;
        case 489:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[9]);
            break;            
        case 490:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[10]);
            break;
        case 491:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[11]);
            break;
        case 492:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[12]);
            break;
        case 493:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[13]);
            break;
        case 494:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[14]);
            break;
        case 495:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[15]);
            break;
        case 496:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[16]);
            break;
        case 497:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[17]);
            break;
        case 498:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[18]);
            break;
        case 499:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[19]);
            break;
        case 500:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[20]);
            break;
        case 501:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[21]);
            break;
        case 502:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[22]);
            break;
        case 503:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[23]);
            break;
        case 504:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[24]);
            break;            
        case 505:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[25]);
            break;
        case 506:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[26]);
            break;
        case 507:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[27]);
            break;
        case 508:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[28]);
            break;
        case 509:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[29]);
            break;
        case 510:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[30]);
            break;
        case 511:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow16[31]);
            break;
            
        case 512:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[0]);
            break;
        case 513:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[1]);
            break;
        case 514:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[2]);
            break;
        case 515:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[3]);
            break;
        case 516:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[4]);
            break;
        case 517:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[5]);
            break;
        case 518:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[6]);
            break;
        case 519:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[7]);
            break;
        case 520:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[8]);
            break;
        case 521:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[9]);
            break;            
        case 522:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[10]);
            break;
        case 523:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[11]);
            break;
        case 524:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[12]);
            break;
        case 525:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[13]);
            break;
        case 526:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[14]);
            break;
        case 527:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[15]);
            break;
        case 528:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[16]);
            break;
        case 529:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[17]);
            break;
        case 530:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[18]);
            break;
        case 531:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[19]);
            break;
        case 532:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[20]);
            break;
        case 533:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[21]);
            break;
        case 534:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[22]);
            break;
        case 535:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[23]);
            break;
        case 536:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[24]);
            break;            
        case 537:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[25]);
            break;
        case 538:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[26]);
            break;
        case 539:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[27]);
            break;
        case 540:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[28]);
            break;
        case 541:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[29]);
            break;
        case 542:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[30]);
            break;
        case 543:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow17[31]);
            break;
            
        case 544:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[0]);
            break;
        case 545:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[1]);
            break;
        case 546:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[2]);
            break;
        case 547:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[3]);
            break;
        case 548:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[4]);
            break;
        case 549:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[5]);
            break;
        case 550:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[6]);
            break;
        case 551:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[7]);
            break;
        case 552:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[8]);
            break;
        case 553:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[9]);
            break;            
        case 554:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[10]);
            break;
        case 555:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[11]);
            break;
        case 556:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[12]);
            break;
        case 557:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[13]);
            break;
        case 558:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[14]);
            break;
        case 559:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[15]);
            break;
        case 560:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[16]);
            break;
        case 561:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[17]);
            break;
        case 562:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[18]);
            break;
        case 563:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[19]);
            break;
        case 564:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[20]);
            break;
        case 565:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[21]);
            break;
        case 566:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[22]);
            break;
        case 567:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[23]);
            break;
        case 568:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[24]);
            break;            
        case 569:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[25]);
            break;
        case 570:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[26]);
            break;
        case 571:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[27]);
            break;
        case 572:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[28]);
            break;
        case 573:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[29]);
            break;
        case 574:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[30]);
            break;
        case 575:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow18[31]);
            break;
            
        case 576:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[0]);
            break;
        case 577:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[1]);
            break;
        case 578:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[2]);
            break;
        case 579:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[3]);
            break;
        case 580:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[4]);
            break;
        case 581:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[5]);
            break;
        case 582:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[6]);
            break;
        case 583:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[7]);
            break;
        case 584:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[8]);
            break;
        case 585:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[9]);
            break;            
        case 586:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[10]);
            break;
        case 587:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[11]);
            break;
        case 588:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[12]);
            break;
        case 589:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[13]);
            break;
        case 590:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[14]);
            break;
        case 591:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[15]);
            break;
        case 592:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[16]);
            break;
        case 593:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[17]);
            break;
        case 594:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[18]);
            break;
        case 595:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[19]);
            break;
        case 596:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[20]);
            break;
        case 597:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[21]);
            break;
        case 598:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[22]);
            break;
        case 599:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[23]);
            break;
        case 600:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[24]);
            break;            
        case 601:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[25]);
            break;
        case 602:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[26]);
            break;
        case 603:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[27]);
            break;
        case 604:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[28]);
            break;
        case 605:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[29]);
            break;
        case 606:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[30]);
            break;
        case 607:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow19[31]);
            break;
            
        case 608:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[0]);
            break;
        case 609:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[1]);
            break;
        case 610:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[2]);
            break;
        case 611:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[3]);
            break;
        case 612:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[4]);
            break;
        case 613:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[5]);
            break;
        case 614:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[6]);
            break;
        case 615:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[7]);
            break;
        case 616:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[8]);
            break;
        case 617:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[9]);
            break;            
        case 618:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[10]);
            break;
        case 619:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[11]);
            break;
        case 620:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[12]);
            break;
        case 621:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[13]);
            break;
        case 622:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[14]);
            break;
        case 623:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[15]);
            break;
        case 624:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[16]);
            break;
        case 625:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[17]);
            break;
        case 626:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[18]);
            break;
        case 627:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[19]);
            break;
        case 628:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[20]);
            break;
        case 629:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[21]);
            break;
        case 630:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[22]);
            break;
        case 631:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[23]);
            break;
        case 632:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[24]);
            break;            
        case 633:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[25]);
            break;
        case 634:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[26]);
            break;
        case 635:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[27]);
            break;
        case 636:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[28]);
            break;
        case 637:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[29]);
            break;
        case 638:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[30]);
            break;
        case 639:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow20[31]);
            break;
            
        case 640:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[0]);
            break;
        case 641:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[1]);
            break;
        case 642:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[2]);
            break;
        case 643:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[3]);
            break;
        case 644:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[4]);
            break;
        case 645:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[5]);
            break;
        case 646:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[6]);
            break;
        case 647:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[7]);
            break;
        case 648:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[8]);
            break;
        case 649:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[9]);
            break;            
        case 650:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[10]);
            break;
        case 651:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[11]);
            break;
        case 652:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[12]);
            break;
        case 653:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[13]);
            break;
        case 654:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[14]);
            break;
        case 655:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[15]);
            break;
        case 656:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[16]);
            break;
        case 657:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[17]);
            break;
        case 658:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[18]);
            break;
        case 659:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[19]);
            break;
        case 660:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[20]);
            break;
        case 661:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[21]);
            break;
        case 662:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[22]);
            break;
        case 663:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[23]);
            break;
        case 664:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[24]);
            break;            
        case 665:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[25]);
            break;
        case 666:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[26]);
            break;
        case 667:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[27]);
            break;
        case 668:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[28]);
            break;
        case 669:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[29]);
            break;
        case 670:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[30]);
            break;
        case 671:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow21[31]);
            break;
            
        case 672:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[0]);
            break;
        case 673:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[1]);
            break;
        case 674:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[2]);
            break;
        case 675:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[3]);
            break;
        case 676:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[4]);
            break;
        case 677:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[5]);
            break;
        case 678:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[6]);
            break;
        case 679:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[7]);
            break;
        case 680:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[8]);
            break;
        case 681:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[9]);
            break;            
        case 682:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[10]);
            break;
        case 683:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[11]);
            break;
        case 684:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[12]);
            break;
        case 685:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[13]);
            break;
        case 686:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[14]);
            break;
        case 687:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[15]);
            break;
        case 688:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[16]);
            break;
        case 689:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[17]);
            break;
        case 690:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[18]);
            break;
        case 691:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[19]);
            break;
        case 692:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[20]);
            break;
        case 693:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[21]);
            break;
        case 694:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[22]);
            break;
        case 695:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[23]);
            break;
        case 696:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[24]);
            break;            
        case 697:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[25]);
            break;
        case 698:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[26]);
            break;
        case 699:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[27]);
            break;
        case 700:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[28]);
            break;
        case 701:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[29]);
            break;
        case 702:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[30]);
            break;
        case 703:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow22[31]);
            break;
            
        case 704:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[0]);
            break;
        case 705:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[1]);
            break;
        case 706:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[2]);
            break;
        case 707:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[3]);
            break;
        case 708:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[4]);
            break;
        case 709:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[5]);
            break;
        case 710:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[6]);
            break;
        case 711:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[7]);
            break;
        case 712:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[8]);
            break;
        case 713:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[9]);
            break;            
        case 714:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[10]);
            break;
        case 715:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[11]);
            break;
        case 716:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[12]);
            break;
        case 717:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[13]);
            break;
        case 718:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[14]);
            break;
        case 719:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[15]);
            break;
        case 720:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[16]);
            break;
        case 721:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[17]);
            break;
        case 722:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[18]);
            break;
        case 723:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[19]);
            break;
        case 724:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[20]);
            break;
        case 725:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[21]);
            break;
        case 726:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[22]);
            break;
        case 727:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[23]);
            break;
        case 728:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[24]);
            break;            
        case 729:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[25]);
            break;
        case 730:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[26]);
            break;
        case 731:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[27]);
            break;
        case 732:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[28]);
            break;
        case 733:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[29]);
            break;
        case 734:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[30]);
            break;
        case 735:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow23[31]);
            break;
            
        case 736:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[0]);
            break;
        case 737:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[1]);
            break;
        case 738:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[2]);
            break;
        case 739:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[3]);
            break;
        case 740:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[4]);
            break;
        case 741:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[5]);
            break;
        case 742:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[6]);
            break;
        case 743:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[7]);
            break;
        case 744:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[8]);
            break;
        case 745:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[9]);
            break;            
        case 746:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[10]);
            break;
        case 747:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[11]);
            break;
        case 748:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[12]);
            break;
        case 749:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[13]);
            break;
        case 750:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[14]);
            break;
        case 751:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[15]);
            break;
        case 752:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[16]);
            break;
        case 753:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[17]);
            break;
        case 754:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[18]);
            break;
        case 755:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[19]);
            break;
        case 756:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[20]);
            break;
        case 757:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[21]);
            break;
        case 758:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[22]);
            break;
        case 759:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[23]);
            break;
        case 760:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[24]);
            break;            
        case 761:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[25]);
            break;
        case 762:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[26]);
            break;
        case 763:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[27]);
            break;
        case 764:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[28]);
            break;
        case 765:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[29]);
            break;
        case 766:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[30]);
            break;
        case 767:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureRow24[31]);
            break;
        case 768:
            snprintf(pcInsert, iInsertLen, "%.1f ", TemperatureSensor);
            break;
    
    }
    
}

#endif
