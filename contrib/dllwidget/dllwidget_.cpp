/*
 * FILE : contrib/dllwidget/dllwidget_.cpp
 * 
 * This file was automatically generated by :
 * Simplified Wrapper and Interface Generator (SWIG)
 * Version 1.1 (Build 883)
 * 
 * Portions Copyright (c) 1995-1998
 * The University of Utah and The Regents of the University of California.
 * Permission is granted to distribute this file in any manner provided
 * this notice remains intact.
 * 
 * Do not make changes to this file--changes will be lost!
 *
 */


#define SWIGCODE
/* Implementation : PYTHON */

#define SWIGPYTHON
#include <string.h>
#include <stdlib.h>
/* Definitions for Windows/Unix exporting */
#if defined(__WIN32__)
#   if defined(_MSC_VER)
#	define SWIGEXPORT(a) __declspec(dllexport) a
#   else
#	if defined(__BORLANDC__)
#	    define SWIGEXPORT(a) a _export
#	else
#	    define SWIGEXPORT(a) a
#	endif
#   endif
#else
#   define SWIGEXPORT(a) a
#endif

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void SWIG_MakePtr(char *, void *, char *);
extern void SWIG_RegisterMapping(char *, char *, void *(*)(void *));
extern char *SWIG_GetPtr(char *, void **, char *);
extern char *SWIG_GetPtrObj(PyObject *, void **, char *);
extern void SWIG_addvarlink(PyObject *, char *, PyObject *(*)(void), int (*)(PyObject *));
extern PyObject *SWIG_newvarlink(void);
#ifdef __cplusplus
}
#endif
#define SWIG_init    initdllwidget_c

#define SWIG_name    "dllwidget_c"

#include "export.h"
#include "dllwidget.h"


static PyObject* t_output_helper(PyObject* target, PyObject* o) {
    PyObject*   o2;
    PyObject*   o3;

    if (!target) {
        target = o;
    } else if (target == Py_None) {
        Py_DECREF(Py_None);
        target = o;
    } else {
        if (!PyTuple_Check(target)) {
            o2 = target;
            target = PyTuple_New(1);
            PyTuple_SetItem(target, 0, o2);
        }
        o3 = PyTuple_New(1);
        PyTuple_SetItem(o3, 0, o);

        o2 = target;
        target = PySequence_Concat(o2, o3);
        Py_DECREF(o2);
        Py_DECREF(o3);
    }
    return target;
}

#if PYTHON_API_VERSION >= 1009
    static char* wxStringErrorMsg = "String or Unicode type required";
#else
    static char* wxStringErrorMsg = "String type required";
