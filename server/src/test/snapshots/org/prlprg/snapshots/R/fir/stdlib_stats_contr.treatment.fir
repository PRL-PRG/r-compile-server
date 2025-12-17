fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2018697389;
    st `contr.treatment` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2018697389(n, base, contrasts, sparse) {
  (reg n:*, reg base:*, reg contrasts:*, reg sparse:*) -+> V { var n:*, var base:*, reg base_isMissing:L, reg base_orDefault:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var sparse:*, reg sparse_isMissing:L, reg sparse_orDefault:*, reg sym:cls, reg base1:cls, reg guard:L, reg r:V, reg r1:V, reg n1:*, reg n2:V, reg is_numeric:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base2:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg n3:*, reg n4:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg n5:*, reg n6:V, reg r7:V, reg c10:L, reg sym2:cls, reg base3:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base4:cls, reg guard3:L, reg r10:V, reg r11:V, reg n7:*, reg n8:V, reg r12:I, reg as_character:cls, reg r13:V, reg r14:V, reg stop:cls, reg r15:V, reg sym4:cls, reg base5:cls, reg guard4:L, reg r17:V, reg r18:V, reg n9:*, reg n10:V, reg as_character1:cls, reg r19:V, reg sym5:cls, reg base6:cls, reg guard5:L, reg r20:V, reg r21:V, reg n11:*, reg n12:V, reg length1:cls, reg r22:V, reg _Diag:cls, reg levels:*, reg levels1:V, reg p:p(V +), reg sparse1:*, reg sparse2:V, reg p1:p(V +), reg r25:V, reg contrasts1:*, reg contrasts2:V, reg c11:L, reg n13:*, reg n14:V, reg r26:V, reg c12:L, reg stop1:cls, reg gettextf:cls, reg n15:*, reg n16:V, reg r27:V, reg p2:p(V +), reg r29:V, reg p3:p(V +), reg r31:V, reg base7:*, reg base8:V, reg r33:V, reg c13:L, reg c14:V, reg base9:*, reg base10:V, reg n17:*, reg n18:V, reg r34:V, reg c16:L, reg c17:V, reg c19:L, reg stop2:cls, reg r35:V, reg contr:*, reg contr1:V, reg c20:L, reg contr3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg base11:*, reg base12:V, reg r37:V, reg __:cls, reg r38:V, reg contr4:*, reg contr5:V |
    mkenv;
    st n = n;
    base_isMissing = missing.0(base);
    if base_isMissing then L0(1.0) else L0(base);
  L0(base_orDefault):
    st base = base_orDefault;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L1(TRUE) else L1(contrasts);
  L1(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    sparse_isMissing = missing.0(sparse);
    if sparse_isMissing then L2(FALSE) else L2(sparse);
  L2(sparse_orDefault):
    st sparse = sparse_orDefault;
    sym = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard = `==`.4(sym, base1);
    if guard then L22() else L23();
  L3(r1):
    c = `as.logical`(r1);
    if c then L26() else L4(c);
  L22():
    n1 = ld n;
    check L24() else D0();
  L23():
    r = dyn base1(<sym n>);
    goto L3(r);
  D0():
    deopt 2 [n1];
  L4(c2):
    c9 = `as.logical`(c2);
    if c9 then L32() else L6();
  L24():
    n2 = force? n1;
    checkMissing(n2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(n2);
    check L25() else D1();
  L26():
    sym1 = ldf length;
    base2 = ldf length in base;
    guard1 = `==`.4(sym1, base2);
    if guard1 then L27() else L28();
  D1():
    deopt 5 [r2];
  L5(c5, r4):
    r6 = `==`(r4, 1);
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L4(c7);
  L6():
    sym4 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base5);
    if guard4 then L45() else L46();
  L11():
    _Diag = ldf `.Diag`;
    check L53() else D13();
  L25():
    goto L3(r2);
  L27():
    n3 = ld n;
    check L29() else D2();
  L28():
    r3 = dyn base2(<sym n>);
    goto L5(c, r3);
  L32():
    n5 = ld n;
    check L33() else D4();
  D2():
    deopt 8 [c, n3];
  D4():
    deopt 15 [n5];
  D13():
    deopt 47 [];
  L12(r18):
    st levels = r18;
    sym5 = ldf length;
    base6 = ldf length in base;
    guard5 = `==`.4(sym5, base6);
    if guard5 then L49() else L50();
  L29():
    n4 = force? n3;
    checkMissing(n4);
    length = ldf length in base;
    r5 = dyn length(n4);
    check L30() else D3();
  L33():
    n6 = force? n5;
    checkMissing(n6);
    r7 = `>`(n6, 1);
    c10 = `as.logical`(r7);
    if c10 then L34() else L7();
  L45():
    n9 = ld n;
    check L47() else D9();
  L46():
    r17 = dyn base5(<sym n>);
    goto L12(r17);
  L53():
    p = prom<V +>{
      levels = ld levels;
      levels1 = force? levels;
      checkMissing(levels1);
      return levels1;
    };
    p1 = prom<V +>{
      sparse1 = ld sparse;
      sparse2 = force? sparse1;
      checkMissing(sparse2);
      return sparse2;
    };
    r25 = dyn _Diag[, sparse](p, p1);
    check L54() else D14();
  D3():
    deopt 11 [c, r5];
  D9():
    deopt 34 [n9];
  D14():
    deopt 51 [r25];
  L7():
    stop = ldf stop;
    check L42() else D7();
  L10(r14):
    goto L11();
  L13(r21):
    st n = r21;
    goto L11();
  L30():
    goto L5(c, r5);
  L34():
    sym2 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base3);
    if guard2 then L35() else L36();
  L47():
    n10 = force? n9;
    checkMissing(n10);
    as_character1 = ldf `as.character` in base;
    r19 = dyn as_character1(n10);
    check L48() else D10();
  L49():
    n11 = ld n;
    check L51() else D11();
  L50():
    r20 = dyn base6(<sym n>);
    goto L13(r20);
  L54():
    st contr = r25;
    contrasts1 = ld contrasts;
    check L55() else D15();
  D7():
    deopt 29 [];
  D10():
    deopt 37 [r19];
  D11():
    deopt 41 [n11];
  D15():
    deopt 53 [contrasts1];
  L8(r9):
    st levels = r9;
    goto L10(r9);
  L35():
    sym3 = ldf seq_len;
    base4 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base4);
    if guard3 then L37() else L38();
  L36():
    r8 = dyn base3(<lang seq_len(n)>);
    goto L8(r8);
  L42():
    r15 = dyn stop("not enough degrees of freedom to define contrasts");
    check L43() else D8();
  L48():
    goto L12(r19);
  L51():
    n12 = force? n11;
    checkMissing(n12);
    length1 = ldf length in base;
    r22 = dyn length1(n12);
    check L52() else D12();
  L55():
    contrasts2 = force? contrasts1;
    checkMissing(contrasts2);
    c11 = `as.logical`(contrasts2);
    if c11 then L56() else L14();
  D8():
    deopt 31 [r15];
  D12():
    deopt 44 [r22];
  L9(r11):
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(r11);
    check L40() else D6();
  L14():
    goto L21();
  L21():
    contr4 = ld contr;
    check L77() else D26();
  L37():
    n7 = ld n;
    check L39() else D5();
  L38():
    r10 = dyn base4(<sym n>);
    goto L9(r10);
  L43():
    goto L10(r15);
  L52():
    goto L13(r22);
  L56():
    n13 = ld n;
    check L57() else D16();
  D5():
    deopt 22 [n7];
  D6():
    deopt 26 [r13];
  D16():
    deopt 55 [n13];
  D26():
    deopt 95 [contr4];
  L39():
    n8 = force? n7;
    checkMissing(n8);
    r12 = seq_len(n8);
    goto L9(r12);
  L40():
    goto L8(r13);
  L57():
    n14 = force? n13;
    checkMissing(n14);
    r26 = `<`(n14, 2);
    c12 = `as.logical`(r26);
    if c12 then L58() else L15();
  L77():
    contr5 = force? contr4;
    checkMissing(contr5);
    popenv;
    return contr5;
  L15():
    goto L16();
  L16():
    base7 = ld base;
    check L62() else D19();
  L58():
    stop1 = ldf stop;
    check L59() else D17();
  D17():
    deopt 60 [];
  D19():
    deopt 67 [base7];
  L59():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        n15 = ld n;
        n16 = force? n15;
        checkMissing(n16);
        r27 = `-`(n16, 1);
        return r27;
      };
      r29 = dyn gettextf("contrasts not defined for %d degrees of freedom", p2);
      return r29;
    };
    r31 = dyn stop1[, domain](p3, NA_LGL);
    check L60() else D18();
  L62():
    base8 = force? base7;
    checkMissing(base8);
    r33 = `<`(base8, 1);
    c13 = `as.logical`(r33);
    if c13 then L17(c13) else L63();
  D18():
    deopt 64 [r31];
  L17(c14):
    c19 = `as.logical`(c14);
    if c19 then L67() else L18();
  L60():
    goto L16();
  L63():
    base9 = ld base;
    check L64() else D20();
  D20():
    deopt 71 [c13, base9];
  L18():
    goto L19();
  L19():
    contr = ld contr;
    check L71() else D24();
  L64():
    base10 = force? base9;
    checkMissing(base10);
    n17 = ld n;
    check L65() else D21();
  L67():
    stop2 = ldf stop;
    check L68() else D22();
  D21():
    deopt 72 [c13, base10, n17];
  D22():
    deopt 77 [];
  D24():
    deopt 82 [contr];
  L65():
    n18 = force? n17;
    checkMissing(n18);
    r34 = `>`(base10, n18);
    c16 = `as.logical`(r34);
    c17 = `||`(c13, c16);
    goto L17(c17);
  L68():
    r35 = dyn stop2("baseline group number out of range");
    check L69() else D23();
  L71():
    contr1 = force? contr;
    checkMissing(contr1);
    c20 = `is.object`(contr1);
    if c20 then L72() else L73(contr1);
  D23():
    deopt 79 [r35];
  L20(dx1):
    st contr = dx1;
    goto L21();
  L69():
    goto L19();
  L72():
    dr = tryDispatchBuiltin.1("[", contr1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L74() else L73(dr);
  L73(contr3):
    base11 = ld base;
    check L75() else D25();
  D25():
    deopt 85 [contr3, base11];
  L74():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L75():
    base12 = force? base11;
    checkMissing(base12);
    r37 = `-`(<missing>, base12);
    __ = ldf `[` in base;
    r38 = dyn __(contr1, <missing>, r37, FALSE);
    goto L20(r38);
  }
}