package org.prlprg.ir.effect;

import org.prlprg.ir.cfg.Node;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXPs;

public record Loads(RegSymSXP name, Node<? extends EnvSXP> env) implements REffect {
  public Loads(int ddNum, Node<? extends EnvSXP> env) {
    this(SEXPs.ddSymbol(ddNum), env);
  }
}