#endif
#ifdef __cplusplus
extern "C" {
#endif
static void *SwigwxDllWidgetTowxPanel(void *ptr) {
    wxDllWidget *src;
    wxPanel *dest;
    src = (wxDllWidget *) ptr;
    dest = (wxPanel *) src;
    return (void *) dest;
}

static void *SwigwxDllWidgetTowxWindow(void *ptr) {
    wxDllWidget *src;
    wxWindow *dest;
    src = (wxDllWidget *) ptr;
    dest = (wxWindow *) src;
    return (void *) dest;
}

static void *SwigwxDllWidgetTowxEvtHandler(void *ptr) {
    wxDllWidget *src;
    wxEvtHandler *dest;
    src = (wxDllWidget *) ptr;
    dest = (wxEvtHandler *) src;
    return (void *) dest;
}

static void *SwigwxDllWidgetTowxObject(void *ptr) {
    wxDllWidget *src;
    wxObject *dest;
    src = (wxDllWidget *) ptr;
    dest = (wxObject *) src;
    return (void *) dest;
}

#define new_wxDllWidget(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5,_swigarg6) (new wxDllWidget(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5,_swigarg6))
static PyObject *_wrap_new_wxDllWidget(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxDllWidget * _result;
    wxWindow * _arg0;
    wxWindowID  _arg1 = (wxWindowID ) -1;
    wxString * _arg2 = (wxString *) &wxEmptyString;
    wxString * _arg3 = (wxString *) &wxEmptyString;
    wxPoint * _arg4 = (wxPoint *) &wxDefaultPosition;
    wxSize * _arg5 = (wxSize *) &wxDefaultSize;
    long  _arg6 = (long ) 0;
    PyObject * _argo0 = 0;
    PyObject * _obj2 = 0;
    PyObject * _obj3 = 0;
    wxPoint  temp;
    PyObject * _obj4 = 0;
    wxSize  temp0;
    PyObject * _obj5 = 0;
    char *_kwnames[] = { "parent","id","dllName","className","pos","size","style", NULL };
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O|iOOOOl:new_wxDllWidget",_kwnames,&_argo0,&_arg1,&_obj2,&_obj3,&_obj4,&_obj5,&_arg6)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxWindow_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of new_wxDllWidget. Expected _wxWindow_p.");
        return NULL;
        }
    }
    if (_obj2)
{
#if PYTHON_API_VERSION >= 1009
    char* tmpPtr; int tmpSize;
    if (!PyString_Check(_obj2) && !PyUnicode_Check(_obj2)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    if (PyString_AsStringAndSize(_obj2, &tmpPtr, &tmpSize) == -1)
        return NULL;
    _arg2 = new wxString(tmpPtr, tmpSize);
#else
    if (!PyString_Check(_obj2)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    _arg2 = new wxString(PyString_AS_STRING(_obj2), PyString_GET_SIZE(_obj2));
#endif
}
    if (_obj3)
{
#if PYTHON_API_VERSION >= 1009
    char* tmpPtr; int tmpSize;
    if (!PyString_Check(_obj3) && !PyUnicode_Check(_obj3)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    if (PyString_AsStringAndSize(_obj3, &tmpPtr, &tmpSize) == -1)
        return NULL;
    _arg3 = new wxString(tmpPtr, tmpSize);
#else
    if (!PyString_Check(_obj3)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    _arg3 = new wxString(PyString_AS_STRING(_obj3), PyString_GET_SIZE(_obj3));
#endif
}
    if (_obj4)
{
    _arg4 = &temp;
    if (! wxPoint_helper(_obj4, &_arg4))
        return NULL;
}
    if (_obj5)
{
    _arg5 = &temp0;
    if (! wxSize_helper(_obj5, &_arg5))
        return NULL;
}
{
    wxPy_BEGIN_ALLOW_THREADS;
        _result = (wxDllWidget *)new_wxDllWidget(_arg0,_arg1,*_arg2,*_arg3,*_arg4,*_arg5,_arg6);

    wxPy_END_ALLOW_THREADS;
}    if (_result) {
        SWIG_MakePtr(_ptemp, (char *) _result,"_wxDllWidget_p");
        _resultobj = Py_BuildValue("s",_ptemp);
    } else {
        Py_INCREF(Py_None);
        _resultobj = Py_None;
    }
{
    if (_obj2)
        delete _arg2;
}
{
    if (_obj3)
        delete _arg3;
}
    return _resultobj;
}

#define wxDllWidget_Ok(_swigobj)  (_swigobj->Ok())
static PyObject *_wrap_wxDllWidget_Ok(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxDllWidget * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxDllWidget_Ok",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxDllWidget_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxDllWidget_Ok. Expected _wxDllWidget_p.");
        return NULL;
        }
    }
{
    wxPy_BEGIN_ALLOW_THREADS;
        _result = (bool )wxDllWidget_Ok(_arg0);

    wxPy_END_ALLOW_THREADS;
}    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

#define wxDllWidget_SendCommand(_swigobj,_swigarg0,_swigarg1)  (_swigobj->SendCommand(_swigarg0,_swigarg1))
static PyObject *_wrap_wxDllWidget_SendCommand(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    int  _result;
    wxDllWidget * _arg0;
    int  _arg1;
    wxString * _arg2 = (wxString *) &wxEmptyString;
    PyObject * _argo0 = 0;
    PyObject * _obj2 = 0;
    char *_kwnames[] = { "self","cmd","param", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"Oi|O:wxDllWidget_SendCommand",_kwnames,&_argo0,&_arg1,&_obj2)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxDllWidget_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxDllWidget_SendCommand. Expected _wxDllWidget_p.");
        return NULL;
        }
    }
    if (_obj2)
{
#if PYTHON_API_VERSION >= 1009
    char* tmpPtr; int tmpSize;
    if (!PyString_Check(_obj2) && !PyUnicode_Check(_obj2)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    if (PyString_AsStringAndSize(_obj2, &tmpPtr, &tmpSize) == -1)
        return NULL;
    _arg2 = new wxString(tmpPtr, tmpSize);
#else
    if (!PyString_Check(_obj2)) {
        PyErr_SetString(PyExc_TypeError, wxStringErrorMsg);
        return NULL;
    }
    _arg2 = new wxString(PyString_AS_STRING(_obj2), PyString_GET_SIZE(_obj2));
#endif
}
{
    wxPy_BEGIN_ALLOW_THREADS;
        _result = (int )wxDllWidget_SendCommand(_arg0,_arg1,*_arg2);

    wxPy_END_ALLOW_THREADS;
}    _resultobj = Py_BuildValue("i",_result);
{
    if (_obj2)
        delete _arg2;
}
    return _resultobj;
}

