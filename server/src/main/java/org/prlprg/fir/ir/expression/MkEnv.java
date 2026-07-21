package org.prlprg.fir.ir.expression;

/// Creates a closure environment. Has no arguments.
///
/// Every closure compiled from GNU-R bytecode starts with mkenv, because every GNU-R call
/// implicitly creates an environment, but we may delay or elide it if we remove stores and
/// disprove reflection.
public record MkEnv() implements Expression {}
