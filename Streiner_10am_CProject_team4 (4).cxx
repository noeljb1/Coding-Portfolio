#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Function Prototypes

int quiz1();
int quiz2();
int quiz3();
int userInfo();
char YesOrNo();
int mllearnings();
void mllearningextended();
int main(void)
{
	//Getting User info
	int age, choice,choice1=0,score;
	char name[100],option,again='y';
	printf("Welcome to our heaing aid app which of the features would you like yo use:\n (1) - Info about Artificial intelligence in  hearing aids\n (2) - Quiz about hearing aids using AI\n (3) - Hearing Aids Matcher\n");
	
	scanf("%d", &choice);
	while(choice!=1 && choice!=2 && choice!=3)
	{
		printf("Sorry but that is not a valid option please pick 1 2 or 3\n");
		scanf("%d", &choice);
		
	}
	
	switch(choice)
	{
		// INFO FEATURE GOES HERE  
		case 1:
			
			int options;
			printf("Welcome to the Machine Learning info feature\n");
			do
			{
			print("Would you like to learn about machine learning? y/n\n");
			scanf(" %c",&choices);
		}while(choices!='y' && choices!='n');
		if (choices=='y')
		{
		questionscount = mllearnings();
		int questionscount;
	printf("The amount of questions viewed is %d\n",questionscount);
	}
	
		
		
		
		
		
		
		//Feature 2 A quiz about machine learning hearing aids
		case 2:
			printf("Welcome to Machine Learning Hearing aids Quiz\n");
			
			while(again=='y' || again=='Y')
			{
			do
			{
			printf("Enter 1 for a short quiz, Enter 2 for medium quiz, Enter 3 for long quiz\n");
			scanf("%d",&choice1);
			}while(choice1!=1 && choice1!=2 && choice1!=3);
			
			if (choice1==1)
			{
				score=quiz1();
				printf("You answered %d out of 3 questions correctly.\n",score);
			}else if(choice1==2)
			{
				score=quiz2();
				printf("You answered %d out of 6 questions correctly.\n",score);
			}else
			{
				score=quiz3();
				printf("You answered %d out of 10 questions correctly.\n",score);
			}
			
			do
			{
			printf("\nDo you want to do another quiz? (Y for yes  or N for No): ");
			scanf(" %c",&again);
			}while(again!='y' && again!='Y' && again!='N' && again!='n');
			}
			
		break;
		
		
		
		
		
		
		
		
		//Feature 3 where the user is walked through a process where they are matched to hearing aids.
		case 3: 
			printf("Hello let us try and find you a good hearing aid!\n");
			printf("Now, Let's get started.");
			age=userInfo();
			if(age <= 29)
			{
				printf("Only about .8%% of people your age suffer from hearing loss\n");
				printf("According to your age you are at low risk, howver you may still continure if you want or if you know you suffer from hearing loss.\nWould you like to continue? \n");
				option=YesOrNo();
			}
			else if(age>29 && age<=39)
			{
				printf("\n.9%% of people in you age demographic suffer from hearing loss\n");
				printf("According to your age, you are at low risk, howver you may still continure if you want or if you know you suffer from hearing loss.\nWould you like to continue? \n");
				option=YesOrNo();
				
			}
			else if(age>39 && age<=49)
			{
				printf("Only about 3.4%% of people your age suffer from hearing loss\n");
				printf("According to your age, you are at low risk, howver you may still continure if you want or if you know you suffer from hearing loss.\nWould you like to continue? \n");
				option = YesOrNo();
			}
			else if(age>49 && age<=59)
			{
				printf("In your age group, about 11.2%% of people your age suffer from hearing loss \n");
				printf("Looking at your age, you are at higher risk of hearing loss we reccomend you continue? \n");
				option = YesOrNo();
				
			}
			else if(age>59)
			{
				printf("You are likley at high risk of hearing loss given that 24.7%% of people in your age demographic suffer from hearing loss\n");
				printf("Would you like to continue?");
				option= YesOrNo();
				
				
			}
			
			
	}
	

	
	
	
	
	
	
	
	return 0;
}









//Quiz1 Function 

