fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `.encode_numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg r1:cls, reg is_numeric_version:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg class:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg names:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg unclass:cls, reg r15:V, reg lengths:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg r17:V, reg lapply:cls, reg x11:*, reg x12:V, reg p2:p(V +), reg r19:cls, reg p3:p(V +), reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg unlist:cls, reg y:*, reg y1:V, reg p4:p(V +), reg r27:V, reg nchar:cls, reg r28:V, reg max:cls, reg r29:V, reg vapply:cls, reg y2:*, reg y3:V, reg p5:p(V +), reg r31:cls, reg p6:p(V +), reg r33:V, reg strrpad:cls, reg y4:*, reg y5:V, reg p7:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg y6:*, reg y7:V, reg nchar1:cls, reg r39:V, reg max1:cls, reg r40:V, reg p8:p(V +), reg r42:V, reg structure:cls, reg ifelse:cls, reg lens:*, reg lens1:V, reg r43:V, reg p9:p(V +), reg y8:*, reg y9:V, reg p10:p(V +), reg r46:V, reg p11:p(V +), reg width:*, reg width1:V, reg p12:p(V +), reg lens2:*, reg lens3:V, reg p13:p(V +), reg classes:*, reg classes1:V, reg p14:p(V +), reg nms:*, reg nms1:V, reg p15:p(V +), reg r52:V |
    mkenv;
    st x = x;
    r = clos inner1485149937;
    st strlpad = r;
    r1 = clos inner1485149937;
    st strrpad = r1;
    is_numeric_version = ldf `is.numeric_version`;
    check L7() else D0();
  D0():
    deopt 7 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn is_numeric_version(p);
    check L8() else D1();
  D1():
    deopt 9 [r3];
  L8():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L9() else L0();
  L0():
    goto L1();
  L1():
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D2():
    deopt 12 [];
  L2(r8):
    st classes = r8;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L10():
    r5 = dyn stop("wrong class");
    check L11() else D3();
  L13():
    x3 = ld x;
    check L15() else D4();
  L14():
    r7 = dyn base(<sym x>);
    goto L2(r7);
  D3():
    deopt 14 [r5];
  D4():
    deopt 19 [x3];
  L3(r11):
    st nms = r11;
    sym2 = ldf unclass;
    base2 = ldf unclass in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L11():
    goto L1();
  L15():
    x4 = force? x3;
    checkMissing(x4);
    class = ldf class in base;
    r9 = dyn class(x4);
    check L16() else D5();
  L17():
    x5 = ld x;
    check L19() else D6();
  L18():
    r10 = dyn base1(<sym x>);
    goto L3(r10);
  D5():
    deopt 22 [r9];
  D6():
    deopt 26 [x5];
  L4(r14):
    st x = r14;
    lengths = ldf lengths;
    check L25() else D10();
  L16():
    goto L2(r9);
  L19():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r12 = dyn names(x6);
    check L20() else D7();
  L21():
    x7 = ld x;
    check L23() else D8();
  L22():
    r13 = dyn base2(<sym x>);
    goto L4(r13);
  D7():
    deopt 29 [r12];
  D8():
    deopt 33 [x7];
  D10():
    deopt 39 [];
  L20():
    goto L3(r12);
  L23():
    x8 = force? x7;
    checkMissing(x8);
    unclass = ldf unclass in base;
    r15 = dyn unclass(x8);
    check L24() else D9();
  L25():
    p1 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r17 = dyn lengths(p1);
    check L26() else D11();
  D9():
    deopt 36 [r15];
  D11():
    deopt 41 [r17];
  L24():
    goto L4(r15);
  L26():
    st lens = r17;
    lapply = ldf lapply;
    check L27() else D12();
  D12():
    deopt 44 [];
  L27():
    p2 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p3 = prom<V +>{
      r19 = clos inner1560918050;
      return r19;
    };
    r21 = dyn lapply(p2, p3);
    check L28() else D13();
  D13():
    deopt 47 [r21];
  L28():
    st y = r21;
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L5(r23):
    st width = r23;
    vapply = ldf vapply;
    check L37() else D18();
  L29():
    sym4 = ldf nchar;
    base4 = ldf nchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L30():
    r22 = dyn base3(<lang nchar(unlist(y))>, 0);
    goto L5(r22);
  D18():
    deopt 67 [];
  L6(r25):
    max = ldf max in base;
    r29 = dyn max(r25, 0);
    check L36() else D17();
  L31():
    unlist = ldf unlist;
    check L33() else D14();
  L32():
    r24 = dyn base4(<lang unlist(y)>);
    goto L6(r24);
  L37():
    p5 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p6 = prom<V +>{
      r31 = clos inner1560918050;
      return r31;
    };
    r33 = dyn vapply(p5, p6, "");
    check L38() else D19();
  D14():
    deopt 54 [];
  D17():
    deopt 64 [r29];
  D19():
    deopt 71 [r33];
  L33():
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r27 = dyn unlist(p4);
    check L34() else D15();
  L36():
    goto L5(r29);
  L38():
    st y = r33;
    strrpad = ldf strrpad;
    check L39() else D20();
  D15():
    deopt 56 [r27];
  D20():
    deopt 74 [];
  L34():
    nchar = ldf nchar in base;
    r28 = dyn nchar(r27, "chars", FALSE, NA_LGL);
    check L35() else D16();
  L39():
    p7 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p8 = prom<V +>{
      sym5 = ldf max;
      base5 = ldf max in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r36):
      return r36;
    L2():
      sym6 = ldf nchar;
      base6 = ldf nchar in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r35 = dyn base5(<lang nchar(y)>, 0);
      goto L0(r35);
    L1(r38):
      max1 = ldf max in base;
      r40 = dyn max1(r38, 0);
      goto L0(r40);
    L4():
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      nchar1 = ldf nchar in base;
      r39 = dyn nchar1(y7, "chars", FALSE, NA_LGL);
      goto L1(r39);
    L5():
      r37 = dyn base6(<sym y>);
      goto L1(r37);
    };
    r42 = dyn strrpad(p7, "0", p8);
    check L40() else D21();
  D16():
    deopt 61 [r28];
  D21():
    deopt 78 [r42];
  L35():
    goto L6(r28);
  L40():
    st y = r42;
    structure = ldf structure;
    check L41() else D22();
  D22():
    deopt 81 [];
  L41():
    p11 = prom<V +>{
      ifelse = ldf ifelse;
      p9 = prom<V +>{
        lens = ld lens;
        lens1 = force? lens;
        checkMissing(lens1);
        r43 = `>`(lens1, 0);
        return r43;
      };
      p10 = prom<V +>{
        y8 = ld y;
        y9 = force? y8;
        checkMissing(y9);
        return y9;
      };
      r46 = dyn ifelse(p9, p10, NA_STR);
      return r46;
    };
    p12 = prom<V +>{
      width = ld width;
      width1 = force? width;
      checkMissing(width1);
      return width1;
    };
    p13 = prom<V +>{
      lens2 = ld lens;
      lens3 = force? lens2;
      checkMissing(lens3);
      return lens3;
    };
    p14 = prom<V +>{
      classes = ld classes;
      classes1 = force? classes;
      checkMissing(classes1);
      return classes1;
    };
    p15 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r52 = dyn structure[, width, lens, `.classes`, names](p11, p12, p13, p14, p15);
    check L42() else D23();
  D23():
    deopt 91 [r52];
  L42():
    popenv;
    return r52;
  }
}
fun inner1485149937(x, char, width) {
  (reg x:*, reg char:*, reg width:*) -+> V { var x:*, var char:*, var width:*, reg paste0:cls, reg strrep:cls, reg char1:*, reg char2:V, reg p:p(V +), reg width1:*, reg width2:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg width5:V, reg r2:V, reg x1:*, reg x2:V, reg nchar:cls, reg r3:V, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg x3:*, reg x4:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st x = x;
    st char = char;
    st width = width;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      strrep = ldf strrep;
      p = prom<V +>{
        char1 = ld char;
        char2 = force? char1;
        checkMissing(char2);
        return char2;
      };
      p1 = prom<V +>{
        width1 = ld width;
        width2 = force? width1;
        checkMissing(width2);
        sym = ldf nchar;
        base = ldf nchar in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(width5, r2):
        r4 = `-`(width5, r2);
        return r4;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        nchar = ldf nchar in base;
        r3 = dyn nchar(x2, "chars", FALSE, NA_LGL);
        goto L0(width2, r3);
      L2():
        r1 = dyn base(<sym x>);
        goto L0(width2, r1);
      };
      r6 = dyn strrep(p, p1);
      return r6;
    };
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn paste0(p2, p3);
    check L1() else D1();
  D1():
    deopt 4 [r9];
  L1():
    popenv;
    return r9;
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg sprintf:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st e = e;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r1 = dyn sprintf("%o", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}