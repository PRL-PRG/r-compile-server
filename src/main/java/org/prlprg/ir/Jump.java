package org.prlprg.ir;

/** Both the final instruction and outgoing edge of a basic block. */
public sealed interface Jump {
  record Return(RValue value) implements Jump {}

  record Goto(BB target) implements Jump {}

  record Branch(RValue condition, BB trueTarget, BB falseTarget) implements Jump {}
}
