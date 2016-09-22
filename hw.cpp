class Employee
{
  public:
    int base;
    virtual int salary()
    {
      return base;
    }
}

class FulltimeEmployee : public Employee
{
  public:
  int n;
  int salary()
  {
    return base * (1 + n * 0.05);
  }
}

class Manager : public FulltimeEmployee
{
  public:
  int r;
  int salary()
  {
    return base * (1 + n * 0.05 + r * 0.1);
  }
}

