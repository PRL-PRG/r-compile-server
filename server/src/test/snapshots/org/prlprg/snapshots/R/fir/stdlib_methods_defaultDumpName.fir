fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1699724653;
    st defaultDumpName = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1699724653(generic, signature) {
  (reg generic:*, reg signature:*) -+> V { var generic:*, var signature:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg paste:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r4:V, reg paste1:cls, reg generic3:*, reg generic4:V, reg p1:p(V +), reg paste2:cls, reg signature1:*, reg signature2:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st generic = generic;
    st signature = signature;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L4() else L1();
  L2():
    missing = ldf missing in base;
    r2 = dyn missing(<sym signature>);
    goto L0(r2);
  L3():
    r = dyn base(<sym signature>);
    goto L0(r);
  L1():
    paste1 = ldf paste;
    check L8() else D2();
  L4():
    paste = ldf paste;
    check L5() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 13 [];
  L5():
    p = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r4 = dyn paste[, , sep, collapse](p, "R", ".", ".");
    check L6() else D1();
  L8():
    p1 = prom<V +>{
      generic3 = ld generic;
      generic4 = force? generic3;
      checkMissing(generic4);
      return generic4;
    };
    p3 = prom<V +>{
      paste2 = ldf paste;
      p2 = prom<V +>{
        signature1 = ld signature;
        signature2 = force? signature1;
        checkMissing(signature2);
        return signature2;
      };
      r7 = dyn paste2[, collapse](p2, ".");
      return r7;
    };
    r9 = dyn paste1[, , , sep](p1, p3, "R", ".");
    check L9() else D3();
  D1():
    deopt 11 [r4];
  D3():
    deopt 19 [r9];
  L6():
    popenv;
    return r4;
  L9():
    popenv;
    return r9;
  }
}