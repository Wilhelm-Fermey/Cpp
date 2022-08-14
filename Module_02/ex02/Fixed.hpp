#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
	
		Fixed(void);
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed& src);
		Fixed&	operator=(const Fixed& rhs);
		~Fixed(void);

		int	getRawbits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		Fixed  operator+(const Fixed& rhs);
		Fixed  operator-(const Fixed& rhs);
		Fixed  operator*(const Fixed& rhs);
		Fixed  operator/(const Fixed& rhs);

		bool operator>(Fixed const & rhs)const;
		bool operator<(Fixed const & rhs)const;
		bool operator>=(Fixed const & rhs)const;
		bool operator<=(Fixed const & rhs)const;
		bool operator==(Fixed const & rhs)const;
		bool operator!=(Fixed const & rhs)const;
	
		Fixed &operator ++(void);
		Fixed &operator --(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed&	min(Fixed& f1, Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		static Fixed&	max(Fixed& f1, Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);

	private:

		int	_i;
		int const static _fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& rhs);

#endif
