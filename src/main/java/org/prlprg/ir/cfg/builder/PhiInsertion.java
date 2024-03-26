package org.prlprg.ir.cfg.builder;

import java.util.Collection;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.Phi;

/**
 * Constructs a {@link Phi} to be inserted in the middle of a {@link BB}.
 *
 * <p>This will split the BB unless this is being prepended (inserted at index 0). If split, the
 * phis and statements before this phi will be in the new BB, which will be a predecessor to the
 * original BB (and steal its predecessors).
 *
 * @param <N> The type of the phi's input nodes.
 */
public record PhiInsertion<N extends Node>(Class<N> nodeClass, Collection<Phi.Input<N>> inputs)
    implements BBInsertion<Phi<N>> {}
