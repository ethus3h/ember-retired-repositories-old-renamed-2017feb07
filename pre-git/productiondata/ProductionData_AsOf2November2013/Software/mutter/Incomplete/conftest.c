/* confdefs.h */
#define PACKAGE_NAME ""
#define PACKAGE_TARNAME ""
#define PACKAGE_VERSION ""
#define PACKAGE_STRING ""
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define LT_OBJDIR ".libs/"
/* end confdefs.h.  */
#include <isl/version.h>
   #include <string.h>
int
main ()
{
if (strncmp (isl_version (), "isl-0.11", strlen ("isl-0.11")) != 0)
     return 1;

  ;
  return 0;
}
