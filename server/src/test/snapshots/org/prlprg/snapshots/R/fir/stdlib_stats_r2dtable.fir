fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c2:cls, reg r12:V, reg list:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg rowSums:cls, reg TeaTasting:*, reg TeaTasting1:V, reg p2:p(V +), reg r17:V, reg colSums:cls, reg TeaTasting2:*, reg TeaTasting3:V, reg p3:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg rowTotals:*, reg rowTotals1:V, reg sum:cls, reg r22:V, reg outer:cls, reg rowTotals2:*, reg rowTotals3:V, reg p4:p(V +), reg colTotals:*, reg colTotals1:V, reg p5:p(V +), reg r25:V, reg nOfCases:*, reg nOfCases1:V, reg r26:V, reg r27:cls, reg sapply:cls, reg r2dtable:cls, reg rowTotals4:*, reg rowTotals5:V, reg p6:p(V +), reg colTotals2:*, reg colTotals3:V, reg p7:p(V +), reg r30:V, reg p8:p(V +), reg maxSqResid:*, reg maxSqResid1:V, reg p9:p(V +), reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg simMaxSqResid:*, reg simMaxSqResid1:V, reg maxSqResid2:cls, reg TeaTasting4:*, reg TeaTasting5:V, reg p10:p(V +), reg r37:V, reg r38:V, reg sum1:cls, reg r39:V, reg r40:V |
    mkenv;
    r = clos inner2884979931;
    st r2dtable = r;
    matrix = ldf matrix;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(3.0, 1.0, 1.0, 3.0);
      goto L0(r3);
    L2():
      r1 = dyn base(3.0, 1.0, 1.0, 3.0);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r6):
      return r6;
    L3():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r5 = dyn base1[Guess, Truth](<lang c("Milk", "Tea")>, <lang c("Milk", "Tea")>);
      goto L0(r5);
    L1(r8):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L7() else L8();
    L5():
      c1 = ldf c in base;
      r9 = dyn c1("Milk", "Tea");
      goto L1(r9);
    L6():
      r7 = dyn base2("Milk", "Tea");
      goto L1(r7);
    L2(r11):
      list = ldf list in base;
      r13 = dyn list(r8, r11);
      goto L0(r13);
    L7():
      c2 = ldf c in base;
      r12 = dyn c2("Milk", "Tea");
      goto L2(r12);
    L8():
      r10 = dyn base3("Milk", "Tea");
      goto L2(r10);
    };
    r15 = dyn matrix[, nrow, dimnames](p, 2.0, p1);
    check L3() else D1();
  D1():
    deopt 10 [r15];
  L3():
    st TeaTasting = r15;
    rowSums = ldf rowSums;
    check L4() else D2();
  D2():
    deopt 13 [];
  L4():
    p2 = prom<V +>{
      TeaTasting = ld TeaTasting;
      TeaTasting1 = force? TeaTasting;
      checkMissing(TeaTasting1);
      return TeaTasting1;
    };
    r17 = dyn rowSums(p2);
    check L5() else D3();
  D3():
    deopt 15 [r17];
  L5():
    st rowTotals = r17;
    colSums = ldf colSums;
    check L6() else D4();
  D4():
    deopt 18 [];
  L6():
    p3 = prom<V +>{
      TeaTasting2 = ld TeaTasting;
      TeaTasting3 = force? TeaTasting2;
      checkMissing(TeaTasting3);
      return TeaTasting3;
    };
    r19 = dyn colSums(p3);
    check L7() else D5();
  D5():
    deopt 20 [r19];
  L7():
    st colTotals = r19;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L8() else L9();
  L0(r21):
    st nOfCases = r21;
    outer = ldf outer;
    check L12() else D8();
  L8():
    rowTotals = ld rowTotals;
    check L10() else D6();
  L9():
    r20 = dyn base4(<sym rowTotals>);
    goto L0(r20);
  D6():
    deopt 24 [rowTotals];
  D8():
    deopt 30 [];
  L10():
    rowTotals1 = force? rowTotals;
    checkMissing(rowTotals1);
    sum = ldf sum in base;
    r22 = dyn sum(rowTotals1);
    check L11() else D7();
  L12():
    p4 = prom<V +>{
      rowTotals2 = ld rowTotals;
      rowTotals3 = force? rowTotals2;
      checkMissing(rowTotals3);
      return rowTotals3;
    };
    p5 = prom<V +>{
      colTotals = ld colTotals;
      colTotals1 = force? colTotals;
      checkMissing(colTotals1);
      return colTotals1;
    };
    r25 = dyn outer(p4, p5);
    check L13() else D9();
  D7():
    deopt 27 [r22];
  D9():
    deopt 33 [r25];
  L11():
    goto L0(r22);
  L13():
    nOfCases = ld nOfCases;
    check L14() else D10();
  D10():
    deopt 33 [r25, nOfCases];
  L14():
    nOfCases1 = force? nOfCases;
    checkMissing(nOfCases1);
    r26 = `/`(r25, nOfCases1);
    st expected = r26;
    r27 = clos inner2501545716;
    st maxSqResid = r27;
    sapply = ldf sapply;
    check L15() else D11();
  D11():
    deopt 41 [];
  L15():
    p8 = prom<V +>{
      r2dtable = ldf r2dtable;
      p6 = prom<V +>{
        rowTotals4 = ld rowTotals;
        rowTotals5 = force? rowTotals4;
        checkMissing(rowTotals5);
        return rowTotals5;
      };
      p7 = prom<V +>{
        colTotals2 = ld colTotals;
        colTotals3 = force? colTotals2;
        checkMissing(colTotals3);
        return colTotals3;
      };
      r30 = dyn r2dtable(1000.0, p6, p7);
      return r30;
    };
    p9 = prom<V +>{
      maxSqResid = ld maxSqResid;
      maxSqResid1 = force? maxSqResid;
      checkMissing(maxSqResid1);
      return maxSqResid1;
    };
    r33 = dyn sapply(p8, p9);
    check L16() else D12();
  D12():
    deopt 44 [r33];
  L16():
    st simMaxSqResid = r33;
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L17() else L18();
  L1(r35):
    r40 = `/`(r35, 1000.0);
    popenv;
    return r40;
  L17():
    simMaxSqResid = ld simMaxSqResid;
    check L19() else D13();
  L18():
    r34 = dyn base5(<lang `>=`(simMaxSqResid, maxSqResid(TeaTasting))>);
    goto L1(r34);
  D13():
    deopt 48 [simMaxSqResid];
  L19():
    simMaxSqResid1 = force? simMaxSqResid;
    checkMissing(simMaxSqResid1);
    maxSqResid2 = ldf maxSqResid;
    check L20() else D14();
  D14():
    deopt 50 [simMaxSqResid1];
  L20():
    p10 = prom<V +>{
      TeaTasting4 = ld TeaTasting;
      TeaTasting5 = force? TeaTasting4;
      checkMissing(TeaTasting5);
      return TeaTasting5;
    };
    r37 = dyn maxSqResid2(p10);
    check L21() else D15();
  D15():
    deopt 52 [simMaxSqResid1, r37];
  L21():
    r38 = `>=`(simMaxSqResid1, r37);
    sum1 = ldf sum in base;
    r39 = dyn sum1(r38);
    check L22() else D16();
  D16():
    deopt 55 [r39];
  L22():
    goto L1(r39);
  }
}
fun inner2884979931(n, r, c) {
  (reg n:*, reg r:*, reg c:*) -+> V { var n:*, var r:*, var c:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg n1:*, reg n2:V, reg as_integer:cls, reg r5:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg c2:V, reg n3:*, reg n4:V, reg r8:V, reg c4:L, reg c5:V, reg c7:L, reg c8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c12:L, reg r10:V, reg n5:*, reg n6:V, reg is_na:cls, reg r11:V, reg c13:L, reg c14:V, reg c16:L, reg stop:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg r18:*, reg r19:V, reg as_integer1:cls, reg r20:V, reg length1:cls, reg r21:V, reg r22:V, reg c17:L, reg c18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg c22:L, reg r24:V, reg r25:*, reg r26:V, reg r27:V, reg any:cls, reg r28:V, reg c23:L, reg c24:V, reg c26:L, reg c27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg c31:L, reg r30:V, reg r31:*, reg r32:V, reg anyNA:cls, reg r33:V, reg c32:L, reg c33:V, reg c35:L, reg stop1:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg c36:*, reg c37:V, reg as_integer2:cls, reg r40:V, reg length2:cls, reg r41:V, reg r42:V, reg c38:L, reg c39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg c43:L, reg r44:V, reg c44:*, reg c45:V, reg r45:V, reg any1:cls, reg r46:V, reg c46:L, reg c47:V, reg c49:L, reg c50:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg c54:L, reg r48:V, reg c55:*, reg c56:V, reg anyNA1:cls, reg r49:V, reg c57:L, reg c58:V, reg c60:L, reg stop2:cls, reg r50:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg r54:*, reg r55:V, reg sum:cls, reg r56:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r59:V, reg r60:V, reg r61:V, reg c61:*, reg c62:V, reg sum1:cls, reg r62:V, reg r63:V, reg c63:L, reg stop3:cls, reg r64:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r66:V, reg r67:V, reg C_r2dtable:*, reg C_r2dtable1:V, reg n7:*, reg n8:V, reg r68:*, reg r69:V, reg c64:*, reg c65:V, reg vargs:dots, reg r70:V |
    mkenv;
    st n = n;
    st r = r;
    st c = c;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L0(r2):
    r7 = `==`(r2, 0);
    c1 = `as.logical`(r7);
    if c1 then L2(c1) else L35();
  L28():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L29():
    r1 = dyn base(<lang `<-`(n, as.integer(n))>);
    goto L0(r1);
  L1(r4):
    st n = r4;
    length = ldf length in base;
    r6 = dyn length(r4);
    check L34() else D2();
  L2(c2):
    c7 = `as.logical`(c2);
    if c7 then L3(c7) else L38();
  L30():
    n1 = ld n;
    check L32() else D0();
  L31():
    r3 = dyn base1(<sym n>);
    goto L1(r3);
  L35():
    n3 = ld n;
    check L36() else D3();
  D0():
    deopt 4 [n1];
  D2():
    deopt 10 [r6];
  D3():
    deopt 13 [c1, n3];
  L3(c8):
    c16 = `as.logical`(c8);
    if c16 then L44() else L5();
  L32():
    n2 = force? n1;
    checkMissing(n2);
    as_integer = ldf `as.integer` in base;
    r5 = dyn as_integer(n2);
    check L33() else D1();
  L34():
    goto L0(r6);
  L36():
    n4 = force? n3;
    checkMissing(n4);
    r8 = `<`(n4, 0.0);
    c4 = `as.logical`(r8);
    c5 = `||`(c1, c4);
    goto L2(c5);
  L38():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  D1():
    deopt 7 [r5];
  L4(c12, r10):
    c13 = `as.logical`(r10);
    c14 = `||`(c12, c13);
    goto L3(c14);
  L5():
    goto L6();
  L6():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L33():
    goto L1(r5);
  L39():
    n5 = ld n;
    check L41() else D4();
  L40():
    r9 = dyn base2(<sym n>);
    goto L4(c7, r9);
  L44():
    stop = ldf stop;
    check L45() else D6();
  D4():
    deopt 20 [c7, n5];
  D6():
    deopt 26 [];
  L7(r15):
    r22 = `<=`(r15, 1);
    c17 = `as.logical`(r22);
    if c17 then L9(c17) else L55();
  L41():
    n6 = force? n5;
    checkMissing(n6);
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(n6);
    check L42() else D5();
  L45():
    r12 = dyn stop("invalid argument 'n'");
    check L46() else D7();
  L48():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L49():
    r14 = dyn base3(<lang `<-`(r, as.integer(r))>);
    goto L7(r14);
  D5():
    deopt 23 [c7, r11];
  D7():
    deopt 28 [r12];
  L8(r17):
    st r = r17;
    length1 = ldf length in base;
    r21 = dyn length1(r17);
    check L54() else D10();
  L9(c18):
    c26 = `as.logical`(c18);
    if c26 then L11(c26) else L61();
  L42():
    goto L4(c7, r11);
  L46():
    goto L6();
  L50():
    r18 = ld r;
    check L52() else D8();
  L51():
    r16 = dyn base4(<sym r>);
    goto L8(r16);
  L55():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  D8():
    deopt 35 [r18];
  D10():
    deopt 41 [r21];
  L10(c22, r24):
    c23 = `as.logical`(r24);
    c24 = `||`(c22, c23);
    goto L9(c24);
  L11(c27):
    c35 = `as.logical`(c27);
    if c35 then L67() else L13();
  L52():
    r19 = force? r18;
    checkMissing(r19);
    as_integer1 = ldf `as.integer` in base;
    r20 = dyn as_integer1(r19);
    check L53() else D9();
  L54():
    goto L7(r21);
  L56():
    r25 = ld r;
    check L58() else D11();
  L57():
    r23 = dyn base5(<lang `<`(r, 0.0)>);
    goto L10(c17, r23);
  L61():
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  D9():
    deopt 38 [r20];
  D11():
    deopt 46 [c17, r25];
  L12(c31, r30):
    c32 = `as.logical`(r30);
    c33 = `||`(c31, c32);
    goto L11(c33);
  L13():
    goto L14();
  L14():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  L53():
    goto L8(r20);
  L58():
    r26 = force? r25;
    checkMissing(r26);
    r27 = `<`(r26, 0.0);
    any = ldf any in base;
    r28 = dyn any(r27);
    check L59() else D12();
  L62():
    r31 = ld r;
    check L64() else D13();
  L63():
    r29 = dyn base6(<sym r>);
    goto L12(c26, r29);
  L67():
    stop1 = ldf stop;
    check L68() else D15();
  D12():
    deopt 51 [c17, r28];
  D13():
    deopt 55 [c26, r31];
  D15():
    deopt 61 [];
  L15(r37):
    r42 = `<=`(r37, 1);
    c38 = `as.logical`(r42);
    if c38 then L17(c38) else L78();
  L59():
    goto L10(c17, r28);
  L64():
    r32 = force? r31;
    checkMissing(r32);
    anyNA = ldf anyNA in base;
    r33 = dyn anyNA(r32);
    check L65() else D14();
  L68():
    r34 = dyn stop1("invalid argument 'r'");
    check L69() else D16();
  L71():
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  L72():
    r36 = dyn base7(<lang `<-`(c, as.integer(c))>);
    goto L15(r36);
  D14():
    deopt 58 [c26, r33];
  D16():
    deopt 63 [r34];
  L16(r39):
    st c = r39;
    length2 = ldf length in base;
    r41 = dyn length2(r39);
    check L77() else D19();
  L17(c39):
    c49 = `as.logical`(c39);
    if c49 then L19(c49) else L84();
  L65():
    goto L12(c26, r33);
  L69():
    goto L14();
  L73():
    c36 = ld c;
    check L75() else D17();
  L74():
    r38 = dyn base8(<sym c>);
    goto L16(r38);
  L78():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L79() else L80();
  D17():
    deopt 70 [c36];
  D19():
    deopt 76 [r41];
  L18(c43, r44):
    c46 = `as.logical`(r44);
    c47 = `||`(c43, c46);
    goto L17(c47);
  L19(c50):
    c60 = `as.logical`(c50);
    if c60 then L90() else L21();
  L75():
    c37 = force? c36;
    checkMissing(c37);
    as_integer2 = ldf `as.integer` in base;
    r40 = dyn as_integer2(c37);
    check L76() else D18();
  L77():
    goto L15(r41);
  L79():
    c44 = ld c;
    check L81() else D20();
  L80():
    r43 = dyn base9(<lang `<`(c, 0.0)>);
    goto L18(c38, r43);
  L84():
    sym10 = ldf anyNA;
    base10 = ldf anyNA in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L85() else L86();
  D18():
    deopt 73 [r40];
  D20():
    deopt 81 [c38, c44];
  L20(c54, r48):
    c57 = `as.logical`(r48);
    c58 = `||`(c54, c57);
    goto L19(c58);
  L21():
    goto L22();
  L22():
    sym11 = ldf sum;
    base11 = ldf sum in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L94() else L95();
  L76():
    goto L16(r40);
  L81():
    c45 = force? c44;
    checkMissing(c45);
    r45 = `<`(c45, 0.0);
    any1 = ldf any in base;
    r46 = dyn any1(r45);
    check L82() else D21();
  L85():
    c55 = ld c;
    check L87() else D22();
  L86():
    r47 = dyn base10(<sym c>);
    goto L20(c49, r47);
  L90():
    stop2 = ldf stop;
    check L91() else D24();
  D21():
    deopt 86 [c38, r46];
  D22():
    deopt 90 [c49, c55];
  D24():
    deopt 96 [];
  L23(r53):
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L98() else L99();
  L82():
    goto L18(c38, r46);
  L87():
    c56 = force? c55;
    checkMissing(c56);
    anyNA1 = ldf anyNA in base;
    r49 = dyn anyNA1(c56);
    check L88() else D23();
  L91():
    r50 = dyn stop2("invalid argument 'c'");
    check L92() else D25();
  L94():
    r54 = ld r;
    check L96() else D26();
  L95():
    r52 = dyn base11(<sym r>);
    goto L23(r52);
  D23():
    deopt 93 [c49, r49];
  D25():
    deopt 98 [r50];
  D26():
    deopt 103 [r54];
  L24(r60, r61):
    r63 = `!=`(r60, r61);
    c63 = `as.logical`(r63);
    if c63 then L102() else L25();
  L88():
    goto L20(c49, r49);
  L92():
    goto L22();
  L96():
    r55 = force? r54;
    checkMissing(r55);
    sum = ldf sum in base;
    r56 = dyn sum(r55);
    check L97() else D27();
  L98():
    c61 = ld c;
    check L100() else D28();
  L99():
    r59 = dyn base12(<sym c>);
    goto L24(r53, r59);
  D27():
    deopt 106 [r56];
  D28():
    deopt 108 [r53, c61];
  L25():
    goto L26();
  L26():
    sym13 = ldf `.Call`;
    base13 = ldf `.Call` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L106() else L107();
  L97():
    goto L23(r56);
  L100():
    c62 = force? c61;
    checkMissing(c62);
    sum1 = ldf sum in base;
    r62 = dyn sum1(c62);
    check L101() else D29();
  L102():
    stop3 = ldf stop;
    check L103() else D30();
  D29():
    deopt 111 [r53, r62];
  D30():
    deopt 114 [];
  L27(r67):
    popenv;
    return r67;
  L101():
    goto L24(r53, r62);
  L103():
    r64 = dyn stop3("arguments 'r' and 'c' must have the same sums");
    check L104() else D31();
  L106():
    C_r2dtable = ld C_r2dtable;
    check L108() else D32();
  L107():
    r66 = dyn base13(<sym C_r2dtable>, <sym n>, <sym r>, <sym c>);
    goto L27(r66);
  D31():
    deopt 116 [r64];
  D32():
    deopt 120 [C_r2dtable];
  L104():
    goto L26();
  L108():
    C_r2dtable1 = force? C_r2dtable;
    checkMissing(C_r2dtable1);
    n7 = ld n;
    check L109() else D33();
  D33():
    deopt 121 [C_r2dtable1, n7];
  L109():
    n8 = force? n7;
    checkMissing(n8);
    r68 = ld r;
    check L110() else D34();
  D34():
    deopt 122 [C_r2dtable1, n8, r68];
  L110():
    r69 = force? r68;
    checkMissing(r69);
    c64 = ld c;
    check L111() else D35();
  D35():
    deopt 123 [C_r2dtable1, n8, r69, c64];
  L111():
    c65 = force? c64;
    checkMissing(c65);
    vargs = dots[n8, r69, c65];
    r70 = `.Call`(C_r2dtable1, vargs, <missing>);
    goto L27(r70);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg expected:*, reg expected1:V, reg r2:V, reg r3:V, reg expected2:*, reg expected3:V, reg r4:V, reg max:cls, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `/`(`^`(`(`(`-`(x, expected)), 2.0), expected)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    expected = ld expected;
    check L4() else D1();
  D1():
    deopt 3 [x2, expected];
  L4():
    expected1 = force? expected;
    checkMissing(expected1);
    r2 = `-`(x2, expected1);
    r3 = `^`(r2, 2.0);
    expected2 = ld expected;
    check L5() else D2();
  D2():
    deopt 7 [r3, expected2];
  L5():
    expected3 = force? expected2;
    checkMissing(expected3);
    r4 = `/`(r3, expected3);
    max = ldf max in base;
    r5 = dyn max(r4);
    check L6() else D3();
  D3():
    deopt 11 [r5];
  L6():
    goto L0(r5);
  }
}