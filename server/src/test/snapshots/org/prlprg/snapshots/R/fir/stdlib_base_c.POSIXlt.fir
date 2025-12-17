fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3304446614;
    st `c.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3304446614(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg as_POSIXlt:cls, reg do_call:cls, reg c:*, reg c1:V, reg p:p(V +), reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg ddd1:dots?, reg r3:V, reg p1:p(V +), reg as_POSIXct:*, reg as_POSIXct1:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    as_POSIXlt = ldf `as.POSIXlt`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p4 = prom<V +>{
      do_call = ldf `do.call`;
      p = prom<V +>{
        c = ld c;
        c1 = force? c;
        checkMissing(c1);
        return c1;
      };
      p3 = prom<V +>{
        lapply = ldf lapply;
        p1 = prom<V +>{
          sym = ldf list;
          base = ldf list in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r2):
          return r2;
        L1():
          list = ldf list;
          ddd1 = ld `...`;
          r3 = dyn list[`...`](ddd1);
          goto L0(r3);
        L2():
          r1 = dyn base(<sym ...>);
          goto L0(r1);
        };
        p2 = prom<V +>{
          as_POSIXct = ld `as.POSIXct`;
          as_POSIXct1 = force? as_POSIXct;
          checkMissing(as_POSIXct1);
          return as_POSIXct1;
        };
        r6 = dyn lapply(p1, p2);
        return r6;
      };
      r8 = dyn do_call(p, p3);
      return r8;
    };
    r10 = dyn as_POSIXlt(p4);
    check L2() else D1();
  D1():
    deopt 3 [r10];
  L2():
    popenv;
    return r10;
  }
}