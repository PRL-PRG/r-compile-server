fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner933521238;
    st SweaveHooks = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner933521238(options, run, envir) {
  (reg options:*, reg run:*, reg envir:*) -+> V { var options:*, var run:*, reg run_isMissing:L, reg run_orDefault:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg getOption:cls, reg r3:V, reg c:V, reg c1:L, reg character:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg SweaveHooks:*, reg SweaveHooks1:V, reg names:cls, reg r9:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg i7:I, reg r11:V, reg k:*, reg k1:V, reg nzchar:cls, reg r12:V, reg c3:L, reg i9:I, reg c5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg i12:I, reg c8:L, reg r14:V, reg options1:*, reg options2:V, reg c9:L, reg i14:I, reg c11:L, reg options4:V, reg dr:V, reg dc:L, reg dx:V, reg i16:I, reg c13:L, reg dx1:V, reg k2:*, reg k3:V, reg __:cls, reg r15:V, reg c14:L, reg c15:L, reg c16:V, reg c18:L, reg i19:I, reg c20:V, reg options5:*, reg options6:V, reg c21:L, reg i21:I, reg c23:L, reg options8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i23:I, reg c25:L, reg dx3:V, reg k4:*, reg k5:V, reg __1:cls, reg r16:V, reg c26:L, reg c27:V, reg c29:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg i29:I, reg r18:V, reg SweaveHooks2:*, reg SweaveHooks3:V, reg c30:L, reg i31:I, reg SweaveHooks5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i33:I, reg dx5:V, reg k6:*, reg k7:V, reg __2:cls, reg r19:V, reg is_function:cls, reg r20:V, reg c31:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg i38:I, reg r22:V, reg z:*, reg z1:V, reg k8:*, reg k9:V, reg c32:cls, reg r23:V, reg run1:*, reg run2:V, reg c33:L, reg eval:cls, reg SweaveHooks6:*, reg SweaveHooks7:V, reg c34:L, reg SweaveHooks9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg k10:*, reg k11:V, reg __3:cls, reg r24:V, reg dx8:cls, reg r25:V, reg p1:p(V +), reg envir1:*, reg envir2:V, reg p2:p(V +), reg r28:V, reg i41:I, reg r29:V, reg i42:I, reg r30:V, reg i43:I, reg z2:*, reg z3:V |
    mkenv;
    st options = options;
    run_isMissing = missing.0(run);
    if run_isMissing then L0(FALSE) else L0(run);
  L0(run_orDefault):
    st run = run_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L1() else L2(envir);
  L1():
    p = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    goto L2(p);
  L2(envir_orDefault):
    st envir = envir_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L3(r2):
    c1 = `as.logical`(r2);
    if c1 then L30() else L4();
  L26():
    getOption = ldf getOption;
    check L28() else D0();
  L27():
    r1 = dyn base(<lang `<-`(SweaveHooks, getOption("SweaveHooks"))>);
    goto L3(r1);
  D0():
    deopt 2 [];
  L4():
    character = ldf character;
    check L33() else D2();
  L28():
    r3 = dyn getOption("SweaveHooks");
    check L29() else D1();
  L30():
    popenv;
    return NULL;
  D1():
    deopt 4 [r3];
  D2():
    deopt 13 [];
  L29():
    st SweaveHooks = r3;
    c = `==`(r3, NULL);
    goto L3(c);
  L33():
    r6 = dyn character();
    check L34() else D3();
  D3():
    deopt 14 [r6];
  L34():
    st z = r6;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L6(r8):
    s = toForSeq(r8);
    l = length(s);
    i = 0;
    goto L9(i);
  L35():
    SweaveHooks = ld SweaveHooks;
    check L37() else D4();
  L36():
    r7 = dyn base1(<sym SweaveHooks>);
    goto L6(r7);
  D4():
    deopt 18 [SweaveHooks];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L8() else L25();
  L37():
    SweaveHooks1 = force? SweaveHooks;
    checkMissing(SweaveHooks1);
    names = ldf names in base;
    r9 = dyn names(SweaveHooks1);
    check L38() else D5();
  D5():
    deopt 21 [r9];
  L8():
    z2 = ld z;
    check L81() else D21();
  L25():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L38():
    goto L6(r9);
  D21():
    deopt 80 [z2];
  L10(i7, r11):
    c3 = `as.logical`(r11);
    if c3 then L43() else L11(i7, c3);
  L39():
    k = ld k;
    check L41() else D6();
  L40():
    r10 = dyn base2(<sym k>);
    goto L10(i2, r10);
  L81():
    z3 = force? z2;
    checkMissing(z3);
    popenv;
    return z3;
  D6():
    deopt 26 [i2, k];
  L11(i9, c5):
    c18 = `as.logical`(c5);
    if c18 then L52() else L14(i9, c18);
  L41():
    k1 = force? k;
    checkMissing(k1);
    nzchar = ldf nzchar in base;
    r12 = dyn nzchar(k1);
    check L42() else D7();
  L43():
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  D7():
    deopt 29 [i2, r12];
  L12(i12, c8, r14):
    c15 = `as.logical`(r14);
    c16 = `&&`(c8, c15);
    goto L11(i12, c16);
  L14(i19, c20):
    c29 = `as.logical`(c20);
    if c29 then L59() else L16();
  L42():
    goto L10(i2, r12);
  L44():
    options1 = ld options;
    check L46() else D8();
  L45():
    r13 = dyn base3(<lang `[[`(options, k)>);
    goto L12(i7, c3, r13);
  L52():
    options5 = ld options;
    check L53() else D10();
  D8():
    deopt 31 [i7, c3, options1];
  D10():
    deopt 38 [i9, c18, options5];
  L16():
    goto L24(i19);
  L24(i43):
    goto L9(i43);
  L46():
    options2 = force? options1;
    checkMissing(options2);
    c9 = `is.object`(options2);
    if c9 then L47() else L48(i7, c3, options2);
  L53():
    options6 = force? options5;
    checkMissing(options6);
    c21 = `is.object`(options6);
    if c21 then L54() else L55(i9, c18, options6);
  L59():
    sym4 = ldf `is.function`;
    base4 = ldf `is.function` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L13(i16, c13, dx1):
    c14 = `is.logical`(dx1);
    goto L12(i16, c13, c14);
  L15(i23, c25, dx3):
    c26 = `as.logical`(dx3);
    c27 = `&&`(c25, c26);
    goto L14(i23, c27);
  L17(i29, r18):
    c31 = `as.logical`(r18);
    if c31 then L68() else L19();
  L47():
    dr = tryDispatchBuiltin.1("[[", options2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48(i7, c3, dr);
  L48(i14, c11, options4):
    k2 = ld k;
    check L50() else D9();
  L54():
    dr2 = tryDispatchBuiltin.1("[[", options6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L56() else L55(i9, c18, dr2);
  L55(i21, c23, options8):
    k4 = ld k;
    check L57() else D11();
  L60():
    SweaveHooks2 = ld SweaveHooks;
    check L62() else D12();
  L61():
    r17 = dyn base4(<lang `[[`(SweaveHooks, k)>);
    goto L17(i19, r17);
  D9():
    deopt 33 [i14, c11, options4, k2];
  D11():
    deopt 40 [i21, c23, options8, k4];
  D12():
    deopt 46 [i19, SweaveHooks2];
  L19():
    goto L23(i29, NULL);
  L23(i42, r30):
    goto L24(i42);
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(i7, c3, dx);
  L50():
    k3 = force? k2;
    __ = ldf `[[` in base;
    r15 = dyn __(options4, k3);
    goto L13(i14, c11, r15);
  L56():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(i9, c18, dx2);
  L57():
    k5 = force? k4;
    __1 = ldf `[[` in base;
    r16 = dyn __1(options8, k5);
    goto L15(i21, c23, r16);
  L62():
    SweaveHooks3 = force? SweaveHooks2;
    checkMissing(SweaveHooks3);
    c30 = `is.object`(SweaveHooks3);
    if c30 then L63() else L64(i19, SweaveHooks3);
  L68():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L18(i33, dx5):
    is_function = ldf `is.function` in base;
    r20 = dyn is_function(dx5);
    check L67() else D14();
  L20(i38, r22):
    st z = r22;
    run1 = ld run;
    check L74() else D18();
  L63():
    dr4 = tryDispatchBuiltin.1("[[", SweaveHooks3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L65() else L64(i19, dr4);
  L64(i31, SweaveHooks5):
    k6 = ld k;
    check L66() else D13();
  L69():
    z = ld z;
    check L71() else D15();
  L70():
    r21 = dyn base5(<sym z>, <sym k>);
    goto L20(i29, r21);
  D13():
    deopt 48 [i31, SweaveHooks5, k6];
  D14():
    deopt 52 [i33, r20];
  D15():
    deopt 55 [i29, z];
  D18():
    deopt 62 [i38, run1];
  L65():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(i19, dx4);
  L66():
    k7 = force? k6;
    __2 = ldf `[[` in base;
    r19 = dyn __2(SweaveHooks5, k7);
    goto L18(i31, r19);
  L67():
    goto L17(i33, r20);
  L71():
    z1 = force? z;
    checkMissing(z1);
    k8 = ld k;
    check L72() else D16();
  L74():
    run2 = force? run1;
    checkMissing(run2);
    c33 = `as.logical`(run2);
    if c33 then L75() else L21();
  D16():
    deopt 57 [i29, k8];
  L21():
    goto L22(i38, NULL);
  L22(i41, r29):
    goto L23(i41, r29);
  L72():
    k9 = force? k8;
    checkMissing(k9);
    c32 = ldf c in base;
    r23 = dyn c32(z1, k9);
    check L73() else D17();
  L75():
    eval = ldf eval;
    check L76() else D19();
  D17():
    deopt 60 [i29, r23];
  D19():
    deopt 65 [i38];
  L73():
    goto L20(i29, r23);
  L76():
    p1 = prom<V +>{
      SweaveHooks6 = ld SweaveHooks;
      SweaveHooks7 = force? SweaveHooks6;
      checkMissing(SweaveHooks7);
      c34 = `is.object`(SweaveHooks7);
      if c34 then L1() else L2(SweaveHooks7);
    L0(dx7):
      checkFun.0(dx7);
      dx8 = dx7 as cls;
      r25 = dyn dx8();
      return r25;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", SweaveHooks7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(SweaveHooks9):
      k10 = ld k;
      k11 = force? k10;
      __3 = ldf `[[` in base;
      r24 = dyn __3(SweaveHooks9, k11);
      goto L0(r24);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p2 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r28 = dyn eval[, envir](p1, p2);
    check L77() else D20();
  D20():
    deopt 69 [i38, r28];
  L77():
    goto L22(i38, r28);
  }
}