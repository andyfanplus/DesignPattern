#pragma once
class SingleObject
{
public:
	static SingleObject& New();

	~SingleObject();
	
private:
	SingleObject();
	SingleObject(const SingleObject& singleobject) = delete;
	SingleObject& operator=(SingleObject &) = delete;
	
};

