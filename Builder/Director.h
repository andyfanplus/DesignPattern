#pragma once
class Product;
class Director
{
public:
	Director();
	~Director();
	void create(Product *p);
private:
	Product *product;
};

