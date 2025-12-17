fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.character.Date` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_character:cls, reg as_POSIXlt:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg ddd1:dots?, reg r5:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    as_character = ldf `as.character`;
    check L3() else D0();
  L2():
    r = dyn base(<lang as.POSIXlt(x)>, <sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p1 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r3 = dyn as_POSIXlt(p);
      return r3;
    };
    ddd1 = ld `...`;
    r5 = dyn as_character[, `...`](p1, ddd1);
    check L4() else D1();
  D1():
    deopt 5 [r5];
  L4():
    goto L0(r5);
  }
}