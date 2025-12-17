fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner431752210;
    st `contr.helmert` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner431752210(n, contrasts, sparse) {
  (reg n:*, reg contrasts:*, reg sparse:*) -+> V { var n:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var sparse:*, reg sparse_isMissing:L, reg sparse_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg n3:*, reg n4:V, reg is_numeric:cls, reg r6:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c6:L, reg r8:V, reg n5:*, reg n6:V, reg length1:cls, reg r9:V, reg r10:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg n7:*, reg n8:V, reg r11:V, reg c13:L, reg c14:V, reg c16:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg n9:*, reg n10:V, reg r14:I, reg r15:V, reg stop:cls, reg r16:V, reg n11:*, reg n12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg levels:*, reg levels1:V, reg as_character:cls, reg r20:V, reg contrasts1:*, reg contrasts2:V, reg c17:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg levels2:*, reg levels3:V, reg length2:cls, reg r23:V, reg array:cls, reg p:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg n13:*, reg n14:V, reg n15:*, reg n16:V, reg r27:V, reg c18:cls, reg r28:V, reg p1:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg levels4:*, reg levels5:V, reg list:cls, reg r32:V, reg p2:p(V +), reg r34:V, reg l:*, reg c19:L, reg r36:R, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg col:cls, reg cont:*, reg cont1:V, reg p3:p(V +), reg r40:V, reg row:cls, reg cont2:*, reg cont3:V, reg p4:p(V +), reg r42:V, reg r43:V, reg r44:V, reg ___:cls, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg n17:*, reg n18:V, reg r48:V, reg r49:I, reg l3:*, reg c20:L, reg r51:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg col1:cls, reg cont4:*, reg cont5:V, reg p5:p(V +), reg r55:V, reg row1:cls, reg cont6:*, reg cont7:V, reg p6:p(V +), reg r57:V, reg r58:V, reg r59:V, reg ___1:cls, reg r60:V, reg l6:*, reg colnames__:cls, reg r61:V, reg sparse1:*, reg sparse2:V, reg c21:L, reg _asSparse:cls, reg cont8:*, reg cont9:V, reg p7:p(V +), reg r63:V, reg cont10:*, reg cont11:V, reg _Diag:cls, reg levels6:*, reg levels7:V, reg p8:p(V +), reg sparse3:*, reg sparse4:V, reg p9:p(V +), reg r66:V |
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
    contrasts1 = ld contrasts;
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
    deopt 47 [contrasts1];
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
    contrasts2 = force? contrasts1;
    checkMissing(contrasts2);
    c17 = `as.logical`(contrasts2);
    if c17 then L51() else L13();
  D3():
    deopt 13 [r6];
  D12():
    deopt 45 [r20];
  L6(c6, r8):
    r10 = `==`(r8, 1);
    c7 = `as.logical`(r10);
    c8 = `&&`(c6, c7);
    goto L5(c8);
  L7(c12):
    c16 = `as.logical`(c12);
    if c16 then L37() else L8();
  L13():
    _Diag = ldf `.Diag`;
    check L84() else D33();
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
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  D4():
    deopt 16 [c1, n5];
  D6():
    deopt 23 [c10, n7];
  D33():
    deopt 113 [];
  L8():
    stop = ldf stop;
    check L42() else D8();
  L10(r15):
    goto L11();
  L14(r22):
    st n = r22;
    array = ldf array;
    check L56() else D16();
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
    levels2 = ld levels;
    check L54() else D14();
  L53():
    r21 = dyn base5(<sym levels>);
    goto L14(r21);
  L84():
    p8 = prom<V +>{
      levels6 = ld levels;
      levels7 = force? levels6;
      checkMissing(levels7);
      return levels7;
    };
    p9 = prom<V +>{
      sparse3 = ld sparse;
      sparse4 = force? sparse3;
      checkMissing(sparse4);
      return sparse4;
    };
    r66 = dyn _Diag[, sparse](p8, p9);
    check L85() else D34();
  D5():
    deopt 19 [c1, r9];
  D8():
    deopt 34 [];
  D14():
    deopt 51 [levels2];
  D16():
    deopt 57 [];
  D34():
    deopt 117 [r66];
  L9(r13):
    st levels = r13;
    goto L10(r13);
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
  L54():
    levels3 = force? levels2;
    checkMissing(levels3);
    length2 = ldf length in base;
    r23 = dyn length2(levels3);
    check L55() else D15();
  L56():
    p = prom<V +>{
      return -1.0;
    };
    p1 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      n13 = ld n;
      n14 = force? n13;
      checkMissing(n14);
      n15 = ld n;
      n16 = force? n15;
      checkMissing(n16);
      r27 = `-`(n16, 1);
      c18 = ldf c in base;
      r28 = dyn c18(n14, r27);
      goto L0(r28);
    L2():
      r25 = dyn base6(<sym n>, <lang `-`(n, 1)>);
      goto L0(r25);
    };
    p2 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      levels4 = ld levels;
      levels5 = force? levels4;
      checkMissing(levels5);
      list = ldf list in base;
      r32 = dyn list(levels5, NULL);
      goto L0(r32);
    L2():
      r30 = dyn base7(<sym levels>, NULL);
      goto L0(r30);
    };
    r34 = dyn array(p, p1, p2);
    check L57() else D17();
  L85():
    popenv;
    return r66;
  D7():
    deopt 29 [n9];
  D9():
    deopt 36 [r16];
  D15():
    deopt 54 [r23];
  D17():
    deopt 61 [r34];
  L40():
    n10 = force? n9;
    checkMissing(n10);
    r14 = seq_len(n10);
    goto L9(r14);
  L43():
    goto L10(r16);
  L55():
    goto L14(r23);
  L57():
    st cont = r34;
    l = ld cont;
    c19 = `is.object`(l);
    if c19 then L58() else L59(0.0, l);
  L15(dx1):
    st cont = dx1;
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L65() else L66();
  L58():
    dr = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(0.0, dr);
  L59(r36, l2):
    col = ldf col;
    check L61() else D18();
  D18():
    deopt 67 [r36, l2, 0.0];
  L16(r47):
    l3 = ld cont;
    c20 = `is.object`(l3);
    if c20 then L68() else L69(r47, l3);
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L61():
    p3 = prom<V +>{
      cont = ld cont;
      cont1 = force? cont;
      checkMissing(cont1);
      return cont1;
    };
    r40 = dyn col(p3);
    check L62() else D19();
  L65():
    n17 = ld n;
    check L67() else D22();
  L66():
    r46 = dyn base8(<lang `-`(n, 1)>);
    goto L16(r46);
  D19():
    deopt 69 [r36, l2, 0.0, r40];
  D22():
    deopt 79 [n17];
  L17(dx3):
    st cont = dx3;
    l6 = ld cont;
    colnames__ = ldf `colnames<-`;
    check L75() else D27();
  L62():
    row = ldf row;
    check L63() else D20();
  L67():
    n18 = force? n17;
    checkMissing(n18);
    r48 = `-`(n18, 1);
    r49 = seq_len(r48);
    goto L16(r49);
  L68():
    dr2 = tryDispatchBuiltin.0("[<-", l3, r47);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(r47, dr2);
  L69(r51, l5):
    col1 = ldf col;
    check L71() else D23();
  D20():
    deopt 70 [r36, l2, 0.0, r40];
  D23():
    deopt 86 [r51, l5, r47];
  D27():
    deopt 100 [NULL, l6, NULL];
  L63():
    p4 = prom<V +>{
      cont2 = ld cont;
      cont3 = force? cont2;
      checkMissing(cont3);
      return cont3;
    };
    r42 = dyn row(p4);
    check L64() else D21();
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L71():
    p5 = prom<V +>{
      cont4 = ld cont;
      cont5 = force? cont4;
      checkMissing(cont5);
      return cont5;
    };
    r55 = dyn col1(p5);
    check L72() else D24();
  L75():
    r61 = dyn colnames__(l6, NULL, NULL);
    check L76() else D28();
  D21():
    deopt 72 [r36, l2, 0.0, r40, r42];
  D24():
    deopt 88 [r51, l5, r47, r55];
  D28():
    deopt 102 [NULL, r61];
  L64():
    r43 = `-`(r42, 2);
    r44 = `<=`(r40, r43);
    ___ = ldf `[<-` in base;
    r45 = dyn ___(l2, 0.0, r44);
    goto L15(r45);
  L72():
    row1 = ldf row;
    check L73() else D25();
  L76():
    st cont = r61;
    sparse1 = ld sparse;
    check L77() else D29();
  D25():
    deopt 89 [r51, l5, r47, r55];
  D29():
    deopt 104 [sparse1];
  L73():
    p6 = prom<V +>{
      cont6 = ld cont;
      cont7 = force? cont6;
      checkMissing(cont7);
      return cont7;
    };
    r57 = dyn row1(p6);
    check L74() else D26();
  L77():
    sparse2 = force? sparse1;
    checkMissing(sparse2);
    c21 = `as.logical`(sparse2);
    if c21 then L78() else L18();
  D26():
    deopt 91 [r51, l5, r47, r55, r57];
  L18():
    cont10 = ld cont;
    check L82() else D32();
  L74():
    r58 = `-`(r57, 1);
    r59 = `==`(r55, r58);
    ___1 = ldf `[<-` in base;
    r60 = dyn ___1(l5, r47, r59);
    goto L17(r60);
  L78():
    _asSparse = ldf `.asSparse`;
    check L79() else D30();
  D30():
    deopt 107 [];
  D32():
    deopt 110 [cont10];
  L79():
    p7 = prom<V +>{
      cont8 = ld cont;
      cont9 = force? cont8;
      checkMissing(cont9);
      return cont9;
    };
    r63 = dyn _asSparse(p7);
    check L80() else D31();
  L82():
    cont11 = force? cont10;
    checkMissing(cont11);
    popenv;
    return cont11;
  D31():
    deopt 109 [r63];
  L80():
    popenv;
    return r63;
  }
}