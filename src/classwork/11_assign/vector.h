//
template<typename T> //T means any data type

class Vector
{
public:
	Vector();
	Vector(size_t sz);
	Vector(const Vector<T>& v); // copy constructor, Pay attention to "T"
	Vector& operator = (const Vector<T>& v); // copy assignment
	Vector(Vector<T>&& v); // Move constructor
	Vector& operator = (Vector<T>&& v); // Move assignment
	size_t Size()const { return size; }
	T& operator[](size_t i) { return nums[i]; }
	T& operator[](size_t i) const{ return nums[i]; }
	void Reserve(size_t new_allocation);
	size_t Capacity() const { return space; } // defined in line
	void Resize(size_t new_size);
	void Push_Back(T value);
	~Vector();
private:
	size_t size; // space of readily available for array
	size_t space; // keeps track of reserve
	T* nums;
	const int RESERVE_DEFAULT_SIZE{ 8 };
	const int RESERVE_SPACE_MULTIPLIER{ 2 };
};