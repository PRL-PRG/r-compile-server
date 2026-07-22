package org.prlprg.fir.ir.expression;

import javax.annotation.concurrent.Immutable;
import org.prlprg.fir.ir.assumption.Assumption;

/// A no-op when evaluated, but *checked* when reaching a checkpoint: if any assumptions in the
/// normal successor fail their check, control diverts into the deopt successor. The assumed value
/// (if any) is the owning statement's argument; see [Assumption].
@Immutable
public record Assume(Assumption assumption) implements Expression {}
