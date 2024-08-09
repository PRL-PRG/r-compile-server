package org.prlprg.optimizations;

/**
 * Additional data given to an {@link OptimizationPass}.
 *
 * <p>e.g. a compiler if it may compile more code. And a logger.
 *
 * <p>Currently none of the passes need any additional data so it's empty.
 */
record OptimizationContext() {}
