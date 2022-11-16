class myclass
{
private:
	int a;
public:
	void set_a(int num);
	int get_a();
};
inline void myclass::set_a(int num)
{
	a = num;
}
inline int myclass::get_a()
{
	return a;
}