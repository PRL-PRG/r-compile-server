fun main() {
  () -+> V { reg r:cls, reg ARMAacf:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg acf2AR:cls, reg Acf:*, reg Acf1:V, reg p1:p(V +), reg r7:V |
    mkenv;
    r = clos inner3697006208;
    st acf2AR = r;
    ARMAacf = ldf ARMAacf;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(0.6, 0.3, -0.2);
      goto L0(r3);
    L2():
      r1 = dyn base(0.6, 0.3, <lang `-`(0.2)>);
      goto L0(r1);
    };
    r5 = dyn ARMAacf(p);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    st Acf = r5;
    acf2AR = ldf acf2AR;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      Acf = ld Acf;
      Acf1 = force? Acf;
      checkMissing(Acf1);
      return Acf1;
    };
    r7 = dyn acf2AR(p1);
    check L3() else D3();
  D3():
    deopt 11 [r7];
  L3():
    popenv;
    return r7;
  }
}
fun inner3697006208(acf) {
  (reg acf:*) -+> V { var acf:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg acf1:*, reg acf2:V, reg drop:cls, reg r4:V, reg as_double:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg r8:*, reg r9:V, reg length:cls, reg r10:V, reg r11:V, reg order_max:*, reg order_max1:V, reg r12:V, reg c:L, reg stop:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg C_eureka:*, reg C_eureka1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg order_max2:*, reg order_max3:V, reg as_integer:cls, reg r19:V, reg r20:*, reg r21:V, reg r22:*, reg r23:V, reg double:cls, reg order_max4:*, reg order_max5:V, reg r24:V, reg p:p(V +), reg r26:V, reg double1:cls, reg order_max6:*, reg order_max7:V, reg p1:p(V +), reg r28:V, reg double2:cls, reg order_max8:*, reg order_max9:V, reg p2:p(V +), reg r30:V, reg _Fortran:cls, reg r31:V, reg paste0:cls, reg order_max10:*, reg order_max11:V, reg r32:V, reg p3:p(V +), reg r34:V, reg matrix:cls, reg z:*, reg z1:V, reg c1:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r35:V, reg p4:p(V +), reg order_max12:*, reg order_max13:V, reg p5:p(V +), reg order_max14:*, reg order_max15:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg nm:*, reg nm1:V, reg order_max16:*, reg order_max17:V, reg r41:V, reg list:cls, reg r42:V, reg p7:p(V +), reg r44:V |
    mkenv;
    st acf = acf;
    sym = ldf `as.double`;
    base = ldf `as.double` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st r = r1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L7():
    sym1 = ldf drop;
    base1 = ldf drop in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L8():
    r = dyn base(<lang drop(acf)>);
    goto L0(r);
  L1(r3):
    as_double = ldf `as.double` in base;
    r5 = dyn as_double(r3);
    check L13() else D2();
  L2(r7):
    r11 = `-`(r7, 1.0);
    st `order.max` = r11;
    order_max = ld `order.max`;
    check L18() else D5();
  L9():
    acf1 = ld acf;
    check L11() else D0();
  L10():
    r2 = dyn base1(<sym acf>);
    goto L1(r2);
  L14():
    r8 = ld r;
    check L16() else D3();
  L15():
    r6 = dyn base2(<sym r>);
    goto L2(r6);
  D0():
    deopt 4 [acf1];
  D2():
    deopt 9 [r5];
  D3():
    deopt 13 [r8];
  D5():
    deopt 20 [order_max];
  L11():
    acf2 = force? acf1;
    checkMissing(acf2);
    drop = ldf drop in base;
    r4 = dyn drop(acf2);
    check L12() else D1();
  L13():
    goto L0(r5);
  L16():
    r9 = force? r8;
    checkMissing(r9);
    length = ldf length in base;
    r10 = dyn length(r9);
    check L17() else D4();
  L18():
    order_max1 = force? order_max;
    checkMissing(order_max1);
    r12 = `<=`(order_max1, 0.0);
    c = `as.logical`(r12);
    if c then L19() else L3();
  D1():
    deopt 7 [r4];
  D4():
    deopt 16 [r10];
  L3():
    goto L4();
  L4():
    sym3 = ldf `.Fortran`;
    base3 = ldf `.Fortran` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L12():
    goto L1(r4);
  L17():
    goto L2(r10);
  L19():
    stop = ldf stop;
    check L20() else D6();
  D6():
    deopt 25 [];
  L5(r16):
    st z = r16;
    paste0 = ldf paste0;
    check L39() else D20();
  L20():
    r13 = dyn stop("'acf' must be of length two or more");
    check L21() else D7();
  L23():
    C_eureka = ld C_eureka;
    check L25() else D8();
  L24():
    r15 = dyn base3[, , , , coefs, vars, ](<sym C_eureka>, <lang as.integer(order.max)>, <sym r>, <sym r>, <lang double(`^`(order.max, 2.0))>, <lang double(order.max)>, <lang double(order.max)>);
    goto L5(r15);
  D7():
    deopt 27 [r13];
  D8():
    deopt 32 [C_eureka];
  D20():
    deopt 62 [];
  L21():
    goto L4();
  L25():
    C_eureka1 = force? C_eureka;
    checkMissing(C_eureka1);
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L39():
    p3 = prom<V +>{
      order_max10 = ld `order.max`;
      order_max11 = force? order_max10;
      checkMissing(order_max11);
      r32 = `:`(1, order_max11);
      return r32;
    };
    r34 = dyn paste0("ar(", p3, ")");
    check L40() else D21();
  D21():
    deopt 66 [r34];
  L6(r18):
    r20 = ld r;
    check L30() else D11();
  L26():
    order_max2 = ld `order.max`;
    check L28() else D9();
  L27():
    r17 = dyn base4(<sym order.max>);
    goto L6(r17);
  L40():
    st nm = r34;
    matrix = ldf matrix;
    check L41() else D22();
  D9():
    deopt 36 [order_max2];
  D11():
    deopt 40 [r20];
  D22():
    deopt 69 [];
  L28():
    order_max3 = force? order_max2;
    checkMissing(order_max3);
    as_integer = ldf `as.integer` in base;
    r19 = dyn as_integer(order_max3);
    check L29() else D10();
  L30():
    r21 = force? r20;
    checkMissing(r21);
    r22 = ld r;
    check L31() else D12();
  L41():
    p4 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c1 = `is.object`(z1);
      if c1 then L1() else L2(z1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", z1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(z3):
      r35 = `$`(z3, <sym coefs>);
      goto L0(r35);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p5 = prom<V +>{
      order_max12 = ld `order.max`;
      order_max13 = force? order_max12;
      checkMissing(order_max13);
      return order_max13;
    };
    p6 = prom<V +>{
      order_max14 = ld `order.max`;
      order_max15 = force? order_max14;
      checkMissing(order_max15);
      return order_max15;
    };
    p7 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      order_max16 = ld `order.max`;
      order_max17 = force? order_max16;
      checkMissing(order_max17);
      r41 = `:`(1, order_max17);
      list = ldf list in base;
      r42 = dyn list(nm1, r41);
      goto L0(r42);
    L2():
      r39 = dyn base5(<sym nm>, <lang `:`(1, order.max)>);
      goto L0(r39);
    };
    r44 = dyn matrix[, , , dimnames](p4, p5, p6, p7);
    check L42() else D23();
  D10():
    deopt 39 [r19];
  D12():
    deopt 42 [r22];
  D23():
    deopt 75 [r44];
  L29():
    goto L6(r19);
  L31():
    r23 = force? r22;
    checkMissing(r23);
    double = ldf double;
    check L32() else D13();
  L42():
    popenv;
    return r44;
  D13():
    deopt 45 [];
  L32():
    p = prom<V +>{
      order_max4 = ld `order.max`;
      order_max5 = force? order_max4;
      checkMissing(order_max5);
      r24 = `^`(order_max5, 2.0);
      return r24;
    };
    r26 = dyn double(p);
    check L33() else D14();
  D14():
    deopt 47 [r26];
  L33():
    double1 = ldf double;
    check L34() else D15();
  D15():
    deopt 50 [];
  L34():
    p1 = prom<V +>{
      order_max6 = ld `order.max`;
      order_max7 = force? order_max6;
      checkMissing(order_max7);
      return order_max7;
    };
    r28 = dyn double1(p1);
    check L35() else D16();
  D16():
    deopt 52 [r28];
  L35():
    double2 = ldf double;
    check L36() else D17();
  D17():
    deopt 55 [];
  L36():
    p2 = prom<V +>{
      order_max8 = ld `order.max`;
      order_max9 = force? order_max8;
      checkMissing(order_max9);
      return order_max9;
    };
    r30 = dyn double2(p2);
    check L37() else D18();
  D18():
    deopt 57 [r30];
  L37():
    _Fortran = ldf `.Fortran` in base;
    r31 = dyn _Fortran(C_eureka1, r18, r21, r23, r26, r28, r30);
    check L38() else D19();
  D19():
    deopt 59 [r31];
  L38():
    goto L5(r31);
  }
}