package org.prlprg.fir.interpret;

import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.snapshots.Query;

/// Runs supported FIŘ modules in the internal interpreter, testing the interpreter, BC->FIŘ,
/// and FIŘ parsing.
///
/// TODO: Handle expected errors
class InterpretTest implements GenInterpretTest {
  @Override
  public Query<Module> moduleQuery() {
    return FirQuery.INSTANCE;
  }
}
