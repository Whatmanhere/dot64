/* Generated code for Python module 'capstone$x86'
 * created by Nuitka version 2.2
 *
 * This code is in part copyright 2024 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_capstone$x86" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_capstone$x86;
PyDictObject *moduledict_capstone$x86;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[93];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[93];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("capstone.x86"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 93; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_capstone$x86(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 93; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_da62b6e34018bff317a29d3a3693db49;
static PyCodeObject *codeobj_8ab28d1845528cc208fc23404db402af;
static PyCodeObject *codeobj_2eda2870fb8bb1d8390d2b7c33b8faee;
static PyCodeObject *codeobj_c88a7824d46e6688941d84641c03ffc0;
static PyCodeObject *codeobj_0b077e1471111f09572959a60480df55;
static PyCodeObject *codeobj_bb8d2035dbbc7fd9bdc84ad02a8d6dcb;
static PyCodeObject *codeobj_dc9697c8ce09c05d5801cdacd6e36f4c;
static PyCodeObject *codeobj_63dd6fa53420978c1c84a6f9cafe1fe1;
static PyCodeObject *codeobj_dd3c9627d0c502e52a35de320a2bcf45;
static PyCodeObject *codeobj_499ff8da7dbacb2ea3139999f8fa763c;
static PyCodeObject *codeobj_96c6a446bdc29989fb84c7ab69ec4827;
static PyCodeObject *codeobj_1ae6c6be3507ed8f16e5bebbfe7abfd6;
static PyCodeObject *codeobj_eac5b2f603b5feb5718451c0cb972131;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[88]); CHECK_OBJECT(module_filename_obj);
    codeobj_da62b6e34018bff317a29d3a3693db49 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[89], mod_consts[89], NULL, NULL, 0, 0, 0);
    codeobj_8ab28d1845528cc208fc23404db402af = MAKE_CODE_OBJECT(module_filename_obj, 61, 0, mod_consts[81], mod_consts[81], mod_consts[90], NULL, 0, 0, 0);
    codeobj_2eda2870fb8bb1d8390d2b7c33b8faee = MAKE_CODE_OBJECT(module_filename_obj, 52, 0, mod_consts[80], mod_consts[80], mod_consts[90], NULL, 0, 0, 0);
    codeobj_c88a7824d46e6688941d84641c03ffc0 = MAKE_CODE_OBJECT(module_filename_obj, 46, 0, mod_consts[78], mod_consts[78], mod_consts[90], NULL, 0, 0, 0);
    codeobj_0b077e1471111f09572959a60480df55 = MAKE_CODE_OBJECT(module_filename_obj, 24, 0, mod_consts[66], mod_consts[66], mod_consts[90], NULL, 0, 0, 0);
    codeobj_bb8d2035dbbc7fd9bdc84ad02a8d6dcb = MAKE_CODE_OBJECT(module_filename_obj, 8, 0, mod_consts[47], mod_consts[47], mod_consts[90], NULL, 0, 0, 0);
    codeobj_dc9697c8ce09c05d5801cdacd6e36f4c = MAKE_CODE_OBJECT(module_filename_obj, 17, 0, mod_consts[65], mod_consts[65], mod_consts[90], NULL, 0, 0, 0);
    codeobj_63dd6fa53420978c1c84a6f9cafe1fe1 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[85], mod_consts[91], NULL, 1, 0, 0);
    codeobj_dd3c9627d0c502e52a35de320a2bcf45 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[6], mod_consts[86], mod_consts[91], NULL, 1, 0, 0);
    codeobj_499ff8da7dbacb2ea3139999f8fa763c = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[87], mod_consts[87], mod_consts[92], NULL, 1, 0, 0);
    codeobj_96c6a446bdc29989fb84c7ab69ec4827 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[75], mod_consts[91], NULL, 1, 0, 0);
    codeobj_1ae6c6be3507ed8f16e5bebbfe7abfd6 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[77], mod_consts[91], NULL, 1, 0, 0);
    codeobj_eac5b2f603b5feb5718451c0cb972131 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[76], mod_consts[91], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_capstone$x86$$$function__1_imm();


static PyObject *MAKE_FUNCTION_capstone$x86$$$function__2_reg();


static PyObject *MAKE_FUNCTION_capstone$x86$$$function__3_mem();


static PyObject *MAKE_FUNCTION_capstone$x86$$$function__4_eflags();


static PyObject *MAKE_FUNCTION_capstone$x86$$$function__5_fpu_flags();


static PyObject *MAKE_FUNCTION_capstone$x86$$$function__6_get_arch_info();


// The module function definitions.
static PyObject *impl_capstone$x86$$$function__1_imm(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_96c6a446bdc29989fb84c7ab69ec4827;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96c6a446bdc29989fb84c7ab69ec4827 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96c6a446bdc29989fb84c7ab69ec4827)) {
        Py_XDECREF(cache_frame_96c6a446bdc29989fb84c7ab69ec4827);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96c6a446bdc29989fb84c7ab69ec4827 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96c6a446bdc29989fb84c7ab69ec4827 = MAKE_FUNCTION_FRAME(tstate, codeobj_96c6a446bdc29989fb84c7ab69ec4827, module_capstone$x86, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96c6a446bdc29989fb84c7ab69ec4827->m_type_description == NULL);
    frame_96c6a446bdc29989fb84c7ab69ec4827 = cache_frame_96c6a446bdc29989fb84c7ab69ec4827;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_96c6a446bdc29989fb84c7ab69ec4827);
    assert(Py_REFCNT(frame_96c6a446bdc29989fb84c7ab69ec4827) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96c6a446bdc29989fb84c7ab69ec4827, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96c6a446bdc29989fb84c7ab69ec4827->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96c6a446bdc29989fb84c7ab69ec4827, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96c6a446bdc29989fb84c7ab69ec4827,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_96c6a446bdc29989fb84c7ab69ec4827 == cache_frame_96c6a446bdc29989fb84c7ab69ec4827) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96c6a446bdc29989fb84c7ab69ec4827);
        cache_frame_96c6a446bdc29989fb84c7ab69ec4827 = NULL;
    }

    assertFrameObject(frame_96c6a446bdc29989fb84c7ab69ec4827);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_capstone$x86$$$function__2_reg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eac5b2f603b5feb5718451c0cb972131;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eac5b2f603b5feb5718451c0cb972131 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eac5b2f603b5feb5718451c0cb972131)) {
        Py_XDECREF(cache_frame_eac5b2f603b5feb5718451c0cb972131);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eac5b2f603b5feb5718451c0cb972131 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eac5b2f603b5feb5718451c0cb972131 = MAKE_FUNCTION_FRAME(tstate, codeobj_eac5b2f603b5feb5718451c0cb972131, module_capstone$x86, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eac5b2f603b5feb5718451c0cb972131->m_type_description == NULL);
    frame_eac5b2f603b5feb5718451c0cb972131 = cache_frame_eac5b2f603b5feb5718451c0cb972131;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_eac5b2f603b5feb5718451c0cb972131);
    assert(Py_REFCNT(frame_eac5b2f603b5feb5718451c0cb972131) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eac5b2f603b5feb5718451c0cb972131, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eac5b2f603b5feb5718451c0cb972131->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eac5b2f603b5feb5718451c0cb972131, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eac5b2f603b5feb5718451c0cb972131,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eac5b2f603b5feb5718451c0cb972131 == cache_frame_eac5b2f603b5feb5718451c0cb972131) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eac5b2f603b5feb5718451c0cb972131);
        cache_frame_eac5b2f603b5feb5718451c0cb972131 = NULL;
    }

    assertFrameObject(frame_eac5b2f603b5feb5718451c0cb972131);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_capstone$x86$$$function__3_mem(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1ae6c6be3507ed8f16e5bebbfe7abfd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6)) {
        Py_XDECREF(cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6 = MAKE_FUNCTION_FRAME(tstate, codeobj_1ae6c6be3507ed8f16e5bebbfe7abfd6, module_capstone$x86, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6->m_type_description == NULL);
    frame_1ae6c6be3507ed8f16e5bebbfe7abfd6 = cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1ae6c6be3507ed8f16e5bebbfe7abfd6);
    assert(Py_REFCNT(frame_1ae6c6be3507ed8f16e5bebbfe7abfd6) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1ae6c6be3507ed8f16e5bebbfe7abfd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ae6c6be3507ed8f16e5bebbfe7abfd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ae6c6be3507ed8f16e5bebbfe7abfd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ae6c6be3507ed8f16e5bebbfe7abfd6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1ae6c6be3507ed8f16e5bebbfe7abfd6 == cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6);
        cache_frame_1ae6c6be3507ed8f16e5bebbfe7abfd6 = NULL;
    }

    assertFrameObject(frame_1ae6c6be3507ed8f16e5bebbfe7abfd6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_capstone$x86$$$function__4_eflags(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_63dd6fa53420978c1c84a6f9cafe1fe1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1)) {
        Py_XDECREF(cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1 = MAKE_FUNCTION_FRAME(tstate, codeobj_63dd6fa53420978c1c84a6f9cafe1fe1, module_capstone$x86, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1->m_type_description == NULL);
    frame_63dd6fa53420978c1c84a6f9cafe1fe1 = cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_63dd6fa53420978c1c84a6f9cafe1fe1);
    assert(Py_REFCNT(frame_63dd6fa53420978c1c84a6f9cafe1fe1) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_63dd6fa53420978c1c84a6f9cafe1fe1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63dd6fa53420978c1c84a6f9cafe1fe1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63dd6fa53420978c1c84a6f9cafe1fe1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63dd6fa53420978c1c84a6f9cafe1fe1,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_63dd6fa53420978c1c84a6f9cafe1fe1 == cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1);
        cache_frame_63dd6fa53420978c1c84a6f9cafe1fe1 = NULL;
    }

    assertFrameObject(frame_63dd6fa53420978c1c84a6f9cafe1fe1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_capstone$x86$$$function__5_fpu_flags(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dd3c9627d0c502e52a35de320a2bcf45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dd3c9627d0c502e52a35de320a2bcf45 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dd3c9627d0c502e52a35de320a2bcf45)) {
        Py_XDECREF(cache_frame_dd3c9627d0c502e52a35de320a2bcf45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd3c9627d0c502e52a35de320a2bcf45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd3c9627d0c502e52a35de320a2bcf45 = MAKE_FUNCTION_FRAME(tstate, codeobj_dd3c9627d0c502e52a35de320a2bcf45, module_capstone$x86, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd3c9627d0c502e52a35de320a2bcf45->m_type_description == NULL);
    frame_dd3c9627d0c502e52a35de320a2bcf45 = cache_frame_dd3c9627d0c502e52a35de320a2bcf45;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dd3c9627d0c502e52a35de320a2bcf45);
    assert(Py_REFCNT(frame_dd3c9627d0c502e52a35de320a2bcf45) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd3c9627d0c502e52a35de320a2bcf45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd3c9627d0c502e52a35de320a2bcf45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd3c9627d0c502e52a35de320a2bcf45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd3c9627d0c502e52a35de320a2bcf45,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dd3c9627d0c502e52a35de320a2bcf45 == cache_frame_dd3c9627d0c502e52a35de320a2bcf45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd3c9627d0c502e52a35de320a2bcf45);
        cache_frame_dd3c9627d0c502e52a35de320a2bcf45 = NULL;
    }

    assertFrameObject(frame_dd3c9627d0c502e52a35de320a2bcf45);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_capstone$x86$$$function__6_get_arch_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    struct Nuitka_FrameObject *frame_499ff8da7dbacb2ea3139999f8fa763c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_499ff8da7dbacb2ea3139999f8fa763c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_499ff8da7dbacb2ea3139999f8fa763c)) {
        Py_XDECREF(cache_frame_499ff8da7dbacb2ea3139999f8fa763c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_499ff8da7dbacb2ea3139999f8fa763c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_499ff8da7dbacb2ea3139999f8fa763c = MAKE_FUNCTION_FRAME(tstate, codeobj_499ff8da7dbacb2ea3139999f8fa763c, module_capstone$x86, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_499ff8da7dbacb2ea3139999f8fa763c->m_type_description == NULL);
    frame_499ff8da7dbacb2ea3139999f8fa763c = cache_frame_499ff8da7dbacb2ea3139999f8fa763c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_499ff8da7dbacb2ea3139999f8fa763c);
    assert(Py_REFCNT(frame_499ff8da7dbacb2ea3139999f8fa763c) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_a);
        tmp_expression_value_2 = par_a;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[8];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(24);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_stop_value_1;
            PyObject *tmp_expression_value_33;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_4 = par_a;
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_subscript_value_2 = mod_consts[8];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_5 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[10]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_6 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[11]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_7 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[12]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_8 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_9 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 6, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_10 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[15]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 7, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_11 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[16]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 8, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_12 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 9, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_13 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[18]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 10, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_14 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[19]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 11, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_15 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[20]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 12, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_16 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[21]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 13, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_17 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[22]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 14, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_18 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[5]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 15, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_19 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[6]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 16, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_20 = par_a;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[23]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 17, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_22 = par_a;
            tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[23]);
            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[24]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 18, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_24 = par_a;
            tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[23]);
            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[25]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 19, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_26 = par_a;
            tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[23]);
            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[26]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 20, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_28 = par_a;
            tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[23]);
            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[27]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 21, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_expression_value_30 = par_a;
            tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[23]);
            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[28]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 22, tmp_tuple_element_1);
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_a);
            tmp_expression_value_32 = par_a;
            tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[30]);
            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_a);
            tmp_expression_value_33 = par_a;
            tmp_stop_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[31]);
            if (tmp_stop_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_31);

                exception_lineno = 97;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_subscript_value_3 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
            Py_DECREF(tmp_stop_value_1);
            assert(!(tmp_subscript_value_3 == NULL));
            tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            frame_499ff8da7dbacb2ea3139999f8fa763c->m_frame.f_lineno = 97;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 23, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_499ff8da7dbacb2ea3139999f8fa763c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_499ff8da7dbacb2ea3139999f8fa763c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_499ff8da7dbacb2ea3139999f8fa763c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_499ff8da7dbacb2ea3139999f8fa763c,
        type_description_1,
        par_a
    );


    // Release cached frame if used for exception.
    if (frame_499ff8da7dbacb2ea3139999f8fa763c == cache_frame_499ff8da7dbacb2ea3139999f8fa763c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_499ff8da7dbacb2ea3139999f8fa763c);
        cache_frame_499ff8da7dbacb2ea3139999f8fa763c = NULL;
    }

    assertFrameObject(frame_499ff8da7dbacb2ea3139999f8fa763c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_capstone$x86$$$function__1_imm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_capstone$x86$$$function__1_imm,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_96c6a446bdc29989fb84c7ab69ec4827,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_capstone$x86,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_capstone$x86$$$function__2_reg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_capstone$x86$$$function__2_reg,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_eac5b2f603b5feb5718451c0cb972131,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_capstone$x86,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_capstone$x86$$$function__3_mem() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_capstone$x86$$$function__3_mem,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_1ae6c6be3507ed8f16e5bebbfe7abfd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_capstone$x86,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_capstone$x86$$$function__4_eflags() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_capstone$x86$$$function__4_eflags,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_63dd6fa53420978c1c84a6f9cafe1fe1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_capstone$x86,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_capstone$x86$$$function__5_fpu_flags() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_capstone$x86$$$function__5_fpu_flags,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_dd3c9627d0c502e52a35de320a2bcf45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_capstone$x86,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_capstone$x86$$$function__6_get_arch_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_capstone$x86$$$function__6_get_arch_info,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_499ff8da7dbacb2ea3139999f8fa763c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_capstone$x86,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_capstone$x86[] = {
    impl_capstone$x86$$$function__1_imm,
    impl_capstone$x86$$$function__2_reg,
    impl_capstone$x86$$$function__3_mem,
    impl_capstone$x86$$$function__4_eflags,
    impl_capstone$x86$$$function__5_fpu_flags,
    impl_capstone$x86$$$function__6_get_arch_info,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_capstone$x86);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(8);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_capstone$x86,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_capstone$x86,
        sizeof(function_table_capstone$x86) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_capstone$x86(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("capstone$x86");

    // Store the module for future use.
    module_capstone$x86 = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("capstone$x86: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("capstone$x86: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "capstone.x86" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcapstone$x86\n");

    moduledict_capstone$x86 = MODULE_DICT(module_capstone$x86);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_capstone$x86,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_capstone$x86,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[39]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_capstone$x86,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_capstone$x86,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_capstone$x86,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_capstone$x86);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_capstone$x86);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    struct Nuitka_FrameObject *frame_da62b6e34018bff317a29d3a3693db49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_capstone$x86$$$class__1_X86OpMem_8 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_capstone$x86$$$class__2_X86OpValue_17 = NULL;
    struct Nuitka_FrameObject *frame_dc9697c8ce09c05d5801cdacd6e36f4c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_capstone$x86$$$class__3_X86Op_24 = NULL;
    struct Nuitka_FrameObject *frame_0b077e1471111f09572959a60480df55_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_capstone$x86$$$class__4_X86Flags_46 = NULL;
    struct Nuitka_FrameObject *frame_c88a7824d46e6688941d84641c03ffc0_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_capstone$x86$$$class__5_CsX86Encoding_52 = NULL;
    struct Nuitka_FrameObject *frame_2eda2870fb8bb1d8390d2b7c33b8faee_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_capstone$x86$$$class__6_CsX86_61 = NULL;
    struct Nuitka_FrameObject *frame_8ab28d1845528cc208fc23404db402af_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_2);
    }
    frame_da62b6e34018bff317a29d3a3693db49 = MAKE_MODULE_FRAME(codeobj_da62b6e34018bff317a29d3a3693db49, module_capstone$x86);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_da62b6e34018bff317a29d3a3693db49);
    assert(Py_REFCNT(frame_da62b6e34018bff317a29d3a3693db49) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[39];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_capstone$x86;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[40];
        tmp_level_value_1 = mod_consts[41];
        frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_capstone$x86,
                mod_consts[29],
                mod_consts[42]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_5);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[43];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_capstone$x86;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_capstone$x86;
        tmp_fromlist_value_2 = mod_consts[44];
        tmp_level_value_2 = mod_consts[41];
        frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 5;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_capstone$x86, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_assign_source_6 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_7 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[42];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_9 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[47];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 8;
        tmp_assign_source_10 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[50];
        tmp_default_value_1 = mod_consts[51];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[50]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 8;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_capstone$x86$$$class__1_X86OpMem_8 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__1_X86OpMem_8, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[47];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__1_X86OpMem_8, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2 = MAKE_CLASS_FRAME(tstate, codeobj_bb8d2035dbbc7fd9bdc84ad02a8d6dcb, module_capstone$x86, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2);
        assert(Py_REFCNT(frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            tmp_tuple_element_5 = mod_consts[55];
            tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_5);
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                }

                assert(!(tmp_expression_value_8 == NULL));
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[56]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 10;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_4);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_tuple_element_9;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_4);
                tmp_tuple_element_6 = mod_consts[57];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_9;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_6);
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_9 == NULL));
                    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[56]);
                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 11;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_6);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_4);
                tmp_tuple_element_7 = mod_consts[58];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_10;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_7);
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_10 == NULL));
                    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[56]);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 12;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_4);
                tmp_tuple_element_8 = mod_consts[59];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_11;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_8);
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_11 == NULL));
                    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[60]);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 13;
                        type_description_2 = "o";
                        goto tuple_build_exception_6;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_8);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_4);
                tmp_tuple_element_9 = mod_consts[14];
                tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_12;
                    PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_9);
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_12 == NULL));
                    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[61]);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 14;
                        type_description_2 = "o";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_tuple_element_4);
                goto tuple_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__1_X86OpMem_8, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_bb8d2035dbbc7fd9bdc84ad02a8d6dcb_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__1_X86OpMem_8, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_10 = mod_consts[47];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_10 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_capstone$x86$$$class__1_X86OpMem_8;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 8;
            tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_capstone$x86$$$class__1_X86OpMem_8);
        locals_capstone$x86$$$class__1_X86OpMem_8 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_capstone$x86$$$class__1_X86OpMem_8);
        locals_capstone$x86$$$class__1_X86OpMem_8 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 8;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[64]);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_assign_source_14 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_14, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_15 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_14 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[42];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_16 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[46]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_tuple_element_12 = mod_consts[65];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_12 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 17;
        tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_17 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_18 = tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[50];
        tmp_default_value_2 = mod_consts[51];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_18, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[50]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 17;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_19;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_capstone$x86$$$class__2_X86OpValue_17 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__2_X86OpValue_17, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__2_X86OpValue_17, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        frame_dc9697c8ce09c05d5801cdacd6e36f4c_3 = MAKE_CLASS_FRAME(tstate, codeobj_dc9697c8ce09c05d5801cdacd6e36f4c, module_capstone$x86, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_dc9697c8ce09c05d5801cdacd6e36f4c_3);
        assert(Py_REFCNT(frame_dc9697c8ce09c05d5801cdacd6e36f4c_3) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_tuple_element_15;
            tmp_tuple_element_15 = mod_consts[2];
            tmp_tuple_element_14 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_20;
                PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_15);
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                }

                assert(!(tmp_expression_value_20 == NULL));
                tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[56]);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 19;
                    type_description_2 = "o";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_14, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_tuple_element_14);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_tuple_element_17;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_14);
                tmp_tuple_element_16 = mod_consts[1];
                tmp_tuple_element_14 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_21;
                    PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_16);
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_21 == NULL));
                    tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[61]);
                    if (tmp_tuple_element_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 20;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_14, 1, tmp_tuple_element_16);
                }
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_tuple_element_14);
                goto tuple_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_14);
                tmp_tuple_element_17 = mod_consts[3];
                tmp_tuple_element_14 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_14, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_capstone$x86$$$class__2_X86OpValue_17, mod_consts[47]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 21;
                            type_description_2 = "o";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_14, 1, tmp_tuple_element_17);
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_tuple_element_14);
                goto tuple_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__2_X86OpValue_17, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dc9697c8ce09c05d5801cdacd6e36f4c_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dc9697c8ce09c05d5801cdacd6e36f4c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dc9697c8ce09c05d5801cdacd6e36f4c_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dc9697c8ce09c05d5801cdacd6e36f4c_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_dc9697c8ce09c05d5801cdacd6e36f4c_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__2_X86OpValue_17, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_18 = mod_consts[65];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_18 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_capstone$x86$$$class__2_X86OpValue_17;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 17;
            tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_20 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_capstone$x86$$$class__2_X86OpValue_17);
        locals_capstone$x86$$$class__2_X86OpValue_17 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_capstone$x86$$$class__2_X86OpValue_17);
        locals_capstone$x86$$$class__2_X86OpValue_17 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 17;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_20);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_expression_value_22 == NULL));
        tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[45]);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        tmp_assign_source_22 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_23 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_23 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[42];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_25;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_24 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_25 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[46]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        tmp_tuple_element_20 = mod_consts[66];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_20 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 24;
        tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_26 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_27 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[50];
        tmp_default_value_3 = mod_consts[51];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[50]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 24;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_27;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_capstone$x86$$$class__3_X86Op_24 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_9;
        }
        frame_0b077e1471111f09572959a60480df55_4 = MAKE_CLASS_FRAME(tstate, codeobj_0b077e1471111f09572959a60480df55, module_capstone$x86, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0b077e1471111f09572959a60480df55_4);
        assert(Py_REFCNT(frame_0b077e1471111f09572959a60480df55_4) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_tuple_element_23;
            tmp_tuple_element_23 = mod_consts[67];
            tmp_tuple_element_22 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_29;
                PyTuple_SET_ITEM0(tmp_tuple_element_22, 0, tmp_tuple_element_23);
                tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_expression_value_29 == NULL)) {
                    tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                }

                assert(!(tmp_expression_value_29 == NULL));
                tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[56]);
                if (tmp_tuple_element_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "o";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_22, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_tuple_element_22);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(6);
            {
                PyObject *tmp_tuple_element_24;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_tuple_element_27;
                PyObject *tmp_tuple_element_28;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_22);
                tmp_tuple_element_24 = mod_consts[0];
                tmp_tuple_element_22 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_22, 0, tmp_tuple_element_24);
                tmp_tuple_element_24 = PyObject_GetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[65]);

                if (tmp_tuple_element_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_tuple_element_24 == NULL)) {
                            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
                        }

                        if (tmp_tuple_element_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "o";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_24);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_22, 1, tmp_tuple_element_24);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_tuple_element_22);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_22);
                tmp_tuple_element_25 = mod_consts[68];
                tmp_tuple_element_22 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_30;
                    PyTuple_SET_ITEM0(tmp_tuple_element_22, 0, tmp_tuple_element_25);
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_30 == NULL));
                    tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[69]);
                    if (tmp_tuple_element_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto tuple_build_exception_17;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_22, 1, tmp_tuple_element_25);
                }
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_tuple_element_22);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_22);
                tmp_tuple_element_26 = mod_consts[70];
                tmp_tuple_element_22 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_31;
                    PyTuple_SET_ITEM0(tmp_tuple_element_22, 0, tmp_tuple_element_26);
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_31 == NULL));
                    tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[69]);
                    if (tmp_tuple_element_26 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_22, 1, tmp_tuple_element_26);
                }
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_tuple_element_22);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_22);
                tmp_tuple_element_27 = mod_consts[71];
                tmp_tuple_element_22 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_32;
                    PyTuple_SET_ITEM0(tmp_tuple_element_22, 0, tmp_tuple_element_27);
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_32 == NULL));
                    tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[56]);
                    if (tmp_tuple_element_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto tuple_build_exception_19;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_22, 1, tmp_tuple_element_27);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_tuple_element_22);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_22);
                tmp_tuple_element_28 = mod_consts[72];
                tmp_tuple_element_22 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_33;
                    PyTuple_SET_ITEM0(tmp_tuple_element_22, 0, tmp_tuple_element_28);
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_33 == NULL));
                    tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[73]);
                    if (tmp_tuple_element_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto tuple_build_exception_20;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_22, 1, tmp_tuple_element_28);
                }
                goto tuple_build_noexception_19;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_tuple_element_22);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_19:;
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_6 = PyObject_GetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[74]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_value_1 = MAKE_FUNCTION_capstone$x86$$$function__1_imm();

            frame_0b077e1471111f09572959a60480df55_4->m_frame.f_lineno = 34;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_7 = PyObject_GetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[74]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_value_2 = MAKE_FUNCTION_capstone$x86$$$function__2_reg();

            frame_0b077e1471111f09572959a60480df55_4->m_frame.f_lineno = 38;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_8 = PyObject_GetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[74]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_4;
                }
            }



            tmp_args_element_value_3 = MAKE_FUNCTION_capstone$x86$$$function__3_mem();

            frame_0b077e1471111f09572959a60480df55_4->m_frame.f_lineno = 42;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0b077e1471111f09572959a60480df55_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0b077e1471111f09572959a60480df55_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0b077e1471111f09572959a60480df55_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0b077e1471111f09572959a60480df55_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_0b077e1471111f09572959a60480df55_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__3_X86Op_24, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_9;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_29 = mod_consts[66];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_29 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = locals_capstone$x86$$$class__3_X86Op_24;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 24;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_28 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_capstone$x86$$$class__3_X86Op_24);
        locals_capstone$x86$$$class__3_X86Op_24 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_capstone$x86$$$class__3_X86Op_24);
        locals_capstone$x86$$$class__3_X86Op_24 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 24;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_28);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_34;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_expression_value_34 == NULL));
        tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[64]);
        if (tmp_tuple_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_30, 0, tmp_tuple_element_30);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_31 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_35 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[42];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_33;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_36 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_37 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[46]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_tuple_element_31 = mod_consts[78];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_31 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 46;
        tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_38 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_39 = tmp_class_creation_4__metaclass;
        tmp_name_value_6 = mod_consts[50];
        tmp_default_value_4 = mod_consts[51];
        tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_6, tmp_default_value_4);
        if (tmp_tuple_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_40 == NULL));
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[50]);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 46;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_35;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_capstone$x86$$$class__4_X86Flags_46 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__4_X86Flags_46, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__4_X86Flags_46, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_12;
        }
        frame_c88a7824d46e6688941d84641c03ffc0_5 = MAKE_CLASS_FRAME(tstate, codeobj_c88a7824d46e6688941d84641c03ffc0, module_capstone$x86, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c88a7824d46e6688941d84641c03ffc0_5);
        assert(Py_REFCNT(frame_c88a7824d46e6688941d84641c03ffc0_5) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_tuple_element_34;
            tmp_tuple_element_34 = mod_consts[5];
            tmp_tuple_element_33 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_41;
                PyTuple_SET_ITEM0(tmp_tuple_element_33, 0, tmp_tuple_element_34);
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                }

                assert(!(tmp_expression_value_41 == NULL));
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[79]);
                if (tmp_tuple_element_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto tuple_build_exception_22;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_33, 1, tmp_tuple_element_34);
            }
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_tuple_element_33);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_tuple_element_35;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_33);
                tmp_tuple_element_35 = mod_consts[6];
                tmp_tuple_element_33 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_42;
                    PyTuple_SET_ITEM0(tmp_tuple_element_33, 0, tmp_tuple_element_35);
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_42 == NULL));
                    tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[79]);
                    if (tmp_tuple_element_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 49;
                        type_description_2 = "o";
                        goto tuple_build_exception_24;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_33, 1, tmp_tuple_element_35);
                }
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_tuple_element_33);
                goto tuple_build_exception_23;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_33);
            }
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__4_X86Flags_46, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c88a7824d46e6688941d84641c03ffc0_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c88a7824d46e6688941d84641c03ffc0_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c88a7824d46e6688941d84641c03ffc0_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c88a7824d46e6688941d84641c03ffc0_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_c88a7824d46e6688941d84641c03ffc0_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__4_X86Flags_46, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto try_except_handler_12;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_11 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_36 = mod_consts[78];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_36 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_capstone$x86$$$class__4_X86Flags_46;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 46;
            tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_36 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_capstone$x86$$$class__4_X86Flags_46);
        locals_capstone$x86$$$class__4_X86Flags_46 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_capstone$x86$$$class__4_X86Flags_46);
        locals_capstone$x86$$$class__4_X86Flags_46 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 46;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_36);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_43;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_expression_value_43 == NULL));
        tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[45]);
        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        tmp_assign_source_38 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_38, 0, tmp_tuple_element_37);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_39 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_44 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[42];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_45 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_46 = tmp_class_creation_5__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[46]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        tmp_tuple_element_38 = mod_consts[80];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_38 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_38);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 52;
        tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_47;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_47 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_48 = tmp_class_creation_5__metaclass;
        tmp_name_value_7 = mod_consts[50];
        tmp_default_value_5 = mod_consts[51];
        tmp_tuple_element_39 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_7, tmp_default_value_5);
        if (tmp_tuple_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_49;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[50]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 52;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_43;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_capstone$x86$$$class__5_CsX86Encoding_52 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__5_CsX86Encoding_52, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__5_CsX86Encoding_52, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_15;
        }
        frame_2eda2870fb8bb1d8390d2b7c33b8faee_6 = MAKE_CLASS_FRAME(tstate, codeobj_2eda2870fb8bb1d8390d2b7c33b8faee, module_capstone$x86, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_2eda2870fb8bb1d8390d2b7c33b8faee_6);
        assert(Py_REFCNT(frame_2eda2870fb8bb1d8390d2b7c33b8faee_6) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_tuple_element_41;
            tmp_tuple_element_41 = mod_consts[24];
            tmp_tuple_element_40 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_50;
                PyTuple_SET_ITEM0(tmp_tuple_element_40, 0, tmp_tuple_element_41);
                tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_expression_value_50 == NULL)) {
                    tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                }

                assert(!(tmp_expression_value_50 == NULL));
                tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[69]);
                if (tmp_tuple_element_41 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_2 = "o";
                    goto tuple_build_exception_26;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_40, 1, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_tuple_element_40);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_tuple_element_42;
                PyObject *tmp_tuple_element_43;
                PyObject *tmp_tuple_element_44;
                PyObject *tmp_tuple_element_45;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_40);
                tmp_tuple_element_42 = mod_consts[25];
                tmp_tuple_element_40 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_51;
                    PyTuple_SET_ITEM0(tmp_tuple_element_40, 0, tmp_tuple_element_42);
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_51 == NULL));
                    tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[69]);
                    if (tmp_tuple_element_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto tuple_build_exception_28;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_40, 1, tmp_tuple_element_42);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_tuple_element_40);
                goto tuple_build_exception_27;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_40);
                tmp_tuple_element_43 = mod_consts[26];
                tmp_tuple_element_40 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_52;
                    PyTuple_SET_ITEM0(tmp_tuple_element_40, 0, tmp_tuple_element_43);
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_52 == NULL));
                    tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[69]);
                    if (tmp_tuple_element_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto tuple_build_exception_29;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_40, 1, tmp_tuple_element_43);
                }
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_tuple_element_40);
                goto tuple_build_exception_27;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_40);
                tmp_tuple_element_44 = mod_consts[27];
                tmp_tuple_element_40 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_53;
                    PyTuple_SET_ITEM0(tmp_tuple_element_40, 0, tmp_tuple_element_44);
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_53 == NULL));
                    tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[69]);
                    if (tmp_tuple_element_44 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto tuple_build_exception_30;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_40, 1, tmp_tuple_element_44);
                }
                goto tuple_build_noexception_29;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_30:;
                Py_DECREF(tmp_tuple_element_40);
                goto tuple_build_exception_27;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_29:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_40);
                tmp_tuple_element_45 = mod_consts[28];
                tmp_tuple_element_40 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_54;
                    PyTuple_SET_ITEM0(tmp_tuple_element_40, 0, tmp_tuple_element_45);
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_54 == NULL));
                    tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[69]);
                    if (tmp_tuple_element_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto tuple_build_exception_31;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_40, 1, tmp_tuple_element_45);
                }
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_tuple_element_40);
                goto tuple_build_exception_27;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__5_CsX86Encoding_52, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2eda2870fb8bb1d8390d2b7c33b8faee_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2eda2870fb8bb1d8390d2b7c33b8faee_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2eda2870fb8bb1d8390d2b7c33b8faee_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2eda2870fb8bb1d8390d2b7c33b8faee_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_2eda2870fb8bb1d8390d2b7c33b8faee_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__5_CsX86Encoding_52, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_15;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_13 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_46 = mod_consts[80];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_46 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_capstone$x86$$$class__5_CsX86Encoding_52;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 52;
            tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_44 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_capstone$x86$$$class__5_CsX86Encoding_52);
        locals_capstone$x86$$$class__5_CsX86Encoding_52 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_capstone$x86$$$class__5_CsX86Encoding_52);
        locals_capstone$x86$$$class__5_CsX86Encoding_52 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 52;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_44);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_expression_value_55;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        assert(!(tmp_expression_value_55 == NULL));
        tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[45]);
        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        tmp_assign_source_46 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_46, 0, tmp_tuple_element_47);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_47 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_56 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[42];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_56, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_expression_value_57;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_57 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_57, mod_consts[46]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_58 = tmp_class_creation_6__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[46]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        tmp_tuple_element_48 = mod_consts[81];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_48 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 61;
        tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_50;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_59 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_59, mod_consts[48]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_60 = tmp_class_creation_6__metaclass;
        tmp_name_value_8 = mod_consts[50];
        tmp_default_value_6 = mod_consts[51];
        tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_60, tmp_name_value_8, tmp_default_value_6);
        if (tmp_tuple_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_61;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_61 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_61 == NULL));
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[50]);
            Py_DECREF(tmp_expression_value_61);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_32:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 61;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_51;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_capstone$x86$$$class__6_CsX86_61 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_18;
        }
        frame_8ab28d1845528cc208fc23404db402af_7 = MAKE_CLASS_FRAME(tstate, codeobj_8ab28d1845528cc208fc23404db402af, module_capstone$x86, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8ab28d1845528cc208fc23404db402af_7);
        assert(Py_REFCNT(frame_8ab28d1845528cc208fc23404db402af_7) == 2);

        // Framed code:
        {
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_tuple_element_51;
            tmp_tuple_element_51 = mod_consts[7];
            tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_mult_expr_left_1;
                PyObject *tmp_mult_expr_right_1;
                PyObject *tmp_expression_value_62;
                PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_51);
                tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_expression_value_62 == NULL)) {
                    tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                }

                assert(!(tmp_expression_value_62 == NULL));
                tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[69]);
                if (tmp_mult_expr_left_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto tuple_build_exception_33;
                }
                tmp_mult_expr_right_1 = mod_consts[82];
                tmp_tuple_element_51 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                Py_DECREF(tmp_mult_expr_left_1);
                if (tmp_tuple_element_51 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;
                    type_description_2 = "o";
                    goto tuple_build_exception_33;
                }
                PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_51);
            }
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_tuple_element_50);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            tmp_dictset_value = MAKE_TUPLE_EMPTY(19);
            {
                PyObject *tmp_tuple_element_52;
                PyObject *tmp_tuple_element_53;
                PyObject *tmp_tuple_element_54;
                PyObject *tmp_tuple_element_55;
                PyObject *tmp_tuple_element_56;
                PyObject *tmp_tuple_element_57;
                PyObject *tmp_tuple_element_58;
                PyObject *tmp_tuple_element_59;
                PyObject *tmp_tuple_element_60;
                PyObject *tmp_tuple_element_61;
                PyObject *tmp_tuple_element_62;
                PyObject *tmp_tuple_element_63;
                PyObject *tmp_tuple_element_64;
                PyObject *tmp_tuple_element_65;
                PyObject *tmp_tuple_element_66;
                PyObject *tmp_tuple_element_67;
                PyObject *tmp_tuple_element_68;
                PyObject *tmp_tuple_element_69;
                PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_50);
                tmp_tuple_element_52 = mod_consts[9];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_2;
                    PyObject *tmp_mult_expr_right_2;
                    PyObject *tmp_expression_value_63;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_52);
                    tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_63 == NULL)) {
                        tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_63 == NULL));
                    tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[69]);
                    if (tmp_mult_expr_left_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 64;
                        type_description_2 = "o";
                        goto tuple_build_exception_35;
                    }
                    tmp_mult_expr_right_2 = mod_consts[82];
                    tmp_tuple_element_52 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
                    Py_DECREF(tmp_mult_expr_left_2);
                    if (tmp_tuple_element_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 64;
                        type_description_2 = "o";
                        goto tuple_build_exception_35;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_52);
                }
                goto tuple_build_noexception_34;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_35:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_34:;
                PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_50);
                tmp_tuple_element_53 = mod_consts[10];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_64;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_53);
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_64 == NULL));
                    tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[69]);
                    if (tmp_tuple_element_53 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto tuple_build_exception_36;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_53);
                }
                goto tuple_build_noexception_35;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_36:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_35:;
                PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_50);
                tmp_tuple_element_54 = mod_consts[11];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_65;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_54);
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_65 == NULL));
                    tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[69]);
                    if (tmp_tuple_element_54 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto tuple_build_exception_37;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_54);
                }
                goto tuple_build_noexception_36;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_37:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_36:;
                PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_50);
                tmp_tuple_element_55 = mod_consts[12];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_66;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_55);
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_66 == NULL));
                    tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[69]);
                    if (tmp_tuple_element_55 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto tuple_build_exception_38;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_55);
                }
                goto tuple_build_noexception_37;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_38:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_37:;
                PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_50);
                tmp_tuple_element_56 = mod_consts[13];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_67;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_56);
                    tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_67 == NULL)) {
                        tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_67 == NULL));
                    tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[69]);
                    if (tmp_tuple_element_56 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto tuple_build_exception_39;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_56);
                }
                goto tuple_build_noexception_38;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_39:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_38:;
                PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_50);
                tmp_tuple_element_57 = mod_consts[14];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_68;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_57);
                    tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_68 == NULL)) {
                        tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_68 == NULL));
                    tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[61]);
                    if (tmp_tuple_element_57 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto tuple_build_exception_40;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_57);
                }
                goto tuple_build_noexception_39;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_40:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_39:;
                PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_50);
                tmp_tuple_element_58 = mod_consts[15];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_69;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_58);
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_69 == NULL));
                    tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[56]);
                    if (tmp_tuple_element_58 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto tuple_build_exception_41;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_58);
                }
                goto tuple_build_noexception_40;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_41:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_40:;
                PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_50);
                tmp_tuple_element_59 = mod_consts[16];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_70;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_59);
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_70 == NULL));
                    tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[83]);
                    if (tmp_tuple_element_59 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto tuple_build_exception_42;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_59);
                }
                goto tuple_build_noexception_41;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_42:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_41:;
                PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_50);
                tmp_tuple_element_60 = mod_consts[17];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_71;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_60);
                    tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_71 == NULL)) {
                        tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_71 == NULL));
                    tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[56]);
                    if (tmp_tuple_element_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto tuple_build_exception_43;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_60);
                }
                goto tuple_build_noexception_42;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_43:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_42:;
                PyTuple_SET_ITEM(tmp_dictset_value, 9, tmp_tuple_element_50);
                tmp_tuple_element_61 = mod_consts[18];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_72;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_61);
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_72 == NULL));
                    tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[56]);
                    if (tmp_tuple_element_61 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto tuple_build_exception_44;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_61);
                }
                goto tuple_build_noexception_43;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_44:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_43:;
                PyTuple_SET_ITEM(tmp_dictset_value, 10, tmp_tuple_element_50);
                tmp_tuple_element_62 = mod_consts[19];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_73;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_62);
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_73 == NULL));
                    tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[56]);
                    if (tmp_tuple_element_62 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 74;
                        type_description_2 = "o";
                        goto tuple_build_exception_45;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_62);
                }
                goto tuple_build_noexception_44;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_45:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_44:;
                PyTuple_SET_ITEM(tmp_dictset_value, 11, tmp_tuple_element_50);
                tmp_tuple_element_63 = mod_consts[20];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_74;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_63);
                    tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_74 == NULL)) {
                        tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_74 == NULL));
                    tmp_tuple_element_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[56]);
                    if (tmp_tuple_element_63 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto tuple_build_exception_46;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_63);
                }
                goto tuple_build_noexception_45;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_46:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_45:;
                PyTuple_SET_ITEM(tmp_dictset_value, 12, tmp_tuple_element_50);
                tmp_tuple_element_64 = mod_consts[21];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_75;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_64);
                    tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_75 == NULL)) {
                        tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_75 == NULL));
                    tmp_tuple_element_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[73]);
                    if (tmp_tuple_element_64 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto tuple_build_exception_47;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_64);
                }
                goto tuple_build_noexception_46;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_47:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_46:;
                PyTuple_SET_ITEM(tmp_dictset_value, 13, tmp_tuple_element_50);
                tmp_tuple_element_65 = mod_consts[22];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_76;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_65);
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_76 == NULL));
                    tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[56]);
                    if (tmp_tuple_element_65 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto tuple_build_exception_48;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_65);
                }
                goto tuple_build_noexception_47;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_48:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_47:;
                PyTuple_SET_ITEM(tmp_dictset_value, 14, tmp_tuple_element_50);
                tmp_tuple_element_66 = mod_consts[4];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_66);
                tmp_tuple_element_66 = PyObject_GetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[78]);

                if (tmp_tuple_element_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_tuple_element_66 == NULL)) {
                            tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
                        }

                        if (tmp_tuple_element_66 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_2 = "o";
                            goto tuple_build_exception_49;
                        }
                        Py_INCREF(tmp_tuple_element_66);
                    } else {
                        goto tuple_build_exception_49;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_66);
                goto tuple_build_noexception_48;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_49:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_48:;
                PyTuple_SET_ITEM(tmp_dictset_value, 15, tmp_tuple_element_50);
                tmp_tuple_element_67 = mod_consts[31];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_77;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_67);
                    tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_77 == NULL)) {
                        tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
                    }

                    assert(!(tmp_expression_value_77 == NULL));
                    tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[69]);
                    if (tmp_tuple_element_67 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 79;
                        type_description_2 = "o";
                        goto tuple_build_exception_50;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_67);
                }
                goto tuple_build_noexception_49;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_50:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_49:;
                PyTuple_SET_ITEM(tmp_dictset_value, 16, tmp_tuple_element_50);
                tmp_tuple_element_68 = mod_consts[30];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_mult_expr_left_3;
                    PyObject *tmp_mult_expr_right_3;
                    PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_68);
                    tmp_mult_expr_left_3 = PyObject_GetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[66]);

                    if (tmp_mult_expr_left_3 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_mult_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[66]);

                            if (unlikely(tmp_mult_expr_left_3 == NULL)) {
                                tmp_mult_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
                            }

                            if (tmp_mult_expr_left_3 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 80;
                                type_description_2 = "o";
                                goto tuple_build_exception_51;
                            }
                            Py_INCREF(tmp_mult_expr_left_3);
                        } else {
                            goto tuple_build_exception_51;
                        }
                    }

                    tmp_mult_expr_right_3 = mod_consts[84];
                    tmp_tuple_element_68 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
                    Py_DECREF(tmp_mult_expr_left_3);
                    if (tmp_tuple_element_68 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 80;
                        type_description_2 = "o";
                        goto tuple_build_exception_51;
                    }
                    PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_68);
                }
                goto tuple_build_noexception_50;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_51:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_50:;
                PyTuple_SET_ITEM(tmp_dictset_value, 17, tmp_tuple_element_50);
                tmp_tuple_element_69 = mod_consts[23];
                tmp_tuple_element_50 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_tuple_element_50, 0, tmp_tuple_element_69);
                tmp_tuple_element_69 = PyObject_GetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[80]);

                if (tmp_tuple_element_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[80]);

                        if (unlikely(tmp_tuple_element_69 == NULL)) {
                            tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
                        }

                        if (tmp_tuple_element_69 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_2 = "o";
                            goto tuple_build_exception_52;
                        }
                        Py_INCREF(tmp_tuple_element_69);
                    } else {
                        goto tuple_build_exception_52;
                    }
                }

                PyTuple_SET_ITEM(tmp_tuple_element_50, 1, tmp_tuple_element_69);
                goto tuple_build_noexception_51;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_52:;
                Py_DECREF(tmp_tuple_element_50);
                goto tuple_build_exception_34;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_51:;
                PyTuple_SET_ITEM(tmp_dictset_value, 18, tmp_tuple_element_50);
            }
            goto tuple_build_noexception_52;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_52:;
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_15 = PyObject_GetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[74]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 84;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_value_4 = MAKE_FUNCTION_capstone$x86$$$function__4_eflags();

            frame_8ab28d1845528cc208fc23404db402af_7->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_16 = PyObject_GetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[74]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[74]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_7;
                }
            }



            tmp_args_element_value_5 = MAKE_FUNCTION_capstone$x86$$$function__5_fpu_flags();

            frame_8ab28d1845528cc208fc23404db402af_7->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8ab28d1845528cc208fc23404db402af_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8ab28d1845528cc208fc23404db402af_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8ab28d1845528cc208fc23404db402af_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8ab28d1845528cc208fc23404db402af_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_8ab28d1845528cc208fc23404db402af_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_capstone$x86$$$class__6_CsX86_61, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_18;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_17 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_70 = mod_consts[81];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_70 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_70);
            tmp_tuple_element_70 = locals_capstone$x86$$$class__6_CsX86_61;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_da62b6e34018bff317a29d3a3693db49->m_frame.f_lineno = 61;
            tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_52 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_capstone$x86$$$class__6_CsX86_61);
        locals_capstone$x86$$$class__6_CsX86_61 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_capstone$x86$$$class__6_CsX86_61);
        locals_capstone$x86$$$class__6_CsX86_61 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 61;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_52);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da62b6e34018bff317a29d3a3693db49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da62b6e34018bff317a29d3a3693db49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da62b6e34018bff317a29d3a3693db49, exception_lineno);
    }



    assertFrameObject(frame_da62b6e34018bff317a29d3a3693db49);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_capstone$x86$$$function__6_get_arch_info();

        UPDATE_STRING_DICT1(moduledict_capstone$x86, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_54);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("capstone$x86", false);

#if defined(_NUITKA_MODULE) && 0
    PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "capstone.x86" "-postLoad");
    if (post_load == NULL) {
        return NULL;
    }
#endif

    Py_INCREF(module_capstone$x86);
    return module_capstone$x86;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_capstone$x86, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("capstone$x86", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
