fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner431752210;
    st `contr.sum` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner431752210(n, contrasts, sparse) {
  (reg n:*, reg contrasts:*, reg sparse:*) -+> V { var n:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var sparse:*, reg sparse_isMissing:L, reg sparse_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg n3:*, reg n4:V, reg is_numeric:cls, reg r6:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c6:L, reg r8:V, reg n5:*, reg n6:V, reg length1:cls, reg r9:V, reg r10:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg n7:*, reg n8:V, reg r11:V, reg c13:L, reg c14:V, reg c16:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg n9:*, reg n10:V, reg r14:I, reg r15:V, reg stop:cls, reg r16:V, reg n11:*, reg n12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg levels:*, reg levels1:V, reg as_character:cls, reg r20:V, reg _Diag:cls, reg levels2:*, reg levels3:V, reg p:p(V +), reg sparse1:*, reg sparse2:V, reg p1:p(V +), reg r23:V, reg contrasts1:*, reg contrasts2:V, reg c17:L, reg cont:*, reg cont1:V, reg c18:L, reg cont3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg levels4:*, reg levels5:V, reg length2:cls, reg r26:V, reg r27:V, reg __:cls, reg r28:V, reg l:*, reg c19:L, reg r30:R, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:R, reg r39:R, reg r40:V, reg levels6:*, reg levels7:V, reg length3:cls, reg r41:V, reg ___:cls, reg r42:V, reg l6:*, reg colnames__:cls, reg r43:V, reg cont7:*, reg cont8:V |
    mkenv;
    st n = n;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L0(TRUE) else L0(contrasts);
  L0(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    sparse_isMissing = missing.0(sparse);
    if sparse_isMissing then L1(FALSE) else L1(sparse);
  L1(sparse_orDefault):
    st sparse = sparse_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r1):
    r3 = `<=`(r1, 1);
    c = `as.logical`(r3);
    if c then L23() else L3();
  L19():
    n1 = ld n;
    check L21() else D0();
  L20():
    r = dyn base(<sym n>);
    goto L2(r);
  D0():
    deopt 2 [n1];
  L3():
    n11 = ld n;
    check L45() else D10();
  L11():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L21():
    n2 = force? n1;
    checkMissing(n2);
    length = ldf length in base;
    r2 = dyn length(n2);
    check L22() else D1();
  L23():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  D1():
    deopt 5 [r2];
  D10():
    deopt 37 [n11];
  L4(r5):
    c1 = `as.logical`(r5);
    if c1 then L28() else L5(c1);
  L12(r19):
    st levels = r19;
    _Diag = ldf `.Diag`;
    check L50() else D13();
  L22():
    goto L2(r2);
  L24():
    n3 = ld n;
    check L26() else D2();
  L25():
    r4 = dyn base1(<sym n>);
    goto L4(r4);
  L45():
    n12 = force? n11;
    checkMissing(n12);
    st levels = n12;
    goto L11();
  L46():
    levels = ld levels;
    check L48() else D11();
  L47():
    r18 = dyn base4(<sym levels>);
    goto L12(r18);
  D2():
    deopt 10 [n3];
  D11():
    deopt 42 [levels];
  D13():
    deopt 48 [];
  L5(c3):
    c10 = `as.logical`(c3);
    if c10 then L34() else L7(c10);
  L26():
    n4 = force? n3;
    checkMissing(n4);
    is_numeric = ldf `is.numeric` in base;
    r6 = dyn is_numeric(n4);
    check L27() else D3();
  L28():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L48():
    levels1 = force? levels;
    checkMissing(levels1);
    as_character = ldf `as.character` in base;
    r20 = dyn as_character(levels1);
    check L49() else D12();
  L50():
    p = prom<V +>{
      levels2 = ld levels;
      levels3 = force? levels2;
      checkMissing(levels3);
      return levels3;
    };
    p1 = prom<V +>{
      sparse1 = ld sparse;
      sparse2 = force? sparse1;
      checkMissing(sparse2);
      return sparse2;
    };
    r23 = dyn _Diag[, sparse](p, p1);
    check L51() else D14();
  D3():
    deopt 13 [r6];
  D12():
    deopt 45 [r20];
  D14():
    deopt 52 [r23];
  L6(c6, r8):
    r10 = `==`(r8, 1);
    c7 = `as.logical`(r10);
    c8 = `&&`(c6, c7);
    goto L5(c8);
  L7(c12):
    c16 = `as.logical`(c12);
    if c16 then L37() else L8();
  L27():
    goto L4(r6);
  L29():
    n5 = ld n;
    check L31() else D4();
  L30():
    r7 = dyn base2(<sym n>);
    goto L6(c1, r7);
  L34():
    n7 = ld n;
    check L35() else D6();
  L49():
    goto L12(r20);
  L51():
    st cont = r23;
    contrasts1 = ld contrasts;
    check L52() else D15();
  D4():
    deopt 16 [c1, n5];
  D6():
    deopt 23 [c10, n7];
  D15():
    deopt 54 [contrasts1];
  L8():
    stop = ldf stop;
    check L42() else D8();
  L10(r15):
    goto L11();
  L31():
    n6 = force? n5;
    checkMissing(n6);
    length1 = ldf length in base;
    r9 = dyn length1(n6);
    check L32() else D5();
  L35():
    n8 = force? n7;
    checkMissing(n8);
    r11 = `>`(n8, 1);
    c13 = `as.logical`(r11);
    c14 = `&&`(c10, c13);
    goto L7(c14);
  L37():
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L52():
    contrasts2 = force? contrasts1;
    checkMissing(contrasts2);
    c17 = `as.logical`(contrasts2);
    if c17 then L53() else L13();
  D5():
    deopt 19 [c1, r9];
  D8():
    deopt 34 [];
  L9(r13):
    st levels = r13;
    goto L10(r13);
  L13():
    goto L18();
  L18():
    cont7 = ld cont;
    check L72() else D23();
  L32():
    goto L6(c1, r9);
  L38():
    n9 = ld n;
    check L40() else D7();
  L39():
    r12 = dyn base3(<sym n>);
    goto L9(r12);
  L42():
    r16 = dyn stop("not enough degrees of freedom to define contrasts");
    check L43() else D9();
  L53():
    cont = ld cont;
    check L54() else D16();
  D7():
    deopt 29 [n9];
  D9():
    deopt 36 [r16];
  D16():
    deopt 56 [cont];
  D23():
    deopt 93 [cont7];
  L40():
    n10 = force? n9;
    checkMissing(n10);
    r14 = seq_len(n10);
    goto L9(r14);
  L43():
    goto L10(r16);
  L54():
    cont1 = force? cont;
    checkMissing(cont1);
    c18 = `is.object`(cont1);
    if c18 then L55() else L56(cont1);
  L72():
    cont8 = force? cont7;
    checkMissing(cont8);
    popenv;
    return cont8;
  L14(dx1):
    st cont = dx1;
    l = ld cont;
    c19 = `is.object`(l);
    if c19 then L62() else L63(-1.0, l);
  L55():
    dr = tryDispatchBuiltin.1("[", cont1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L57() else L56(dr);
  L56(cont3):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L15(r25):
    r27 = `-`(<missing>, r25);
    __ = ldf `[` in base;
    r28 = dyn __(cont1, <missing>, r27, FALSE);
    goto L14(r28);
  L16(dx3):
    st cont = dx3;
    l6 = ld cont;
    colnames__ = ldf `colnames<-`;
    check L69() else D21();
  L57():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L58():
    levels4 = ld levels;
    check L60() else D17();
  L59():
    r24 = dyn base5(<sym levels>);
    goto L15(r24);
  L62():
    dr2 = tryDispatchBuiltin.0("[<-", l, -1.0);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(-1.0, dr2);
  L63(r30, l2):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  D17():
    deopt 61 [cont3, levels4];
  D21():
    deopt 87 [NULL, l6, NULL];
  L17(r38, r39, r40):
    ___ = ldf `[<-` in base;
    r42 = dyn ___(l, r40, <missing>, r39);
    goto L16(r42);
  L60():
    levels5 = force? levels4;
    checkMissing(levels5);
    length2 = ldf length in base;
    r26 = dyn length2(levels5);
    check L61() else D18();
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L16(dx2);
  L65():
    levels6 = ld levels;
    check L67() else D19();
  L66():
    r37 = dyn base6(<sym levels>);
    goto L17(r30, -1.0, r37);
  L69():
    r43 = dyn colnames__(l6, NULL, NULL);
    check L70() else D22();
  D18():
    deopt 64 [cont3, r26];
  D19():
    deopt 76 [r30, l2, -1.0, levels6];
  D22():
    deopt 89 [NULL, r43];
  L61():
    goto L15(r26);
  L67():
    levels7 = force? levels6;
    checkMissing(levels7);
    length3 = ldf length in base;
    r41 = dyn length3(levels7);
    check L68() else D20();
  L70():
    st cont = r43;
    goto L18();
  D20():
    deopt 79 [r30, l2, -1.0, r41];
  L68():
    goto L17(r30, -1.0, r41);
  }
}