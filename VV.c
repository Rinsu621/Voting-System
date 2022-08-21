// Voting system: How many vote and who won the election//
#include<stdio.h>
int Nepali_Congress=0, CPN_UML=0, CPN_Maoist=0,Loktantrik_Samajwadi_Party=0;
void calculateVote();
void electionResult();
void main()
{
	int press;
	printf("\n\t\tVoting System\n\n");
	printf("\t\tGeneral Election\n\n");
	printf("\t| 1. Nepali Congress            |\n");
	printf("\t| 2. CPN(UML)                   |\n");
	printf("\t| 3. CPN(Maoist)                |\n");
	printf("\t| 4. Loktantrik Samajwadi Party |\n");
	do
	{
		printf("\nPress 1 to vote Nepali Congress\n");
		printf("Press 2 to vote CPN(UML)\n");
		printf("Press 3 to vote CPN(Maoist)\n");
		printf("Press 4 to vote Loktantrik Samajwadi Party\n");
		printf("Press 5 to show the election result\n");
		printf("Please press a number: ");
		scanf("%d",&press);
		if(press==5)
		{
			electionResult();
		}
		else{
			calculateVote(press);
		}
		printf("\n");
		}	
		while(press!=5);
}
void calculateVote(int vote)
{
	switch(vote)
	{
		case 1:
		Nepali_Congress+=1;
		break;
		case 2:
		CPN_UML+=1;
		break;
		case 3:
		CPN_Maoist+=1;
		break;
		case 4:
		Loktantrik_Samajwadi_Party+=1;
		break;	
	}
}
void electionResult()
{
	int WinningVote;
	if(Nepali_Congress>CPN_UML && 	Nepali_Congress>CPN_Maoist && Nepali_Congress>Loktantrik_Samajwadi_Party) 
	{
		printf("\n Nepali Congress won the election\n\n");
		printf("Total vote of Nepali Congress:%d\n",Nepali_Congress);
		WinningVote=Nepali_Congress-CPN_UML;
		printf("Nepali Congress won by %d votes to CPN(UML)\n",WinningVote);
		WinningVote=Nepali_Congress-CPN_Maoist;
		printf("Nepali Congress won by %d votes to CPN(Maoist)\n",WinningVote);
	  	WinningVote=Nepali_Congress-Loktantrik_Samajwadi_Party;
		printf("Nepali Congress won by %d votes to Loktantrik Samajwadi Party\n",WinningVote);
	}
	else if(CPN_UML>Nepali_Congress && 	CPN_UML>CPN_Maoist && CPN_UML>Loktantrik_Samajwadi_Party)
	{
	printf("\n CPN(UML) won the election\n\n");
		printf("Total vote of CPN(UML):%d\n",CPN_UML);
		WinningVote=CPN_UML-Nepali_Congress;
		printf("CPN(UML) won by %d votes to Nepali Congress\n",WinningVote);
		WinningVote=CPN_UML-CPN_Maoist;
		printf("CPN(UML) won by %d votes to CPN(Maoist)\n",WinningVote);
	  	WinningVote=CPN_UML-Loktantrik_Samajwadi_Party;
		printf("CPN(UML) won by %d votes to Loktantrik Samajwadi Party\n",WinningVote);	
	}
	else if(CPN_Maoist>Nepali_Congress && 	CPN_UML<CPN_Maoist && CPN_Maoist>Loktantrik_Samajwadi_Party)
	{
	printf("\n  CPN(Maoist) won the election\n\n");
		printf("Total vote of CPN(UML):%d\n",CPN_UML);
		WinningVote=CPN_Maoist-Nepali_Congress;
		printf(" CPN(Maoist) won by %d votes to Nepali Congress\n",WinningVote);
		WinningVote=CPN_Maoist-CPN_UML;
		printf(" CPN(Maoist) won by %d votes to CPN(UML)\n",WinningVote);
	  	WinningVote=CPN_Maoist-Loktantrik_Samajwadi_Party;
		printf(" CPN(Maoist) won by %d votes to Loktantrik Samajwadi Party\n",WinningVote);	
	}
	else if(Loktantrik_Samajwadi_Party>Nepali_Congress && 	CPN_UML<Loktantrik_Samajwadi_Party && CPN_Maoist<Loktantrik_Samajwadi_Party)
	{
	printf("\n  Loktantrik Samajwadi Party won the election\n\n");
		printf("Total vote of Loktantrik Samajwadi Party:%d\n",CPN_UML);
		WinningVote=Loktantrik_Samajwadi_Party-Nepali_Congress;
		printf(" Loktantrik Samajwadi Party won by %d votes to Nepali Congress\n",WinningVote);
		WinningVote=Loktantrik_Samajwadi_Party-CPN_UML;
		printf(" Loktantrik Samajwadi Party won by %d votes to CPN(UML)\n",WinningVote);
	  	WinningVote=Loktantrik_Samajwadi_Party-CPN_Maoist;
		printf(" Loktantrik Samajwadi Party won by %d votes to CPN(Maoist)\n",WinningVote);	
	}
}
