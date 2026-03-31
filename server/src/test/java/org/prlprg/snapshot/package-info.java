/// Save test outputs in memory and on disk (snapshots).
///
/// Snapshots serve multiple purposes:
/// - They're used by other tests without recomputing
/// - They're compared to previous versions to detect regressions
///   - For some queries, differences between runs are OK
///   - For all queries, differences in the same run signal an issue, because everything should
///     be deterministic
/// - They help debug failing tests: they're more organized than the console and can be loaded
///   easier e.g. in the C debugger
@NullMarked
package org.prlprg.snapshot;

import org.jspecify.annotations.NullMarked;
