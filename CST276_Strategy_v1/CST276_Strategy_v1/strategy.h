#ifndef STRATEGY_H
#define STRATEGY_H
class Strategy
{
public:
	virtual void Algorithm()
	{
		doAlgorithm();
	}
private:
	virtual void doAlgorithm() = 0;
};
#endif // !STRATEGY_H