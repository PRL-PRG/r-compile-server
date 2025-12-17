fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner984968977;
    st RweaveEvalWithOpt = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner984968977(expr, options) {
  (reg expr:*, reg options:*) -+> V { var expr:*, var options:*, reg options1:*, reg options2:V, reg c:L, reg options4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg try:cls, reg withVisible:cls, reg eval:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg res:*, reg res1:V, reg inherits:cls, reg r10:V, reg c2:L, reg res2:*, reg res3:V, reg options5:*, reg options6:V, reg c3:L, reg options8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r13:V, reg c4:L, reg c5:V, reg options9:*, reg options10:V, reg c7:L, reg c9:L, reg options12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c11:L, reg dx5:V, reg r14:V, reg c12:L, reg c15:L, reg c16:V, reg res4:*, reg res5:V, reg c17:L, reg c20:L, reg c21:L, reg res7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c24:L, reg c25:L, reg dx7:V, reg r15:V, reg c26:L, reg c27:V, reg c30:L, reg c31:V, reg c33:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg _isMethodsDispatchOn:cls, reg r18:V, reg c34:L, reg c36:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg c39:L, reg r20:V, reg res8:*, reg res9:V, reg c40:L, reg c42:L, reg res11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c44:L, reg dx9:V, reg r21:V, reg isS4:cls, reg r22:V, reg c45:L, reg c46:V, reg c48:L, reg __:cls, reg r23:V, reg r24:cls, reg res12:*, reg res13:V, reg c49:L, reg res15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r25:V, reg p4:p(V +), reg r27:V, reg r28:V, reg print:cls, reg res16:*, reg res17:V, reg c50:L, reg res19:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r29:V, reg p5:p(V +), reg r31:V, reg r32:V, reg res20:*, reg res21:V |
    mkenv;
    st expr = expr;
    st options = options;
    options1 = ld options;
    check L14() else D0();
  D0():
    deopt 0 [options1];
  L14():
    options2 = force? options1;
    checkMissing(options2);
    c = `is.object`(options2);
    if c then L16() else L17(options2);
  L15(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L19() else L0();
  L16():
    dr = tryDispatchBuiltin.1("$", options2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(options4):
    r = `$`(options4, <sym eval>);
    goto L15(r);
  L0():
    goto L13();
  L13():
    res20 = ld res;
    check L72() else D17();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L19():
    try = ldf try;
    check L20() else D1();
  D1():
    deopt 4 [];
  D17():
    deopt 62 [res20];
  L20():
    p3 = prom<V +>{
      withVisible = ldf withVisible;
      p2 = prom<V +>{
        eval = ldf eval;
        p = prom<V +>{
          expr1 = ld expr;
          expr2 = force? expr1;
          checkMissing(expr2);
          return expr2;
        };
        p1 = prom<V +>{
          _GlobalEnv = ld `.GlobalEnv`;
          _GlobalEnv1 = force? _GlobalEnv;
          checkMissing(_GlobalEnv1);
          return _GlobalEnv1;
        };
        r3 = dyn eval(p, p1);
        return r3;
      };
      r5 = dyn withVisible(p2);
      return r5;
    };
    r7 = dyn try[, silent](p3, TRUE);
    check L21() else D2();
  L72():
    res21 = force? res20;
    checkMissing(res21);
    popenv;
    return res21;
  D2():
    deopt 8 [r7];
  L21():
    st res = r7;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L1(r9):
    c2 = `as.logical`(r9);
    if c2 then L26() else L2();
  L22():
    res = ld res;
    check L24() else D3();
  L23():
    r8 = dyn base(<sym res>, "try-error");
    goto L1(r8);
  D3():
    deopt 12 [res];
  L2():
    options5 = ld options;
    check L30() else D6();
  L24():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r10 = dyn inherits(res1, "try-error", FALSE);
    check L25() else D4();
  L26():
    res2 = ld res;
    check L27() else D5();
  D4():
    deopt 17 [r10];
  D5():
    deopt 18 [res2];
  D6():
    deopt 23 [options5];
  L25():
    goto L1(r10);
  L27():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  L30():
    options6 = force? options5;
    checkMissing(options6);
    c3 = `is.object`(options6);
    if c3 then L32() else L33(options6);
  L31(dx3):
    c4 = `as.logical`(dx3);
    if c4 then L4(c4) else L35();
  L32():
    dr2 = tryDispatchBuiltin.1("$", options6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(options8):
    r13 = `$`(options8, <sym print>);
    goto L31(r13);
  L4(c5):
    c33 = `as.logical`(c5);
    if c33 then L49() else L6();
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L35():
    options9 = ld options;
    check L36() else D7();
  D7():
    deopt 26 [c4, options9];
  L6():
    goto L12(NULL);
  L12(r32):
    goto L13();
  L36():
    options10 = force? options9;
    checkMissing(options10);
    c7 = `is.object`(options10);
    if c7 then L38() else L39(c4, options10);
  L49():
    sym1 = ldf `.isMethodsDispatchOn`;
    base1 = ldf `.isMethodsDispatchOn` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L7(r17):
    c34 = `as.logical`(r17);
    if c34 then L53() else L8(c34);
  L37(c11, dx5):
    c12 = `as.logical`(dx5);
    if c12 then L41() else L5(c11, c12);
  L38():
    dr4 = tryDispatchBuiltin.1("$", options10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39(c4, dr4);
  L39(c9, options12):
    r14 = `$`(options12, <sym term>);
    goto L37(c9, r14);
  L50():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r18 = dyn _isMethodsDispatchOn();
    check L52() else D9();
  L51():
    r16 = dyn base1();
    goto L7(r16);
  D9():
    deopt 37 [r18];
  L5(c15, c16):
    c30 = `as.logical`(c16);
    c31 = `||`(c15, c30);
    goto L4(c31);
  L8(c36):
    c48 = `as.logical`(c36);
    if c48 then L63() else L10();
  L40():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L37(c4, dx4);
  L41():
    res4 = ld res;
    check L42() else D8();
  L52():
    goto L7(r18);
  L53():
    sym2 = ldf isS4;
    base2 = ldf isS4 in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  D8():
    deopt 29 [c11, c12, res4];
  L9(c39, r20):
    c45 = `as.logical`(r20);
    c46 = `&&`(c39, c45);
    goto L8(c46);
  L10():
    print = ldf print;
    check L68() else D15();
  L11(r28):
    goto L12(r28);
  L42():
    res5 = force? res4;
    checkMissing(res5);
    c17 = `is.object`(res5);
    if c17 then L44() else L45(c11, c12, res5);
  L54():
    res8 = ld res;
    check L56() else D10();
  L55():
    r19 = dyn base2(<lang `$`(res, value)>);
    goto L9(c34, r19);
  L63():
    __ = ldf `::`;
    check L64() else D12();
  D10():
    deopt 40 [c34, res8];
  D12():
    deopt 47 [];
  D15():
    deopt 55 [];
  L43(c24, c25, dx7):
    c26 = `as.logical`(dx7);
    c27 = `&&`(c25, c26);
    goto L5(c24, c27);
  L44():
    dr6 = tryDispatchBuiltin.1("$", res5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L46() else L45(c11, c12, dr6);
  L45(c20, c21, res7):
    r15 = `$`(res7, <sym visible>);
    goto L43(c20, c21, r15);
  L56():
    res9 = force? res8;
    checkMissing(res9);
    c40 = `is.object`(res9);
    if c40 then L58() else L59(c34, res9);
  L64():
    r23 = dyn __("methods", "show");
    check L65() else D13();
  L68():
    p5 = prom<V +>{
      res16 = ld res;
      res17 = force? res16;
      checkMissing(res17);
      c50 = `is.object`(res17);
      if c50 then L1() else L2(res17);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", res17);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(res19):
      r29 = `$`(res19, <sym value>);
      goto L0(r29);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r31 = dyn print(p5);
    check L69() else D16();
  D13():
    deopt 50 [r23];
  D16():
    deopt 57 [r31];
  L46():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L43(c11, c12, dx6);
  L57(c44, dx9):
    isS4 = ldf isS4 in base;
    r22 = dyn isS4(dx9);
    check L61() else D11();
  L58():
    dr8 = tryDispatchBuiltin.1("$", res9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L60() else L59(c34, dr8);
  L59(c42, res11):
    r21 = `$`(res11, <sym value>);
    goto L57(c42, r21);
  L65():
    checkFun.0(r23);
    r24 = r23 as cls;
    p4 = prom<V +>{
      res12 = ld res;
      res13 = force? res12;
      checkMissing(res13);
      c49 = `is.object`(res13);
      if c49 then L1() else L2(res13);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", res13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(res15):
      r25 = `$`(res15, <sym value>);
      goto L0(r25);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r27 = dyn r24(p4);
    check L66() else D14();
  L69():
    goto L11(r31);
  D11():
    deopt 44 [c44, r22];
  D14():
    deopt 53 [r27];
  L60():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L57(c34, dx8);
  L61():
    goto L9(c44, r22);
  L66():
    goto L11(r27);
  }
}