#include "Form.hpp"







std::ostream &operator<< (std::ostream &out, const Form &form)
{
	out << "Form: " << form.getName() << std::endl << "sign status: " << form.getSignstatus() << std::endl << \
	"Required grade to sign: " << form.getGradeSign() << std::endl << "Required grade to execute: " << \
	form.getGradeExec() << std::endl;
	return (out);
}