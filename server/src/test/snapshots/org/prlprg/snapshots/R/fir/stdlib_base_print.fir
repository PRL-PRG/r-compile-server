fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg ts:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg print:cls, reg i5:*, reg i6:V, reg r8:V, reg p2:p(V +), reg r10:V, reg attenu:*, reg attenu1:V, reg c1:L, reg attenu3:V, reg dr:V, reg dc:L, reg dx:V, reg r11:V, reg esoph:*, reg esoph1:V, reg c2:L, reg esoph3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg c3:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg r13:V, reg __:cls, reg r14:V, reg esoph4:*, reg esoph5:V, reg c4:L, reg esoph7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r15:V, reg c5:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg r16:V, reg __1:cls, reg r17:V, reg set_seed:cls, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg round:cls, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg round1:cls, reg r24:V, reg table:cls, reg t1:*, reg t2:V, reg p3:p(V +), reg t3:*, reg t4:V, reg p4:p(V +), reg r27:V, reg print1:cls, reg table1:cls, reg t5:*, reg t6:V, reg p5:p(V +), reg t7:*, reg t8:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg r32:V, reg table2:cls, reg t9:*, reg t10:V, reg p8:p(V +), reg t11:*, reg t12:V, reg p9:p(V +), reg r35:V, reg T:*, reg T1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg T4:V, reg r39:R, reg r40:V, reg round2:cls, reg r41:V, reg r42:V, reg r43:V, reg r44:V, reg print2:cls, reg T5:*, reg T6:V, reg p10:p(V +), reg r46:V, reg print_table:cls, reg T7:*, reg T8:V, reg c6:L, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg __2:cls, reg r47:V, reg r48:V, reg p11:p(V +), reg r50:V, reg table3:cls, reg r51:V |
    mkenv;
    r = clos inner2044426018;
    st print = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0():
    ts = ldf ts;
    check L12() else D2();
  L8():
    require = ldf require;
    check L10() else D0();
  L9():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L10():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L11() else D1();
  L12():
    p1 = prom<V +>{
      r5 = `:`(1.0, 20.0);
      return r5;
    };
    r7 = dyn ts(p1);
    check L13() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r7];
  L11():
    goto L0();
  L13():
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L14() else L2();
  L2():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    print = ldf print;
    check L15() else D4();
  L14():
    attenu = ld attenu;
    check L17() else D6();
  D4():
    deopt 15 [i2];
  D6():
    deopt 21 [attenu];
  L15():
    p2 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      r8 = `:`(1.0, i6);
      return r8;
    };
    r10 = dyn print(p2);
    check L16() else D5();
  L17():
    attenu1 = force? attenu;
    checkMissing(attenu1);
    c1 = `is.object`(attenu1);
    if c1 then L19() else L20(attenu1);
  D5():
    deopt 17 [i2, r10];
  L16():
    goto L1(i2);
  L18():
    esoph = ld esoph;
    check L22() else D7();
  L19():
    dr = tryDispatchBuiltin.1("$", attenu1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(attenu3):
    r11 = `$`(attenu3, <sym station>);
    goto L18();
  D7():
    deopt 24 [esoph];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18();
  L22():
    esoph1 = force? esoph;
    checkMissing(esoph1);
    c2 = `is.object`(esoph1);
    if c2 then L24() else L25(esoph1);
  L23(dx3):
    c3 = `is.object`(dx3);
    if c3 then L27() else L28(dx3);
  L24():
    dr2 = tryDispatchBuiltin.1("$", esoph1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(esoph3):
    r12 = `$`(esoph3, <sym agegp>);
    goto L23(r12);
  L3():
    esoph4 = ld esoph;
    check L30() else D8();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(dr4);
  L28(dx5):
    r13 = `:`(1.0, 12.0);
    __ = ldf `[` in base;
    r14 = dyn __(dx5, r13);
    goto L3();
  D8():
    deopt 32 [esoph4];
  L29():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3();
  L30():
    esoph5 = force? esoph4;
    checkMissing(esoph5);
    c4 = `is.object`(esoph5);
    if c4 then L32() else L33(esoph5);
  L31(dx9):
    c5 = `is.object`(dx9);
    if c5 then L35() else L36(dx9);
  L32():
    dr6 = tryDispatchBuiltin.1("$", esoph5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(dr6);
  L33(esoph7):
    r15 = `$`(esoph7, <sym alcgp>);
    goto L31(r15);
  L4():
    set_seed = ldf `set.seed`;
    check L38() else D9();
  L34():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L31(dx8);
  L35():
    dr8 = tryDispatchBuiltin.1("[", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L37() else L36(dr8);
  L36(dx11):
    r16 = `:`(1.0, 12.0);
    __1 = ldf `[` in base;
    r17 = dyn __1(dx11, r16);
    goto L4();
  D9():
    deopt 41 [];
  L37():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L4();
  L38():
    r18 = dyn set_seed(521.0);
    check L39() else D10();
  D10():
    deopt 43 [r18];
  L39():
    sym1 = ldf round;
    base1 = ldf round in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L5(r20):
    st t1 = r20;
    sym2 = ldf round;
    base2 = ldf round in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L40():
    round = ldf round in base;
    r21 = dyn round(<lang abs(rt(200.0, df=1.8))>);
    goto L5(r21);
  L41():
    r19 = dyn base1(<lang abs(rt(200.0, df=1.8))>);
    goto L5(r19);
  L6(r23):
    st t2 = r23;
    table = ldf table;
    check L44() else D11();
  L42():
    round1 = ldf round in base;
    r24 = dyn round1(<lang abs(rt(200.0, df=1.4))>);
    goto L6(r24);
  L43():
    r22 = dyn base2(<lang abs(rt(200.0, df=1.4))>);
    goto L6(r22);
  D11():
    deopt 53 [];
  L44():
    p3 = prom<V +>{
      t1 = ld t1;
      t2 = force? t1;
      checkMissing(t2);
      return t2;
    };
    p4 = prom<V +>{
      t3 = ld t2;
      t4 = force? t3;
      checkMissing(t4);
      return t4;
    };
    r27 = dyn table(p3, p4);
    check L45() else D12();
  D12():
    deopt 56 [r27];
  L45():
    print1 = ldf print;
    check L46() else D13();
  D13():
    deopt 58 [];
  L46():
    p7 = prom<V +>{
      table1 = ldf table;
      p5 = prom<V +>{
        t5 = ld t1;
        t6 = force? t5;
        checkMissing(t6);
        return t6;
      };
      p6 = prom<V +>{
        t7 = ld t2;
        t8 = force? t7;
        checkMissing(t8);
        return t8;
      };
      r30 = dyn table1(p5, p6);
      return r30;
    };
    r32 = dyn print1[, `zero.print`](p7, ".");
    check L47() else D14();
  D14():
    deopt 62 [r32];
  L47():
    table2 = ldf table;
    check L48() else D15();
  D15():
    deopt 64 [];
  L48():
    p8 = prom<V +>{
      t9 = ld t2;
      t10 = force? t9;
      checkMissing(t10);
      return t10;
    };
    p9 = prom<V +>{
      t11 = ld t1;
      t12 = force? t11;
      checkMissing(t12);
      return t12;
    };
    r35 = dyn table2(p8, p9);
    check L49() else D16();
  D16():
    deopt 67 [r35];
  L49():
    st T = r35;
    T = ld T;
    check L50() else D17();
  D17():
    deopt 69 [T];
  L50():
    T1 = force? T;
    checkMissing(T1);
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L7(T4, r39, r40):
    r42 = `/`(r40, 4.0);
    r43 = `+`(r39, r42);
    r44 = `*`(T4, r43);
    st T = r44;
    print2 = ldf print;
    check L53() else D18();
  L51():
    round2 = ldf round in base;
    r41 = dyn round2(<lang rlnorm(length(T))>);
    goto L7(T1, 1.0, r41);
  L52():
    r38 = dyn base3(<lang rlnorm(length(T))>);
    goto L7(T1, 1.0, r38);
  D18():
    deopt 80 [];
  L53():
    p10 = prom<V +>{
      T5 = ld T;
      T6 = force? T5;
      checkMissing(T6);
      return T6;
    };
    r46 = dyn print2[, `zero.print`](p10, ".");
    check L54() else D19();
  D19():
    deopt 84 [r46];
  L54():
    print_table = ldf `print.table`;
    check L55() else D20();
  D20():
    deopt 86 [];
  L55():
    p11 = prom<V +>{
      T7 = ld T;
      T8 = force? T7;
      checkMissing(T8);
      c6 = `is.object`(T8);
      if c6 then L1() else L2();
    L0(dx15):
      r48 = `*`(dx15, 1.0E9);
      return r48;
    L1():
      dr10 = tryDispatchBuiltin.1("[", T8);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r47 = dyn __2(T8, <missing>, <int 2, 3, 4, 5, 6, 7, 8>);
      goto L0(r47);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx14);
    };
    r50 = dyn print_table[, digits, `zero.print`](p11, 3.0, ".");
    check L56() else D21();
  D21():
    deopt 92 [r50];
  L56():
    table3 = ldf table;
    check L57() else D22();
  D22():
    deopt 94 [];
  L57():
    r51 = dyn table3(1.0, NA_LGL);
    check L58() else D23();
  D23():
    deopt 97 [r51];
  L58():
    popenv;
    return r51;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("print");
    goto L0(r2);
  L2():
    r = dyn base("print");
    goto L0(r);
  }
}