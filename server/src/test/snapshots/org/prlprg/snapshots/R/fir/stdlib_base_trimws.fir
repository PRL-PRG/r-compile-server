fun main() {
  () -+> V { reg r:cls, reg x:*, reg x1:V, reg trimws:cls, reg x2:*, reg x3:V, reg p:p(V +), reg r2:V, reg trimws1:cls, reg x4:*, reg x5:V, reg p1:p(V +), reg r4:V, reg trimws2:cls, reg x6:*, reg x7:V, reg p2:p(V +), reg r6:V, reg paste:cls, reg tt:*, reg tt1:V, reg p3:p(V +), reg r8:V, reg trimws3:cls, reg xu:*, reg xu1:V, reg p4:p(V +), reg r10:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg tu:*, reg tu1:V, reg tt2:*, reg tt3:V, reg identical:cls, reg r13:V, reg p5:p(V +), reg r15:V |
    mkenv;
    r = clos `inner-1283425105`;
    st trimws = r;
    st x = "  Some text. ";
    x = ld x;
    check L0() else D0();
  D0():
    deopt 6 [x];
  L0():
    x1 = force? x;
    checkMissing(x1);
    trimws = ldf trimws;
    check L1() else D1();
  D1():
    deopt 9 [];
  L1():
    p = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r2 = dyn trimws(p);
    check L2() else D2();
  D2():
    deopt 11 [r2];
  L2():
    trimws1 = ldf trimws;
    check L3() else D3();
  D3():
    deopt 13 [];
  L3():
    p1 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r4 = dyn trimws1(p1, "l");
    check L4() else D4();
  D4():
    deopt 16 [r4];
  L4():
    trimws2 = ldf trimws;
    check L5() else D5();
  D5():
    deopt 18 [];
  L5():
    p2 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r6 = dyn trimws2(p2, "r");
    check L6() else D6();
  D6():
    deopt 21 [r6];
  L6():
    st tt = "text with unicode 'non breakable space'.";
    paste = ldf paste;
    check L7() else D7();
  D7():
    deopt 26 [];
  L7():
    p3 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    r8 = dyn paste(" \t\u000b", p3, "\u00a0 \n\r");
    check L8() else D8();
  D8():
    deopt 30 [r8];
  L8():
    st xu = r8;
    trimws3 = ldf trimws;
    check L9() else D9();
  D9():
    deopt 33 [];
  L9():
    p4 = prom<V +>{
      xu = ld xu;
      xu1 = force? xu;
      checkMissing(xu1);
      return xu1;
    };
    r10 = dyn trimws3[, whitespace](p4, "[\\h\\v]");
    check L10() else D10();
  D10():
    deopt 37 [r10];
  L10():
    st tu = r10;
    stopifnot = ldf stopifnot;
    check L11() else D11();
  D11():
    deopt 40 [];
  L11():
    p5 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r12):
      return r12;
    L1():
      tu = ld tu;
      tu1 = force? tu;
      checkMissing(tu1);
      tt2 = ld tt;
      tt3 = force? tt2;
      checkMissing(tt3);
      identical = ldf identical in base;
      r13 = dyn identical(tu1, tt3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r13);
    L2():
      r11 = dyn base(<sym tu>, <sym tt>);
      goto L0(r11);
    };
    r15 = dyn stopifnot(p5);
    check L12() else D12();
  D12():
    deopt 42 [r15];
  L12():
    popenv;
    return r15;
  }
}
fun `inner-1283425105`(x, which, whitespace) {
  (reg x:*, reg which:*, reg whitespace:*) -+> V { var x:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var whitespace:*, reg whitespace_isMissing:L, reg whitespace_orDefault:*, reg match_arg:cls, reg which1:*, reg which2:V, reg p1:p(V +), reg r5:V, reg r6:cls, reg which3:*, reg which4:V, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg i_ddd:dots, reg i:V, reg c7:L, reg c8:L, reg c9:L, reg mysub:cls, reg paste0:cls, reg whitespace1:*, reg whitespace2:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg x1:*, reg x2:V, reg p4:p(V +), reg r11:V, reg mysub1:cls, reg paste1:cls, reg whitespace3:*, reg whitespace4:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg x3:*, reg x4:V, reg p7:p(V +), reg r16:V, reg mysub2:cls, reg paste2:cls, reg whitespace5:*, reg whitespace6:V, reg p8:p(V +), reg r18:V, reg p9:p(V +), reg mysub3:cls, reg paste3:cls, reg whitespace7:*, reg whitespace8:V, reg p10:p(V +), reg r21:V, reg p11:p(V +), reg x5:*, reg x6:V, reg p12:p(V +), reg r24:V, reg p13:p(V +), reg r26:V |
    mkenv;
    st x = x;
    which_isMissing = missing.0(which);
    if which_isMissing then L0() else L1(which);
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
      r2 = dyn c("both", "left", "right");
      goto L0(r2);
    L2():
      r = dyn base("both", "left", "right");
      goto L0(r);
    };
    goto L1(p);
  L1(which_orDefault):
    st which = which_orDefault;
    whitespace_isMissing = missing.0(whitespace);
    if whitespace_isMissing then L2("[ \t\r\n]") else L2(whitespace);
  L2(whitespace_orDefault):
    st whitespace = whitespace_orDefault;
    match_arg = ldf `match.arg`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    r5 = dyn match_arg(p1);
    check L8() else D1();
  D1():
    deopt 3 [r5];
  L8():
    st which = r5;
    r6 = clos inner1790441006;
    st mysub = r6;
    which3 = ld which;
    check L9() else D2();
  D2():
    deopt 8 [which3];
  L9():
    which4 = force? which3;
    checkMissing(which4);
    c1 = `is.vector`(which4, "any");
    if c1 then L10() else L11();
  L10():
    c2 = inherits(which4, "factor", FALSE);
    if c2 then L12() else L13();
  L11():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L12():
    c3 = `is.character`(which4);
    if c3 then L14() else L15();
  L13():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L12();
  L3():
    mysub = ldf mysub;
    check L23() else D3();
  L4():
    mysub1 = ldf mysub;
    check L26() else D5();
  L5():
    mysub2 = ldf mysub;
    check L29() else D7();
  L6():
    invisible.0();
    popenv;
    return NULL;
  L14():
    c4 = `==`.6(which4, "left");
    if c4 then L3() else L16();
  L15():
    i_ddd = dots[which4];
    i = `as.integer`(i_ddd);
    c7 = `==`.5(i, 1);
    if c7 then L3() else L19();
  D3():
    deopt 14 [];
  D5():
    deopt 19 [];
  D7():
    deopt 24 [];
  L16():
    c5 = `==`.6(which4, "right");
    if c5 then L4() else L17();
  L19():
    c8 = `==`.5(i, 2);
    if c8 then L4() else L20();
  L23():
    p3 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        whitespace1 = ld whitespace;
        whitespace2 = force? whitespace1;
        checkMissing(whitespace2);
        return whitespace2;
      };
      r8 = dyn paste0("^", p2, "+");
      return r8;
    };
    p4 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r11 = dyn mysub(p3, p4);
    check L24() else D4();
  L26():
    p6 = prom<V +>{
      paste1 = ldf paste0;
      p5 = prom<V +>{
        whitespace3 = ld whitespace;
        whitespace4 = force? whitespace3;
        checkMissing(whitespace4);
        return whitespace4;
      };
      r13 = dyn paste1(p5, "+$");
      return r13;
    };
    p7 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r16 = dyn mysub1(p6, p7);
    check L27() else D6();
  L29():
    p9 = prom<V +>{
      paste2 = ldf paste0;
      p8 = prom<V +>{
        whitespace5 = ld whitespace;
        whitespace6 = force? whitespace5;
        checkMissing(whitespace6);
        return whitespace6;
      };
      r18 = dyn paste2(p8, "+$");
      return r18;
    };
    p13 = prom<V +>{
      mysub3 = ldf mysub;
      p11 = prom<V +>{
        paste3 = ldf paste0;
        p10 = prom<V +>{
          whitespace7 = ld whitespace;
          whitespace8 = force? whitespace7;
          checkMissing(whitespace8);
          return whitespace8;
        };
        r21 = dyn paste3("^", p10, "+");
        return r21;
      };
      p12 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r24 = dyn mysub3(p11, p12);
      return r24;
    };
    r26 = dyn mysub2(p9, p13);
    check L30() else D8();
  D4():
    deopt 17 [r11];
  D6():
    deopt 22 [r16];
  D8():
    deopt 27 [r26];
  L17():
    c6 = `==`.6(which4, "both");
    if c6 then L5() else L18();
  L20():
    c9 = `==`.5(i, 3);
    if c9 then L5() else L21();
  L24():
    popenv;
    return r11;
  L27():
    popenv;
    return r16;
  L30():
    popenv;
    return r26;
  L18():
    goto L6();
  L21():
    goto L6();
  }
}
fun inner1790441006(re, x) {
  (reg re:*, reg x:*) -+> V { var re:*, var x:*, reg sub:cls, reg re1:*, reg re2:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st re = re;
    st x = x;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      re1 = ld re;
      re2 = force? re1;
      checkMissing(re2);
      return re2;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn sub[, , , perl](p, "", p1, TRUE);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    popenv;
    return r2;
  }
}