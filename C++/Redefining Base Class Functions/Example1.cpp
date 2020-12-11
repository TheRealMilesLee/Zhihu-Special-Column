#include <iostream>

using namespace  std;

class GradedActivity
{
  protected:
    char letter;
    double score;
    void determineGrade();

  public:
    GradedActivity()
    {
      letter = '  ';
      score = 0.0;
    }

    void setScore(double scores)
    {
      score = scores;
      determineGrade();
    }

    double getScore() const
    {
      return score;
    }

    char getLetterGrade() const
    {
      return letter;
    }
};