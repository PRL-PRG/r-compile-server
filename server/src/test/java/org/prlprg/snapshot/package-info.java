/// Save test outputs in memory and on disk (snapshots).
///
/// Snapshots serve multiple purposes:
/// - They're used by other tests without recomputing
/// - They're compared to previous versions to detect regressions
///   - For some queries, differences between runs are OK
///   - A query is computed once per run; `DeterminismTest` checks a few for differences in the
///     same run, which signal an issue, because everything should be deterministic
/// - They help debug failing tests: they're more organized than the console (the compiled C is
///   built without debug info, though)
@NullMarked
package org.prlprg.snapshot;

import org.jspecify.annotations.NullMarked;
