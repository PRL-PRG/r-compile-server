fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3930799931;
    st setPrimitiveMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3930799931(f, fdef, code, generic, mlist) {
  (reg f:*, reg fdef:*, reg code:*, reg generic:*, reg mlist:*) -+> V { var f:*, var fdef:*, var code:*, var generic:*, var mlist:*, reg mlist_isMissing:L, reg mlist_orDefault:*, reg get:cls, reg environment:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg C_R_M_setPrimitiveMethods:*, reg C_R_M_setPrimitiveMethods1:V, reg f1:*, reg f2:V, reg fdef1:*, reg fdef2:V, reg code1:*, reg code2:V, reg generic3:*, reg generic4:V, reg mlist1:*, reg mlist2:V, reg vargs:dots, reg r7:V |
    mkenv;
    st f = f;
    st fdef = fdef;
    st code = code;
    st generic = generic;
    mlist_isMissing = missing.0(mlist);
    if mlist_isMissing then L0() else L1(mlist);
  L0():
    p2 = prom<V +>{
      get = ldf get;
      p1 = prom<V +>{
        environment = ldf environment;
        p = prom<V +>{
          generic1 = ld generic;
          generic2 = force? generic1;
          checkMissing(generic2);
          return generic2;
        };
        r1 = dyn environment(p);
        return r1;
      };
      r3 = dyn get[, envir](".Methods", p1);
      return r3;
    };
    goto L1(p2);
  L1(mlist_orDefault):
    st mlist = mlist_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r6):
    popenv;
    return r6;
  L3():
    C_R_M_setPrimitiveMethods = ld C_R_M_setPrimitiveMethods;
    check L5() else D0();
  L4():
    r5 = dyn base(<sym C_R_M_setPrimitiveMethods>, <sym f>, <sym fdef>, <sym code>, <sym generic>, <sym mlist>);
    goto L2(r5);
  D0():
    deopt 1 [C_R_M_setPrimitiveMethods];
  L5():
    C_R_M_setPrimitiveMethods1 = force? C_R_M_setPrimitiveMethods;
    checkMissing(C_R_M_setPrimitiveMethods1);
    f1 = ld f;
    check L6() else D1();
  D1():
    deopt 2 [C_R_M_setPrimitiveMethods1, f1];
  L6():
    f2 = force? f1;
    checkMissing(f2);
    fdef1 = ld fdef;
    check L7() else D2();
  D2():
    deopt 3 [C_R_M_setPrimitiveMethods1, f2, fdef1];
  L7():
    fdef2 = force? fdef1;
    checkMissing(fdef2);
    code1 = ld code;
    check L8() else D3();
  D3():
    deopt 4 [C_R_M_setPrimitiveMethods1, f2, fdef2, code1];
  L8():
    code2 = force? code1;
    checkMissing(code2);
    generic3 = ld generic;
    check L9() else D4();
  D4():
    deopt 5 [C_R_M_setPrimitiveMethods1, f2, fdef2, code2, generic3];
  L9():
    generic4 = force? generic3;
    checkMissing(generic4);
    mlist1 = ld mlist;
    check L10() else D5();
  D5():
    deopt 6 [C_R_M_setPrimitiveMethods1, f2, fdef2, code2, generic4, mlist1];
  L10():
    mlist2 = force? mlist1;
    checkMissing(mlist2);
    vargs = dots[f2, fdef2, code2, generic4, mlist2];
    r7 = `.Call`(C_R_M_setPrimitiveMethods1, vargs, <missing>);
    goto L2(r7);
  }
}