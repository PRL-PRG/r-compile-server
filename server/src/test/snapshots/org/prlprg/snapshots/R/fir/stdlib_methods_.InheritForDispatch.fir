fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2291964650;
    st `.InheritForDispatch` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2291964650(classes, fdef, mtable) {
  (reg classes:*, reg fdef:*, reg mtable:*) -+> V { var classes:*, var fdef:*, var mtable:*, reg _findInheritedMethods:cls, reg classes1:*, reg classes2:V, reg p:p(V +), reg fdef1:*, reg fdef2:V, reg p1:p(V +), reg mtable1:*, reg mtable2:V, reg p2:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg methods:*, reg methods1:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg methods2:*, reg methods3:V, reg c1:L, reg methods5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg methods6:*, reg methods7:V, reg length1:cls, reg r11:V, reg r12:V, reg c2:L, reg paste0:cls, reg __1:cls, reg r13:V, reg c3:L, reg r15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg r20:V, reg classes3:*, reg classes4:V, reg r21:I, reg __2:cls, reg r22:V, reg p3:p(V +), reg vapply:cls, reg classes5:*, reg classes6:V, reg p4:p(V +), reg as_character:*, reg as_character1:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg __3:cls, reg r29:V, reg p7:p(V +), reg r31:V, reg p8:p(V +), reg sQuote1:cls, reg cnames:*, reg cnames1:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg r36:V, reg p11:p(V +), reg r38:V, reg stop1:cls, reg r39:V |
    mkenv;
    st classes = classes;
    st fdef = fdef;
    st mtable = mtable;
    _findInheritedMethods = ldf `.findInheritedMethods`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      classes1 = ld classes;
      classes2 = force? classes1;
      checkMissing(classes2);
      return classes2;
    };
    p1 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    p2 = prom<V +>{
      mtable1 = ld mtable;
      mtable2 = force? mtable1;
      checkMissing(mtable2);
      return mtable2;
    };
    r3 = dyn _findInheritedMethods(p, p1, p2);
    check L6() else D1();
  D1():
    deopt 5 [r3];
  L6():
    st methods = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r5):
    r7 = `==`(r5, 1);
    c = `as.logical`(r7);
    if c then L11() else L1();
  L7():
    methods = ld methods;
    check L9() else D2();
  L8():
    r4 = dyn base(<sym methods>);
    goto L0(r4);
  D2():
    deopt 9 [methods];
  L1():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L9():
    methods1 = force? methods;
    checkMissing(methods1);
    length = ldf length in base;
    r6 = dyn length(methods1);
    check L10() else D3();
  L11():
    methods2 = ld methods;
    check L12() else D4();
  D3():
    deopt 12 [r6];
  D4():
    deopt 15 [methods2];
  L3(r10):
    r12 = `==`(r10, 0);
    c2 = `as.logical`(r12);
    if c2 then L21() else L4();
  L10():
    goto L0(r6);
  L12():
    methods3 = force? methods2;
    checkMissing(methods3);
    c1 = `is.object`(methods3);
    if c1 then L13() else L14(methods3);
  L17():
    methods6 = ld methods;
    check L19() else D5();
  L18():
    r9 = dyn base1(<sym methods>);
    goto L3(r9);
  D5():
    deopt 22 [methods6];
  L2(dx1):
    popenv;
    return dx1;
  L4():
    stop1 = ldf stop;
    check L27() else D11();
  L13():
    dr = tryDispatchBuiltin.1("[[", methods3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(methods5):
    __ = ldf `[[` in base;
    r8 = dyn __(methods5, 1);
    goto L2(r8);
  L19():
    methods7 = force? methods6;
    checkMissing(methods7);
    length1 = ldf length in base;
    r11 = dyn length1(methods7);
    check L20() else D6();
  L21():
    paste0 = ldf paste0;
    check L22() else D7();
  D6():
    deopt 25 [r11];
  D7():
    deopt 29 [];
  D11():
    deopt 47 [];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L20():
    goto L3(r11);
  L22():
    p3 = prom<V +>{
      __1 = ldf `@` in base;
      r13 = dyn __1(<sym fdef>, <sym signature>);
      c3 = `is.object`(r13);
      if c3 then L2() else L3(r13);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", r13);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(r15):
      sym2 = ldf seq_along;
      base2 = ldf seq_along in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L1(r19, r20):
      __2 = ldf `[` in base;
      r22 = dyn __2(r19, r20);
      goto L0(r22);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      classes3 = ld classes;
      classes4 = force? classes3;
      checkMissing(classes4);
      r21 = seq_along(classes4);
      goto L1(r15, r21);
    L6():
      r18 = dyn base2(<sym classes>);
      goto L1(r15, r18);
    };
    p6 = prom<V +>{
      vapply = ldf vapply;
      p4 = prom<V +>{
        classes5 = ld classes;
        classes6 = force? classes5;
        checkMissing(classes6);
        return classes6;
      };
      p5 = prom<V +>{
        as_character = ld `as.character`;
        as_character1 = force? as_character;
        checkMissing(as_character1);
        return as_character1;
      };
      r26 = dyn vapply(p4, p5, "");
      return r26;
    };
    r28 = dyn paste0[, , , , collapse](p3, " = \"", p6, "\"", ", ");
    check L23() else D8();
  L27():
    r39 = dyn stop1[, domain]("Internal error in finding inherited methods; didn't return a unique method", NA_LGL);
    check L28() else D12();
  D8():
    deopt 36 [r28];
  D12():
    deopt 51 [r39];
  L23():
    st cnames = r28;
    stop = ldf stop;
    check L24() else D9();
  L28():
    popenv;
    return r39;
  D9():
    deopt 39 [];
  L24():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p8 = prom<V +>{
        sQuote = ldf sQuote;
        p7 = prom<V +>{
          __3 = ldf `@` in base;
          r29 = dyn __3(<sym fdef>, <sym generic>);
          return r29;
        };
        r31 = dyn sQuote(p7);
        return r31;
      };
      p10 = prom<V +>{
        sQuote1 = ldf sQuote;
        p9 = prom<V +>{
          cnames = ld cnames;
          cnames1 = force? cnames;
          checkMissing(cnames1);
          return cnames1;
        };
        r34 = dyn sQuote1(p9);
        return r34;
      };
      r36 = dyn gettextf("unable to find an inherited method for function %s for signature %s", p8, p10);
      return r36;
    };
    r38 = dyn stop[, `call.`, domain](p11, FALSE, NA_LGL);
    check L25() else D10();
  D10():
    deopt 45 [r38];
  L25():
    popenv;
    return r38;
  }
}