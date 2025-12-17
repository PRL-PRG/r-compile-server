fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner989356644;
    st `formals<-` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner989356644(fun, envir, value) {
  (reg fun:*, reg envir:*, reg value:*) -+> V { var fun:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg environment:cls, reg fun1:*, reg fun2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg fun3:*, reg fun4:V, reg is_function:cls, reg r5:V, reg r6:V, reg c:L, reg warning:cls, reg r7:V, reg body:cls, reg fun5:*, reg fun6:V, reg p2:p(V +), reg r10:V, reg as_function:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg value1:*, reg value2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg bd:*, reg bd1:V, reg c1:V, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg c7:L, reg r16:V, reg bd2:*, reg bd3:V, reg is_atomic:cls, reg r17:V, reg c8:L, reg c9:V, reg c11:L, reg c12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg c16:L, reg r19:V, reg bd4:*, reg bd5:V, reg is_list:cls, reg r20:V, reg c17:L, reg c18:V, reg c20:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg bd6:*, reg bd7:V, reg list:cls, reg r23:V, reg r24:V, reg bd8:*, reg bd9:V, reg c21:cls, reg r25:V, reg p3:p(V +), reg envir1:*, reg envir2:V, reg p4:p(V +), reg r28:V |
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
    if guard then L5() else L6();
  L2(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L9() else L3();
  L5():
    fun3 = ld fun;
    check L7() else D0();
  L6():
    r3 = dyn base(<sym fun>);
    goto L2(r3);
  D0():
    deopt 2 [fun3];
  L3():
    goto L4();
  L4():
    body = ldf body;
    check L13() else D4();
  L7():
    fun4 = force? fun3;
    checkMissing(fun4);
    is_function = ldf `is.function` in base;
    r5 = dyn is_function(fun4);
    check L8() else D1();
  L9():
    warning = ldf warning;
    check L10() else D2();
  D1():
    deopt 5 [r5];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L8():
    goto L2(r5);
  L10():
    r7 = dyn warning("'fun' is not a function");
    check L11() else D3();
  L13():
    p2 = prom<V +>{
      fun5 = ld fun;
      fun6 = force? fun5;
      checkMissing(fun6);
      return fun6;
    };
    r10 = dyn body(p2);
    check L14() else D5();
  D3():
    deopt 10 [r7];
  D5():
    deopt 16 [r10];
  L11():
    goto L4();
  L14():
    st bd = r10;
    as_function = ldf `as.function`;
    check L15() else D6();
  D6():
    deopt 19 [];
  L15():
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L9() else L10();
    L0(r12):
      return r12;
    L9():
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      sym2 = ldf `is.null`;
      base2 = ldf `is.null` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L11() else L12();
    L10():
      r11 = dyn base1(<sym value>, <lang if(`||`(`||`(is.null(bd), is.atomic(bd)), is.list(bd)), list(bd), bd)>);
      goto L0(r11);
    L1(r14):
      c2 = `as.logical`(r14);
      if c2 then L2(c2) else L13();
    L11():
      bd = ld bd;
      bd1 = force? bd;
      checkMissing(bd1);
      c1 = `==`(bd1, NULL);
      goto L1(c1);
    L12():
      r13 = dyn base2(<sym bd>);
      goto L1(r13);
    L2(c3):
      c11 = `as.logical`(c3);
      if c11 then L4(c11) else L17();
    L13():
      sym3 = ldf `is.atomic`;
      base3 = ldf `is.atomic` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L14() else L15();
    L3(c7, r16):
      c8 = `as.logical`(r16);
      c9 = `||`(c7, c8);
      goto L2(c9);
    L4(c12):
      c20 = `as.logical`(c12);
      if c20 then L21() else L6();
    L14():
      bd2 = ld bd;
      bd3 = force? bd2;
      checkMissing(bd3);
      is_atomic = ldf `is.atomic` in base;
      r17 = dyn is_atomic(bd3);
      goto L3(c2, r17);
    L15():
      r15 = dyn base3(<sym bd>);
      goto L3(c2, r15);
    L17():
      sym4 = ldf `is.list`;
      base4 = ldf `is.list` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L18() else L19();
    L5(c16, r19):
      c17 = `as.logical`(r19);
      c18 = `||`(c16, c17);
      goto L4(c18);
    L6():
      bd8 = ld bd;
      bd9 = force? bd8;
      checkMissing(bd9);
      goto L8(bd9);
    L8(r24):
      c21 = ldf c in base;
      r25 = dyn c21(value2, r24);
      goto L0(r25);
    L18():
      bd4 = ld bd;
      bd5 = force? bd4;
      checkMissing(bd5);
      is_list = ldf `is.list` in base;
      r20 = dyn is_list(bd5);
      goto L5(c11, r20);
    L19():
      r18 = dyn base4(<sym bd>);
      goto L5(c11, r18);
    L21():
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L22() else L23();
    L7(r22):
      goto L8(r22);
    L22():
      bd6 = ld bd;
      bd7 = force? bd6;
      checkMissing(bd7);
      list = ldf list in base;
      r23 = dyn list(bd7);
      goto L7(r23);
    L23():
      r21 = dyn base5(<sym bd>);
      goto L7(r21);
    };
    p4 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r28 = dyn as_function(p3, p4);
    check L16() else D7();
  D7():
    deopt 22 [r28];
  L16():
    popenv;
    return r28;
  }
}