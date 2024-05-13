package org.prlprg.ir.cfg.builder;

import java.util.SequencedCollection;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.Phi;
import org.prlprg.ir.cfg.Phi.Input;

/**
 * Constructs a {@link Phi} to be inserted in the middle of a {@link BB}.
 *
 * <p>This will split the BB unless this is being prepended (inserted at index 0). If split, the
 * phis and statements before this phi will be in the new BB, which will be a predecessor to the
 * original BB (and steal its predecessors).
 *
 * <p>The inputs' BBs <i>must</i> be the same as the {@linkplain BB#predecessors() predecessors} of
 * the BB the phi is added to (including in the same order!)
 *
 * @param <N> The type of the phi's input nodes.
 */
public record PhiInsertion<N extends Node>(Class<N> nodeClass, SequencedCollection<Input<N>> inputs)
    implements BBInsertion<Phi<N>> {}
