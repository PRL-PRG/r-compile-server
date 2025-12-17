fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1305178999;
    st `.removeCachedMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1305178999(f, sig, fdef) {
  (reg f:*, reg sig:*, reg fdef:*) -+> V { var f:*, var sig:*, var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg getGeneric:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg cacheMethod:cls, reg f3:*, reg f4:V, reg p2:p(V +), reg sig1:*, reg sig2:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sig3:*, reg sig4:V, reg names:cls, reg r7:V, reg p4:p(V +), reg fdef1:*, reg fdef2:V, reg p5:p(V +), reg r10:V |
    mkenv;
    st f = f;
    st sig = sig;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L0() else L1(fdef);
  L0():
    p1 = prom<V +>{
      getGeneric = ldf getGeneric;
      p = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
      r1 = dyn getGeneric(p);
      return r1;
    };
    goto L1(p1);
  L1(fdef_orDefault):
    st fdef = fdef_orDefault;
    cacheMethod = ldf cacheMethod;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p3 = prom<V +>{
      sig1 = ld sig;
      sig2 = force? sig1;
      checkMissing(sig2);
      return sig2;
    };
    p4 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      sig3 = ld sig;
      sig4 = force? sig3;
      checkMissing(sig4);
      names = ldf names in base;
      r7 = dyn names(sig4);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym sig>);
      goto L0(r5);
    };
    p5 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r10 = dyn cacheMethod(p2, p3, NULL, p4, p5);
    check L3() else D1();
  D1():
    deopt 7 [r10];
  L3():
    popenv;
    return r10;
  }
}