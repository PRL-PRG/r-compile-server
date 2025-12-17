fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2233438014;
    st `.dummyMethodName` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2233438014(f, signature) {
  (reg f:*, reg signature:*) -+> V { var f:*, var signature:*, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg f1:*, reg f2:V, reg signature1:*, reg signature2:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st f = f;
    st signature = signature;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      c = ldf c in base;
      r2 = dyn c(f2, signature2);
      goto L0(r2);
    L2():
      r = dyn base(<sym f>, <sym signature>);
      goto L0(r);
    };
    r4 = dyn paste[, collapse](p, "#");
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}