fun main() {
  () -+> V { reg r:cls, reg match_fun:cls, reg r1:V, reg try:cls, reg match_fun1:cls, reg outer:*, reg outer1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg match_fun2:cls, reg outer2:*, reg outer3:V, reg p2:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg match_fun3:cls, reg r10:V, reg is_function:cls, reg r11:V |
    mkenv;
    r = clos inner3643817200;
    st `match.fun` = r;
    match_fun = ldf `match.fun`;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn match_fun("*");
    check L2() else D1();
  D1():
    deopt 6 [r1];
  L2():
    st outer = <int 1, 2, 3, 4, 5>;
    try = ldf try;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    p1 = prom<V +>{
      match_fun1 = ldf `match.fun`;
      p = prom<V +>{
        outer = ld outer;
        outer1 = force? outer;
        checkMissing(outer1);
        return outer1;
      };
      r3 = dyn match_fun1[, descend](p, FALSE);
      return r3;
    };
    r5 = dyn try(p1);
    check L4() else D3();
  D3():
    deopt 13 [r5];
  L4():
    match_fun2 = ldf `match.fun`;
    check L5() else D4();
  D4():
    deopt 15 [];
  L5():
    p2 = prom<V +>{
      outer2 = ld outer;
      outer3 = force? outer2;
      checkMissing(outer3);
      return outer3;
    };
    r7 = dyn match_fun2(p2);
    check L6() else D5();
  D5():
    deopt 17 [r7];
  L6():
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r9):
    popenv;
    return r9;
  L7():
    match_fun3 = ldf `match.fun`;
    check L9() else D6();
  L8():
    r8 = dyn base(<lang match.fun("outer")>);
    goto L0(r8);
  D6():
    deopt 21 [];
  L9():
    r10 = dyn match_fun3("outer");
    check L10() else D7();
  D7():
    deopt 23 [r10];
  L10():
    is_function = ldf `is.function` in base;
    r11 = dyn is_function(r10);
    check L11() else D8();
  D8():
    deopt 25 [r11];
  L11():
    goto L0(r11);
  }
}
fun inner3643817200(FUN, descend) {
  (reg FUN:*, reg descend:*) -+> V { var FUN:*, var descend:*, reg descend_isMissing:L, reg descend_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg FUN1:*, reg FUN2:V, reg is_function:cls, reg r2:V, reg c:L, reg FUN3:*, reg FUN4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg FUN5:*, reg FUN6:V, reg c1:L, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c7:L, reg r8:V, reg FUN7:*, reg FUN8:V, reg length:cls, reg r9:V, reg r10:V, reg c8:L, reg c9:V, reg c11:L, reg c12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c16:L, reg r12:V, reg FUN9:*, reg FUN10:V, reg c17:L, reg c18:L, reg c19:V, reg r13:V, reg c21:L, reg eval_parent:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg substitute:cls, reg r16:V, reg p:p(V +), reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg FUN11:*, reg FUN12:V, reg c22:L, reg r21:V, reg c23:L, reg stop:cls, reg gettextf:cls, reg deparse:cls, reg FUN13:*, reg FUN14:V, reg p1:p(V +), reg r23:V, reg p2:p(V +), reg r25:V, reg p3:p(V +), reg r27:V, reg r28:V, reg parent_frame:cls, reg r30:V, reg descend1:*, reg descend2:V, reg c24:L, reg get:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg FUN15:*, reg FUN16:V, reg as_character:cls, reg r33:V, reg p4:p(V +), reg envir:*, reg envir1:V, reg p5:p(V +), reg r36:V, reg get1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg FUN17:*, reg FUN18:V, reg as_character1:cls, reg r40:V, reg p6:p(V +), reg envir2:*, reg envir3:V, reg p7:p(V +), reg r43:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg FUN19:*, reg FUN20:V, reg is_function1:cls, reg r46:V, reg r47:V, reg c25:L, reg stop1:cls, reg gettextf1:cls, reg FUN21:*, reg FUN22:V, reg p8:p(V +), reg r49:V, reg p9:p(V +), reg r51:V, reg FUN23:*, reg FUN24:V |
    mkenv;
    st FUN = FUN;
    descend_isMissing = missing.0(descend);
    if descend_isMissing then L0(TRUE) else L0(descend);
  L0(descend_orDefault):
    st descend = descend_orDefault;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r1):
    c = `as.logical`(r1);
    if c then L22() else L2();
  L18():
    FUN1 = ld FUN;
    check L20() else D0();
  L19():
    r = dyn base(<sym FUN>);
    goto L1(r);
  D0():
    deopt 2 [FUN1];
  L2():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L20():
    FUN2 = force? FUN1;
    checkMissing(FUN2);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(FUN2);
    check L21() else D1();
  L22():
    FUN3 = ld FUN;
    check L23() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 6 [FUN3];
  L4(r6):
    c2 = `as.logical`(r6);
    if c2 then L29() else L5(c2);
  L21():
    goto L1(r2);
  L23():
    FUN4 = force? FUN3;
    checkMissing(FUN4);
    popenv;
    return FUN4;
  L26():
    FUN5 = ld FUN;
    check L28() else D3();
  L27():
    r5 = dyn base1(<sym FUN>);
    goto L4(r5);
  D3():
    deopt 12 [FUN5];
  L5(c4):
    c11 = `as.logical`(c4);
    if c11 then L7(c11) else L35();
  L28():
    FUN6 = force? FUN5;
    checkMissing(FUN6);
    c1 = `is.character`(FUN6);
    goto L4(c1);
  L29():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L6(c7, r8):
    r10 = `==`(r8, 1);
    c8 = `as.logical`(r10);
    c9 = `&&`(c7, c8);
    goto L5(c9);
  L7(c12):
    r13 = `!`(c12);
    c21 = `as.logical`(r13);
    if c21 then L40() else L9();
  L30():
    FUN7 = ld FUN;
    check L32() else D4();
  L31():
    r7 = dyn base2(<sym FUN>);
    goto L6(c2, r7);
  L35():
    sym3 = ldf `is.symbol`;
    base3 = ldf `is.symbol` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  D4():
    deopt 17 [c2, FUN7];
  L8(c16, r12):
    c18 = `as.logical`(r12);
    c19 = `||`(c16, c18);
    goto L7(c19);
  L9():
    goto L13();
  L13():
    parent_frame = ldf `parent.frame`;
    check L51() else D12();
  L32():
    FUN8 = force? FUN7;
    checkMissing(FUN8);
    length = ldf length in base;
    r9 = dyn length(FUN8);
    check L33() else D5();
  L36():
    FUN9 = ld FUN;
    check L38() else D6();
  L37():
    r11 = dyn base3(<sym FUN>);
    goto L8(c11, r11);
  L40():
    eval_parent = ldf `eval.parent`;
    check L41() else D7();
  D5():
    deopt 20 [c2, r9];
  D6():
    deopt 25 [c11, FUN9];
  D7():
    deopt 31 [];
  D12():
    deopt 51 [];
  L33():
    goto L6(c2, r9);
  L38():
    FUN10 = force? FUN9;
    checkMissing(FUN10);
    c17 = `is.symbol`(FUN10);
    goto L8(c11, c17);
  L41():
    p = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      substitute = ldf substitute in base;
      r16 = dyn substitute(<lang substitute(FUN)>);
      goto L0(r16);
    L2():
      r14 = dyn base4(<lang substitute(FUN)>);
      goto L0(r14);
    };
    r18 = dyn eval_parent(p);
    check L42() else D8();
  L51():
    r30 = dyn parent_frame(2.0);
    check L52() else D13();
  D8():
    deopt 33 [r18];
  D13():
    deopt 53 [r30];
  L42():
    st FUN = r18;
    sym5 = ldf `is.symbol`;
    base5 = ldf `is.symbol` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L52():
    st envir = r30;
    descend1 = ld descend;
    check L53() else D14();
  D14():
    deopt 55 [descend1];
  L10(r20):
    r21 = `!`(r20);
    c23 = `as.logical`(r21);
    if c23 then L46() else L11();
  L43():
    FUN11 = ld FUN;
    check L45() else D9();
  L44():
    r19 = dyn base5(<sym FUN>);
    goto L10(r19);
  L53():
    descend2 = force? descend1;
    checkMissing(descend2);
    c24 = `as.logical`(descend2);
    if c24 then L54() else L14();
  D9():
    deopt 36 [FUN11];
  L11():
    goto L12(NULL);
  L12(r28):
    goto L13();
  L14():
    get1 = ldf get;
    check L58() else D17();
  L15():
    FUN23 = ld FUN;
    check L68() else D23();
  L45():
    FUN12 = force? FUN11;
    checkMissing(FUN12);
    c22 = `is.symbol`(FUN12);
    goto L10(c22);
  L46():
    stop = ldf stop;
    check L47() else D10();
  L54():
    get = ldf get;
    check L55() else D15();
  D10():
    deopt 41 [];
  D15():
    deopt 58 [];
  D17():
    deopt 67 [];
  D23():
    deopt 90 [FUN23];
  L47():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        deparse = ldf deparse;
        p1 = prom<V +>{
          FUN13 = ld FUN;
          FUN14 = force? FUN13;
          checkMissing(FUN14);
          return FUN14;
        };
        r23 = dyn deparse(p1);
        return r23;
      };
      r25 = dyn gettextf("'%s' is not a function, character or symbol", p2);
      return r25;
    };
    r27 = dyn stop[, domain](p3, NA_LGL);
    check L48() else D11();
  L55():
    p4 = prom<V +>{
      sym6 = ldf `as.character`;
      base6 = ldf `as.character` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      FUN15 = ld FUN;
      FUN16 = force? FUN15;
      checkMissing(FUN16);
      as_character = ldf `as.character` in base;
      r33 = dyn as_character(FUN16);
      goto L0(r33);
    L2():
      r31 = dyn base6(<sym FUN>);
      goto L0(r31);
    };
    p5 = prom<V +>{
      envir = ld envir;
      envir1 = force? envir;
      checkMissing(envir1);
      return envir1;
    };
    r36 = dyn get[, mode, envir](p4, "function", p5);
    check L56() else D16();
  L58():
    p6 = prom<V +>{
      sym7 = ldf `as.character`;
      base7 = ldf `as.character` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      FUN17 = ld FUN;
      FUN18 = force? FUN17;
      checkMissing(FUN18);
      as_character1 = ldf `as.character` in base;
      r40 = dyn as_character1(FUN18);
      goto L0(r40);
    L2():
      r38 = dyn base7(<sym FUN>);
      goto L0(r38);
    };
    p7 = prom<V +>{
      envir2 = ld envir;
      envir3 = force? envir2;
      checkMissing(envir3);
      return envir3;
    };
    r43 = dyn get1[, mode, envir](p6, "any", p7);
    check L59() else D18();
  L68():
    FUN24 = force? FUN23;
    checkMissing(FUN24);
    popenv;
    return FUN24;
  D11():
    deopt 45 [r27];
  D16():
    deopt 64 [r36];
  D18():
    deopt 73 [r43];
  L48():
    goto L12(r27);
  L56():
    st FUN = r36;
    goto L15();
  L59():
    st FUN = r43;
    sym8 = ldf `is.function`;
    base8 = ldf `is.function` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L16(r45):
    r47 = `!`(r45);
    c25 = `as.logical`(r47);
    if c25 then L64() else L17();
  L60():
    FUN19 = ld FUN;
    check L62() else D19();
  L61():
    r44 = dyn base8(<sym FUN>);
    goto L16(r44);
  D19():
    deopt 77 [FUN19];
  L17():
    goto L15();
  L62():
    FUN20 = force? FUN19;
    checkMissing(FUN20);
    is_function1 = ldf `is.function` in base;
    r46 = dyn is_function1(FUN20);
    check L63() else D20();
  L64():
    stop1 = ldf stop;
    check L65() else D21();
  D20():
    deopt 80 [r46];
  D21():
    deopt 83 [];
  L63():
    goto L16(r46);
  L65():
    p9 = prom<V +>{
      gettextf1 = ldf gettextf;
      p8 = prom<V +>{
        FUN21 = ld FUN;
        FUN22 = force? FUN21;
        checkMissing(FUN22);
        return FUN22;
      };
      r49 = dyn gettextf1("found non-function '%s'", p8);
      return r49;
    };
    r51 = dyn stop1[, domain](p9, NA_LGL);
    check L66() else D22();
  D22():
    deopt 87 [r51];
  L66():
    goto L15();
  }
}