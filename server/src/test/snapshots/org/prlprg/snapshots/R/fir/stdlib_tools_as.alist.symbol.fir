fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `as.alist.symbol` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg as_alist_call:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg call:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st x = x;
    as_alist_call = ldf `as.alist.call`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf call;
      base = ldf call in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      call = ldf call in base;
      r2 = dyn call(<lang as.character(x)>);
      goto L0(r2);
    L2():
      r = dyn base(<lang as.character(x)>);
      goto L0(r);
    };
    r4 = dyn as_alist_call(p);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}