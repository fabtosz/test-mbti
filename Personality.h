#pragma once


ref class Personality
{
	System::Int32 scoreI;
	System::Int32 scoreE;
	System::Int32 scoreN;
	System::Int32 scoreS;
	System::Int32 scoreF;
	System::Int32 scoreT;
	System::Int32 scoreP;
	System::Int32 scoreJ;
	System::String^ personalityType;

public:
	Personality();
	void IncreaseScore1(int);
	void IncreaseScore2(int);
	void EvaluatePersonalityType(void);
	System::String^ GetPersonalityType(void);
};

