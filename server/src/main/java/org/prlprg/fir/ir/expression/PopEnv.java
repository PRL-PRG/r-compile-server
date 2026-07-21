package org.prlprg.fir.ir.expression;

/// Destroys the last environment created by mkenv and sets rho to its parent. Has no arguments.
/// Created when inlining a closure that has mkenv. If we later manage to defer the mkenv until the
/// popenv, we elide both.
public record PopEnv() implements Expression {}
