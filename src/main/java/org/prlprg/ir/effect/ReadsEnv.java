package org.prlprg.ir.effect;

import org.prlprg.ir.cfg.Node;
import org.prlprg.sexp.EnvSXP;

public record ReadsEnv(Node<? extends EnvSXP> env) implements REffect {}
