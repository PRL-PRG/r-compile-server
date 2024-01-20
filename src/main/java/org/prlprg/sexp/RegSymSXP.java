package org.prlprg.sexp;

/** Symbol which isn't "unbound value" or "missing arg" */
public record RegSymSXP(String name) implements SymSXP {
}
