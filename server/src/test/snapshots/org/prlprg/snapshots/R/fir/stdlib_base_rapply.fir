fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg list:cls, reg r7:V, reg list1:cls, reg r8:V, reg list2:cls, reg r9:V, reg rapply:cls, reg X:*, reg X1:V, reg p:p(V +), reg r11:cls, reg p1:p(V +), reg r13:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg X2:*, reg X3:V, reg X_:*, reg X_1:V, reg identical:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg rapply1:cls, reg X4:*, reg X5:V, reg p3:p(V +), reg sqrt:*, reg sqrt1:V, reg p4:p(V +), reg r21:V, reg rapply2:cls, reg X6:*, reg X7:V, reg p5:p(V +), reg deparse:*, reg deparse1:V, reg p6:p(V +), reg r24:V, reg rapply3:cls, reg X8:*, reg X9:V, reg p7:p(V +), reg nchar:*, reg nchar1:V, reg p8:p(V +), reg r27:V, reg rapply4:cls, reg X10:*, reg X11:V, reg p9:p(V +), reg nchar2:*, reg nchar3:V, reg p10:p(V +), reg r30:V, reg rapply5:cls, reg X12:*, reg X13:V, reg p11:p(V +), reg nchar4:*, reg nchar5:V, reg p12:p(V +), reg r33:V, reg rapply6:cls, reg X14:*, reg X15:V, reg p13:p(V +), reg log:*, reg log1:V, reg p14:p(V +), reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg expression:cls, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg expression1:cls, reg r44:V, reg list3:cls, reg r45:V, reg rapply7:cls, reg E:*, reg E1:V, reg p15:p(V +), reg nchar6:*, reg nchar7:V, reg p16:p(V +), reg r48:V, reg rapply8:cls, reg E2:*, reg E3:V, reg p17:p(V +), reg nchar8:*, reg nchar9:V, reg p18:p(V +), reg r51:V, reg rapply9:cls, reg LE:*, reg LE1:V, reg p19:p(V +), reg as_character:*, reg as_character1:V, reg p20:p(V +), reg r54:V, reg rapply10:cls, reg LE2:*, reg LE3:V, reg p21:p(V +), reg nchar10:*, reg nchar11:V, reg p22:p(V +), reg r57:V, reg stopifnot1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r58:V, reg E4:*, reg E5:V, reg rapply11:cls, reg E6:*, reg E7:V, reg p23:p(V +), reg identity:*, reg identity1:V, reg p24:p(V +), reg r62:V, reg identical1:cls, reg r63:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg LE4:*, reg LE5:V, reg rapply12:cls, reg LE6:*, reg LE7:V, reg p25:p(V +), reg identity2:*, reg identity3:V, reg p26:p(V +), reg r68:V, reg identical2:cls, reg r69:V, reg p27:p(V +), reg r71:V |
    mkenv;
    r = clos inner146374923;
    st rapply = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r2):
    st X = r2;
    rapply = ldf rapply;
    check L15() else D3();
  L6():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r1 = dyn base[, d](<lang list(a=pi, b=list(c=1))>, "a test");
    goto L0(r1);
  D3():
    deopt 24 [];
  L1(r4):
    list2 = ldf list in base;
    r9 = dyn list2(r4, "a test");
    check L14() else D2();
  L8():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L9():
    r3 = dyn base1[a, b](<sym pi>, <lang list(c=1)>);
    goto L1(r3);
  L15():
    p = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    p1 = prom<V +>{
      r11 = clos inner2501545716;
      return r11;
    };
    r13 = dyn rapply[, , how](p, p1, "replace");
    check L16() else D4();
  D2():
    deopt 21 [r9];
  D4():
    deopt 29 [r13];
  L2(r6):
    list1 = ldf list in base;
    r8 = dyn list1(3.141592653589793, r6);
    check L13() else D1();
  L10():
    list = ldf list in base;
    r7 = dyn list(1);
    check L12() else D0();
  L11():
    r5 = dyn base2[c](1);
    goto L2(r5);
  L14():
    goto L0(r9);
  L16():
    st `X.` = r13;
    stopifnot = ldf stopifnot;
    check L17() else D5();
  D0():
    deopt 14 [r7];
  D1():
    deopt 17 [r8];
  D5():
    deopt 32 [];
  L12():
    goto L2(r7);
  L13():
    goto L1(r8);
  L17():
    p2 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      X2 = ld X;
      X3 = force? X2;
      checkMissing(X3);
      X_ = ld `X.`;
      X_1 = force? X_;
      checkMissing(X_1);
      identical = ldf identical in base;
      r16 = dyn identical(X3, X_1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r16);
    L2():
      r14 = dyn base3(<sym X>, <sym X.>);
      goto L0(r14);
    };
    r18 = dyn stopifnot(p2);
    check L18() else D6();
  D6():
    deopt 34 [r18];
  L18():
    rapply1 = ldf rapply;
    check L19() else D7();
  D7():
    deopt 36 [];
  L19():
    p3 = prom<V +>{
      X4 = ld X;
      X5 = force? X4;
      checkMissing(X5);
      return X5;
    };
    p4 = prom<V +>{
      sqrt = ld sqrt;
      sqrt1 = force? sqrt;
      checkMissing(sqrt1);
      return sqrt1;
    };
    r21 = dyn rapply1[, , classes, how](p3, p4, "numeric", "replace");
    check L20() else D8();
  D8():
    deopt 43 [r21];
  L20():
    rapply2 = ldf rapply;
    check L21() else D9();
  D9():
    deopt 45 [];
  L21():
    p5 = prom<V +>{
      X6 = ld X;
      X7 = force? X6;
      checkMissing(X7);
      return X7;
    };
    p6 = prom<V +>{
      deparse = ld deparse;
      deparse1 = force? deparse;
      checkMissing(deparse1);
      return deparse1;
    };
    r24 = dyn rapply2[, , control](p5, p6, "all");
    check L22() else D10();
  D10():
    deopt 50 [r24];
  L22():
    rapply3 = ldf rapply;
    check L23() else D11();
  D11():
    deopt 52 [];
  L23():
    p7 = prom<V +>{
      X8 = ld X;
      X9 = force? X8;
      checkMissing(X9);
      return X9;
    };
    p8 = prom<V +>{
      nchar = ld nchar;
      nchar1 = force? nchar;
      checkMissing(nchar1);
      return nchar1;
    };
    r27 = dyn rapply3[, , classes, deflt, how](p7, p8, "character", NA_INT, "list");
    check L24() else D12();
  D12():
    deopt 61 [r27];
  L24():
    rapply4 = ldf rapply;
    check L25() else D13();
  D13():
    deopt 63 [];
  L25():
    p9 = prom<V +>{
      X10 = ld X;
      X11 = force? X10;
      checkMissing(X11);
      return X11;
    };
    p10 = prom<V +>{
      nchar2 = ld nchar;
      nchar3 = force? nchar2;
      checkMissing(nchar3);
      return nchar3;
    };
    r30 = dyn rapply4[, , classes, deflt, how](p9, p10, "character", NA_INT, "unlist");
    check L26() else D14();
  D14():
    deopt 72 [r30];
  L26():
    rapply5 = ldf rapply;
    check L27() else D15();
  D15():
    deopt 74 [];
  L27():
    p11 = prom<V +>{
      X12 = ld X;
      X13 = force? X12;
      checkMissing(X13);
      return X13;
    };
    p12 = prom<V +>{
      nchar4 = ld nchar;
      nchar5 = force? nchar4;
      checkMissing(nchar5);
      return nchar5;
    };
    r33 = dyn rapply5[, , classes, how](p11, p12, "character", "unlist");
    check L28() else D16();
  D16():
    deopt 81 [r33];
  L28():
    rapply6 = ldf rapply;
    check L29() else D17();
  D17():
    deopt 83 [];
  L29():
    p13 = prom<V +>{
      X14 = ld X;
      X15 = force? X14;
      checkMissing(X15);
      return X15;
    };
    p14 = prom<V +>{
      log = ld log;
      log1 = force? log;
      checkMissing(log1);
      return log1;
    };
    r36 = dyn rapply6[, , classes, how, base](p13, p14, "numeric", "replace", 2.0);
    check L30() else D18();
  D18():
    deopt 92 [r36];
  L30():
    sym4 = ldf expression;
    base4 = ldf expression in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L3(r38):
    st E = r38;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L33() else L34();
  L31():
    expression = ldf expression in base;
    r39 = dyn expression(<lang list(a=pi, b=expression(c=`*`(C1, C2)))>, "a test");
    goto L3(r39);
  L32():
    r37 = dyn base4[, d](<lang list(a=pi, b=expression(c=`*`(C1, C2)))>, "a test");
    goto L3(r37);
  L4(r41):
    st LE = r41;
    rapply7 = ldf rapply;
    check L38() else D20();
  L33():
    sym6 = ldf expression;
    base6 = ldf expression in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L35() else L36();
  L34():
    r40 = dyn base5[, d](<lang expression(a=pi, b=expression(c=`*`(C1, C2)))>, "a test");
    goto L4(r40);
  D20():
    deopt 108 [];
  L5(r43):
    list3 = ldf list in base;
    r45 = dyn list3(r43, "a test");
    check L37() else D19();
  L35():
    expression1 = ldf expression in base;
    r44 = dyn expression1(<sym pi>, <lang expression(c=`*`(C1, C2))>);
    goto L5(r44);
  L36():
    r42 = dyn base6[a, b](<sym pi>, <lang expression(c=`*`(C1, C2))>);
    goto L5(r42);
  L38():
    p15 = prom<V +>{
      E = ld E;
      E1 = force? E;
      checkMissing(E1);
      return E1;
    };
    p16 = prom<V +>{
      nchar6 = ld nchar;
      nchar7 = force? nchar6;
      checkMissing(nchar7);
      return nchar7;
    };
    r48 = dyn rapply7[, , how](p15, p16, "replace");
    check L39() else D21();
  D19():
    deopt 105 [r45];
  D21():
    deopt 113 [r48];
  L37():
    goto L4(r45);
  L39():
    rapply8 = ldf rapply;
    check L40() else D22();
  D22():
    deopt 115 [];
  L40():
    p17 = prom<V +>{
      E2 = ld E;
      E3 = force? E2;
      checkMissing(E3);
      return E3;
    };
    p18 = prom<V +>{
      nchar8 = ld nchar;
      nchar9 = force? nchar8;
      checkMissing(nchar9);
      return nchar9;
    };
    r51 = dyn rapply8[, , classes, deflt, how](p17, p18, "character", NA_INT, "unlist");
    check L41() else D23();
  D23():
    deopt 124 [r51];
  L41():
    rapply9 = ldf rapply;
    check L42() else D24();
  D24():
    deopt 126 [];
  L42():
    p19 = prom<V +>{
      LE = ld LE;
      LE1 = force? LE;
      checkMissing(LE1);
      return LE1;
    };
    p20 = prom<V +>{
      as_character = ld `as.character`;
      as_character1 = force? as_character;
      checkMissing(as_character1);
      return as_character1;
    };
    r54 = dyn rapply9(p19, p20);
    check L43() else D25();
  D25():
    deopt 129 [r54];
  L43():
    rapply10 = ldf rapply;
    check L44() else D26();
  D26():
    deopt 131 [];
  L44():
    p21 = prom<V +>{
      LE2 = ld LE;
      LE3 = force? LE2;
      checkMissing(LE3);
      return LE3;
    };
    p22 = prom<V +>{
      nchar10 = ld nchar;
      nchar11 = force? nchar10;
      checkMissing(nchar11);
      return nchar11;
    };
    r57 = dyn rapply10(p21, p22);
    check L45() else D27();
  D27():
    deopt 134 [r57];
  L45():
    stopifnot1 = ldf stopifnot;
    check L46() else D28();
  D28():
    deopt 136 [];
  L46():
    p27 = prom<V +>{
      sym7 = ldf identical;
      base7 = ldf identical in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0():
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L2():
      E4 = ld E;
      E5 = force? E4;
      checkMissing(E5);
      rapply11 = ldf rapply;
      p23 = prom<V +>{
        E6 = ld E;
        E7 = force? E6;
        checkMissing(E7);
        return E7;
      };
      p24 = prom<V +>{
        identity = ld identity;
        identity1 = force? identity;
        checkMissing(identity1);
        return identity1;
      };
      r62 = dyn rapply11[, , how](p23, p24, "replace");
      identical1 = ldf identical in base;
      r63 = dyn identical1(E5, r62, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0();
    L3():
      r58 = dyn base7(<sym E>, <lang rapply(E, identity, how="replace")>);
      goto L0();
    L1(r65):
      return r65;
    L4():
      LE4 = ld LE;
      LE5 = force? LE4;
      checkMissing(LE5);
      rapply12 = ldf rapply;
      p25 = prom<V +>{
        LE6 = ld LE;
        LE7 = force? LE6;
        checkMissing(LE7);
        return LE7;
      };
      p26 = prom<V +>{
        identity2 = ld identity;
        identity3 = force? identity2;
        checkMissing(identity3);
        return identity3;
      };
      r68 = dyn rapply12[, , how](p25, p26, "replace");
      identical2 = ldf identical in base;
      r69 = dyn identical2(LE5, r68, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L1(r69);
    L5():
      r64 = dyn base8(<sym LE>, <lang rapply(LE, identity, how="replace")>);
      goto L1(r64);
    };
    r71 = dyn stopifnot1[exprs](p27);
    check L47() else D29();
  D29():
    deopt 139 [r71];
  L47():
    popenv;
    return r71;
  }
}
fun inner146374923(object, f, classes, deflt, how, `...`) {
  (reg object:*, reg f:*, reg classes:*, reg deflt:*, reg how:*, reg ddd:dots) -+> V { var object:*, var f:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, var deflt:*, reg deflt_isMissing:L, reg deflt_orDefault:*, var how:*, reg how_isMissing:L, reg how_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var `...`:dots?, reg match_arg:cls, reg how1:*, reg how2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg object1:*, reg object2:V, reg f1:*, reg f2:V, reg classes1:*, reg classes2:V, reg deflt1:*, reg deflt2:V, reg how3:*, reg how4:V, reg rapply:cls, reg r8:V, reg how5:*, reg how6:V, reg r9:V, reg c1:L, reg unlist:cls, reg res:*, reg res1:V, reg p2:p(V +), reg r11:V, reg res2:*, reg res3:V |
    mkenv;
    st object = object;
    st f = f;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L0("ANY") else L0(classes);
  L0(classes_orDefault):
    st classes = classes_orDefault;
    deflt_isMissing = missing.0(deflt);
    if deflt_isMissing then L1(NULL) else L1(deflt);
  L1(deflt_orDefault):
    st deflt = deflt_orDefault;
    how_isMissing = missing.0(how);
    if how_isMissing then L2() else L3(how);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("unlist", "replace", "list");
      goto L0(r2);
    L2():
      r = dyn base("unlist", "replace", "list");
      goto L0(r);
    };
    goto L3(p);
  L3(how_orDefault):
    st how = how_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p1 = prom<V +>{
      how1 = ld how;
      how2 = force? how1;
      checkMissing(how2);
      return how2;
    };
    r5 = dyn match_arg(p1);
    check L7() else D1();
  D1():
    deopt 3 [r5];
  L7():
    st how = r5;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4(r7):
    st res = r7;
    how5 = ld how;
    check L16() else D8();
  L8():
    object1 = ld object;
    check L10() else D2();
  L9():
    r6 = dyn base1(<lang rapply(object, f, classes, deflt, how)>);
    goto L4(r6);
  D2():
    deopt 7 [object1];
  D8():
    deopt 20 [how5];
  L10():
    object2 = force? object1;
    checkMissing(object2);
    f1 = ld f;
    check L11() else D3();
  L16():
    how6 = force? how5;
    checkMissing(how6);
    r9 = `==`(how6, "unlist");
    c1 = `as.logical`(r9);
    if c1 then L17() else L5();
  D3():
    deopt 9 [f1];
  L5():
    res2 = ld res;
    check L21() else D11();
  L11():
    f2 = force? f1;
    checkMissing(f2);
    classes1 = ld classes;
    check L12() else D4();
  L17():
    unlist = ldf unlist;
    check L18() else D9();
  D4():
    deopt 11 [classes1];
  D9():
    deopt 25 [];
  D11():
    deopt 30 [res2];
  L12():
    classes2 = force? classes1;
    checkMissing(classes2);
    deflt1 = ld deflt;
    check L13() else D5();
  L18():
    p2 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    r11 = dyn unlist[, recursive](p2, TRUE);
    check L19() else D10();
  L21():
    res3 = force? res2;
    checkMissing(res3);
    popenv;
    return res3;
  D5():
    deopt 13 [deflt1];
  D10():
    deopt 29 [r11];
  L13():
    deflt2 = force? deflt1;
    checkMissing(deflt2);
    how3 = ld how;
    check L14() else D6();
  L19():
    popenv;
    return r11;
  D6():
    deopt 15 [how3];
  L14():
    how4 = force? how3;
    checkMissing(how4);
    rapply = ldf rapply in base;
    r8 = dyn rapply(object2, f2, classes2, deflt2, how4);
    check L15() else D7();
  D7():
    deopt 18 [r8];
  L15():
    goto L4(r8);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}