
template <class T>
class Somelib
{
private:
    T mSum;

public:
    Somelib(T a, T b) : mSum(a + b) {}
    ~Somelib();
    T GetSum() const { return mSum; }
};

template <class T>
Somelib<T>::~Somelib()
{
}
