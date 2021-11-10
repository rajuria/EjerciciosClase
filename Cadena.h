#pragma once
#ifndef CADENA_H
#define CADENA_H
#endif

class Cadena
{
	friend Cadena& operator+(const Cadena&, const Cadena&);
	friend Cadena& operator+=(const Cadena&, const Cadena&);
	friend std::ostream& operator<<(std::ostream&, const Cadena&);
private:
	char* valor;

public:
	Cadena(void);
	Cadena(const char*);

	int size();
	char at(int);
	void swap(Cadena);
	int find(const char*);
	bool compare(const char*);

};

