fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `quantile.ecdf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg quantile:cls, reg evalq:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg diff:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg round:cls, reg r6:V, reg c:cls, reg r7:V, reg p:p(V +), reg r9:V, reg rep_int:cls, reg r10:V, reg p1:p(V +), reg environment:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg ddd1:dots?, reg r17:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    quantile = ldf quantile;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      evalq = ldf evalq;
      p1 = prom<V +>{
        sym = ldf `rep.int`;
        base = ldf `rep.int` in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        diff = ldf diff;
        p = prom<V +>{
          sym1 = ldf c;
          base1 = ldf c in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L2() else L3();
        L0(r3):
          return r3;
        L2():
          sym2 = ldf round;
          base2 = ldf round in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L4() else L5();
        L3():
          r2 = dyn base1(0.0, <lang round(`*`(nobs, y))>);
          goto L0(r2);
        L1(r5):
          c = ldf c in base;
          r7 = dyn c(0.0, r5);
          goto L0(r7);
        L4():
          round = ldf round in base;
          r6 = dyn round(<lang `*`(nobs, y)>);
          goto L1(r6);
        L5():
          r4 = dyn base2(<lang `*`(nobs, y)>);
          goto L1(r4);
        };
        r9 = dyn diff(p);
        rep_int = ldf `rep.int` in base;
        r10 = dyn rep_int(x2, r9);
        goto L0(r10);
      L2():
        r = dyn base(<sym x>, <lang diff(c(0.0, round(`*`(nobs, y))))>);
        goto L0(r);
      };
      p3 = prom<V +>{
        environment = ldf environment;
        p2 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        r13 = dyn environment(p2);
        return r13;
      };
      r15 = dyn evalq(p1, p3);
      return r15;
    };
    ddd1 = ld `...`;
    r17 = dyn quantile[, `...`](p4, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r17];
  L1():
    popenv;
    return r17;
  }
}