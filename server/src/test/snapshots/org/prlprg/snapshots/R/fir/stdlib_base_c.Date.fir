fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3304446614;
    st `c.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3304446614(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg _Date:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg unlist:cls, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg p:p(V +), reg r6:cls, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg c:cls, reg r11:V, reg p3:p(V +), reg r13:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    _Date = ldf `.Date`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      unlist = ldf unlist;
      p2 = prom<V +>{
        lapply = ldf lapply;
        p = prom<V +>{
          sym1 = ldf list;
          base1 = ldf list in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r3):
          return r3;
        L1():
          list = ldf list;
          ddd1 = ld `...`;
          r4 = dyn list[`...`](ddd1);
          goto L0(r4);
        L2():
          r2 = dyn base1(<sym ...>);
          goto L0(r2);
        };
        p1 = prom<V +>{
          r6 = clos inner3708401697;
          return r6;
        };
        r8 = dyn lapply(p, p1);
        return r8;
      };
      r10 = dyn unlist(p2);
      c = ldf c in base;
      r11 = dyn c(r10);
      goto L0(r11);
    L2():
      r = dyn base(<lang unlist(lapply(list(...), function((e=), unclass(as.Date(e)), NULL)))>);
      goto L0(r);
    };
    r13 = dyn _Date(p3);
    check L2() else D1();
  D1():
    deopt 3 [r13];
  L2():
    popenv;
    return r13;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_Date:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r3:V, reg unclass:cls, reg r4:V |
    mkenv;
    st e = e;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    as_Date = ldf `as.Date`;
    check L3() else D0();
  L2():
    r = dyn base(<lang as.Date(e)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r3 = dyn as_Date(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    unclass = ldf unclass in base;
    r4 = dyn unclass(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}