#define wxDllWidget_GetWidgetWindow(_swigobj)  (_swigobj->GetWidgetWindow())
static PyObject *_wrap_wxDllWidget_GetWidgetWindow(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxWindow * _result;
    wxDllWidget * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxDllWidget_GetWidgetWindow",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxDllWidget_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxDllWidget_GetWidgetWindow. Expected _wxDllWidget_p.");
        return NULL;
        }
    }
{
    wxPy_BEGIN_ALLOW_THREADS;
        _result = (wxWindow *)wxDllWidget_GetWidgetWindow(_arg0);

    wxPy_END_ALLOW_THREADS;
}{ _resultobj = wxPyMake_wxObject(_result); }
    return _resultobj;
}

static PyObject *_wrap_wxDllWidget_GetDllExt(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxString * _result;
    char *_kwnames[] = {  NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,":wxDllWidget_GetDllExt",_kwnames)) 
        return NULL;
{
    wxPy_BEGIN_ALLOW_THREADS;
        _result = new wxString (wxDllWidget::GetDllExt());

    wxPy_END_ALLOW_THREADS;
}{
    _resultobj = PyString_FromStringAndSize(_result->c_str(), _result->Len());
}
{
    delete _result;
}
    return _resultobj;
}

static PyMethodDef dllwidget_cMethods[] = {
	 { "wxDllWidget_GetDllExt", (PyCFunction) _wrap_wxDllWidget_GetDllExt, METH_VARARGS | METH_KEYWORDS },
	 { "wxDllWidget_GetWidgetWindow", (PyCFunction) _wrap_wxDllWidget_GetWidgetWindow, METH_VARARGS | METH_KEYWORDS },
	 { "wxDllWidget_SendCommand", (PyCFunction) _wrap_wxDllWidget_SendCommand, METH_VARARGS | METH_KEYWORDS },
	 { "wxDllWidget_Ok", (PyCFunction) _wrap_wxDllWidget_Ok, METH_VARARGS | METH_KEYWORDS },
	 { "new_wxDllWidget", (PyCFunction) _wrap_new_wxDllWidget, METH_VARARGS | METH_KEYWORDS },
	 { NULL, NULL }
};
#ifdef __cplusplus
}
#endif
/*
 * This table is used by the pointer type-checker
 */
