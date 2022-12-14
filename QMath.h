#pragma once
#include <cmath>

class QMath
{
public:
	auto QCos(double _X) -> void;
	auto QCosf(float _X) -> void;
	auto QCosl(long double _X) -> void;
	auto QCosh(double _X) -> void;
	auto QAcosh(double _X) -> void;
	auto QAcos(double _X) -> void;
	auto QSin(double _X) -> void;
	auto QAsinh(double _X) -> void;
	auto QSinh(double _X) -> void;
	auto QAsin(double _X) -> void;
	auto QTan(double _X) -> void;
	auto QAtanh(double _X) -> void;
	auto QTanh(double _X) -> void;
	auto QAtan(double _X) -> void;
	auto QAtan2(double _Y,double _X) -> void;
	auto QExp(double _X) -> void;
	void QFrexp(double _X, int* _Y);
	void QLdexp(double _X, int _Y);
	auto QLog(double _X) -> void;
	void QLog10(double _X);
	void QModf(long double _Xx, long double* _Yx);
	void QExp2(long double _Xx);
	void QExpm1(long double _Xx);
	void QIlogb(long double _Xx);
	void QLog1p(long double _Xx);
	void QLog2(long double _Xx);
	void QLogb(long double _Xx);
	void QScalbn(long double _Xx, int _Yx);
	void QScalbln(long double _Xx, long _Yx);
	void QPow(long double _Xx, long double _Yx);
	void QSqrt(long double _Xx);
	void QCbrt(long double _Xx);
	void QHypot(long double _Xx, long double _Yx);

};
inline auto QMath::QCos(double _X) -> void
{
	try
	{
		std::cout << cos(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QCosf(float _X) -> void
{
	try
	{
		std::cout << cosf(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QCosl(long double _X) -> void
{
	try
	{
		std::cout << cosl(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QCosh(double _X) -> void
{
	try
	{
		std::cout << cosh(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QAcosh(double _X) -> void
{
	try
	{
		std::cout << acosh(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QAcos(double _X) -> void
{
	try
	{
		std::cout << acos(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QSin(double _X) -> void
{
	try
	{
		std::cout << sin(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QAsinh(double _X) -> void
{
	try
	{
		std::cout << asinh(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QSinh(double _X) -> void
{
	try
	{
		std::cout << sinh(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QAsin(double _X) -> void
{
	try
	{
		std::cout << asin(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QTan(double _X) -> void
{
	try
	{
		std::cout << tan(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QTanh(double _X) -> void
{
	try
	{
		std::cout << tanh(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QAtan(double _X) -> void
{
	try
	{
		std::cout << atan(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QAtanh(double _X) -> void
{
	try
	{
		std::cout << atanh(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QAtan2(double _Y, double _X) -> void
{
	try
	{
		std::cout << atan2(_Y,_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QExp(double _X) -> void
{
	try
	{
		std::cout << exp(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QFrexp(double _X, int* _Y) {
	try
	{
		std::cout << frexp(_X, _Y);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QLdexp(double _X, int _Y) {
	try
	{
		std::cout << ldexp(_X, _Y);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
inline auto QMath::QLog(double _X) -> void
{
	try
	{
		std::cout << log(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QLog10(double _X) {
	try
	{
		std::cout << log10(_X);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QModf(long double _Xx, long double* _Yx) {
	try
	{
		std::cout << modf(_Xx, _Yx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QExp2(long double _Xx) {
	try
	{
		std::cout << exp2(_Xx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QExpm1(long double _Xx) {
	try
	{
		std::cout << expm1(_Xx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QIlogb(long double _Xx) {
	try
	{
		std::cout << ilogb(_Xx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QLog1p(long double _Xx) {
	try
	{
		std::cout << log1p(_Xx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QLog2(long double _Xx) {
	try
	{
		std::cout << log2(_Xx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QLogb(long double _Xx) {
	try
	{
		std::cout << logb(_Xx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QScalbn(long double _Xx, int _Yx) {
	try
	{
		std::cout << scalbn(_Xx, _Yx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QScalbln(long double _Xx,long _Yx) {
	try
	{
		std::cout << scalbln(_Xx, _Yx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QPow(long double _Xx, long double _Yx) {
	try
	{
		std::cout << pow(_Xx, _Yx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QSqrt(long double _Xx) {
	try
	{
		std::cout << sqrt(_Xx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QCbrt(long double _Xx) {
	try
	{
		std::cout << cbrt(_Xx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
void QMath::QHypot(long double _Xx, long double _Yx) {
	try
	{
		std::cout << hypot(_Xx, _Yx);
	}
	catch (const std::string ErrorValue)
	{
		std::cout << ErrorValue;
	}
}
