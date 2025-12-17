fun main() {
  () -+> V { reg r:cls, reg noquote:cls, reg strsplit:cls, reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg strsplit1:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r11:V, reg unlist:cls, reg strsplit2:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg unlist1:cls, reg strsplit3:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg unlist2:cls, reg strsplit4:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg r21:cls, reg strReverse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg c2:cls, reg r24:V, reg p5:p(V +), reg r26:V, reg readLines:cls, reg file_path:cls, reg R_home:cls, reg r27:V, reg p6:p(V +), reg r29:V, reg p7:p(V +), reg r31:V, reg c3:L, reg r33:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r34:V, reg a:*, reg a1:V, reg c4:L, reg a3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r37:V, reg a6:V, reg r38:v(I), reg r39:V, reg a7:*, reg a8:V, reg length:cls, reg r40:V, reg r41:V, reg __2:cls, reg r42:V, reg sub:cls, reg a9:*, reg a10:V, reg p8:p(V +), reg r44:V, reg strReverse1:cls, reg a11:*, reg a12:V, reg p9:p(V +), reg r46:V, reg strsplit5:cls, reg paste:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r47:V, reg r48:V, reg c5:cls, reg r49:V, reg p10:p(V +), reg r51:V, reg p11:p(V +), reg r53:V, reg c6:L, reg r55:V, reg dr6:V, reg dc3:L, reg dx6:V, reg __3:cls, reg r56:V, reg strsplit6:cls, reg r57:V, reg c7:L, reg r59:V, reg dr8:V, reg dc4:L, reg dx8:V, reg __4:cls, reg r60:V, reg strsplit7:cls, reg r61:V, reg c8:L, reg r63:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r64:V |
    mkenv;
    r = clos inner3978275387;
    st strsplit = r;
    noquote = ldf noquote;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      strsplit = ldf strsplit;
      r1 = dyn strsplit("A text I want to display with spaces", NULL);
      c = `is.object`(r1);
      if c then L1() else L2(r1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", r1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r3):
      __ = ldf `[[` in base;
      r4 = dyn __(r3, 1.0);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn noquote(p);
    check L8() else D1();
  D1():
    deopt 6 [r6];
  L8():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r8):
    st x = r8;
    strsplit1 = ldf strsplit;
    check L12() else D3();
  L9():
    c1 = ldf c in base;
    r9 = dyn c1("asfef", "qwerty", "yuiop[", "b", "stuff.blah.yech");
    check L11() else D2();
  L10():
    r7 = dyn base[as, qu, , , ]("asfef", "qwerty", "yuiop[", "b", "stuff.blah.yech");
    goto L0(r7);
  D2():
    deopt 17 [r9];
  D3():
    deopt 20 [];
  L11():
    goto L0(r9);
  L12():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r11 = dyn strsplit1(p1, "e");
    check L13() else D4();
  D4():
    deopt 23 [r11];
  L13():
    unlist = ldf unlist;
    check L14() else D5();
  D5():
    deopt 25 [];
  L14():
    p2 = prom<V +>{
      strsplit2 = ldf strsplit;
      r12 = dyn strsplit2("a.b.c", ".");
      return r12;
    };
    r14 = dyn unlist(p2);
    check L15() else D6();
  D6():
    deopt 27 [r14];
  L15():
    unlist1 = ldf unlist;
    check L16() else D7();
  D7():
    deopt 29 [];
  L16():
    p3 = prom<V +>{
      strsplit3 = ldf strsplit;
      r15 = dyn strsplit3("a.b.c", "[.]");
      return r15;
    };
    r17 = dyn unlist1(p3);
    check L17() else D8();
  D8():
    deopt 31 [r17];
  L17():
    unlist2 = ldf unlist;
    check L18() else D9();
  D9():
    deopt 33 [];
  L18():
    p4 = prom<V +>{
      strsplit4 = ldf strsplit;
      r18 = dyn strsplit4[, , fixed]("a.b.c", ".", TRUE);
      return r18;
    };
    r20 = dyn unlist2(p4);
    check L19() else D10();
  D10():
    deopt 35 [r20];
  L19():
    r21 = clos inner2501545716;
    st strReverse = r21;
    strReverse = ldf strReverse;
    check L20() else D11();
  D11():
    deopt 40 [];
  L20():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c2 = ldf c in base;
      r24 = dyn c2("abc", "Statistics");
      goto L0(r24);
    L2():
      r22 = dyn base1("abc", "Statistics");
      goto L0(r22);
    };
    r26 = dyn strReverse(p5);
    check L21() else D12();
  D12():
    deopt 42 [r26];
  L21():
    readLines = ldf readLines;
    check L22() else D13();
  D13():
    deopt 44 [];
  L22():
    p7 = prom<V +>{
      file_path = ldf `file.path`;
      p6 = prom<V +>{
        R_home = ldf `R.home`;
        r27 = dyn R_home("doc");
        return r27;
      };
      r29 = dyn file_path(p6, "AUTHORS");
      return r29;
    };
    r31 = dyn readLines(p7);
    check L23() else D14();
  D14():
    deopt 46 [r31];
  L23():
    c3 = `is.object`(r31);
    if c3 then L24() else L25(r31);
  L1(dx3):
    st a = dx3;
    a = ld a;
    check L27() else D15();
  L24():
    dr2 = tryDispatchBuiltin.1("[", r31);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(r33):
    __1 = ldf `[` in base;
    r34 = dyn __1(r33, <int -1, -2, -3, -4, -5, -6, -7, -8>);
    goto L1(r34);
  D15():
    deopt 51 [a];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L27():
    a1 = force? a;
    checkMissing(a1);
    c4 = `is.object`(a1);
    if c4 then L28() else L29(a1);
  L2(dx5):
    st a = dx5;
    sub = ldf sub;
    check L35() else D18();
  L28():
    dr4 = tryDispatchBuiltin.1("[", a1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(dr4);
  L29(a3):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D18():
    deopt 64 [];
  L3(a6, r38, r39):
    r41 = `-`(r38, r39);
    __2 = ldf `[` in base;
    r42 = dyn __2(a6, r41);
    goto L2(r42);
  L30():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx4);
  L31():
    a7 = ld a;
    check L33() else D16();
  L32():
    r37 = dyn base2(<sym a>);
    goto L3(a3, <int 0, 1, 2>, r37);
  L35():
    p8 = prom<V +>{
      a9 = ld a;
      a10 = force? a9;
      checkMissing(a10);
      return a10;
    };
    r44 = dyn sub(" .*", "", p8);
    check L36() else D19();
  D16():
    deopt 56 [a3, <int 0, 1, 2>, a7];
  D19():
    deopt 68 [r44];
  L33():
    a8 = force? a7;
    checkMissing(a8);
    length = ldf length in base;
    r40 = dyn length(a8);
    check L34() else D17();
  L36():
    st a = r44;
    strReverse1 = ldf strReverse;
    check L37() else D20();
  D17():
    deopt 59 [a3, <int 0, 1, 2>, r40];
  D20():
    deopt 71 [];
  L34():
    goto L3(a3, <int 0, 1, 2>, r40);
  L37():
    p9 = prom<V +>{
      a11 = ld a;
      a12 = force? a11;
      checkMissing(a12);
      return a12;
    };
    r46 = dyn strReverse1(p9);
    check L38() else D21();
  D21():
    deopt 73 [r46];
  L38():
    strsplit5 = ldf strsplit;
    check L39() else D22();
  D22():
    deopt 75 [];
  L39():
    p11 = prom<V +>{
      paste = ldf paste;
      p10 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r48):
        return r48;
      L1():
        c5 = ldf c in base;
        r49 = dyn c5("", "a", "");
        goto L0(r49);
      L2():
        r47 = dyn base3("", "a", "");
        goto L0(r47);
      };
      r51 = dyn paste[, collapse](p10, "#");
      return r51;
    };
    r53 = dyn strsplit5[, split](p11, "#");
    check L40() else D23();
  D23():
    deopt 79 [r53];
  L40():
    c6 = `is.object`(r53);
    if c6 then L41() else L42(r53);
  L4():
    strsplit6 = ldf strsplit;
    check L44() else D24();
  L41():
    dr6 = tryDispatchBuiltin.1("[[", r53);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L43() else L42(dr6);
  L42(r55):
    __3 = ldf `[[` in base;
    r56 = dyn __3(r55, 1.0);
    goto L4();
  D24():
    deopt 84 [];
  L43():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L4();
  L44():
    r57 = dyn strsplit6("", " ");
    check L45() else D25();
  D25():
    deopt 87 [r57];
  L45():
    c7 = `is.object`(r57);
    if c7 then L46() else L47(r57);
  L5():
    strsplit7 = ldf strsplit;
    check L49() else D26();
  L46():
    dr8 = tryDispatchBuiltin.1("[[", r57);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L48() else L47(dr8);
  L47(r59):
    __4 = ldf `[[` in base;
    r60 = dyn __4(r59, 1.0);
    goto L5();
  D26():
    deopt 92 [];
  L48():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L5();
  L49():
    r61 = dyn strsplit7(" ", " ");
    check L50() else D27();
  D27():
    deopt 95 [r61];
  L50():
    c8 = `is.object`(r61);
    if c8 then L51() else L52(r61);
  L6(dx11):
    popenv;
    return dx11;
  L51():
    dr10 = tryDispatchBuiltin.1("[[", r61);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L53() else L52(dr10);
  L52(r63):
    __5 = ldf `[[` in base;
    r64 = dyn __5(r63, 1.0);
    goto L6(r64);
  L53():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L6(dx10);
  }
}
fun inner3978275387(x, split, fixed, perl, useBytes) {
  (reg x:*, reg split:*, reg fixed:*, reg perl:*, reg useBytes:*) -+> V { var x:*, var split:*, var fixed:*, reg fixed_isMissing:L, reg fixed_orDefault:*, var perl:*, reg perl_isMissing:L, reg perl_orDefault:*, var useBytes:*, reg useBytes_isMissing:L, reg useBytes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg split1:*, reg split2:V, reg as_character:cls, reg r4:V, reg fixed1:*, reg fixed2:V, reg perl1:*, reg perl2:V, reg useBytes1:*, reg useBytes2:V, reg strsplit:cls, reg r5:V |
    mkenv;
    st x = x;
    st split = split;
    fixed_isMissing = missing.0(fixed);
    if fixed_isMissing then L0(FALSE) else L0(fixed);
  L0(fixed_orDefault):
    st fixed = fixed_orDefault;
    perl_isMissing = missing.0(perl);
    if perl_isMissing then L1(FALSE) else L1(perl);
  L1(perl_orDefault):
    st perl = perl_orDefault;
    useBytes_isMissing = missing.0(useBytes);
    if useBytes_isMissing then L2(FALSE) else L2(useBytes);
  L2(useBytes_orDefault):
    st useBytes = useBytes_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L3(r1):
    popenv;
    return r1;
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<lang strsplit(x, as.character(split), fixed, perl, useBytes)>);
    goto L3(r);
  D0():
    deopt 2 [x1];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4(r3):
    fixed1 = ld fixed;
    check L12() else D3();
  L8():
    split1 = ld split;
    check L10() else D1();
  L9():
    r2 = dyn base1(<sym split>);
    goto L4(r2);
  D1():
    deopt 6 [split1];
  D3():
    deopt 10 [fixed1];
  L10():
    split2 = force? split1;
    checkMissing(split2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(split2);
    check L11() else D2();
  L12():
    fixed2 = force? fixed1;
    checkMissing(fixed2);
    perl1 = ld perl;
    check L13() else D4();
  D2():
    deopt 9 [r4];
  D4():
    deopt 12 [perl1];
  L11():
    goto L4(r4);
  L13():
    perl2 = force? perl1;
    checkMissing(perl2);
    useBytes1 = ld useBytes;
    check L14() else D5();
  D5():
    deopt 14 [useBytes1];
  L14():
    useBytes2 = force? useBytes1;
    checkMissing(useBytes2);
    strsplit = ldf strsplit in base;
    r5 = dyn strsplit(x2, r3, fixed2, perl2, useBytes2);
    check L15() else D6();
  D6():
    deopt 17 [r5];
  L15():
    goto L3(r5);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sapply:cls, reg lapply:cls, reg strsplit:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg rev:*, reg rev1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg paste:*, reg paste1:V, reg p4:p(V +), reg r7:V |
    mkenv;
    st x = x;
    sapply = ldf sapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        strsplit = ldf strsplit;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn strsplit(p, NULL);
        return r1;
      };
      p2 = prom<V +>{
        rev = ld rev;
        rev1 = force? rev;
        checkMissing(rev1);
        return rev1;
      };
      r4 = dyn lapply(p1, p2);
      return r4;
    };
    p4 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r7 = dyn sapply[, , collapse](p3, p4, "");
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    popenv;
    return r7;
  }
}