int quiz1()
{
    int count = 0;
    char answer;  // Variable for user answers

    printf("Welcome to Easy Quiz\n");

    // Question 1
    do {
        printf("Question 1: Which machine learning method is commonly used for noise reduction in hearing aids? \n");
        printf("a) Convolutional Neural Networks\nb) Decision Trees\nc) Linear Regression\nd) Reinforcement Learning\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A')
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'a' && answer != 'A');

    // Question 2
    do {
        printf("Question 2: What is the main benefit of using machine learning in hearing aids?\n");
        printf("a) Battery life extension\nb) Improved speech understanding in noise\nc) Color options\nd) Cost reduction\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B') 
        {
            printf("Correct!\n");
            count++;
        } else
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'b' && answer != 'B');

    // Question 3
    do 
    {
        printf("Question 3: Which type of data is primarily used by machine learning algorithms in hearing aids to adapt to the user's environment?\n");
        printf("a) Video\nb) Audio\nc) GPS location\nd) Biometric data\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'b' && answer != 'B');
    return count;
}
	
	
//Quiz2 Function 
	
int quiz2()
{
    int count = 0;
    char answer;  // Variable for user answers

    printf("Welcome to Medium Quiz\n");

    // Question 1
    do {
        printf("Question 1: Which machine learning model is effective for classifying different sound environments in hearing aids?\n");
        printf("a) Support Vector Machine\nb) Random Forest\nc) K-Means Clustering\nd) Autoencoders\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'b' && answer != 'B');

    // Question 2
    do 
    {
        printf("Question 2: How do hearing aids use machine learning to improve user experience?\n");
        printf("a) By adjusting volume automatically\nb) By selecting music tracks\nc) By providing real-time translations\nd) By changing battery size\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'a' && answer != 'A');

    // Question 3
    do {
        printf("Question 3: What type of learning algorithm is primarily used for dynamic sound environment adaptation in hearing aids?\n");
        printf("a) Supervised Learning\nb) Unsupervised Learning\nc) Semi-Supervised Learning\nd) Reinforcement Learning\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') 
        {
            printf("Correct!\n");
            count++;
        } else {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'd' && answer != 'D');

    // Question 4
    do 
    {
        printf("Question 4: Which technology is used to train hearing aids to recognize voice commands?\n");
        printf("a) Neural Networks\nb) Decision Trees\nc) Linear Regression\nd) Naive Bayes Classifier\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A') {
            printf("Correct!\n");
            count++;
        } else {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'a' && answer != 'A');

    // Question 5
    do {
        printf("Question 5: What feature do machine learning algorithms enhance by analyzing the user's listening habits?\n");
        printf("a) Frequency modulation\nb) Spatial awareness\nc) Sound amplification\nd) Environmental sound adjustment\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') 
        {
            printf("Correct!\n");
            count++;
        } else
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'd' && answer != 'D');

    // Question 6
    do {
        printf("Question 6: What data does machine learning analyze to personalize hearing aid settings?\n");
        printf("a) Environmental sounds\nb) User feedback\nc) Both a and b\nd) None of the above\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'c' || answer == 'C') 
        {
            printf("Correct!\n");
            count++;
        } else
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'c' && answer != 'C');

    
    return count;
}
	
	
//Quiz3 Function 

int quiz3()
{
    int count = 0;
    char answer;  // Variable for user answers

    printf("Welcome to Long Quiz\n");

    // Question 1
    do 
    {
        printf("Question 1: Which algorithm is typically used for real-time audio processing in hearing aids?\n");
        printf("a) Logistic Regression\nb) Fast Fourier Transform\nc) Deep Belief Networks\nd) Gradient Boosting Machines\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B')
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'b' && answer != 'B');

    // Question 2
    do 
    {
        printf("Question 2: Which feature can machine learning improve by analyzing ambient noise levels?\n");
        printf("a) Energy efficiency\nb) User comfort\nc) Audio clarity\nd) All of the above\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'd' && answer != 'D');

    // Question 3
    do 
    {
        printf("Question 3: What does the term 'beamforming' refer to in the context of hearing aids?\n");
        printf("a) A battery charging technique\nb) A directional audio enhancement\nc) A data storage method\nd) A style of device design\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'b' && answer != 'B');

    // Question 4
    do 
    {
        printf("Question 4: How do hearing aids use deep learning to assist users with speech recognition?\n");
        printf("a) By filtering out background noise\nb) By enhancing high-frequency sounds\nc) By auto-tuning music\nd) By regulating battery use\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'a' && answer != 'A');

    // Question 5
    do 
    {
        printf("Question 5: What role does unsupervised learning play in hearing aid technology?\n");
        printf("a) It helps to classify user preferences.\nb) It predicts battery life.\nc) It assists in automatic program selection.\nd) It adjusts the volume automatically.\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'c' || answer == 'C') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'c' && answer != 'C');

    // Question 6
    do {
        printf("Question 6: What advantage does adaptive filtering offer to hearing aid users?\n");
        printf("a) Longer battery life\nb) Better music quality\nc) Reduced feedback\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'c' || answer == 'C') 
        {
            printf("Correct!\n");
            count++;
        } else
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'c' && answer != 'C');

        // Question 7
    do {
        printf("Question 7: Which technology allows hearing aids to connect wirelessly with smartphones?\n");
        printf("a) NFC\nb) Bluetooth\nc) Wi-Fi\nd) Infrared\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B') {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'b' && answer != 'B');

    // Question 8
    do 
    {
        printf("Question 8: How does dynamic range compression benefit hearing aid users?\n");
        printf("a) It enhances battery efficiency\nb) It improves sound quality by making soft sounds louder and loud sounds softer\nc) It allows for better music streaming\nd) It increases the range of Bluetooth connectivity\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'b' && answer != 'B');

    // Question 9
    do 
    {
        printf("Question 9: What feature do modern hearing aids use to reduce wind noise when outdoors?\n");
        printf("a) Wind noise reduction algorithms\nb) Physical barriers on the microphone\nc) Adaptive beamforming\nd) Low-pass filters\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'a' && answer != 'A');

    // Question 10
    do 
    {
        printf("Question 10: What is a key benefit of AI integration in hearing aids regarding environmental sound management?\n");
        printf("a) It allows for manual control of settings\nb) It automatically adjusts to different sound environments\nc) It provides real-time language translation\nd) It streams audio directly from TV sets\n");
        printf("Enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B') 
        {
            printf("Correct!\n");
            count++;
        } else 
        {
            printf("Incorrect. Try again.\n");
        }
    } while (answer != 'b' && answer != 'B');
  
    return count;
}
	



//User info function 

int userInfo()
{
	char name[100];
	int age;
	printf("\nPlease enter your name:");
	scanf("%s",name);
	printf("\nPlease enter your age in years:");
	scanf("%d",&age);
	
	printf("\nHello %s we will now go begin matching you with a hearing aid", name);
	
	return age;
	
}


//User input function
char YesOrNo()
{
	char yesNO;
	printf("Type \"Y\" to indicate yes and \"N\" to indicate No\n");
	scanf(" %c", &yesNO);
	while(yesNO != 'Y' && yesNO != 'y' && yesNO != 'N' && yesNO != 'n' )
	{
		printf("Incorect input please enter a Y or an N\n");
		
	}
	return yesNO;
}


// Machinelearning info functions
int mllearnings()
{
	int questionscount=5;
	char choicez;
	printf("Here are some interesting facts about machine learning:\n");
	//Q1
	printf("The Fast Fourier Transform is the algorithm that is typically used \nfor real-time audio processing in hearing aids.\n\n");
	//Q2
	printf("There are many features that can be imporved by machine learning analyzing ambient noises levels, a few examples are:\nEnergy Efficiency\nUser Comfort\nAudio Clarity/n/n");
	//Q3
	printf("The term 'beamforming' refer to a directional audio enhancement in hearing aids\n\n");
	//Q4
	printf("Hearing aids use deep learning to filter out background noise for its user to assist with speech recognition.\n\n");
	do
	{
	printf("Would you like to stop here or continue learning about machine learning? enter stop or continue\n");
	scanf("%c",&choicez);
}while(choicez!='continue' && choicez!='stop');
if (choicez=='continue')
{
	mllearningextended();
	questionscount=10;
}
return questionscount;
}

void mllearningextended()
{
	printf("Wow, you stayed well then lets give out some more machine learning info that you will be quizzed on!\n\n");
	//Q5
	printf("Unsupervised learning plays an important role in assisting in automatic program selection when it comes to hearing aid technology.\n\n");
	//Q6
	printf("Adaptive filtering helps hearing aids reduce feedback.\n\n");
	//Q7
	printf("Bluetooth allows the hearing aids to connect to smart phones and other smart devices.\n\n");
	//Q8
	printf("The dynamic range compression will change the range of noises for example loud noises are softer.\n\n)");
	//Q9
	printf(" The wind noise reduction algorithm is a feature that reduces wind noise when outdoors.\n\n");
	//Q10
	printf("AI integration in hearing aids allows for automatic adjustmentto the hearing aids environmental sound management.\n\n");
	
	printf("Congratulations, you made it to the end of the info section for ml, good luck on your quiz.\n");
}












