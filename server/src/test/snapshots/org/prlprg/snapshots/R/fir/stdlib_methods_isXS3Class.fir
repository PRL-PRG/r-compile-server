fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner418102221;
    st isXS3Class = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner418102221(classDef) {
  (reg classDef:*) -+> V { var classDef:*, reg _in_:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg names:cls, reg r3:V, reg p:p(V +), reg r5:V |
    mkenv;
    st classDef = classDef;
    _in_ = ldf `%in%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      __ = ldf `@` in base;
      r2 = dyn __(<sym classDef>, <sym slots>);
      names = ldf names in base;
      r3 = dyn names(r2);
      goto L0(r3);
    L2():
      r = dyn base(<lang `@`(classDef, slots)>);
      goto L0(r);
    };
    r5 = dyn _in_(".S3Class", p);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    popenv;
    return r5;
  }
}