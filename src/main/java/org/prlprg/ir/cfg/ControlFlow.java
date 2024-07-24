package org.prlprg.ir.cfg;

/**
 * The "control-flow" part of a {@link Jump} = the targets it can go to.
 */
public sealed interface ControlFlow {
  record Return() implements ControlFlow {}

  record Goto(BB target) implements ControlFlow {}

  record Branch(BB trueTarget, BB falseTarget) implements ControlFlow {}
}
