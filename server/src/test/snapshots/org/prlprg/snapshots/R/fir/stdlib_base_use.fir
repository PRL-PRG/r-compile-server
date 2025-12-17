fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner567555816;
    st use = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner567555816(package, `include.only`) {
  (reg package:*, reg include_only:*) -+> V { var package:*, var `include.only`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg library:cls, reg package1:*, reg package2:V, reg p:p(V +), reg include_only1:*, reg include_only2:V, reg p1:p(V +), reg r4:V, reg invisible:cls, reg r5:V |
    mkenv;
    st package = package;
    st `include.only` = include_only;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    library = ldf library;
    check L3() else D0();
  L2():
    r = dyn base(<lang library(package, lib.loc=NULL, character.only=TRUE, logical.return=TRUE, include.only=include.only, attach.required=FALSE)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      include_only1 = ld `include.only`;
      include_only2 = force? include_only1;
      checkMissing(include_only2);
      return include_only2;
    };
    r4 = dyn library[, `lib.loc`, `character.only`, `logical.return`, `include.only`, `attach.required`](p, NULL, TRUE, TRUE, p1, FALSE);
    check L4() else D1();
  D1():
    deopt 15 [r4];
  L4():
    invisible = ldf invisible in base;
    r5 = dyn invisible(r4);
    check L5() else D2();
  D2():
    deopt 17 [r5];
  L5():
    goto L0(r5);
  }
}