
#ifndef GLUBIND_H_
#define GLUBIND_H_

#include <v8.h>


class GluFactory {

	public:
		static v8::Handle<v8::ObjectTemplate> createGlu(void);

};


#endif /* GLUBIND_H_ */

