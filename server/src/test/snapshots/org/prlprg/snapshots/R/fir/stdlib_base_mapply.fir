fun main() {
  () -+> V { reg r:cls, reg mapply:cls, reg rep:*, reg rep1:V, reg p:p(V +), reg p1:p(V +), reg p2:p(V +), reg r4:V, reg mapply1:cls, reg rep2:*, reg rep3:V, reg p3:p(V +), reg p4:p(V +), reg p5:p(V +), reg r8:V, reg mapply2:cls, reg rep4:*, reg rep5:V, reg p6:p(V +), reg p7:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg list:cls, reg r13:V, reg p8:p(V +), reg r15:V, reg mapply3:cls, reg r16:cls, reg p9:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg c:cls, reg r20:V, reg p10:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg c1:cls, reg r24:V, reg p11:p(V +), reg r26:V, reg r27:cls, reg __:cls, reg r28:V, reg r29:cls, reg mapply4:cls, reg word:*, reg word1:V, reg p12:p(V +), reg LETTERS:*, reg LETTERS1:V, reg c2:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r31:V, reg p13:p(V +), reg p14:p(V +), reg r34:V, reg p15:p(V +), reg r36:V, reg mapply5:cls, reg word2:*, reg word3:V, reg p16:p(V +), reg integer:cls, reg r38:V, reg p17:p(V +), reg r40:V |
    mkenv;
    r = clos inner887261482;
    st mapply = r;
    mapply = ldf mapply;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      rep = ld rep;
      rep1 = force? rep;
      checkMissing(rep1);
      return rep1;
    };
    p1 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p2 = prom<V +>{
      return <int 4, 3, 2, 1>;
    };
    r4 = dyn mapply(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 8 [r4];
  L1():
    mapply1 = ldf mapply;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p3 = prom<V +>{
      rep2 = ld rep;
      rep3 = force? rep2;
      checkMissing(rep3);
      return rep3;
    };
    p4 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p5 = prom<V +>{
      return <int 4, 3, 2, 1>;
    };
    r8 = dyn mapply1[, times, x](p3, p4, p5);
    check L3() else D3();
  D3():
    deopt 16 [r8];
  L3():
    mapply2 = ldf mapply;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p6 = prom<V +>{
      rep4 = ld rep;
      rep5 = force? rep4;
      checkMissing(rep5);
      return rep5;
    };
    p7 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p8 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r12):
      return r12;
    L1():
      list = ldf list in base;
      r13 = dyn list(42.0);
      goto L0(r13);
    L2():
      r11 = dyn base[x](42.0);
      goto L0(r11);
    };
    r15 = dyn mapply2[, times, MoreArgs](p6, p7, p8);
    check L5() else D5();
  D5():
    deopt 24 [r15];
  L5():
    mapply3 = ldf mapply;
    check L6() else D6();
  D6():
    deopt 26 [];
  L6():
    p9 = prom<V +>{
      r16 = clos `inner-1347906706`;
      return r16;
    };
    p10 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c = ldf c in base;
      r20 = dyn c(1.0, 2.0, 3.0);
      goto L0(r20);
    L2():
      r18 = dyn base1[a, b, c](1.0, 2.0, 3.0);
      goto L0(r18);
    };
    p11 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c1 = ldf c in base;
      r24 = dyn c1(10.0, 0.0, -10.0);
      goto L0(r24);
    L2():
      r22 = dyn base2[A, B, C](10.0, 0.0, <lang `-`(10.0)>);
      goto L0(r22);
    };
    r26 = dyn mapply3(p9, p10, p11);
    check L7() else D7();
  D7():
    deopt 30 [r26];
  L7():
    r27 = clos inner987436917;
    st word = r27;
    __ = ldf `::`;
    check L8() else D8();
  D8():
    deopt 35 [];
  L8():
    r28 = dyn __("utils", "str");
    check L9() else D9();
  D9():
    deopt 38 [r28];
  L9():
    checkFun.0(r28);
    r29 = r28 as cls;
    p15 = prom<V +>{
      mapply4 = ldf mapply;
      p12 = prom<V +>{
        word = ld word;
        word1 = force? word;
        checkMissing(word1);
        return word1;
      };
      p13 = prom<V +>{
        LETTERS = ld LETTERS;
        LETTERS1 = force? LETTERS;
        checkMissing(LETTERS1);
        c2 = `is.object`(LETTERS1);
        if c2 then L1() else L2(LETTERS1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", LETTERS1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(LETTERS3):
        __1 = ldf `[` in base;
        r31 = dyn __1(LETTERS3, <int 1, 2, 3, 4, 5, 6>);
        goto L0(r31);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p14 = prom<V +>{
        return <int 6, 5, 4, 3, 2, 1>;
      };
      r34 = dyn mapply4[, , , SIMPLIFY](p12, p13, p14, FALSE);
      st L = r34;
      invisible.0();
      return r34;
    };
    r36 = dyn r29(p15);
    check L10() else D10();
  D10():
    deopt 41 [r36];
  L10():
    mapply5 = ldf mapply;
    check L11() else D11();
  D11():
    deopt 43 [];
  L11():
    p16 = prom<V +>{
      word2 = ld word;
      word3 = force? word2;
      checkMissing(word3);
      return word3;
    };
    p17 = prom<V +>{
      integer = ldf integer;
      r38 = dyn integer();
      return r38;
    };
    r40 = dyn mapply5(p16, "A", p17);
    check L12() else D12();
  D12():
    deopt 47 [r40];
  L12():
    popenv;
    return r40;
  }
}
fun inner887261482(FUN, `...`, MoreArgs, SIMPLIFY, `USE.NAMES`) {
  (reg FUN:*, reg ddd:dots, reg MoreArgs:*, reg SIMPLIFY:*, reg USE_NAMES:*) -+> V { var FUN:*, var `...`:dots?, var MoreArgs:*, reg MoreArgs_isMissing:L, reg MoreArgs_orDefault:*, var SIMPLIFY:*, reg SIMPLIFY_isMissing:L, reg SIMPLIFY_orDefault:*, var `USE.NAMES`:*, reg USE_NAMES_isMissing:L, reg USE_NAMES_orDefault:*, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg ddd1:dots?, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg FUN3:*, reg FUN4:V, reg dots:*, reg dots1:V, reg MoreArgs1:*, reg MoreArgs2:V, reg mapply:cls, reg r7:V, reg USE_NAMES1:*, reg USE_NAMES2:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c5:L, reg r9:V, reg dots2:*, reg dots3:V, reg length:cls, reg r10:V, reg c6:L, reg c7:V, reg c9:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg dots4:*, reg dots5:V, reg c10:L, reg dots7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg names:cls, reg r16:V, reg c11:V, reg c12:L, reg c14:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg c17:L, reg r18:V, reg dots8:*, reg dots9:V, reg c18:L, reg c20:L, reg dots11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c22:L, reg dx3:V, reg __1:cls, reg r19:V, reg c23:L, reg c24:L, reg c25:V, reg c27:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg answer:*, reg answer1:V, reg length1:cls, reg r22:V, reg c28:L, reg dots12:*, reg dots13:V, reg c29:L, reg dots15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r23:V, reg dx6:V, reg character:cls, reg r24:V, reg l:*, reg names__:cls, reg r25:V, reg dx7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r26:V, reg r27:V, reg names1:*, reg names2:V, reg c30:V, reg r28:V, reg c31:L, reg names3:*, reg names4:V, reg l1:*, reg names__1:cls, reg r29:V, reg isFALSE:cls, reg SIMPLIFY1:*, reg SIMPLIFY2:V, reg p1:p(V +), reg r31:V, reg r32:V, reg c32:L, reg simplify2array:cls, reg answer2:*, reg answer3:V, reg p2:p(V +), reg SIMPLIFY3:*, reg SIMPLIFY4:V, reg r34:V, reg p3:p(V +), reg r36:V, reg answer4:*, reg answer5:V |
    mkenv;
    st FUN = FUN;
    st `...` = ddd;
    MoreArgs_isMissing = missing.0(MoreArgs);
    if MoreArgs_isMissing then L0(NULL) else L0(MoreArgs);
  L0(MoreArgs_orDefault):
    st MoreArgs = MoreArgs_orDefault;
    SIMPLIFY_isMissing = missing.0(SIMPLIFY);
    if SIMPLIFY_isMissing then L1(TRUE) else L1(SIMPLIFY);
  L1(SIMPLIFY_orDefault):
    st SIMPLIFY = SIMPLIFY_orDefault;
    USE_NAMES_isMissing = missing.0(USE_NAMES);
    if USE_NAMES_isMissing then L2(TRUE) else L2(USE_NAMES);
  L2(USE_NAMES_orDefault):
    st `USE.NAMES` = USE_NAMES_orDefault;
    match_fun = ldf `match.fun`;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    p = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r1 = dyn match_fun(p);
    check L25() else D1();
  D1():
    deopt 3 [r1];
  L25():
    st FUN = r1;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L3(r3):
    st dots = r3;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L26():
    list = ldf list;
    check L28() else D2();
  L27():
    r2 = dyn base(<sym ...>);
    goto L3(r2);
  D2():
    deopt 7 [];
  L4(r6):
    st answer = r6;
    USE_NAMES1 = ld `USE.NAMES`;
    check L36() else D8();
  L28():
    ddd1 = ld `...`;
    r4 = dyn list[`...`](ddd1);
    check L29() else D3();
  L30():
    FUN3 = ld FUN;
    check L32() else D4();
  L31():
    r5 = dyn base1(<lang mapply(FUN, dots, MoreArgs)>);
    goto L4(r5);
  D3():
    deopt 9 [r4];
  D4():
    deopt 13 [FUN3];
  D8():
    deopt 22 [USE_NAMES1];
  L29():
    goto L3(r4);
  L32():
    FUN4 = force? FUN3;
    checkMissing(FUN4);
    dots = ld dots;
    check L33() else D5();
  L36():
    USE_NAMES2 = force? USE_NAMES1;
    checkMissing(USE_NAMES2);
    c = `as.logical`(USE_NAMES2);
    if c then L37() else L5(c);
  D5():
    deopt 15 [dots];
  L5(c2):
    c9 = `as.logical`(c2);
    if c9 then L43() else L7();
  L33():
    dots1 = force? dots;
    checkMissing(dots1);
    MoreArgs1 = ld MoreArgs;
    check L34() else D6();
  L37():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D6():
    deopt 17 [MoreArgs1];
  L6(c5, r9):
    c6 = `as.logical`(r9);
    c7 = `&&`(c5, c6);
    goto L5(c7);
  L7():
    goto L22();
  L22():
    isFALSE = ldf isFALSE;
    check L86() else D25();
  L34():
    MoreArgs2 = force? MoreArgs1;
    checkMissing(MoreArgs2);
    mapply = ldf mapply in base;
    r7 = dyn mapply(FUN4, dots1, MoreArgs2);
    check L35() else D7();
  L38():
    dots2 = ld dots;
    check L40() else D9();
  L39():
    r8 = dyn base2(<sym dots>);
    goto L6(c, r8);
  L43():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  D7():
    deopt 20 [r7];
  D9():
    deopt 26 [c, dots2];
  D25():
    deopt 87 [];
  L8(r12):
    c12 = `as.logical`(r12);
    if c12 then L53() else L11(c12);
  L35():
    goto L4(r7);
  L40():
    dots3 = force? dots2;
    checkMissing(dots3);
    length = ldf length in base;
    r10 = dyn length(dots3);
    check L41() else D10();
  L44():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L46() else L47();
  L45():
    r11 = dyn base3(<lang `<-`(names1, names(`[[`(dots, 1)))>);
    goto L8(r11);
  L86():
    p1 = prom<V +>{
      SIMPLIFY1 = ld SIMPLIFY;
      SIMPLIFY2 = force? SIMPLIFY1;
      checkMissing(SIMPLIFY2);
      return SIMPLIFY2;
    };
    r31 = dyn isFALSE(p1);
    check L87() else D26();
  D10():
    deopt 29 [c, r10];
  D26():
    deopt 89 [r31];
  L9(r14):
    st names1 = r14;
    c11 = `==`(r14, NULL);
    goto L8(c11);
  L11(c14):
    c27 = `as.logical`(c14);
    if c27 then L61() else L14();
  L41():
    goto L6(c, r10);
  L46():
    dots4 = ld dots;
    check L48() else D11();
  L47():
    r13 = dyn base4(<lang `[[`(dots, 1)>);
    goto L9(r13);
  L53():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L87():
    r32 = `!`(r31);
    c32 = `as.logical`(r32);
    if c32 then L88() else L23();
  D11():
    deopt 34 [dots4];
  L12(c17, r18):
    c24 = `as.logical`(r18);
    c25 = `&&`(c17, c24);
    goto L11(c25);
  L14():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L77() else L78();
  L19(dx7):
    goto L22();
  L23():
    answer4 = ld answer;
    check L92() else D29();
  L48():
    dots5 = force? dots4;
    checkMissing(dots5);
    c10 = `is.object`(dots5);
    if c10 then L49() else L50(dots5);
  L54():
    dots8 = ld dots;
    check L56() else D13();
  L55():
    r17 = dyn base5(<lang `[[`(dots, 1)>);
    goto L12(c12, r17);
  L61():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L88():
    simplify2array = ldf simplify2array;
    check L89() else D27();
  D13():
    deopt 44 [c12, dots8];
  D27():
    deopt 92 [];
  D29():
    deopt 97 [answer4];
  L10(dx1):
    names = ldf names in base;
    r16 = dyn names(dx1);
    check L52() else D12();
  L15(r21):
    c28 = `as.logical`(r21);
    if c28 then L66() else L16();
  L20(r27):
    r28 = `!`(r27);
    c31 = `as.logical`(r28);
    if c31 then L80() else L21();
  L49():
    dr = tryDispatchBuiltin.1("[[", dots5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L51() else L50(dr);
  L50(dots7):
    __ = ldf `[[` in base;
    r15 = dyn __(dots7, 1);
    goto L10(r15);
  L56():
    dots9 = force? dots8;
    checkMissing(dots9);
    c18 = `is.object`(dots9);
    if c18 then L57() else L58(c12, dots9);
  L62():
    answer = ld answer;
    check L64() else D14();
  L63():
    r20 = dyn base6(<sym answer>);
    goto L15(r20);
  L77():
    names1 = ld names1;
    check L79() else D21();
  L78():
    r26 = dyn base7(<sym names1>);
    goto L20(r26);
  L89():
    p2 = prom<V +>{
      answer2 = ld answer;
      answer3 = force? answer2;
      checkMissing(answer3);
      return answer3;
    };
    p3 = prom<V +>{
      SIMPLIFY3 = ld SIMPLIFY;
      SIMPLIFY4 = force? SIMPLIFY3;
      checkMissing(SIMPLIFY4);
      r34 = `==`(SIMPLIFY4, "array");
      visible.0();
      return r34;
    };
    r36 = dyn simplify2array[, higher](p2, p3);
    check L90() else D28();
  L92():
    answer5 = force? answer4;
    checkMissing(answer5);
    popenv;
    return answer5;
  D12():
    deopt 40 [r16];
  D14():
    deopt 53 [answer];
  D21():
    deopt 71 [names1];
  D28():
    deopt 96 [r36];
  L13(c22, dx3):
    c23 = `is.character`(dx3);
    goto L12(c22, c23);
  L16():
    character = ldf character;
    check L72() else D17();
  L18(dx6):
    l = ld answer;
    names__ = ldf `names<-`;
    check L74() else D19();
  L21():
    goto L19(NULL);
  L51():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L52():
    goto L9(r16);
  L57():
    dr2 = tryDispatchBuiltin.1("[[", dots9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(c12, dr2);
  L58(c20, dots11):
    __1 = ldf `[[` in base;
    r19 = dyn __1(dots11, 1);
    goto L13(c20, r19);
  L64():
    answer1 = force? answer;
    checkMissing(answer1);
    length1 = ldf length in base;
    r22 = dyn length1(answer1);
    check L65() else D15();
  L66():
    dots12 = ld dots;
    check L67() else D16();
  L79():
    names2 = force? names1;
    checkMissing(names2);
    c30 = `==`(names2, NULL);
    goto L20(c30);
  L80():
    names3 = ld names1;
    check L81() else D22();
  L90():
    popenv;
    return r36;
  D15():
    deopt 56 [r22];
  D16():
    deopt 57 [dots12];
  D17():
    deopt 63 [];
  D19():
    deopt 66 [dx6, l, dx6];
  D22():
    deopt 75 [names3];
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(c12, dx2);
  L65():
    goto L15(r22);
  L67():
    dots13 = force? dots12;
    checkMissing(dots13);
    c29 = `is.object`(dots13);
    if c29 then L68() else L69(dots13);
  L72():
    r24 = dyn character();
    check L73() else D18();
  L74():
    r25 = dyn names__(l, NULL, dx6);
    check L75() else D20();
  L81():
    names4 = force? names3;
    checkMissing(names4);
    l1 = ld answer;
    names__1 = ldf `names<-`;
    check L82() else D23();
  D18():
    deopt 64 [r24];
  D20():
    deopt 68 [dx6, r25];
  D23():
    deopt 78 [names4, l1, names4];
  L17(dx5):
    goto L18(dx5);
  L68():
    dr4 = tryDispatchBuiltin.1("[[", dots13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L70() else L69(dr4);
  L69(dots15):
    __2 = ldf `[[` in base;
    r23 = dyn __2(dots15, 1);
    goto L17(r23);
  L73():
    goto L18(r24);
  L75():
    st answer = r25;
    goto L19(dx6);
  L82():
    r29 = dyn names__1(l1, NULL, names4);
    check L83() else D24();
  D24():
    deopt 80 [names4, r29];
  L70():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L17(dx4);
  L83():
    st answer = r29;
    goto L19(names4);
  }
}
fun `inner-1347906706`(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg y1:*, reg y2:V, reg r3:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf seq_len;
    base = ldf seq_len in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    y1 = ld y;
    check L4() else D1();
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  D1():
    deopt 3 [r1, y1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    r2 = seq_len(x2);
    goto L0(r2);
  L4():
    y2 = force? y1;
    checkMissing(y2);
    r3 = `+`(r1, y2);
    popenv;
    return r3;
  }
}
fun inner987436917(C, k) {
  (reg C:*, reg k:*) -+> V { var C:*, var k:*, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C1:*, reg C2:V, reg k1:*, reg k2:V, reg rep_int:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st C = C;
    st k = k;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `rep.int`;
      base = ldf `rep.int` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      C1 = ld C;
      C2 = force? C1;
      checkMissing(C2);
      k1 = ld k;
      k2 = force? k1;
      checkMissing(k2);
      rep_int = ldf `rep.int` in base;
      r2 = dyn rep_int(C2, k2);
      goto L0(r2);
    L2():
      r = dyn base(<sym C>, <sym k>);
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