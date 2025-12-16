fun main() {
  () -+> V { reg r:cls, reg chartr:cls, reg x:*, reg x1:V, reg p:p(V +), reg r2:V, reg chartr1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r4:V, reg tolower:cls, reg x4:*, reg x5:V, reg p2:p(V +), reg r6:V, reg toupper:cls, reg x6:*, reg x7:V, reg p3:p(V +), reg r8:V, reg r9:cls, reg _simpleCap:cls, reg r10:V, reg r11:cls, reg capwords:cls, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg c:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg capwords1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg c1:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg r22:cls, reg rot:cls, reg pw:*, reg pw1:V, reg p6:p(V +), reg r24:V, reg rot1:cls, reg crypw:*, reg crypw1:V, reg p7:p(V +), reg p8:p(V +), reg r27:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg pw2:*, reg pw3:V, reg rot2:cls, reg crypw2:*, reg crypw3:V, reg p9:p(V +), reg p10:p(V +), reg r32:V, reg identical:cls, reg r33:V, reg p11:p(V +), reg r35:V |
    mkenv;
    r = clos `inner-1238138308`;
    st chartr = r;
    st x = "MiXeD cAsE 123";
    chartr = ldf chartr;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r2 = dyn chartr("iXs", "why", p);
    check L1() else D1();
  D1():
    deopt 11 [r2];
  L1():
    chartr1 = ldf chartr;
    check L2() else D2();
  D2():
    deopt 13 [];
  L2():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r4 = dyn chartr1("a-cX", "D-Fw", p1);
    check L3() else D3();
  D3():
    deopt 17 [r4];
  L3():
    tolower = ldf tolower;
    check L4() else D4();
  D4():
    deopt 19 [];
  L4():
    p2 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r6 = dyn tolower(p2);
    check L5() else D5();
  D5():
    deopt 21 [r6];
  L5():
    toupper = ldf toupper;
    check L6() else D6();
  D6():
    deopt 23 [];
  L6():
    p3 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r8 = dyn toupper(p3);
    check L7() else D7();
  D7():
    deopt 25 [r8];
  L7():
    r9 = clos inner354062069;
    st `.simpleCap` = r9;
    _simpleCap = ldf `.simpleCap`;
    check L8() else D8();
  D8():
    deopt 30 [];
  L8():
    r10 = dyn _simpleCap("the quick red fox jumps over the lazy brown dog");
    check L9() else D9();
  D9():
    deopt 32 [r10];
  L9():
    r11 = clos `inner-2038620397`;
    st capwords = r11;
    capwords = ldf capwords;
    check L10() else D10();
  D10():
    deopt 37 [];
  L10():
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c = ldf c in base;
      r14 = dyn c("using AIC for model selection");
      goto L0(r14);
    L2():
      r12 = dyn base("using AIC for model selection");
      goto L0(r12);
    };
    r16 = dyn capwords(p4);
    check L11() else D11();
  D11():
    deopt 39 [r16];
  L11():
    capwords1 = ldf capwords;
    check L12() else D12();
  D12():
    deopt 41 [];
  L12():
    p5 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c1 = ldf c in base;
      r19 = dyn c1("using AIC", "for MODEL selection");
      goto L0(r19);
    L2():
      r17 = dyn base1("using AIC", "for MODEL selection");
      goto L0(r17);
    };
    r21 = dyn capwords1[, strict](p5, TRUE);
    check L13() else D13();
  D13():
    deopt 45 [r21];
  L13():
    r22 = clos inner1237207504;
    st rot = r22;
    st pw = "my secret pass phrase";
    rot = ldf rot;
    check L14() else D14();
  D14():
    deopt 53 [];
  L14():
    p6 = prom<V +>{
      pw = ld pw;
      pw1 = force? pw;
      checkMissing(pw1);
      return pw1;
    };
    r24 = dyn rot(p6, 13.0);
    check L15() else D15();
  D15():
    deopt 56 [r24];
  L15():
    st crypw = r24;
    rot1 = ldf rot;
    check L16() else D16();
  D16():
    deopt 59 [];
  L16():
    p7 = prom<V +>{
      crypw = ld crypw;
      crypw1 = force? crypw;
      checkMissing(crypw1);
      return crypw1;
    };
    p8 = prom<V +>{
      return 41.0;
    };
    r27 = dyn rot1(p7, p8);
    check L17() else D17();
  D17():
    deopt 62 [r27];
  L17():
    stopifnot = ldf stopifnot;
    check L18() else D18();
  D18():
    deopt 64 [];
  L18():
    p11 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      pw2 = ld pw;
      pw3 = force? pw2;
      checkMissing(pw3);
      rot2 = ldf rot;
      p9 = prom<V +>{
        crypw2 = ld crypw;
        crypw3 = force? crypw2;
        checkMissing(crypw3);
        return crypw3;
      };
      p10 = prom<V +>{
        return 41.0;
      };
      r32 = dyn rot2(p9, p10);
      identical = ldf identical in base;
      r33 = dyn identical(pw3, r32, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r33);
    L2():
      r28 = dyn base2(<sym pw>, <lang rot(crypw, `-`(54.0, 13.0))>);
      goto L0(r28);
    };
    r35 = dyn stopifnot(p11);
    check L19() else D19();
  D19():
    deopt 66 [r35];
  L19():
    popenv;
    return r35;
  }
}
fun `inner-1238138308`(old, new, x) {
  (reg old:*, reg new:*, reg x:*) -+> V { var old:*, var new:*, var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg as_character:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg old1:*, reg old2:V, reg new1:*, reg new2:V, reg x5:*, reg x6:V, reg chartr:cls, reg r9:V |
    mkenv;
    st old = old;
    st new = new;
    st x = x;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L8() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L3();
  L3():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L8():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(r4):
    st x = r4;
    goto L3();
  L4(r8):
    popenv;
    return r8;
  L9():
    x3 = ld x;
    check L11() else D1();
  L10():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  L14():
    old1 = ld old;
    check L16() else D3();
  L15():
    r7 = dyn base2(<lang chartr(old, new, x)>);
    goto L4(r7);
  D1():
    deopt 7 [x3];
  D3():
    deopt 16 [old1];
  L11():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(x4);
    check L12() else D2();
  L16():
    old2 = force? old1;
    checkMissing(old2);
    new1 = ld new;
    check L17() else D4();
  D2():
    deopt 10 [r5];
  D4():
    deopt 18 [new1];
  L12():
    goto L2(r5);
  L17():
    new2 = force? new1;
    checkMissing(new2);
    x5 = ld x;
    check L18() else D5();
  D5():
    deopt 20 [x5];
  L18():
    x6 = force? x5;
    checkMissing(x6);
    chartr = ldf chartr in base;
    r9 = dyn chartr(old2, new2, x6);
    check L19() else D6();
  D6():
    deopt 23 [r9];
  L19():
    goto L4(r9);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg strsplit:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg paste:cls, reg toupper:cls, reg substring:cls, reg s:*, reg s1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg substring1:cls, reg s2:*, reg s3:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V |
    mkenv;
    st x = x;
    strsplit = ldf strsplit;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn strsplit(p, " ");
    check L2() else D1();
  D1():
    deopt 4 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    st s = dx1;
    paste = ldf paste;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.1("[[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    __ = ldf `[[` in base;
    r4 = dyn __(r3, 1.0);
    goto L0(r4);
  D2():
    deopt 10 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    p3 = prom<V +>{
      toupper = ldf toupper;
      p2 = prom<V +>{
        substring = ldf substring;
        p1 = prom<V +>{
          s = ld s;
          s1 = force? s;
          checkMissing(s1);
          return s1;
        };
        r6 = dyn substring(p1, 1.0, 1.0);
        return r6;
      };
      r8 = dyn toupper(p2);
      return r8;
    };
    p5 = prom<V +>{
      substring1 = ldf substring;
      p4 = prom<V +>{
        s2 = ld s;
        s3 = force? s2;
        checkMissing(s3);
        return s3;
      };
      r11 = dyn substring1(p4, 2.0);
      return r11;
    };
    r13 = dyn paste[, , sep, collapse](p3, p5, "", " ");
    check L7() else D3();
  D3():
    deopt 17 [r13];
  L7():
    popenv;
    return r13;
  }
}
fun `inner-2038620397`(s, strict) {
  (reg s:*, reg strict:*) -+> V { var s:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, reg r:cls, reg sapply:cls, reg strsplit:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg cap:*, reg cap1:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg s3:*, reg s4:V, reg names:cls, reg r9:V, reg c:V, reg r10:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st s = s;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(FALSE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    r = clos `inner-910700624`;
    st cap = r;
    sapply = ldf sapply;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r2 = dyn strsplit[, split](p, " ");
      return r2;
    };
    p2 = prom<V +>{
      cap = ld cap;
      cap1 = force? cap;
      checkMissing(cap1);
      return cap1;
    };
    p3 = prom<V +>{
      sym = ldf `is.null`;
      base = ldf `is.null` in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r6):
      r10 = `!`(r6);
      return r10;
    L2():
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r5 = dyn base(<lang names(s)>);
      goto L0(r5);
    L1(r8):
      c = `==`(r8, NULL);
      goto L0(c);
    L4():
      s3 = ld s;
      s4 = force? s3;
      checkMissing(s4);
      names = ldf names in base;
      r9 = dyn names(s4);
      goto L1(r9);
    L5():
      r7 = dyn base1(<sym s>);
      goto L1(r7);
    };
    r12 = dyn sapply[, , `USE.NAMES`](p1, p2, p3);
    check L2() else D1();
  D1():
    deopt 9 [r12];
  L2():
    popenv;
    return r12;
  }
}
fun `inner-910700624`(s) {
  (reg s:*) -+> V { var s:*, reg paste:cls, reg toupper:cls, reg substring:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg substring1:cls, reg s3:*, reg s4:V, reg p3:p(V +), reg r6:V, reg strict:*, reg strict1:V, reg c:L, reg tolower:cls, reg s5:*, reg s6:V, reg p4:p(V +), reg r8:V, reg s7:*, reg s8:V, reg p5:p(V +), reg r10:V |
    mkenv;
    st s = s;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      toupper = ldf toupper;
      p1 = prom<V +>{
        substring = ldf substring;
        p = prom<V +>{
          s1 = ld s;
          s2 = force? s1;
          checkMissing(s2);
          return s2;
        };
        r1 = dyn substring(p, 1.0, 1.0);
        return r1;
      };
      r3 = dyn toupper(p1);
      return r3;
    };
    p5 = prom<V +>{
      substring1 = ldf substring;
      p3 = prom<V +>{
        s3 = ld s;
        s4 = force? s3;
        checkMissing(s4);
        return s4;
      };
      r6 = dyn substring1(p3, 2.0);
      st s = r6;
      strict = ld strict;
      strict1 = force? strict;
      checkMissing(strict1);
      c = `as.logical`(strict1);
      if c then L1() else L0();
    L0():
      s7 = ld s;
      s8 = force? s7;
      checkMissing(s8);
      return s8;
    L1():
      tolower = ldf tolower;
      p4 = prom<V +>{
        s5 = ld s;
        s6 = force? s5;
        checkMissing(s6);
        return s6;
      };
      r8 = dyn tolower(p4);
      return r8;
    };
    r10 = dyn paste[, , sep, collapse](p2, p5, "", " ");
    check L1() else D1();
  D1():
    deopt 8 [r10];
  L1():
    popenv;
    return r10;
  }
}
fun inner1237207504(ch, k) {
  (reg ch:*, reg k:*) -+> V { var ch:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg letters:*, reg letters1:V, reg LETTERS:*, reg LETTERS1:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg k1:*, reg k2:V, reg r6:I, reg chartr:cls, reg p0:cls, reg A:*, reg A1:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg p3:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg A2:*, reg A3:V, reg c1:L, reg A5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg I:*, reg I1:V, reg r12:V, reg __:cls, reg r13:V, reg A6:*, reg A7:V, reg c2:L, reg A9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg I2:*, reg I3:V, reg __1:cls, reg r14:V, reg c3:cls, reg r15:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg ch1:*, reg ch2:V, reg p6:p(V +), reg r20:V |
    mkenv;
    st ch = ch;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(13.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    r = clos `inner-901363989`;
    st p0 = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r2):
    st A = r2;
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L3():
    letters = ld letters;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym letters>, <sym LETTERS>, " '");
    goto L1(r1);
  D0():
    deopt 5 [letters];
  L2(r5):
    st I = r5;
    chartr = ldf chartr;
    check L11() else D4();
  L5():
    letters1 = force? letters;
    checkMissing(letters1);
    LETTERS = ld LETTERS;
    check L6() else D1();
  L8():
    k1 = ld k;
    check L10() else D3();
  L9():
    r4 = dyn base1(<sym k>);
    goto L2(r4);
  D1():
    deopt 7 [LETTERS];
  D3():
    deopt 14 [k1];
  D4():
    deopt 19 [];
  L6():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c = ldf c in base;
    r3 = dyn c(letters1, LETTERS1, " '");
    check L7() else D2();
  L10():
    k2 = force? k1;
    checkMissing(k2);
    r6 = seq_len(k2);
    goto L2(r6);
  L11():
    p2 = prom<V +>{
      p0 = ldf p0;
      p1 = prom<V +>{
        A = ld A;
        A1 = force? A;
        checkMissing(A1);
        return A1;
      };
      r8 = dyn p0(p1);
      return r8;
    };
    p5 = prom<V +>{
      p3 = ldf p0;
      p4 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L3() else L4();
      L0(r11):
        return r11;
      L3():
        A2 = ld A;
        A3 = force? A2;
        checkMissing(A3);
        c1 = `is.object`(A3);
        if c1 then L5() else L6(A3);
      L4():
        r10 = dyn base2(<lang `[`(A, `-`(I))>, <lang `[`(A, I)>);
        goto L0(r10);
      L1(dx1):
        A6 = ld A;
        A7 = force? A6;
        checkMissing(A7);
        c2 = `is.object`(A7);
        if c2 then L8() else L9(A7);
      L5():
        dr = tryDispatchBuiltin.1("[", A3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L7() else L6(dr);
      L6(A5):
        I = ld I;
        I1 = force? I;
        checkMissing(I1);
        r12 = `-`(<missing>, I1);
        __ = ldf `[` in base;
        r13 = dyn __(A5, r12);
        goto L1(r13);
      L2(dx3):
        c3 = ldf c in base;
        r15 = dyn c3(dx1, dx3);
        goto L0(r15);
      L7():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      L8():
        dr2 = tryDispatchBuiltin.1("[", A7);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L10() else L9(dr2);
      L9(A9):
        I2 = ld I;
        I3 = force? I2;
        __1 = ldf `[` in base;
        r14 = dyn __1(A9, I3);
        goto L2(r14);
      L10():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L2(dx2);
      };
      r17 = dyn p3(p4);
      return r17;
    };
    p6 = prom<V +>{
      ch1 = ld ch;
      ch2 = force? ch1;
      checkMissing(ch2);
      return ch2;
    };
    r20 = dyn chartr(p2, p5, p6);
    check L12() else D5();
  D2():
    deopt 11 [r3];
  D5():
    deopt 23 [r20];
  L7():
    goto L1(r3);
  L12():
    popenv;
    return r20;
  }
}
fun `inner-901363989`(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg ddd1:dots?, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st `...` = ddd;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c;
      ddd1 = ld `...`;
      r2 = dyn c[`...`](ddd1);
      goto L0(r2);
    L2():
      r = dyn base(<sym ...>);
      goto L0(r);
    };
    r4 = dyn paste[, collapse](p, "");
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}