fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `logLik.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg warning:cls, reg r4:V, reg family:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r7:V, reg c1:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg family1:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg r12:V, reg c2:L, reg r14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg dispersion:*, reg dispersion1:V, reg c4:V, reg r19:V, reg c5:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg dispersion2:*, reg dispersion3:V, reg is_na:cls, reg r22:V, reg c6:L, reg p2:*, reg p3:V, reg r23:V, reg r24:V, reg _in_:cls, reg fam:*, reg fam1:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg c7:cls, reg r29:V, reg p5:p(V +), reg r31:V, reg c8:L, reg p6:*, reg p7:V, reg r32:V, reg p8:*, reg p9:V, reg object9:*, reg object10:V, reg c9:L, reg p11:V, reg object12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg p13:V, reg dx7:V, reg r33:V, reg r34:V, reg r35:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg object13:*, reg object14:V, reg c10:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r40:V, reg is_na1:cls, reg r41:V, reg r42:V, reg sum:cls, reg r43:V, reg l:*, reg attr__:cls, reg r44:V, reg p14:*, reg p15:V, reg l1:*, reg attr__1:cls, reg r45:V, reg l2:*, reg class__:cls, reg r46:V, reg val:*, reg val1:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L14() else L1();
  L12():
    missing = ldf missing in base;
    r2 = dyn missing(<sym ...>);
    goto L0(r2);
  L13():
    r = dyn base(<sym ...>);
    goto L0(r);
  L1():
    goto L2();
  L2():
    family = ldf family;
    check L18() else D2();
  L14():
    warning = ldf warning;
    check L15() else D0();
  D0():
    deopt 5 [];
  D2():
    deopt 11 [];
  L15():
    r4 = dyn warning("extra arguments discarded");
    check L16() else D1();
  L18():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r7 = dyn family(p);
    check L19() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r7];
  L16():
    goto L2();
  L19():
    c1 = `is.object`(r7);
    if c1 then L21() else L22(r7);
  L20(dx1):
    st fam = dx1;
    family1 = ldf family;
    check L24() else D4();
  L21():
    dr = tryDispatchBuiltin.1("$", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(r9):
    r10 = `$`(r9, <sym family>);
    goto L20(r10);
  D4():
    deopt 17 [];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L24():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r12 = dyn family1(p1);
    check L25() else D5();
  D5():
    deopt 19 [r12];
  L25():
    c2 = `is.object`(r12);
    if c2 then L27() else L28(r12);
  L26(dx3):
    st dispersion = dx3;
    object5 = ld object;
    check L30() else D6();
  L27():
    dr2 = tryDispatchBuiltin.1("$", r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(r14):
    r15 = `$`(r14, <sym dispersion>);
    goto L26(r15);
  D6():
    deopt 22 [object5];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(dx2);
  L30():
    object6 = force? object5;
    checkMissing(object6);
    c3 = `is.object`(object6);
    if c3 then L32() else L33(object6);
  L31(dx5):
    st p = dx5;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L32():
    dr4 = tryDispatchBuiltin.1("$", object6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(dr4);
  L33(object8):
    r16 = `$`(object8, <sym rank>);
    goto L31(r16);
  L3(r18):
    r19 = `!`(r18);
    c5 = `as.logical`(r19);
    if c5 then L38() else L4();
  L34():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L35():
    dispersion = ld dispersion;
    check L37() else D7();
  L36():
    r17 = dyn base1(<sym dispersion>);
    goto L3(r17);
  D7():
    deopt 27 [dispersion];
  L4():
    _in_ = ldf `%in%`;
    check L47() else D11();
  L8():
    p8 = ld p;
    check L52() else D14();
  L37():
    dispersion1 = force? dispersion;
    checkMissing(dispersion1);
    c4 = `==`(dispersion1, NULL);
    goto L3(c4);
  L38():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  D11():
    deopt 45 [];
  D14():
    deopt 56 [p8];
  L5(r21):
    c6 = `as.logical`(r21);
    if c6 then L43() else L6();
  L39():
    dispersion2 = ld dispersion;
    check L41() else D8();
  L40():
    r20 = dyn base2(<sym dispersion>);
    goto L5(r20);
  L47():
    p4 = prom<V +>{
      fam = ld fam;
      fam1 = force? fam;
      checkMissing(fam1);
      return fam1;
    };
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c7 = ldf c in base;
      r29 = dyn c7("gaussian", "Gamma", "inverse.gaussian");
      goto L0(r29);
    L2():
      r27 = dyn base3("gaussian", "Gamma", "inverse.gaussian");
      goto L0(r27);
    };
    r31 = dyn _in_(p4, p5);
    check L48() else D12();
  L52():
    p9 = force? p8;
    checkMissing(p9);
    object9 = ld object;
    check L53() else D15();
  D8():
    deopt 33 [dispersion2];
  D12():
    deopt 48 [r31];
  D15():
    deopt 57 [p9, object9];
  L6():
    goto L7(NULL);
  L7(r24):
    goto L8();
  L41():
    dispersion3 = force? dispersion2;
    checkMissing(dispersion3);
    is_na = ldf `is.na` in base;
    r22 = dyn is_na(dispersion3);
    check L42() else D9();
  L43():
    p2 = ld p;
    check L44() else D10();
  L48():
    c8 = `as.logical`(r31);
    if c8 then L49() else L9();
  L53():
    object10 = force? object9;
    checkMissing(object10);
    c9 = `is.object`(object10);
    if c9 then L55() else L56(p9, object10);
  D9():
    deopt 36 [r22];
  D10():
    deopt 37 [p2];
  L9():
    goto L8();
  L42():
    goto L5(r22);
  L44():
    p3 = force? p2;
    checkMissing(p3);
    r23 = `+`(p3, 1.0);
    st p = r23;
    goto L7(r23);
  L49():
    p6 = ld p;
    check L50() else D13();
  L54(p13, dx7):
    r34 = `/`(dx7, 2.0);
    r35 = `-`(p13, r34);
    st val = r35;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L55():
    dr6 = tryDispatchBuiltin.1("$", object10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(p9, dr6);
  L56(p11, object12):
    r33 = `$`(object12, <sym aic>);
    goto L54(p11, r33);
  D13():
    deopt 49 [p6];
  L10(r37):
    l = ld val;
    attr__ = ldf `attr<-`;
    check L69() else D19();
  L50():
    p7 = force? p6;
    checkMissing(p7);
    r32 = `+`(p7, 1.0);
    st p = r32;
    goto L8();
  L57():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L54(p9, dx6);
  L58():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L59():
    r36 = dyn base4(<lang `!`(is.na(`$`(object, residuals)))>);
    goto L10(r36);
  D19():
    deopt 77 [r37, l, r37];
  L11(r39):
    r42 = `!`(r39);
    sum = ldf sum in base;
    r43 = dyn sum(r42);
    check L68() else D18();
  L60():
    object13 = ld object;
    check L62() else D16();
  L61():
    r38 = dyn base5(<lang `$`(object, residuals)>);
    goto L11(r38);
  L69():
    r44 = dyn attr__(l, NULL, "nobs", r37);
    check L70() else D20();
  D16():
    deopt 68 [object13];
  D18():
    deopt 75 [r43];
  D20():
    deopt 80 [r37, r44];
  L62():
    object14 = force? object13;
    checkMissing(object14);
    c10 = `is.object`(object14);
    if c10 then L64() else L65(object14);
  L68():
    goto L10(r43);
  L70():
    st val = r44;
    p14 = ld p;
    check L71() else D21();
  D21():
    deopt 82 [p14];
  L63(dx9):
    is_na1 = ldf `is.na` in base;
    r41 = dyn is_na1(dx9);
    check L67() else D17();
  L64():
    dr8 = tryDispatchBuiltin.1("$", object14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L66() else L65(dr8);
  L65(object16):
    r40 = `$`(object16, <sym residuals>);
    goto L63(r40);
  L71():
    p15 = force? p14;
    checkMissing(p15);
    l1 = ld val;
    attr__1 = ldf `attr<-`;
    check L72() else D22();
  D17():
    deopt 72 [r41];
  D22():
    deopt 85 [p15, l1, p15];
  L66():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L63(dx8);
  L67():
    goto L11(r41);
  L72():
    r45 = dyn attr__1(l1, NULL, "df", p15);
    check L73() else D23();
  D23():
    deopt 88 [p15, r45];
  L73():
    st val = r45;
    l2 = ld val;
    class__ = ldf `class<-`;
    check L74() else D24();
  D24():
    deopt 93 ["logLik", l2, "logLik"];
  L74():
    r46 = dyn class__(l2, NULL, "logLik");
    check L75() else D25();
  D25():
    deopt 95 ["logLik", r46];
  L75():
    st val = r46;
    val = ld val;
    check L76() else D26();
  D26():
    deopt 97 [val];
  L76():
    val1 = force? val;
    checkMissing(val1);
    popenv;
    return val1;
  }
}