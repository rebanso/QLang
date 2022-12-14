#pragma once
#include <iostream>

#include "Qlib.h"//;
#include "QMath.h"//;
#include "QVariables.h"

#define QMin(a,b) ((a<b) ? (a) : (b))
#define QMax(a,b) ((a>b) ? (a) : (b))

using namespace std;

class QDebug {
protected:
	int QMessageErrorValue = 0, QPrintErrorValue = 0, QTitleErrorValue = 0;
public:
	QDebug();
	auto QPrint(std::string QPrintValue) -> void;
	auto QMessage(std::string QMessageValue) -> void;
	auto QAppTitle(LPCSTR QTtitleValue) -> void;
};

// Constructor
inline QDebug::QDebug() {
	try
	{
		system("color 57");
		SetConsoleTitleA("Qlang Shell - 1.3.2");
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
};

QDebug Qdebug; // New Object

// PRINT SOMETHING
inline auto QDebug::QPrint(std::string QPrintValue) -> void
{
	try
	{
		if (!QPrintValue.empty()) {
			this->QPrintErrorValue = 0;
			if (this->QPrintErrorValue == 0) {
				if (!QPrintValue.length() == 0) {
					this->QPrintErrorValue = 0;
					if (this->QPrintErrorValue == 0) {
						std::cout << QPrintValue;
					}
					else {
						std::cout << "";
					}
				}
				else {
					std::cout << "";
				}
			}
			else {
				this->QPrintErrorValue = 1;
				if (this->QPrintErrorValue == 1) {
					std::cout << "";
				}
			}
		}
		else {
			std::cout << "";
		}
	}
	catch (const std::string ErrorValue)
	{
		Qdebug.QPrint(ErrorValue);
	}
}

// SHOW MESSAGE
inline auto QDebug::QMessage(std::string QMessageValue) -> void
{
	try
	{
		if (!QMessageValue.empty()) {
			this->QMessageErrorValue = 0;
			if (this->QMessageErrorValue == 0) {
				this->QMessageErrorValue = 0;
				if (!QMessageValue.length() == 0) {
					Qdebug.QPrint(QMessageValue+"\n");
				}
				else {
					this->QMessageErrorValue = 1;
					Qdebug.QPrint("");
				}
			}
			else {
				this->QMessageErrorValue = 1;
				Qdebug.QPrint("");
			}
		}
		else {
			this->QMessageErrorValue = 0;
			if (this->QMessageErrorValue == 0) {
				Qdebug.QPrint("");
			}
		}
	}
	catch (const std::string ErrorValue)
	{
		Qdebug.QPrint(ErrorValue);
	}
}

// SET APPLICATION TITLE
inline auto QDebug::QAppTitle(LPCSTR QTtitleValue) -> void
{
	try
	{
		SetConsoleTitleA(QTtitleValue);
	}
	catch (const std::string ErrorValue)
	{
		Qdebug.QPrint(ErrorValue);
	}
}
