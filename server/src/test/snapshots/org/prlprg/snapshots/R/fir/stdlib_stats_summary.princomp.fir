fun main() {
  () -+> V { reg r:cls, reg summary:cls, reg princomp:cls, reg USArrests:*, reg USArrests1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg print:cls, reg summary1:cls, reg princomp1:cls, reg USArrests2:*, reg USArrests3:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V |
    mkenv;
    r = clos inner3585499919;
    st `summary.princomp` = r;
    summary = ldf summary;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      princomp = ldf princomp;
      p = prom<V +>{
        USArrests = ld USArrests;
        USArrests1 = force? USArrests;
        checkMissing(USArrests1);
        return USArrests1;
      };
      r2 = dyn princomp[, cor](p, TRUE);
      st `pc.cr` = r2;
      invisible.0();
      return r2;
    };
    r4 = dyn summary(p1);
    check L1() else D1();
  D1():
    deopt 6 [r4];
  L1():
    print = ldf print;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p4 = prom<V +>{
      summary1 = ldf summary;
      p3 = prom<V +>{
        princomp1 = ldf princomp;
        p2 = prom<V +>{
          USArrests2 = ld USArrests;
          USArrests3 = force? USArrests2;
          checkMissing(USArrests3);
          return USArrests3;
        };
        r6 = dyn princomp1[, cor](p2, TRUE);
        return r6;
      };
      r8 = dyn summary1[, loadings, cutoff](p3, TRUE, 0.2);
      return r8;
    };
    r10 = dyn print[, digits](p4, 2.0);
    check L3() else D3();
  D3():
    deopt 12 [r10];
  L3():
    popenv;
    return r10;
  }
}
fun inner3585499919(object, loadings, cutoff, `...`) {
  (reg object:*, reg loadings:*, reg cutoff:*, reg ddd:dots) -+> V { var object:*, var loadings:*, reg loadings_isMissing:L, reg loadings_orDefault:*, var cutoff:*, reg cutoff_isMissing:L, reg cutoff_orDefault:*, var `...`:dots?, reg cutoff1:*, reg cutoff2:V, reg l:*, reg c:L, reg cutoff4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg loadings1:*, reg loadings2:V, reg l3:*, reg c1:L, reg loadings4:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg l6:*, reg class__:cls, reg r2:V, reg object1:*, reg object2:V |
    mkenv;
    st object = object;
    loadings_isMissing = missing.0(loadings);
    if loadings_isMissing then L0(FALSE) else L0(loadings);
  L0(loadings_orDefault):
    st loadings = loadings_orDefault;
    cutoff_isMissing = missing.0(cutoff);
    if cutoff_isMissing then L1(0.1) else L1(cutoff);
  L1(cutoff_orDefault):
    st cutoff = cutoff_orDefault;
    st `...` = ddd;
    cutoff1 = ld cutoff;
    check L2() else D0();
  D0():
    deopt 0 [cutoff1];
  L2():
    cutoff2 = force? cutoff1;
    checkMissing(cutoff2);
    l = ld object;
    c = `is.object`(l);
    if c then L4() else L5(cutoff2, l);
  L3(dx1):
    st object = dx1;
    loadings1 = ld loadings;
    check L7() else D1();
  L4():
    dr = tryDispatchBuiltin.0("$<-", l, cutoff2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(cutoff2, dr);
  L5(cutoff4, l2):
    r = `$<-`(l2, <sym cutoff>, cutoff2);
    goto L3(r);
  D1():
    deopt 5 [loadings1];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L7():
    loadings2 = force? loadings1;
    checkMissing(loadings2);
    l3 = ld object;
    c1 = `is.object`(l3);
    if c1 then L9() else L10(loadings2, l3);
  L8(dx3):
    st object = dx3;
    l6 = ld object;
    class__ = ldf `class<-`;
    check L12() else D2();
  L9():
    dr2 = tryDispatchBuiltin.0("$<-", l3, loadings2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10(loadings2, dr2);
  L10(loadings4, l5):
    r1 = `$<-`(l5, <sym print.loadings>, loadings2);
    goto L8(r1);
  D2():
    deopt 13 ["summary.princomp", l6, "summary.princomp"];
  L11():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L12():
    r2 = dyn class__(l6, NULL, "summary.princomp");
    check L13() else D3();
  D3():
    deopt 15 ["summary.princomp", r2];
  L13():
    st object = r2;
    object1 = ld object;
    check L14() else D4();
  D4():
    deopt 17 [object1];
  L14():
    object2 = force? object1;
    checkMissing(object2);
    popenv;
    return object2;
  }
}