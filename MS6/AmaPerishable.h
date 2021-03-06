// AmaPerishable.h
#ifndef sict_AmaPerishable_h
#define sict_AmaPerishable_h
#include "AmaProduct.h"
#include "Date.h"
namespace sict {
	class AmaPerishable : public AmaProduct {
		Date expiry_;
	public:
		AmaPerishable();
		const Date& expiry()const { return expiry_; }
		void expiry(const Date &value);
		fstream& store(fstream& file, bool addNewLine = true)const;
		fstream& load(fstream& file);	
		ostream& write(ostream& ostr, bool linear)const;
		istream& read(istream& istr);
		
	};
}

#endif