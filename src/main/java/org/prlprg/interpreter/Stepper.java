package org.prlprg.interpreter;

import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.SEXP;

/** Provides the "core functionality" to the interpreter, determining whether it does concrete or abstract
 * interpretation, by defining how to interpret specific steps. */
public interface Stepper<S extends AbstractSEXP, C extends AbstractCtx<S>> {
    /** Convert a concrete SEXP into an abstract SEXP.
     *
     * @apiNote If we had abstract interface methods... */
    S lift(SEXP sexp);

    /** If the condition is true <b>according to GNU-R {@code asLogicalNoNA}</b>, run the first lambda, otherwise the
     * second. In abstract interpretation, if the condition is undecided you may run both case.
     * <p>
     * "True according to {@code asLogicalNoNA}" means:
     * <li>If the SEXP is a scalar non-NA logical, whether it's true or false.
     * <li>If the SEXP is a scalar non-NA integer, real, or byte, whether it's nonzero.
     * <li>If the SEXP is a scalar complex whose real and imaginary compoents are non-NA, whether either are nonzero.
     * <li>If the SEXP is a scalar string, yes if "T"/"True"/"TRUE"/"true", no if "F"/"False"/"FALSE"/"false",
     * fallthrough otherwise.
     * <li>If none of these are met (if it's NA, non-scalar, or not a truey or falsey string), throw an {@link EvalError}.
     */
    void test(LangSXP ast, S cond, Runnable ifTrue, Runnable ifFalse) throws EvalError;

    /** Print the SEXP equivalent to GNU-R {@code PrintValue}.
     * This is not a debug-print, although for a simple evaluator maybe {@code toString} to whatever stream will
     * suffice.*/
    void print(S sexp) throws EvalError;
}
