#pragma once
#include "stdafx.h"
#include "Personality.h"

Personality::Personality()
{
	scoreI = 0;
	scoreE = 0;
	scoreS = 0;
	scoreN = 0;
	scoreT = 0;
	scoreF = 0;
	scoreJ = 0;
	scoreP = 0;
}
void Personality::IncreaseScore1(int numQuestion)
{
	switch (numQuestion)
	{
		case 1:
			scoreI++;
			break;
		case 2:
			scoreS++;
			break;
		case 3:
			scoreT++;
			break;
		case 4:
			scoreJ++;
			break;
		default:
			break;
	}
}
void Personality::IncreaseScore2(int numQuestion)
{
	switch (numQuestion)
	{
	case 1:
		scoreE++;
		break;
	case 2:
		scoreN++;
		break;
	case 3:
		scoreF++;
		break;
	case 4:
		scoreP++;
		break;
	default:
		break;
	}
}
void Personality::EvaluatePersonalityType()
{
	System::String^ firstLetter ;
	System::String^ secondLetter;
	System::String^ thirdLetter ;
	System::String^ fourthLetter;
	
	if (scoreI >= scoreE) firstLetter = "I"; else firstLetter = "E";
	if (scoreS > scoreN) secondLetter = "S"; else secondLetter = "N";
	if (scoreT >= scoreF) thirdLetter = "T"; else thirdLetter = "F";
	if (scoreJ > scoreP) fourthLetter = "J"; else fourthLetter = "P";

	personalityType = firstLetter + secondLetter + thirdLetter + fourthLetter;
}
System::String^ Personality::GetPersonalityType()
{
	return personalityType;
}