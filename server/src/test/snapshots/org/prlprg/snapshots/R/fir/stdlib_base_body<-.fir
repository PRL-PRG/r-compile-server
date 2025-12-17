fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1158127003`;
    st `body<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1158127003`(fun, envir, value) {
  (reg fun:*, reg envir:*, reg value:*) -+> V { var fun:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg environment:cls, reg fun1:*, reg fun2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg fun3:*, reg fun4:V, reg is_function:cls, reg r5:V, reg r6:V, reg c:L, reg warning:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg value1:*, reg value2:V, reg is_expression:cls, reg r11:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg value3:*, reg value4:V, reg length:cls, reg r14:V, reg r15:V, reg c2:L, reg warning1:cls, reg r16:V, reg value5:*, reg value6:V, reg c3:L, reg value8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg as_function:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg formals:cls, reg fun5:*, reg fun6:V, reg p2:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg value9:*, reg value10:V, reg c4:V, reg c5:L, reg c6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg c10:L, reg r26:V, reg value11:*, reg value12:V, reg is_atomic:cls, reg r27:V, reg c11:L, reg c12:V, reg c14:L, reg c15:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg c19:L, reg r29:V, reg value13:*, reg value14:V, reg is_list:cls, reg r30:V, reg c20:L, reg c21:V, reg c23:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg value15:*, reg value16:V, reg list:cls, reg r33:V, reg r34:V, reg value17:*, reg value18:V, reg c24:cls, reg r35:V, reg p3:p(V +), reg envir1:*, reg envir2:V, reg p4:p(V +), reg r38:V |
    mkenv;
    st fun = fun;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        fun1 = ld fun;
        fun2 = force? fun1;
        checkMissing(fun2);
        return fun2;
      };
      r1 = dyn environment(p);
      return r1;
    };
    goto L1(p1);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    st value = value;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L16() else L3();
  L12():
    fun3 = ld fun;
    check L14() else D0();
  L13():
    r3 = dyn base(<sym fun>);
    goto L2(r3);
  D0():
    deopt 2 [fun3];
  L3():
    goto L4();
  L4():
    sym1 = ldf `is.expression`;
    base1 = ldf `is.expression` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L14():
    fun4 = force? fun3;
    checkMissing(fun4);
    is_function = ldf `is.function` in base;
    r5 = dyn is_function(fun4);
    check L15() else D1();
  L16():
    warning = ldf warning;
    check L17() else D2();
  D1():
    deopt 5 [r5];
  D2():
    deopt 8 [];
  L5(r10):
    c1 = `as.logical`(r10);
    if c1 then L24() else L6();
  L15():
    goto L2(r5);
  L17():
    r7 = dyn warning("'fun' is not a function");
    check L18() else D3();
  L20():
    value1 = ld value;
    check L22() else D4();
  L21():
    r9 = dyn base1(<sym value>);
    goto L5(r9);
  D3():
    deopt 10 [r7];
  D4():
    deopt 15 [value1];
  L6():
    goto L11();
  L11():
    as_function = ldf `as.function`;
    check L38() else D11();
  L18():
    goto L4();
  L22():
    value2 = force? value1;
    checkMissing(value2);
    is_expression = ldf `is.expression` in base;
    r11 = dyn is_expression(value2);
    check L23() else D5();
  L24():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D5():
    deopt 18 [r11];
  D11():
    deopt 42 [];
  L7(r13):
    r15 = `>`(r13, 1);
    c2 = `as.logical`(r15);
    if c2 then L29() else L8();
  L23():
    goto L5(r11);
  L25():
    value3 = ld value;
    check L27() else D6();
  L26():
    r12 = dyn base2(<sym value>);
    goto L7(r12);
  L38():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L9() else L10();
    L0(r20):
      return r20;
    L9():
      formals = ldf formals;
      p2 = prom<V +>{
        fun5 = ld fun;
        fun6 = force? fun5;
        checkMissing(fun6);
        return fun6;
      };
      r22 = dyn formals(p2);
      sym4 = ldf `is.null`;
      base4 = ldf `is.null` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L11() else L12();
    L10():
      r19 = dyn base3(<lang formals(fun)>, <lang if(`||`(`||`(is.null(value), is.atomic(value)), is.list(value)), list(value), value)>);
      goto L0(r19);
    L1(r24):
      c5 = `as.logical`(r24);
      if c5 then L2(c5) else L13();
    L11():
      value9 = ld value;
      value10 = force? value9;
      checkMissing(value10);
      c4 = `==`(value10, NULL);
      goto L1(c4);
    L12():
      r23 = dyn base4(<sym value>);
      goto L1(r23);
    L2(c6):
      c14 = `as.logical`(c6);
      if c14 then L4(c14) else L17();
    L13():
      sym5 = ldf `is.atomic`;
      base5 = ldf `is.atomic` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L14() else L15();
    L3(c10, r26):
      c11 = `as.logical`(r26);
      c12 = `||`(c10, c11);
      goto L2(c12);
    L4(c15):
      c23 = `as.logical`(c15);
      if c23 then L21() else L6();
    L14():
      value11 = ld value;
      value12 = force? value11;
      checkMissing(value12);
      is_atomic = ldf `is.atomic` in base;
      r27 = dyn is_atomic(value12);
      goto L3(c5, r27);
    L15():
      r25 = dyn base5(<sym value>);
      goto L3(c5, r25);
    L17():
      sym6 = ldf `is.list`;
      base6 = ldf `is.list` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L18() else L19();
    L5(c19, r29):
      c20 = `as.logical`(r29);
      c21 = `||`(c19, c20);
      goto L4(c21);
    L6():
      value17 = ld value;
      value18 = force? value17;
      checkMissing(value18);
      goto L8(value18);
    L8(r34):
      c24 = ldf c in base;
      r35 = dyn c24(r22, r34);
      goto L0(r35);
    L18():
      value13 = ld value;
      value14 = force? value13;
      checkMissing(value14);
      is_list = ldf `is.list` in base;
      r30 = dyn is_list(value14);
      goto L5(c14, r30);
    L19():
      r28 = dyn base6(<sym value>);
      goto L5(c14, r28);
    L21():
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L22() else L23();
    L7(r32):
      goto L8(r32);
    L22():
      value15 = ld value;
      value16 = force? value15;
      checkMissing(value16);
      list = ldf list in base;
      r33 = dyn list(value16);
      goto L7(r33);
    L23():
      r31 = dyn base7(<sym value>);
      goto L7(r31);
    };
    p4 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r38 = dyn as_function(p3, p4);
    check L39() else D12();
  D6():
    deopt 21 [value3];
  D12():
    deopt 45 [r38];
  L8():
    goto L9();
  L9():
    value5 = ld value;
    check L33() else D10();
  L27():
    value4 = force? value3;
    checkMissing(value4);
    length = ldf length in base;
    r14 = dyn length(value4);
    check L28() else D7();
  L29():
    warning1 = ldf warning;
    check L30() else D8();
  L39():
    popenv;
    return r38;
  D7():
    deopt 24 [r14];
  D8():
    deopt 28 [];
  D10():
    deopt 33 [value5];
  L28():
    goto L7(r14);
  L30():
    r16 = dyn warning1("using the first element of 'value' of type \"expression\"");
    check L31() else D9();
  L33():
    value6 = force? value5;
    checkMissing(value6);
    c3 = `is.object`(value6);
    if c3 then L34() else L35(value6);
  D9():
    deopt 30 [r16];
  L10(dx1):
    st value = dx1;
    goto L11();
  L31():
    goto L9();
  L34():
    dr = tryDispatchBuiltin.1("[[", value6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(value8):
    __ = ldf `[[` in base;
    r18 = dyn __(value8, 1);
    goto L10(r18);
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  }
}