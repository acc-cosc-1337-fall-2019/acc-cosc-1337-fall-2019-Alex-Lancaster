//

class Vector
{
public:
	Vector();
	Vector(size_t sz);
	Vector(const Vector& v); // copy constructor
	Vector& operator = (const Vector& v); // copy assignment
	Vector(Vector&& v); // Move constructor
	Vector& operator = (Vector&& v); // Move assignment
	size_t Size()const { return size; }
	int& operator[](int i) { return nums[i]; }
	int& operator[](int i) const{ return nums[i]; }
	void Reserve(size_t new_allocation);
	int Capacity() const { return space; } // defined in line
	void Resize(size_t new_size);
	void Push_Back(int value);
	~Vector();
private:
	size_t size; // space of readily available for array
	size_t space; // keeps track of reserve
	int* nums;
	const int RESERVE_DEFAULT_SIZE{ 8 };
	const int RESERVE_SPACE_MULTIPLIER{ 2 };
};