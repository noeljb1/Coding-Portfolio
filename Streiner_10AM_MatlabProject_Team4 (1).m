% Team Number: 4
% Team Members: Rory, Noel, Hamza

clear all
clc
% Mental Health App

% Display the main menu to the user
disp('Welcome to the Mental Health App!');
disp('1. Relaxation Exercise');
disp('2. Mood Tracker');
disp('3. Positive Affirmations');
choice = getUserChoice();

%% Feature 1: Relaxation Exercise
if choice == 1
    disp('Feature 1: Relaxation Exercise');
    % Implement a function to guide the user through a relaxation exercise
    relaxationExercise();
    
%% Feature 2: Mood Tracker
elseif choice == 2
    disp('Feature 2: Mood Tracker');
    % Implement a function to track and visualize the user's mood over time
    moodTracker();
    
%% Feature 3: Positive Affirmations
elseif choice == 3
    disp('Feature 3: Positive Affirmations');
    % Implement a function to display positive affirmations
    displayAffirmations();
    
else
    disp('Invalid choice. Please choose a number between 1 and 3.');
end

% Function for User Input Validation
function choice = getUserChoice()
    % Get and validate user input for the main menu choice
    prompt = 'Please choose an option (1-3): ';
    validChoices = [1, 2, 3];
    
    choice = input(prompt);
    
    while choice~=1 && choice~=2 && choice~=3
        disp('Invalid choice. Please choose a number between 1 and 3.');
        choice = input(prompt);
    end
end

% Function for Relaxation Exercise
function relaxationExercise()
    disp('Follow the steps below for a quick relaxation exercise:');
    disp('1. Close your eyes and take a deep breath.');
    disp('2. Inhale slowly for 4 seconds.');
    disp('3. Hold your breath for 4 seconds.');
    disp('4. Exhale slowly for 4 seconds.');
    disp('5. Repeat for 5 cycles.');
end

% Function for Mood Tracker
function moodTracker()
    % Implementing a mood tracking system using loops 
    days = input('How many days do you want to track your mood? ');
    moodData = zeros(1, days);
    
    for day = 1:days
        mood = input(['On a scale of 1 to 10, how is your mood on day ', num2str(day), '? ']);
        
        % Validate user input
        while mood < 1 || mood > 10
            disp('Please enter a valid rating between 1 and 10.');
            mood = input(['On a scale of 1 to 10, how is your mood on day ', num2str(day), '? ']);
        end
        
        moodData(day) = mood;
    end
    
    % Display mood chart
    moodStats(moodData,days);
    
end

% Function for Positive Affirmations
function displayAffirmations()
    % Display positive affirmations 
    affirmations = {'I am capable of overcoming any challenge.', ...
                    'I radiate confidence, self-respect, and inner harmony.', ...
                    'I am deserving of success and happiness.'};
    disp('Here are some positive affirmations:');
    for i = 1:length(affirmations)
        disp(affirmations{i});
    end
end

function [avgMood,minMood1,minMood2,maxMood1,maxMood2,stddevMood,medianMood]= moodStats(moods,tracklength)

% Displays a chart with the data inputed for mood tracking.
plot(1:tracklength,moods,'-o')
title('Mood Tracker')
xlabel("Days")
ylabel("Mood Rating")
grid on
legend('Mood Rating')

% Statistacally analyzes the data you inputed while tracking moods
avgMood = mean(moods);
[minMood1,minMood2] = min(moods);
[maxMood1,maxMood2] = max(moods);
stddevMood = std(moods);
medianMood = median(sort(moods));
includedStats(avgMood,minMood1,minMood2,maxMood1,maxMood2,stddevMood,medianMood,tracklength)
end

function includedStats(avg,minval,minloc,maxval,maxloc,stdDev,med,length)

a=menu('Choose which stats you would like to see','All','Average Mood', 'Minimum Mood', 'Maximum Mood','Standard Deviation of Mood','None');
switch(a)
    case 1
        disp("Your average mood over this " + num2str(length) + " day span, is: " + num2str(avg))
        disp("Your worst mood over this " + num2str(length) + " day span, is: " + num2str(minval) + ", which occured on day "+num2str(minloc))
        disp("Your Best mood over this " + num2str(length) + " day span, is: " + num2str(maxval) + ", which occured on day "+num2str(maxloc))
        disp("The Standard Deviation of your moods was, " + num2str(stdDev));
        disp("Your median mood was:  " + num2str(med))
    case 2
        disp("Your average mood over this " + num2str(length) + " day span, is: " + num2str(avg))
    case 3
        disp("Your worst mood over this " + num2str(length) + " day span, is: " + num2str(minval) + ", which occured first on day "+num2str(minloc))
    case 4 
        disp("Your Best mood over this " + num2str(length) + " day span, is: " + num2str(maxval) + ", which occured first on day "+num2str(maxloc))
    case 5
        disp("The Standard Deviation of your moods was, " + num2str(stdDev));
    case 6
        disp("Your median mood was:  " + num2str(med))
    case 7
        disp("Do not worry, it is okay to not want to see the stats as well :)")
end
end

