fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg stopifnot:cls, reg sort:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg rev:cls, reg sort1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg r10:V, reg p3:p(V +), reg r12:V, reg stopifnot1:cls, reg rev1:cls, reg p4:p(V +), reg r14:V, reg r15:V, reg p5:p(V +), reg r17:V |
    mkenv;
    r = clos inner354062069;
    st rev = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    st x = r2;
    stopifnot = ldf stopifnot;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r3 = dyn c(<int 1, 2, 3, 4, 5>, <int 5, 4, 3>);
    check L3() else D0();
  L2():
    r1 = dyn base(<lang `:`(1.0, 5.0)>, <lang `:`(5.0, 3.0)>);
    goto L0(r1);
  D0():
    deopt 10 [r3];
  D1():
    deopt 13 [];
  L3():
    goto L0(r3);
  L4():
    p3 = prom<V +>{
      sort = ldf sort;
      p = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r5 = dyn sort[, decreasing](p, TRUE);
      rev = ldf rev;
      p2 = prom<V +>{
        sort1 = ldf sort;
        p1 = prom<V +>{
          x2 = ld x;
          x3 = force? x2;
          checkMissing(x3);
          return x3;
        };
        r7 = dyn sort1(p1);
        return r7;
      };
      r9 = dyn rev(p2);
      r10 = `==`(r5, r9);
      return r10;
    };
    r12 = dyn stopifnot(p3);
    check L5() else D2();
  D2():
    deopt 15 [r12];
  L5():
    stopifnot1 = ldf stopifnot;
    check L6() else D3();
  D3():
    deopt 17 [];
  L6():
    p5 = prom<V +>{
      rev1 = ldf rev;
      p4 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7>;
      };
      r14 = dyn rev1(p4);
      r15 = `==`(r14, <int 7, 6, 5, 4, 3, 2, 1>);
      return r15;
    };
    r17 = dyn stopifnot1(p5);
    check L7() else D4();
  D4():
    deopt 19 [r17];
  L7():
    popenv;
    return r17;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("rev");
    goto L0(r2);
  L2():
    r = dyn base("rev");
    goto L0(r);
  }
}