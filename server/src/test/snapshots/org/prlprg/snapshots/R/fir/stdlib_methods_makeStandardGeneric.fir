fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3360799605;
    st makeStandardGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3360799605(f, fdef) {
  (reg f:*, reg fdef:*) -+> V { var f:*, var fdef:*, reg fdef1:*, reg fdef2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg l:*, reg body__:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg fdef3:*, reg fdef4:V, reg typeof:cls, reg r6:V, reg r7:V, reg c:L, reg genericForBasic:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r9:V, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg setPrimitiveMethods:cls, reg f5:*, reg f6:V, reg p4:p(V +), reg fdef5:*, reg fdef6:V, reg p5:p(V +), reg fgen:*, reg fgen1:V, reg p6:p(V +), reg r19:V, reg fgen2:*, reg fgen3:V |
    mkenv;
    st f = f;
    st fdef = fdef;
    fdef1 = ld fdef;
    check L4() else D0();
  D0():
    deopt 0 [fdef1];
  L4():
    fdef2 = force? fdef1;
    checkMissing(fdef2);
    st fgen = fdef2;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    l = ld fgen;
    body__ = ldf `body<-`;
    check L7() else D1();
  L5():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<lang standardGeneric(FNAME)>, <lang list(FNAME=f)>);
    goto L0(r2);
  L6():
    r = dyn base(<lang standardGeneric(FNAME)>, <lang list(FNAME=f)>);
    goto L0(r);
  D1():
    deopt 7 [r1, l, r1];
  L7():
    r3 = dyn body__(l, NULL, r1);
    check L8() else D2();
  D2():
    deopt 9 [r1, r3];
  L8():
    st fgen = r3;
    sym1 = ldf typeof;
    base1 = ldf typeof in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L1(r5):
    r7 = `!=`(r5, "closure");
    c = `as.logical`(r7);
    if c then L13() else L2();
  L9():
    fdef3 = ld fdef;
    check L11() else D3();
  L10():
    r4 = dyn base1(<sym fdef>);
    goto L1(r4);
  D3():
    deopt 13 [fdef3];
  L2():
    goto L3();
  L3():
    fgen2 = ld fgen;
    check L21() else D11();
  L11():
    fdef4 = force? fdef3;
    checkMissing(fdef4);
    typeof = ldf typeof in base;
    r6 = dyn typeof(fdef4);
    check L12() else D4();
  L13():
    genericForBasic = ldf genericForBasic;
    check L14() else D5();
  D4():
    deopt 16 [r6];
  D5():
    deopt 20 [];
  D11():
    deopt 40 [fgen2];
  L12():
    goto L1(r6);
  L14():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r9 = dyn genericForBasic(p);
    check L15() else D6();
  L21():
    fgen3 = force? fgen2;
    checkMissing(fgen3);
    popenv;
    return fgen3;
  D6():
    deopt 22 [r9];
  L15():
    st fgen = r9;
    message = ldf message;
    check L16() else D7();
  D7():
    deopt 25 [];
  L16():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        p1 = prom<V +>{
          f3 = ld f;
          f4 = force? f3;
          checkMissing(f4);
          return f4;
        };
        r11 = dyn sQuote(p1);
        return r11;
      };
      r13 = dyn gettextf("making a generic for special function %s", p2);
      return r13;
    };
    r15 = dyn message[, domain](p3, NA_LGL);
    check L17() else D8();
  D8():
    deopt 29 [r15];
  L17():
    setPrimitiveMethods = ldf setPrimitiveMethods;
    check L18() else D9();
  D9():
    deopt 31 [];
  L18():
    p4 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p5 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    p6 = prom<V +>{
      fgen = ld fgen;
      fgen1 = force? fgen;
      checkMissing(fgen1);
      return fgen1;
    };
    r19 = dyn setPrimitiveMethods(p4, p5, "reset", p6, NULL);
    check L19() else D10();
  D10():
    deopt 37 [r19];
  L19():
    goto L3();
  }
}