fun main() {
  () -+> V { reg r:cls, reg asOneSidedFormula:cls, reg r1:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg form:*, reg form1:V, reg asOneSidedFormula1:cls, reg form2:*, reg form3:V, reg p:p(V +), reg r5:V, reg identical:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg form4:*, reg form5:V, reg asOneSidedFormula2:cls, reg as_name:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg identical1:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg form6:*, reg form7:V, reg asOneSidedFormula3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg expression:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg identical2:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg asOneSidedFormula4:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg quote:cls, reg r25:V, reg p4:p(V +), reg r27:V, reg asOneSidedFormula5:cls, reg r28:V |
    mkenv;
    r = clos inner4102710431;
    st asOneSidedFormula = r;
    asOneSidedFormula = ldf asOneSidedFormula;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn asOneSidedFormula("age");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    st form = r1;
    stopifnot = ldf stopifnot;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p3 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0():
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L3():
      form = ld form;
      form1 = force? form;
      checkMissing(form1);
      asOneSidedFormula1 = ldf asOneSidedFormula;
      p = prom<V +>{
        form2 = ld form;
        form3 = force? form2;
        checkMissing(form3);
        return form3;
      };
      r5 = dyn asOneSidedFormula1(p);
      identical = ldf identical in base;
      r6 = dyn identical(form1, r5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0();
    L4():
      r2 = dyn base(<sym form>, <lang asOneSidedFormula(form)>);
      goto L0();
    L1():
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L5():
      form4 = ld form;
      form5 = force? form4;
      checkMissing(form5);
      asOneSidedFormula2 = ldf asOneSidedFormula;
      p1 = prom<V +>{
        as_name = ldf `as.name`;
        r9 = dyn as_name("age");
        return r9;
      };
      r11 = dyn asOneSidedFormula2(p1);
      identical1 = ldf identical in base;
      r12 = dyn identical1(form5, r11, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L1();
    L6():
      r7 = dyn base1(<sym form>, <lang asOneSidedFormula(as.name("age"))>);
      goto L1();
    L2(r14):
      return r14;
    L7():
      form6 = ld form;
      form7 = force? form6;
      checkMissing(form7);
      asOneSidedFormula3 = ldf asOneSidedFormula;
      p2 = prom<V +>{
        sym3 = ldf expression;
        base3 = ldf expression in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r16):
        return r16;
      L1():
        expression = ldf expression in base;
        r17 = dyn expression(<sym age>);
        goto L0(r17);
      L2():
        r15 = dyn base3(<sym age>);
        goto L0(r15);
      };
      r19 = dyn asOneSidedFormula3(p2);
      identical2 = ldf identical in base;
      r20 = dyn identical2(form7, r19, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L2(r20);
    L8():
      r13 = dyn base2(<sym form>, <lang asOneSidedFormula(expression(age))>);
      goto L2(r13);
    };
    r22 = dyn stopifnot[exprs](p3);
    check L3() else D3();
  D3():
    deopt 12 [r22];
  L3():
    asOneSidedFormula4 = ldf asOneSidedFormula;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p4 = prom<V +>{
      sym4 = ldf quote;
      base4 = ldf quote in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      quote = ldf quote in base;
      r25 = dyn quote(<lang log(age)>);
      goto L0(r25);
    L2():
      r23 = dyn base4(<lang log(age)>);
      goto L0(r23);
    };
    r27 = dyn asOneSidedFormula4(p4);
    check L5() else D5();
  D5():
    deopt 16 [r27];
  L5():
    asOneSidedFormula5 = ldf asOneSidedFormula;
    check L6() else D6();
  D6():
    deopt 18 [];
  L6():
    r28 = dyn asOneSidedFormula5(1.0);
    check L7() else D7();
  D7():
    deopt 20 [r28];
  L7():
    popenv;
    return r28;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg mode:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg c2:V, reg object3:*, reg object4:V, reg c3:L, reg c5:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg c7:L, reg dx1:V, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg c10:L, reg dx4:V, reg r5:V, reg quote:cls, reg r6:V, reg r7:V, reg c11:L, reg c12:V, reg c14:L, reg c16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg c19:L, reg r9:V, reg object7:*, reg object8:V, reg inherits:cls, reg r10:V, reg r11:V, reg c20:L, reg c21:V, reg c23:L, reg eval:cls, reg object9:*, reg object10:V, reg p1:p(V +), reg r13:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg l:*, reg environment__:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg object11:*, reg object12:V, reg inherits1:cls, reg r17:V, reg c24:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg object13:*, reg object14:V, reg length:cls, reg r20:V, reg r21:V, reg c25:L, reg stop:cls, reg gettextf:cls, reg deparse1:cls, reg object15:*, reg object16:V, reg p2:p(V +), reg r23:V, reg p3:p(V +), reg r25:V, reg p4:p(V +), reg r27:V, reg object17:*, reg object18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg call:cls, reg r33:V, reg l1:*, reg class__:cls, reg r34:V, reg _GlobalEnv3:*, reg _GlobalEnv4:V, reg l2:*, reg environment__1:cls, reg r35:V, reg ff:*, reg ff1:V |
    mkenv;
    st object = object;
    mode = ldf mode;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn mode(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    r2 = `==`(r1, "call");
    c = `as.logical`(r2);
    if c then L16() else L0(c);
  L0(c2):
    c14 = `as.logical`(c2);
    if c14 then L24() else L3(c14);
  L16():
    object3 = ld object;
    check L17() else D2();
  D2():
    deopt 6 [c, object3];
  L3(c16):
    c23 = `as.logical`(c16);
    if c23 then L30() else L5();
  L17():
    object4 = force? object3;
    checkMissing(object4);
    c3 = `is.object`(object4);
    if c3 then L18() else L19(c, object4);
  L24():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L1(c7, dx1):
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L4(c19, r9):
    r11 = `!`(r9);
    c20 = `as.logical`(r11);
    c21 = `&&`(c19, c20);
    goto L3(c21);
  L5():
    goto L6();
  L6():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L18():
    dr = tryDispatchBuiltin.1("[[", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(c, dr);
  L19(c5, object6):
    __ = ldf `[[` in base;
    r3 = dyn __(object6, 1);
    goto L1(c5, r3);
  L25():
    object7 = ld object;
    check L27() else D3();
  L26():
    r8 = dyn base1(<sym object>, "formula");
    goto L4(c14, r8);
  L30():
    eval = ldf eval;
    check L31() else D5();
  D3():
    deopt 17 [c14, object7];
  D5():
    deopt 26 [];
  L2(c10, dx4, r5):
    r7 = `==`(dx4, r5);
    c11 = `as.logical`(r7);
    c12 = `&&`(c10, c11);
    goto L0(c12);
  L7(r16):
    c24 = `as.logical`(r16);
    if c24 then L41() else L8();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(c, dx);
  L21():
    quote = ldf quote in base;
    r6 = dyn quote(<sym `~`>);
    goto L2(c7, dx1, r6);
  L22():
    r4 = dyn base(<sym `~`>);
    goto L2(c7, dx1, r4);
  L27():
    object8 = force? object7;
    checkMissing(object8);
    inherits = ldf inherits in base;
    r10 = dyn inherits(object8, "formula", FALSE);
    check L28() else D4();
  L31():
    p1 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      return object10;
    };
    r13 = dyn eval(p1);
    check L32() else D6();
  L37():
    object11 = ld object;
    check L39() else D10();
  L38():
    r15 = dyn base2(<sym object>, "formula");
    goto L7(r15);
  D4():
    deopt 22 [c14, r10];
  D6():
    deopt 28 [r13];
  D10():
    deopt 41 [object11];
  L8():
    sym4 = ldf call;
    base4 = ldf call in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L28():
    goto L4(c14, r10);
  L32():
    st object = r13;
    _GlobalEnv = ld `.GlobalEnv`;
    check L33() else D7();
  L39():
    object12 = force? object11;
    checkMissing(object12);
    inherits1 = ldf inherits in base;
    r17 = dyn inherits1(object12, "formula", FALSE);
    check L40() else D11();
  L41():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D7():
    deopt 30 [_GlobalEnv];
  D11():
    deopt 46 [r17];
  L9(r19):
    r21 = `!=`(r19, 2);
    c25 = `as.logical`(r21);
    if c25 then L46() else L10();
  L13(r32):
    st ff = r32;
    l1 = ld ff;
    class__ = ldf `class<-`;
    check L55() else D17();
  L33():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    l = ld object;
    environment__ = ldf `environment<-`;
    check L34() else D8();
  L40():
    goto L7(r17);
  L42():
    object13 = ld object;
    check L44() else D12();
  L43():
    r18 = dyn base3(<sym object>);
    goto L9(r18);
  L53():
    call = ldf call in base;
    r33 = dyn call("~", <lang switch(mode(object), name=, numeric=, call=object, character=as.name(object), expression=`[[`(object, 1), stop(gettextf("'%s' cannot be of mode '%s'", deparse1(substitute(object)), mode(object)), domain=NA_LGL))>);
    goto L13(r33);
  L54():
    r31 = dyn base4("~", <lang switch(mode(object), name=, numeric=, call=object, character=as.name(object), expression=`[[`(object, 1), stop(gettextf("'%s' cannot be of mode '%s'", deparse1(substitute(object)), mode(object)), domain=NA_LGL))>);
    goto L13(r31);
  D8():
    deopt 33 [_GlobalEnv1, l, _GlobalEnv1];
  D12():
    deopt 49 [object13];
  D17():
    deopt 75 ["formula", l1, "formula"];
  L10():
    goto L11();
  L11():
    object17 = ld object;
    check L50() else D16();
  L34():
    r14 = dyn environment__(l, NULL, _GlobalEnv1);
    check L35() else D9();
  L44():
    object14 = force? object13;
    checkMissing(object14);
    length = ldf length in base;
    r20 = dyn length(object14);
    check L45() else D13();
  L46():
    stop = ldf stop;
    check L47() else D14();
  L55():
    r34 = dyn class__(l1, NULL, "formula");
    check L56() else D18();
  D9():
    deopt 35 [_GlobalEnv1, r14];
  D13():
    deopt 52 [r20];
  D14():
    deopt 56 [];
  D16():
    deopt 63 [object17];
  D18():
    deopt 77 ["formula", r34];
  L35():
    st object = r14;
    goto L6();
  L45():
    goto L9(r20);
  L47():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        deparse1 = ldf deparse1;
        p2 = prom<V +>{
          object15 = ld object;
          object16 = force? object15;
          checkMissing(object16);
          return object16;
        };
        r23 = dyn deparse1(p2);
        return r23;
      };
      r25 = dyn gettextf("formula '%s' must be of the form '~expr'", p3);
      return r25;
    };
    r27 = dyn stop[, domain](p4, NA_LGL);
    check L48() else D15();
  L50():
    object18 = force? object17;
    checkMissing(object18);
    popenv;
    return object18;
  L56():
    st ff = r34;
    _GlobalEnv3 = ld `.GlobalEnv`;
    check L57() else D19();
  D15():
    deopt 60 [r27];
  D19():
    deopt 79 [_GlobalEnv3];
  L48():
    goto L11();
  L57():
    _GlobalEnv4 = force? _GlobalEnv3;
    checkMissing(_GlobalEnv4);
    l2 = ld ff;
    environment__1 = ldf `environment<-`;
    check L58() else D20();
  D20():
    deopt 82 [_GlobalEnv4, l2, _GlobalEnv4];
  L58():
    r35 = dyn environment__1(l2, NULL, _GlobalEnv4);
    check L59() else D21();
  D21():
    deopt 84 [_GlobalEnv4, r35];
  L59():
    st ff = r35;
    ff = ld ff;
    check L60() else D22();
  D22():
    deopt 86 [ff];
  L60():
    ff1 = force? ff;
    checkMissing(ff1);
    popenv;
    return ff1;
  }
}