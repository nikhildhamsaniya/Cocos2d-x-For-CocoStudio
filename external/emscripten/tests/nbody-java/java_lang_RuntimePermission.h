#ifndef __JAVA_LANG_RUNTIMEPERMISSION__
#define __JAVA_LANG_RUNTIMEPERMISSION__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
#define XMLVM_ITABLE_SIZE_java_lang_RuntimePermission 1
// Implemented interfaces:
// Super Class:
#include "java_security_BasicPermission.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for java.lang.RuntimePermission
XMLVM_DEFINE_CLASS(java_lang_RuntimePermission, 10, XMLVM_ITABLE_SIZE_java_lang_RuntimePermission)

extern JAVA_OBJECT __CLASS_java_lang_RuntimePermission;
extern JAVA_OBJECT __CLASS_java_lang_RuntimePermission_1ARRAY;
extern JAVA_OBJECT __CLASS_java_lang_RuntimePermission_2ARRAY;
extern JAVA_OBJECT __CLASS_java_lang_RuntimePermission_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_java_lang_RuntimePermission
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_java_lang_RuntimePermission \
    __INSTANCE_FIELDS_java_security_BasicPermission; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_java_lang_RuntimePermission \
    } java_lang_RuntimePermission

struct java_lang_RuntimePermission {
    __TIB_DEFINITION_java_lang_RuntimePermission* tib;
    struct {
        __INSTANCE_FIELDS_java_lang_RuntimePermission;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_java_lang_RuntimePermission
#define XMLVM_FORWARD_DECL_java_lang_RuntimePermission
typedef struct java_lang_RuntimePermission java_lang_RuntimePermission;
#endif

#define XMLVM_VTABLE_SIZE_java_lang_RuntimePermission 10

void __INIT_java_lang_RuntimePermission();
void __INIT_IMPL_java_lang_RuntimePermission();
void __DELETE_java_lang_RuntimePermission(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_java_lang_RuntimePermission(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_java_lang_RuntimePermission();
JAVA_OBJECT __NEW_INSTANCE_java_lang_RuntimePermission();
JAVA_LONG java_lang_RuntimePermission_GET_serialVersionUID();
void java_lang_RuntimePermission_PUT_serialVersionUID(JAVA_LONG v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToSetSecurityManager();
void java_lang_RuntimePermission_PUT_permissionToSetSecurityManager(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToCreateSecurityManager();
void java_lang_RuntimePermission_PUT_permissionToCreateSecurityManager(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToGetProtectionDomain();
void java_lang_RuntimePermission_PUT_permissionToGetProtectionDomain(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToGetClassLoader();
void java_lang_RuntimePermission_PUT_permissionToGetClassLoader(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToCreateClassLoader();
void java_lang_RuntimePermission_PUT_permissionToCreateClassLoader(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToModifyThread();
void java_lang_RuntimePermission_PUT_permissionToModifyThread(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToModifyThreadGroup();
void java_lang_RuntimePermission_PUT_permissionToModifyThreadGroup(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToExitVM();
void java_lang_RuntimePermission_PUT_permissionToExitVM(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToReadFileDescriptor();
void java_lang_RuntimePermission_PUT_permissionToReadFileDescriptor(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToWriteFileDescriptor();
void java_lang_RuntimePermission_PUT_permissionToWriteFileDescriptor(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToQueuePrintJob();
void java_lang_RuntimePermission_PUT_permissionToQueuePrintJob(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToSetFactory();
void java_lang_RuntimePermission_PUT_permissionToSetFactory(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToSetIO();
void java_lang_RuntimePermission_PUT_permissionToSetIO(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToStopThread();
void java_lang_RuntimePermission_PUT_permissionToStopThread(JAVA_OBJECT v);
JAVA_OBJECT java_lang_RuntimePermission_GET_permissionToSetContextClassLoader();
void java_lang_RuntimePermission_PUT_permissionToSetContextClassLoader(JAVA_OBJECT v);
void java_lang_RuntimePermission___CLINIT_();
void java_lang_RuntimePermission___INIT____java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_RuntimePermission___INIT____java_lang_String_java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);

#endif