static struct { char *n1; char *n2; void *(*pcnv)(void *); } _swig_mapping[] = {
    { "_signed_long","_long",0},
    { "_wxPrintQuality","_wxCoord",0},
    { "_wxPrintQuality","_int",0},
    { "_wxPrintQuality","_signed_int",0},
    { "_wxPrintQuality","_unsigned_int",0},
    { "_wxPrintQuality","_wxWindowID",0},
    { "_wxPrintQuality","_uint",0},
    { "_wxPrintQuality","_EBool",0},
    { "_wxPrintQuality","_size_t",0},
    { "_wxPrintQuality","_time_t",0},
    { "_byte","_unsigned_char",0},
    { "_long","_unsigned_long",0},
    { "_long","_signed_long",0},
    { "_size_t","_wxCoord",0},
    { "_size_t","_wxPrintQuality",0},
    { "_size_t","_time_t",0},
    { "_size_t","_unsigned_int",0},
    { "_size_t","_int",0},
    { "_size_t","_wxWindowID",0},
    { "_size_t","_uint",0},
    { "_wxPanel","_wxDllWidget",SwigwxDllWidgetTowxPanel},
    { "_uint","_wxCoord",0},
    { "_uint","_wxPrintQuality",0},
    { "_uint","_time_t",0},
    { "_uint","_size_t",0},
    { "_uint","_unsigned_int",0},
    { "_uint","_int",0},
    { "_uint","_wxWindowID",0},
    { "_wxChar","_char",0},
    { "_char","_wxChar",0},
    { "_struct_wxNativeFontInfo","_wxNativeFontInfo",0},
    { "_EBool","_wxCoord",0},
    { "_EBool","_wxPrintQuality",0},
    { "_EBool","_signed_int",0},
    { "_EBool","_int",0},
    { "_EBool","_wxWindowID",0},
    { "_unsigned_long","_long",0},
    { "_wxNativeFontInfo","_struct_wxNativeFontInfo",0},
    { "_signed_int","_wxCoord",0},
    { "_signed_int","_wxPrintQuality",0},
    { "_signed_int","_EBool",0},
    { "_signed_int","_wxWindowID",0},
    { "_signed_int","_int",0},
    { "_WXTYPE","_wxDateTime_t",0},
    { "_WXTYPE","_short",0},
    { "_WXTYPE","_signed_short",0},
    { "_WXTYPE","_unsigned_short",0},
    { "_unsigned_short","_wxDateTime_t",0},
    { "_unsigned_short","_WXTYPE",0},
    { "_unsigned_short","_short",0},
    { "_wxObject","_wxDllWidget",SwigwxDllWidgetTowxObject},
    { "_signed_short","_WXTYPE",0},
    { "_signed_short","_short",0},
    { "_unsigned_char","_byte",0},
    { "_unsigned_int","_wxCoord",0},
    { "_unsigned_int","_wxPrintQuality",0},
    { "_unsigned_int","_time_t",0},
    { "_unsigned_int","_size_t",0},
    { "_unsigned_int","_uint",0},
    { "_unsigned_int","_wxWindowID",0},
    { "_unsigned_int","_int",0},
    { "_short","_wxDateTime_t",0},
    { "_short","_WXTYPE",0},
    { "_short","_unsigned_short",0},
    { "_short","_signed_short",0},
    { "_wxWindowID","_wxCoord",0},
    { "_wxWindowID","_wxPrintQuality",0},
    { "_wxWindowID","_time_t",0},
    { "_wxWindowID","_size_t",0},
    { "_wxWindowID","_EBool",0},
    { "_wxWindowID","_uint",0},
    { "_wxWindowID","_int",0},
    { "_wxWindowID","_signed_int",0},
    { "_wxWindowID","_unsigned_int",0},
    { "_int","_wxCoord",0},
    { "_int","_wxPrintQuality",0},
    { "_int","_time_t",0},
    { "_int","_size_t",0},
    { "_int","_EBool",0},
    { "_int","_uint",0},
    { "_int","_wxWindowID",0},
    { "_int","_unsigned_int",0},
    { "_int","_signed_int",0},
    { "_wxDateTime_t","_unsigned_short",0},
    { "_wxDateTime_t","_short",0},
    { "_wxDateTime_t","_WXTYPE",0},
    { "_time_t","_wxCoord",0},
    { "_time_t","_wxPrintQuality",0},
    { "_time_t","_unsigned_int",0},
    { "_time_t","_int",0},
    { "_time_t","_wxWindowID",0},
    { "_time_t","_uint",0},
    { "_time_t","_size_t",0},
    { "_wxCoord","_int",0},
    { "_wxCoord","_signed_int",0},
    { "_wxCoord","_unsigned_int",0},
    { "_wxCoord","_wxWindowID",0},
    { "_wxCoord","_uint",0},
    { "_wxCoord","_EBool",0},
    { "_wxCoord","_size_t",0},
    { "_wxCoord","_time_t",0},
    { "_wxCoord","_wxPrintQuality",0},
    { "_wxEvtHandler","_wxDllWidget",SwigwxDllWidgetTowxEvtHandler},
    { "_wxWindow","_wxDllWidget",SwigwxDllWidgetTowxWindow},
{0,0,0}};

static PyObject *SWIG_globals;
#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT(void) initdllwidget_c() {
	 PyObject *m, *d;
	 SWIG_globals = SWIG_newvarlink();
	 m = Py_InitModule("dllwidget_c", dllwidget_cMethods);
	 d = PyModule_GetDict(m);


    wxClassInfo::CleanUpClasses();
    wxClassInfo::InitializeClasses();

{
   int i;
   for (i = 0; _swig_mapping[i].n1; i++)
        SWIG_RegisterMapping(_swig_mapping[i].n1,_swig_mapping[i].n2,_swig_mapping[i].pcnv);
}
}
