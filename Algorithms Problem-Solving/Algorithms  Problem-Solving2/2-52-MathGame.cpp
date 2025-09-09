#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enQuestionLevel { Easy = 1, Med = 2, Hard = 3, Mix = 4 };
enum enQuestionType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixType = 5 };

struct stQuestionInfo {
    short NumberQuestion;
    enQuestionLevel Player1ChoiceLevel;
    enQuestionType Player1ChoiceType;
};

struct stGameResults {
    short NumberQuestions;
    enQuestionLevel QuestionLevel;
    enQuestionType OpType;
    int NumberOfRightAnswer;
    int NumberOfWrongAnswer;
    bool FailOrPass;
};

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

int ReadHowManyQuestion() {
    int question = 0;
    cout << "How Many Questions do you want? ";
    cin >> question;
    return question;
}

enQuestionLevel ChoiceLevel() {
    int Choice = 0;
    cout << "Enter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix: ";
    cin >> Choice;
    return (enQuestionLevel)Choice;
}

enQuestionType ChoiceType() {
    int Choice = 0;
    cout << "Enter Questions Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix: ";
    cin >> Choice;
    return (enQuestionType)Choice;
}

bool FailOrPass(int NumberOfRightAnswer, int NumberOfWrongAnswer) {
    return NumberOfRightAnswer > NumberOfWrongAnswer;
}

void GetQuestion(stQuestionInfo& QuestionInfoAnswer, int& NumberOfRightAnswer, int& NumberOfWrongAnswer) {
    int Number1 = 0, Number2 = 0, Answer = 0;

    switch (QuestionInfoAnswer.Player1ChoiceLevel) {
    case Easy: Number1 = RandomNumber(1, 10); Number2 = RandomNumber(1, 10); break;
    case Med:  Number1 = RandomNumber(10, 50); Number2 = RandomNumber(10, 50); break;
    case Hard: Number1 = RandomNumber(100, 500); Number2 = RandomNumber(100, 500); break;
    case Mix:  Number1 = RandomNumber(1, 500); Number2 = RandomNumber(1, 500); break;
    }

    enQuestionType QType = QuestionInfoAnswer.Player1ChoiceType;
    if (QType == MixType)
        QType = (enQuestionType)RandomNumber(1, 4);

    char opChar;
    int CorrectAnswer = 0;

    switch (QType) {
    case Add: opChar = '+'; CorrectAnswer = Number1 + Number2; break;
    case Sub: opChar = '-'; CorrectAnswer = Number1 - Number2; break;
    case Mul: opChar = 'x'; CorrectAnswer = Number1 * Number2; break;
    case Div: opChar = '/'; CorrectAnswer = Number1 / Number2; break;
    }

    cout << Number1 << " " << opChar << " " << Number2 << " = ";
    cin >> Answer;

    if (Answer == CorrectAnswer) {
        cout << "Right Answer :-)\n";
        NumberOfRightAnswer++;
    }
    else {
        cout << "Wrong Answer :-( Right Answer is " << CorrectAnswer << "\n";
        NumberOfWrongAnswer++;
    }
}

stGameResults PlayGame(int NumberOFQuestion) {
    int NumberOfRightAnswer = 0, NumberOfWrongAnswer = 0;
    stQuestionInfo Question;

    for (int i = 1; i <= NumberOFQuestion; i++) {
        Question.NumberQuestion = i;
        Question.Player1ChoiceLevel = ChoiceLevel();
        Question.Player1ChoiceType = ChoiceType();

        cout << "\nQuestion [" << i << "/" << NumberOFQuestion << "]\n";
        GetQuestion(Question, NumberOfRightAnswer, NumberOfWrongAnswer);
    }

    stGameResults Results;
    Results.NumberQuestions = NumberOFQuestion;
    Results.NumberOfRightAnswer = NumberOfRightAnswer;
    Results.NumberOfWrongAnswer = NumberOfWrongAnswer;

   
    if (NumberOfRightAnswer > NumberOfWrongAnswer)
        system("Color 2F"); 
    else if (NumberOfRightAnswer < NumberOfWrongAnswer)
        system("Color 4F"); 
    else
        system("Color 6F"); 

    Results.FailOrPass = FailOrPass(NumberOfRightAnswer, NumberOfWrongAnswer);
    return Results;
}

void ShowGameOverScreen(stGameResults FinalScreen) {
    cout << "___________________________________\n";

    if (FinalScreen.NumberOfRightAnswer > FinalScreen.NumberOfWrongAnswer)
        cout << "Final Result: Pass :-)\n";
    else if (FinalScreen.NumberOfRightAnswer < FinalScreen.NumberOfWrongAnswer)
        cout << "Final Result: Fail :-(" << endl;
    else
        cout << "Final Result: Draw :-|\n";

    cout << "Number of Questions    : " << FinalScreen.NumberQuestions << endl;
    cout << "Number of Right Answer : " << FinalScreen.NumberOfRightAnswer << endl;
    cout << "Number of Wrong Answer : " << FinalScreen.NumberOfWrongAnswer << endl;
    cout << "___________________________________\n";
}

void StartGameMath() {
    char PlayAgain = 'Y';
    do {
        system("Color 07"); 
        int NumQ = ReadHowManyQuestion();
        stGameResults GameResults = PlayGame(NumQ);
        ShowGameOverScreen(GameResults);
        cout << "Do you want to play again? Y/N: ";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main() {
    srand((unsigned)time(NULL));
    StartGameMath();
    return 0;
}
