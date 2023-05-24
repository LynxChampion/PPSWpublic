#define NULL 0
#define ARRSIZE 254

//char caTestTwoArray[ARRSIZE];
//char caTestArray[] = "czydziala";
//char caTestArrayClean[ARRSIZE] = "zielony kisiel";
//char caTestArrayClean[ARRSIZE] = "pijany borsuk";
//char cOldOneChar = 'a';
//char cNewOneChar = 'k';

void CopyString(char pcSource[], char pcDestination[]){
	unsigned char ucArrayCounter; 
	for (ucArrayCounter = 0 ; pcSource[ucArrayCounter] != NULL ; ucArrayCounter++){
		pcDestination[ucArrayCounter] = pcSource[ucArrayCounter];
	}
	pcDestination[ucArrayCounter] = NULL;
}

enum CompResult{DIFFERENT, EQUAL};

enum CompResult eCompareString(char pcStr1[], char pcStr2[]){
	unsigned char ucCharNumber;
	for(ucCharNumber = 0; pcStr1[ucCharNumber]; ucCharNumber++){
		if( pcStr1[ucCharNumber] != pcStr2[ucCharNumber] ){
			return DIFFERENT;
		}
	}
	if( pcStr1[ucCharNumber] != pcStr2[ucCharNumber] ){
		return DIFFERENT;
	}
	return EQUAL;
}

void AppendString (char pcSourceStr[],char pcDestinationStr[]){
	
	unsigned char ucArrayCounter;
	
	for(ucArrayCounter = 0; pcDestinationStr[ucArrayCounter]; ucArrayCounter++){};
	CopyString(pcSourceStr, pcDestinationStr + ucArrayCounter);
}

void ReplaceCharactersInString(char pcString[],char cOldChar,char cNewChar){
	unsigned char ucCharterCounter;
	for(ucCharterCounter = 0; pcString[ucCharterCounter]; ucCharterCounter++){
		if(pcString[ucCharterCounter] == cOldChar){
			pcString[ucCharterCounter] = cNewChar;
		}
	}
}

int main() { //(int argc,char ** args)
	
	//TESTY
	//CopyString(caTestArray,caTestArrayClean);
  
	//if (eCompareString(caTestArray, caTestArrayClean) != EQUAL){
	//	char caTestTwoArray[ARRSIZE] = "nie udalo sie!!!";
	//}
	
	//AppendString(caTestArray, caTestArrayClean);
	
	//ReplaceCharactersInString(caTestArray, cOldOneChar, cNewOneChar);
	
	return 0;
}
