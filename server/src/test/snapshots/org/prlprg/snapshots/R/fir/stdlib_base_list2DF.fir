fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg character:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg list:cls, reg r7:V, reg lengths:cls, reg x:*, reg x1:V, reg p:p(V +), reg r9:V, reg list2DF:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x2:*, reg x3:V, reg n:*, reg n1:V, reg list1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg list2DF1:cls, reg r15:V, reg list2DF2:cls, reg r16:V |
    mkenv;
    r = clos `inner-1371136072`;
    st list2DF = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st x = r2;
    lengths = ldf lengths;
    check L10() else D4();
  L2():
    character = ldf character;
    check L4() else D0();
  L3():
    r1 = dyn base(<lang character()>, "A", <lang c("B", "C")>);
    goto L0(r1);
  D0():
    deopt 6 [];
  D4():
    deopt 19 [];
  L4():
    r3 = dyn character();
    check L5() else D1();
  L10():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r9 = dyn lengths(p);
    check L11() else D5();
  D1():
    deopt 7 [r3];
  D5():
    deopt 21 [r9];
  L5():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L11():
    st n = r9;
    list2DF = ldf list2DF;
    check L12() else D6();
  D6():
    deopt 24 [];
  L1(r5):
    list = ldf list in base;
    r7 = dyn list(r3, "A", r5);
    check L9() else D3();
  L6():
    c = ldf c in base;
    r6 = dyn c("B", "C");
    check L8() else D2();
  L7():
    r4 = dyn base1("B", "C");
    goto L1(r4);
  L12():
    p1 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      list1 = ldf list in base;
      r12 = dyn list1(x3, n1);
      goto L0(r12);
    L2():
      r10 = dyn base2[x, n](<sym x>, <sym n>);
      goto L0(r10);
    };
    r14 = dyn list2DF(p1);
    check L13() else D7();
  D2():
    deopt 14 [r6];
  D3():
    deopt 16 [r7];
  D7():
    deopt 26 [r14];
  L8():
    goto L1(r6);
  L9():
    goto L0(r7);
  L13():
    list2DF1 = ldf list2DF;
    check L14() else D8();
  D8():
    deopt 28 [];
  L14():
    r15 = dyn list2DF1();
    check L15() else D9();
  D9():
    deopt 29 [r15];
  L15():
    list2DF2 = ldf list2DF;
    check L16() else D10();
  D10():
    deopt 31 [];
  L16():
    r16 = dyn list2DF2[nrow](3);
    check L17() else D11();
  D11():
    deopt 34 [r16];
  L17():
    popenv;
    return r16;
  }
}
fun `inner-1371136072`(x, nrow) {
  (reg x:*, reg nrow:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var nrow:*, reg nrow_isMissing:L, reg nrow_orDefault:*, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg is_list:cls, reg r6:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg nrow1:*, reg nrow2:V, reg c:V, reg c1:L, reg c2:V, reg nrow3:*, reg nrow4:V, reg r10:V, reg c4:L, reg c5:V, reg p2:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x3:*, reg x4:V, reg length:cls, reg r15:V, reg c7:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg unique:cls, reg lengths:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg length1:cls, reg r22:V, reg r23:V, reg c8:L, reg stop:cls, reg r24:V, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg nrow5:*, reg nrow6:V, reg c9:V, reg c10:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg x7:*, reg x8:V, reg names:cls, reg r33:V, reg c11:V, reg c12:L, reg character:cls, reg n:*, reg n1:V, reg p5:p(V +), reg r35:V, reg l:*, reg names__:cls, reg r36:V, reg l1:*, reg class__:cls, reg r38:V, reg _set_row_names:cls, reg nrow7:*, reg nrow8:V, reg p6:p(V +), reg r40:V, reg l2:*, reg attr__:cls, reg r41:V, reg x9:*, reg x10:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(x_orDefault):
    st x = x_orDefault;
    nrow_isMissing = missing.0(nrow);
    if nrow_isMissing then L2(0) else L2(nrow);
  L2(nrow_orDefault):
    st nrow = nrow_orDefault;
    stopifnot = ldf stopifnot;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p1 = prom<V +>{
      sym1 = ldf `is.list`;
      base1 = ldf `is.list` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      is_list = ldf `is.list` in base;
      r6 = dyn is_list(x2);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>);
      goto L0(r4);
    };
    p2 = prom<V +>{
      sym2 = ldf `is.null`;
      base2 = ldf `is.null` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r9):
      c1 = `as.logical`(r9);
      if c1 then L1(c1) else L4();
    L2():
      nrow1 = ld nrow;
      nrow2 = force? nrow1;
      checkMissing(nrow2);
      c = `==`(nrow2, NULL);
      goto L0(c);
    L3():
      r8 = dyn base2(<sym nrow>);
      goto L0(r8);
    L1(c2):
      return c2;
    L4():
      nrow3 = ld nrow;
      nrow4 = force? nrow3;
      checkMissing(nrow4);
      r10 = `>=`(nrow4, 0);
      c4 = `as.logical`(r10);
      c5 = `||`(c1, c4);
      goto L1(c5);
    };
    r12 = dyn stopifnot(p1, p2);
    check L16() else D1();
  D1():
    deopt 4 [r12];
  L16():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  L3(r14):
    st n = r14;
    c7 = `as.logical`(r14);
    if c7 then L21() else L4();
  L17():
    x3 = ld x;
    check L19() else D2();
  L18():
    r13 = dyn base3(<sym x>);
    goto L3(r13);
  D2():
    deopt 7 [x3];
  L4():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L32() else L33();
  L8():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L37() else L38();
  L19():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r15 = dyn length(x4);
    check L20() else D3();
  L21():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L22() else L23();
  D3():
    deopt 10 [r15];
  L5(r17):
    r23 = `>`(r17, 1);
    c8 = `as.logical`(r23);
    if c8 then L27() else L6();
  L9(r28):
    c10 = `as.logical`(r28);
    if c10 then L35() else L10();
  L11(r30):
    c12 = `as.logical`(r30);
    if c12 then L43() else L13();
  L20():
    goto L3(r15);
  L22():
    unique = ldf unique;
    check L24() else D4();
  L23():
    r16 = dyn base4(<lang `<-`(nrow, unique(lengths(x)))>);
    goto L5(r16);
  L32():
    nrow5 = ld nrow;
    check L34() else D9();
  L33():
    r27 = dyn base5(<sym nrow>);
    goto L9(r27);
  L37():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L39() else L40();
  L38():
    r29 = dyn base6(<lang names(x)>);
    goto L11(r29);
  D4():
    deopt 15 [];
  D9():
    deopt 30 [nrow5];
  L6():
    goto L7(NULL);
  L7(r25):
    goto L8();
  L10():
    goto L8();
  L12(r32):
    c11 = `==`(r32, NULL);
    goto L11(c11);
  L13():
    goto L14();
  L14():
    l1 = ld x;
    class__ = ldf `class<-`;
    check L49() else D16();
  L24():
    p4 = prom<V +>{
      lengths = ldf lengths;
      p3 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r19 = dyn lengths(p3);
      return r19;
    };
    r21 = dyn unique(p4);
    check L25() else D5();
  L27():
    stop = ldf stop;
    check L28() else D7();
  L34():
    nrow6 = force? nrow5;
    checkMissing(nrow6);
    c9 = `==`(nrow6, NULL);
    goto L9(c9);
  L35():
    st nrow = 0;
    goto L8();
  L39():
    x7 = ld x;
    check L41() else D10();
  L40():
    r31 = dyn base7(<sym x>);
    goto L12(r31);
  L43():
    character = ldf character;
    check L44() else D12();
  D5():
    deopt 17 [r21];
  D7():
    deopt 24 [];
  D10():
    deopt 41 [x7];
  D12():
    deopt 47 [];
  D16():
    deopt 60 ["data.frame", l1, "data.frame"];
  L25():
    st nrow = r21;
    length1 = ldf length in base;
    r22 = dyn length1(r21);
    check L26() else D6();
  L28():
    r24 = dyn stop("all variables should have the same length");
    check L29() else D8();
  L41():
    x8 = force? x7;
    checkMissing(x8);
    names = ldf names in base;
    r33 = dyn names(x8);
    check L42() else D11();
  L44():
    p5 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r35 = dyn character(p5);
    check L45() else D13();
  L49():
    r38 = dyn class__(l1, NULL, "data.frame");
    check L50() else D17();
  D6():
    deopt 20 [r22];
  D8():
    deopt 26 [r24];
  D11():
    deopt 44 [r33];
  D13():
    deopt 49 [r35];
  D17():
    deopt 62 ["data.frame", r38];
  L26():
    goto L5(r22);
  L29():
    goto L7(r24);
  L42():
    goto L12(r33);
  L45():
    l = ld x;
    names__ = ldf `names<-`;
    check L46() else D14();
  L50():
    st x = r38;
    _set_row_names = ldf `.set_row_names`;
    check L51() else D18();
  D14():
    deopt 51 [r35, l, r35];
  D18():
    deopt 65 [];
  L46():
    r36 = dyn names__(l, NULL, r35);
    check L47() else D15();
  L51():
    p6 = prom<V +>{
      nrow7 = ld nrow;
      nrow8 = force? nrow7;
      checkMissing(nrow8);
      return nrow8;
    };
    r40 = dyn _set_row_names(p6);
    check L52() else D19();
  D15():
    deopt 53 [r35, r36];
  D19():
    deopt 67 [r40];
  L47():
    st x = r36;
    goto L14();
  L52():
    l2 = ld x;
    attr__ = ldf `attr<-`;
    check L53() else D20();
  D20():
    deopt 69 [r40, l2, r40];
  L53():
    r41 = dyn attr__(l2, NULL, "row.names", r40);
    check L54() else D21();
  D21():
    deopt 72 [r40, r41];
  L54():
    st x = r41;
    x9 = ld x;
    check L55() else D22();
  D22():
    deopt 74 [x9];
  L55():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  }
}