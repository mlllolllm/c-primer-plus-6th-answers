//#include"Cpmv.h"
//
////class Cpmv {
////public:
////	struct Info
////	{
////		std::string qcode;
////		std::string zcode;
////	};
////private:
////	Info *pi;
////public:
////	Cpmv();
////	Cpmv(std::string q, std::string z);
////	Cpmv(const Cpmv & cp);
////	Cpmv(Cpmv && mv);
////	~Cpmv();
////	Cpmv & operator=(const Cpmv & cp);
////	Cpmv & operator=(Cpmv && mv);
////	Cpmv operator+(const Cpmv & obj) const;
////	void Display()const;
////};
//Cpmv::Cpmv() {
//	pi->qcode = "none";
//	pi->zcode = "none";
//}
//
//Cpmv::Cpmv(std::string q, std::string z) {
//	pi->qcode = q;
//	pi->zcode = z;
//}
//
//Cpmv::Cpmv(const Cpmv & cp) {
//	pi->qcode = cp.pi->qcode;
//	pi->zcode = cp.pi->zcode;
//}
//
//Cpmv::Cpmv(Cpmv && mv) {
//	pi->qcode = mv.pi->qcode;
//	pi->zcode = mv.pi->zcode;
//}
//
//Cpmv::~Cpmv(){}
//
//Cpmv & Cpmv::operator=(const Cpmv & cp) {
//	pi->qcode = cp.pi->qcode;
//	pi->zcode = cp.pi->zcode;
//}
//
//Cpmv & Cpmv::operator=(Cpmv && mv) {
//	pi->qcode = mv.pi->qcode;
//	pi->zcode = mv.pi->zcode;
//}
//
//Cpmv Cpmv::operator+(const Cpmv & obj)const {
//	Cpmv temp;
//}