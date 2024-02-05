package org.prlprg.bc;

import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;

import java.util.Optional;

public record Binding(EnvSXP env, Optional<SEXP> value) {
}
