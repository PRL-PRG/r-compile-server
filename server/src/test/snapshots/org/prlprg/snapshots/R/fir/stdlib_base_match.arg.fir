fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg r5:cls, reg rcauchy:cls, reg r6:V, reg center:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r8:V, reg center1:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg r10:V, reg try:cls, reg center2:cls, reg x4:*, reg x5:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg center3:cls, reg x6:*, reg x7:V, reg p5:p(V +), reg r18:V, reg center4:cls, reg x8:*, reg x9:V, reg p6:p(V +), reg r20:V, reg identical:cls, reg r21:V, reg p7:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg center5:cls, reg x10:*, reg x11:V, reg p8:p(V +), reg r26:V, reg center6:cls, reg x12:*, reg x13:V, reg p9:p(V +), reg r28:V, reg identical1:cls, reg r29:V, reg p10:p(V +), reg r31:V, reg match_arg:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg c:cls, reg r34:V, reg p11:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg c1:cls, reg r38:V, reg p12:p(V +), reg r40:V, reg match_arg1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg c2:cls, reg r43:V, reg p13:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg c3:cls, reg r47:V, reg p14:p(V +), reg r49:V |
    mkenv;
    r = clos inner1774899185;
    st `match.arg` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    r5 = clos inner787234789;
    st center = r5;
    rcauchy = ldf rcauchy;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 12 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r6 = dyn rcauchy(10.0);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 14 [r6];
  L4():
    goto L0();
  L6():
    st x = r6;
    center = ldf center;
    check L7() else D4();
  D4():
    deopt 17 [];
  L7():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r8 = dyn center(p1, "t");
    check L8() else D5();
  D5():
    deopt 20 [r8];
  L8():
    center1 = ldf center;
    check L9() else D6();
  D6():
    deopt 22 [];
  L9():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r10 = dyn center1(p2, "med");
    check L10() else D7();
  D7():
    deopt 25 [r10];
  L10():
    try = ldf try;
    check L11() else D8();
  D8():
    deopt 27 [];
  L11():
    p4 = prom<V +>{
      center2 = ldf center;
      p3 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      r12 = dyn center2(p3, "m");
      return r12;
    };
    r14 = dyn try(p4);
    check L12() else D9();
  D9():
    deopt 29 [r14];
  L12():
    stopifnot = ldf stopifnot;
    check L13() else D10();
  D10():
    deopt 31 [];
  L13():
    p7 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      center3 = ldf center;
      p5 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r18 = dyn center3(p5);
      center4 = ldf center;
      p6 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      r20 = dyn center4(p6, "mean");
      identical = ldf identical in base;
      r21 = dyn identical(r18, r20, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r21);
    L2():
      r15 = dyn base1(<lang center(x)>, <lang center(x, "mean")>);
      goto L0(r15);
    };
    p10 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      center5 = ldf center;
      p8 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      r26 = dyn center5(p8, NULL);
      center6 = ldf center;
      p9 = prom<V +>{
        x12 = ld x;
        x13 = force? x12;
        checkMissing(x13);
        return x13;
      };
      r28 = dyn center6(p9, "mean");
      identical1 = ldf identical in base;
      r29 = dyn identical1(r26, r28, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r29);
    L2():
      r23 = dyn base2(<lang center(x, NULL)>, <lang center(x, "mean")>);
      goto L0(r23);
    };
    r31 = dyn stopifnot(p7, p10);
    check L14() else D11();
  D11():
    deopt 34 [r31];
  L14():
    match_arg = ldf `match.arg`;
    check L15() else D12();
  D12():
    deopt 36 [];
  L15():
    p11 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c = ldf c in base;
      r34 = dyn c("gauss", "rect", "ep");
      goto L0(r34);
    L2():
      r32 = dyn base3("gauss", "rect", "ep");
      goto L0(r32);
    };
    p12 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c1 = ldf c in base;
      r38 = dyn c1("gaussian", "epanechnikov", "rectangular", "triangular");
      goto L0(r38);
    L2():
      r36 = dyn base4("gaussian", "epanechnikov", "rectangular", "triangular");
      goto L0(r36);
    };
    r40 = dyn match_arg[, , `several.ok`](p11, p12, TRUE);
    check L16() else D13();
  D13():
    deopt 41 [r40];
  L16():
    match_arg1 = ldf `match.arg`;
    check L17() else D14();
  D14():
    deopt 43 [];
  L17():
    p13 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      c2 = ldf c in base;
      r43 = dyn c2("a", "");
      goto L0(r43);
    L2():
      r41 = dyn base5("a", "");
      goto L0(r41);
    };
    p14 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      c3 = ldf c in base;
      r47 = dyn c3("", NA_LGL, "bb", "abc");
      goto L0(r47);
    L2():
      r45 = dyn base6("", NA_LGL, "bb", "abc");
      goto L0(r45);
    };
    r49 = dyn match_arg1[, , `several.ok`](p13, p14, TRUE);
    check L18() else D15();
  D15():
    deopt 48 [r49];
  L18():
    popenv;
    return r49;
  }
}
fun inner1774899185(arg, choices, `several.ok`) {
  (reg arg:*, reg choices:*, reg several_ok:*) -+> V { var arg:*, var choices:*, var `several.ok`:*, reg several_ok_isMissing:L, reg several_ok_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg formals:cls, reg sys_function:cls, reg sys_parent:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg eval:cls, reg formal_args:*, reg formal_args1:V, reg c1:L, reg formal_args3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg formal_args6:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg formal_args9:V, reg r11:V, reg substitute:cls, reg r12:V, reg as_character:cls, reg r13:V, reg __:cls, reg r14:V, reg p2:p(V +), reg sys_frame:cls, reg sysP:*, reg sysP1:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg arg1:*, reg arg2:V, reg c2:V, reg c3:L, reg choices1:*, reg choices2:V, reg c4:L, reg choices4:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg arg3:*, reg arg4:V, reg c5:L, reg r28:V, reg c6:L, reg stop:cls, reg r29:V, reg several_ok1:*, reg several_ok2:V, reg r30:V, reg c7:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg arg5:*, reg arg6:V, reg choices5:*, reg choices6:V, reg identical:cls, reg r33:V, reg c8:L, reg arg7:*, reg arg8:V, reg c9:L, reg arg10:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg arg11:*, reg arg12:V, reg length:cls, reg r39:V, reg r40:V, reg c10:L, reg stop1:cls, reg r41:V, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg arg13:*, reg arg14:V, reg length1:cls, reg r46:V, reg r47:V, reg c11:L, reg stop2:cls, reg r48:V, reg pmatch:cls, reg arg15:*, reg arg16:V, reg p5:p(V +), reg choices7:*, reg choices8:V, reg p6:p(V +), reg r51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r52:V, reg r53:V, reg i:*, reg i1:V, reg r54:V, reg all:cls, reg r55:V, reg c12:L, reg stop3:cls, reg sprintf:cls, reg ngettext:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg unique:cls, reg choices9:*, reg choices10:V, reg c13:L, reg choices12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg choices15:V, reg r59:V, reg choices16:*, reg choices17:V, reg nzchar:cls, reg r60:V, reg __3:cls, reg r61:V, reg p7:p(V +), reg r63:V, reg length2:cls, reg r64:V, reg p8:p(V +), reg r66:V, reg p9:p(V +), reg paste:cls, reg dQuote:cls, reg chs:*, reg chs1:V, reg p10:p(V +), reg r69:V, reg p11:p(V +), reg r71:V, reg p12:p(V +), reg r73:V, reg p13:p(V +), reg r75:V, reg i2:*, reg i3:V, reg c14:L, reg i5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i6:*, reg i7:V, reg r77:V, reg __4:cls, reg r78:V, reg several_ok3:*, reg several_ok4:V, reg r79:V, reg c15:L, reg c17:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r80:V, reg c20:L, reg r81:V, reg i8:*, reg i9:V, reg length3:cls, reg r82:V, reg r83:V, reg c21:L, reg c22:V, reg c24:L, reg stop4:cls, reg r84:V, reg choices18:*, reg choices19:V, reg c25:L, reg choices21:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg i10:*, reg i11:V, reg __5:cls, reg r86:V |
    mkenv;
    st arg = arg;
    st choices = choices;
    several_ok_isMissing = missing.0(several_ok);
    if several_ok_isMissing then L0(FALSE) else L0(several_ok);
  L0(several_ok_orDefault):
    st `several.ok` = several_ok_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L1(r1):
    c = `as.logical`(r1);
    if c then L32() else L2();
  L30():
    missing = ldf missing in base;
    r2 = dyn missing(<sym choices>);
    goto L1(r2);
  L31():
    r = dyn base(<sym choices>);
    goto L1(r);
  L2():
    goto L3();
  L3():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L32():
    formals = ldf formals;
    check L33() else D0();
  D0():
    deopt 4 [];
  L4(r22):
    c3 = `as.logical`(r22);
    if c3 then L41() else L5();
  L33():
    p1 = prom<V +>{
      sys_function = ldf `sys.function`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r3 = dyn sys_parent();
        st sysP = r3;
        invisible.0();
        return r3;
      };
      r5 = dyn sys_function(p);
      return r5;
    };
    r7 = dyn formals(p1);
    check L34() else D1();
  L38():
    arg1 = ld arg;
    check L40() else D4();
  L39():
    r21 = dyn base3(<sym arg>);
    goto L4(r21);
  D1():
    deopt 6 [r7];
  D4():
    deopt 18 [arg1];
  L5():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L34():
    st `formal.args` = r7;
    eval = ldf eval;
    check L35() else D2();
  L40():
    arg2 = force? arg1;
    checkMissing(arg2);
    c2 = `==`(arg2, NULL);
    goto L4(c2);
  L41():
    choices1 = ld choices;
    check L42() else D5();
  D2():
    deopt 9 [];
  D5():
    deopt 21 [choices1];
  L8(r27):
    r28 = `!`(r27);
    c6 = `as.logical`(r28);
    if c6 then L51() else L9();
  L35():
    p2 = prom<V +>{
      formal_args = ld `formal.args`;
      formal_args1 = force? formal_args;
      checkMissing(formal_args1);
      c1 = `is.object`(formal_args1);
      if c1 then L3() else L4(formal_args1);
    L0(dx1):
      return dx1;
    L3():
      dr = tryDispatchBuiltin.1("[[", formal_args1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L5() else L4(dr);
    L4(formal_args3):
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L1(formal_args6, r9):
      __ = ldf `[[` in base;
      r14 = dyn __(formal_args6, r9);
      goto L0(r14);
    L5():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L6():
      sym2 = ldf substitute;
      base2 = ldf substitute in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L8() else L9();
    L7():
      r8 = dyn base1(<lang substitute(arg)>);
      goto L1(formal_args3, r8);
    L2(formal_args9, r11):
      as_character = ldf `as.character` in base;
      r13 = dyn as_character(r11);
      goto L1(formal_args9, r13);
    L8():
      substitute = ldf substitute in base;
      r12 = dyn substitute(<sym arg>);
      goto L2(formal_args3, r12);
    L9():
      r10 = dyn base2(<sym arg>);
      goto L2(formal_args3, r10);
    };
    p4 = prom<V +>{
      sys_frame = ldf `sys.frame`;
      p3 = prom<V +>{
        sysP = ld sysP;
        sysP1 = force? sysP;
        checkMissing(sysP1);
        return sysP1;
      };
      r17 = dyn sys_frame(p3);
      return r17;
    };
    r19 = dyn eval[, envir](p2, p4);
    check L36() else D3();
  L42():
    choices2 = force? choices1;
    checkMissing(choices2);
    c4 = `is.object`(choices2);
    if c4 then L43() else L44(choices2);
  L48():
    arg3 = ld arg;
    check L50() else D6();
  L49():
    r26 = dyn base4(<sym arg>);
    goto L8(r26);
  D3():
    deopt 13 [r19];
  D6():
    deopt 28 [arg3];
  L6(dx3):
    popenv;
    return dx3;
  L7():
    several_ok1 = ld `several.ok`;
    check L55() else D9();
  L9():
    goto L7();
  L36():
    st choices = r19;
    goto L3();
  L43():
    dr2 = tryDispatchBuiltin.1("[", choices2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(dr2);
  L44(choices4):
    __1 = ldf `[` in base;
    r23 = dyn __1(choices4, 1);
    goto L6(r23);
  L50():
    arg4 = force? arg3;
    checkMissing(arg4);
    c5 = `is.character`(arg4);
    goto L8(c5);
  L51():
    stop = ldf stop;
    check L52() else D7();
  D7():
    deopt 33 [];
  D9():
    deopt 38 [several_ok1];
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L52():
    r29 = dyn stop("'arg' must be NULL or a character vector");
    check L53() else D8();
  L55():
    several_ok2 = force? several_ok1;
    checkMissing(several_ok2);
    r30 = `!`(several_ok2);
    c7 = `as.logical`(r30);
    if c7 then L56() else L10();
  D8():
    deopt 35 [r29];
  L10():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L18():
    pmatch = ldf pmatch;
    check L86() else D22();
  L53():
    goto L7();
  L56():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  D22():
    deopt 93 [];
  L11(r32):
    c8 = `as.logical`(r32);
    if c8 then L62() else L12();
  L19(r45):
    r47 = `==`(r45, 0);
    c11 = `as.logical`(r47);
    if c11 then L82() else L20();
  L57():
    arg5 = ld arg;
    check L59() else D10();
  L58():
    r31 = dyn base5(<sym arg>, <sym choices>);
    goto L11(r31);
  L78():
    arg13 = ld arg;
    check L80() else D18();
  L79():
    r44 = dyn base7(<sym arg>);
    goto L19(r44);
  L86():
    p5 = prom<V +>{
      arg15 = ld arg;
      arg16 = force? arg15;
      checkMissing(arg16);
      return arg16;
    };
    p6 = prom<V +>{
      choices7 = ld choices;
      choices8 = force? choices7;
      checkMissing(choices8);
      return choices8;
    };
    r51 = dyn pmatch[, , nomatch, `duplicates.ok`](p5, p6, 0, TRUE);
    check L87() else D23();
  D10():
    deopt 43 [arg5];
  D18():
    deopt 80 [arg13];
  D23():
    deopt 100 [r51];
  L12():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  L20():
    goto L18();
  L59():
    arg6 = force? arg5;
    checkMissing(arg6);
    choices5 = ld choices;
    check L60() else D11();
  L62():
    arg7 = ld arg;
    check L63() else D13();
  L80():
    arg14 = force? arg13;
    checkMissing(arg14);
    length1 = ldf length in base;
    r46 = dyn length1(arg14);
    check L81() else D19();
  L82():
    stop2 = ldf stop;
    check L83() else D20();
  L87():
    st i = r51;
    sym8 = ldf all;
    base8 = ldf all in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L88() else L89();
  D11():
    deopt 45 [choices5];
  D13():
    deopt 56 [arg7];
  D19():
    deopt 83 [r46];
  D20():
    deopt 87 [];
  L15(r38):
    r40 = `>`(r38, 1);
    c10 = `as.logical`(r40);
    if c10 then L73() else L16();
  L21(r53):
    c12 = `as.logical`(r53);
    if c12 then L92() else L22();
  L60():
    choices6 = force? choices5;
    checkMissing(choices6);
    identical = ldf identical in base;
    r33 = dyn identical(arg6, choices6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L61() else D12();
  L63():
    arg8 = force? arg7;
    checkMissing(arg8);
    c9 = `is.object`(arg8);
    if c9 then L64() else L65(arg8);
  L69():
    arg11 = ld arg;
    check L71() else D14();
  L70():
    r37 = dyn base6(<sym arg>);
    goto L15(r37);
  L81():
    goto L19(r46);
  L83():
    r48 = dyn stop2("'arg' must be of length >= 1");
    check L84() else D21();
  L88():
    i = ld i;
    check L90() else D24();
  L89():
    r52 = dyn base8(<lang `==`(i, 0)>);
    goto L21(r52);
  D12():
    deopt 55 [r33];
  D14():
    deopt 66 [arg11];
  D21():
    deopt 89 [r48];
  D24():
    deopt 104 [i];
  L13(dx5):
    popenv;
    return dx5;
  L16():
    goto L17(NULL);
  L17(r42):
    goto L18();
  L22():
    goto L23();
  L23():
    i2 = ld i;
    check L96() else D28();
  L61():
    goto L11(r33);
  L64():
    dr4 = tryDispatchBuiltin.1("[", arg8);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L66() else L65(dr4);
  L65(arg10):
    __2 = ldf `[` in base;
    r34 = dyn __2(arg10, 1);
    goto L13(r34);
  L71():
    arg12 = force? arg11;
    checkMissing(arg12);
    length = ldf length in base;
    r39 = dyn length(arg12);
    check L72() else D15();
  L73():
    stop1 = ldf stop;
    check L74() else D16();
  L84():
    goto L18();
  L90():
    i1 = force? i;
    checkMissing(i1);
    r54 = `==`(i1, 0);
    all = ldf all in base;
    r55 = dyn all(r54);
    check L91() else D25();
  L92():
    stop3 = ldf stop;
    check L93() else D26();
  D15():
    deopt 69 [r39];
  D16():
    deopt 73 [];
  D25():
    deopt 109 [r55];
  D26():
    deopt 111 [];
  D28():
    deopt 118 [i2];
  L66():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx4);
  L72():
    goto L15(r39);
  L74():
    r41 = dyn stop1("'arg' must be of length 1");
    check L75() else D17();
  L91():
    goto L21(r55);
  L93():
    p13 = prom<V +>{
      sprintf = ldf sprintf;
      p9 = prom<V +>{
        ngettext = ldf ngettext;
        p8 = prom<V +>{
          sym9 = ldf length;
          base9 = ldf length in base;
          guard9 = `==`.4(sym9, base9);
          if guard9 then L1() else L2();
        L0(r57):
          return r57;
        L1():
          unique = ldf unique;
          p7 = prom<V +>{
            choices9 = ld choices;
            choices10 = force? choices9;
            checkMissing(choices10);
            c13 = `is.object`(choices10);
            if c13 then L2() else L3(choices10);
          L0(dx7):
            return dx7;
          L2():
            dr6 = tryDispatchBuiltin.1("[", choices10);
            dc3 = getTryDispatchBuiltinDispatched(dr6);
            if dc3 then L4() else L3(dr6);
          L3(choices12):
            sym10 = ldf nzchar;
            base10 = ldf nzchar in base;
            guard10 = `==`.4(sym10, base10);
            if guard10 then L5() else L6();
          L1(choices15, r59):
            __3 = ldf `[` in base;
            r61 = dyn __3(choices15, r59);
            goto L0(r61);
          L4():
            dx6 = getTryDispatchBuiltinValue(dr6);
            goto L0(dx6);
          L5():
            choices16 = ld choices;
            choices17 = force? choices16;
            checkMissing(choices17);
            nzchar = ldf nzchar in base;
            r60 = dyn nzchar(choices17);
            goto L1(choices12, r60);
          L6():
            r58 = dyn base10(<sym choices>);
            goto L1(choices12, r58);
          };
          r63 = dyn unique(p7);
          st chs = r63;
          length2 = ldf length in base;
          r64 = dyn length2(r63);
          goto L0(r64);
        L2():
          r56 = dyn base9(<lang `<-`(chs, unique(`[`(choices, nzchar(choices))))>);
          goto L0(r56);
        };
        r66 = dyn ngettext(p8, "'arg' should be %s", "'arg' should be one of %s");
        return r66;
      };
      p12 = prom<V +>{
        paste = ldf paste;
        p11 = prom<V +>{
          dQuote = ldf dQuote;
          p10 = prom<V +>{
            chs = ld chs;
            chs1 = force? chs;
            checkMissing(chs1);
            return chs1;
          };
          r69 = dyn dQuote(p10);
          return r69;
        };
        r71 = dyn paste[, collapse](p11, ", ");
        return r71;
      };
      r73 = dyn sprintf(p9, p12);
      return r73;
    };
    r75 = dyn stop3[, domain](p13, NA_LGL);
    check L94() else D27();
  L96():
    i3 = force? i2;
    checkMissing(i3);
    c14 = `is.object`(i3);
    if c14 then L97() else L98(i3);
  D17():
    deopt 75 [r41];
  D27():
    deopt 115 [r75];
  L24(dx9):
    st i = dx9;
    several_ok3 = ld `several.ok`;
    check L101() else D30();
  L75():
    goto L17(r41);
  L94():
    goto L23();
  L97():
    dr8 = tryDispatchBuiltin.1("[", i3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L99() else L98(dr8);
  L98(i5):
    i6 = ld i;
    check L100() else D29();
  D29():
    deopt 120 [i5, i6];
  D30():
    deopt 126 [several_ok3];
  L99():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L100():
    i7 = force? i6;
    checkMissing(i7);
    r77 = `>`(i7, 0);
    __4 = ldf `[` in base;
    r78 = dyn __4(i5, r77);
    goto L24(r78);
  L101():
    several_ok4 = force? several_ok3;
    checkMissing(several_ok4);
    r79 = `!`(several_ok4);
    c15 = `as.logical`(r79);
    if c15 then L102() else L25(c15);
  L25(c17):
    c24 = `as.logical`(c17);
    if c24 then L108() else L27();
  L102():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L103() else L104();
  L26(c20, r81):
    r83 = `>`(r81, 1.0);
    c21 = `as.logical`(r83);
    c22 = `&&`(c20, c21);
    goto L25(c22);
  L27():
    goto L28();
  L28():
    choices18 = ld choices;
    check L112() else D35();
  L103():
    i8 = ld i;
    check L105() else D31();
  L104():
    r80 = dyn base11(<sym i>);
    goto L26(c15, r80);
  L108():
    stop4 = ldf stop;
    check L109() else D33();
  D31():
    deopt 131 [c15, i8];
  D33():
    deopt 139 [];
  D35():
    deopt 144 [choices18];
  L105():
    i9 = force? i8;
    checkMissing(i9);
    length3 = ldf length in base;
    r82 = dyn length3(i9);
    check L106() else D32();
  L109():
    r84 = dyn stop4("there is more than one match in 'match.arg'");
    check L110() else D34();
  L112():
    choices19 = force? choices18;
    checkMissing(choices19);
    c25 = `is.object`(choices19);
    if c25 then L113() else L114(choices19);
  D32():
    deopt 134 [c15, r82];
  D34():
    deopt 141 [r84];
  L29(dx11):
    popenv;
    return dx11;
  L106():
    goto L26(c15, r82);
  L110():
    goto L28();
  L113():
    dr10 = tryDispatchBuiltin.1("[", choices19);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L115() else L114(dr10);
  L114(choices21):
    i10 = ld i;
    check L116() else D36();
  D36():
    deopt 146 [choices21, i10];
  L115():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L29(dx10);
  L116():
    i11 = force? i10;
    __5 = ldf `[` in base;
    r86 = dyn __5(choices21, i11);
    goto L29(r86);
  }
}
fun inner787234789(x, type) {
  (reg x:*, reg type:*) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg type3:*, reg type4:V, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg i_ddd:dots, reg i:V, reg c7:L, reg c8:L, reg c9:L, reg mean:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r7:V, reg median:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg r9:V, reg mean1:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0() else L1(type);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("mean", "median", "trimmed");
      goto L0(r2);
    L2():
      r = dyn base("mean", "median", "trimmed");
      goto L0(r);
    };
    goto L1(p);
  L1(type_orDefault):
    st type = type_orDefault;
    match_arg = ldf `match.arg`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L7() else D1();
  D1():
    deopt 3 [r5];
  L7():
    st type = r5;
    type3 = ld type;
    check L8() else D2();
  D2():
    deopt 5 [type3];
  L8():
    type4 = force? type3;
    checkMissing(type4);
    c1 = `is.vector`(type4, "any");
    if c1 then L9() else L10();
  L9():
    c2 = inherits(type4, "factor", FALSE);
    if c2 then L11() else L12();
  L10():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L11():
    c3 = `is.character`(type4);
    if c3 then L13() else L14();
  L12():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L11();
  L2():
    mean = ldf mean;
    check L22() else D3();
  L3():
    median = ldf median;
    check L25() else D5();
  L4():
    mean1 = ldf mean;
    check L28() else D7();
  L5():
    invisible.0();
    popenv;
    return NULL;
  L13():
    c4 = `==`.6(type4, "mean");
    if c4 then L2() else L15();
  L14():
    i_ddd = dots[type4];
    i = `as.integer`(i_ddd);
    c7 = `==`.5(i, 1);
    if c7 then L2() else L18();
  D3():
    deopt 11 [];
  D5():
    deopt 15 [];
  D7():
    deopt 19 [];
  L15():
    c5 = `==`.6(type4, "median");
    if c5 then L3() else L16();
  L18():
    c8 = `==`.5(i, 2);
    if c8 then L3() else L19();
  L22():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r7 = dyn mean(p2);
    check L23() else D4();
  L25():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn median(p3);
    check L26() else D6();
  L28():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r11 = dyn mean1[, trim](p4, 0.1);
    check L29() else D8();
  D4():
    deopt 13 [r7];
  D6():
    deopt 17 [r9];
  D8():
    deopt 23 [r11];
  L16():
    c6 = `==`.6(type4, "trimmed");
    if c6 then L4() else L17();
  L19():
    c9 = `==`.5(i, 3);
    if c9 then L4() else L20();
  L23():
    popenv;
    return r7;
  L26():
    popenv;
    return r9;
  L29():
    popenv;
    return r11;
  L17():
    goto L5();
  L20():
    goto L5();
  }
}