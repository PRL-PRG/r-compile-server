fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg r2:cls, reg g:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg gc:cls, reg r6:V, reg invisible:cls, reg r7:V |
    mkenv;
    r = clos `inner-957449755`;
    st `reg.finalizer` = r;
    r1 = clos inner1560918050;
    st f = r1;
    r2 = clos inner354062069;
    st g = r2;
    g = ldf g;
    check L1() else D0();
  D0():
    deopt 10 [];
  L1():
    r3 = dyn g();
    check L2() else D1();
  D1():
    deopt 11 [r3];
  L2():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r5):
    popenv;
    return r5;
  L3():
    gc = ldf gc;
    check L5() else D2();
  L4():
    r4 = dyn base(<lang gc()>);
    goto L0(r4);
  D2():
    deopt 15 [];
  L5():
    r6 = dyn gc();
    check L6() else D3();
  D3():
    deopt 16 [r6];
  L6():
    invisible = ldf invisible in base;
    r7 = dyn invisible(r6);
    check L7() else D4();
  D4():
    deopt 18 [r7];
  L7():
    goto L0(r7);
  }
}
fun `inner-957449755`(e, f, onexit) {
  (reg e:*, reg f:*, reg onexit:*) -+> V { var e:*, var f:*, var onexit:*, reg onexit_isMissing:L, reg onexit_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg f1:*, reg f2:V, reg onexit1:*, reg onexit2:V, reg reg_finalizer:cls, reg r2:V |
    mkenv;
    st e = e;
    st f = f;
    onexit_isMissing = missing.0(onexit);
    if onexit_isMissing then L0(FALSE) else L0(onexit);
  L0(onexit_orDefault):
    st onexit = onexit_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    e1 = ld e;
    check L4() else D0();
  L3():
    r = dyn base(<lang reg.finalizer(e, f, onexit)>);
    goto L1(r);
  D0():
    deopt 2 [e1];
  L4():
    e2 = force? e1;
    checkMissing(e2);
    f1 = ld f;
    check L5() else D1();
  D1():
    deopt 4 [f1];
  L5():
    f2 = force? f1;
    checkMissing(f2);
    onexit1 = ld onexit;
    check L6() else D2();
  D2():
    deopt 6 [onexit1];
  L6():
    onexit2 = force? onexit1;
    checkMissing(onexit2);
    reg_finalizer = ldf `reg.finalizer` in base;
    r2 = dyn reg_finalizer(e2, f2, onexit2);
    check L7() else D3();
  D3():
    deopt 9 [r2];
  L7():
    goto L1(r2);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg print:cls, reg r:V |
    mkenv;
    st e = e;
    print = ldf print;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn print("cleaning....");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg environment:cls, reg r:V, reg reg_finalizer:cls, reg e:*, reg e1:V, reg p:p(V +), reg f:*, reg f1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    environment = ldf environment;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn environment();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    st e = r;
    reg_finalizer = ldf `reg.finalizer`;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    p = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    p1 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r3 = dyn reg_finalizer(p, p1);
    check L3() else D3();
  D3():
    deopt 8 [r3];
  L3():
    popenv;
    return r3;
  }
}