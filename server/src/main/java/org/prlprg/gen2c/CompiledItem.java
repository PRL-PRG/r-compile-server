package org.prlprg.gen2c;

import java.io.*;
import java.util.*;
import org.prlprg.sexp.VecSXP;

public final class CompiledItem {
  private final CFunction myCFunction;
  private final VecSXP constantPool;
  private final Set<CFunction> newCCode;

  public CompiledItem(CFunction cFunction, VecSXP constantPool, List<CompiledItem> nested) {
    myCFunction = cFunction;
    this.constantPool = constantPool;

    newCCode = new LinkedHashSet<>();
    newCCode.add(myCFunction);
    for (CompiledItem dep : nested) {
      assert dep.myCFunction.unit() == myCFunction.unit();
      newCCode.addAll(dep.newCCode);
    }
  }

  public String cName() {
    return myCFunction.name();
  }

  public VecSXP constantPool() {
    return constantPool;
  }

  /// A C unit containing function bodies of this and nested closures,
  /// forward declarations of other referenced closures, and the runtime include.
  public String newCUnit() {
    return myCFunction.unit().toString(newCCode);
  }

  /// Write [#newCUnit()] to `w`.
  public void writeNewCUnitTo(Writer w) {
    myCFunction.unit().writeTo(w, newCCode);
  }
}
