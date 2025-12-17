fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2746112365;
    st `.bibentry_match_format_style` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2746112365(style) {
  (reg style:*) -+> V { var style:*, reg pmatch:cls, reg tolower:cls, reg style1:*, reg style2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg tolower1:cls, reg bibentry_format_styles:*, reg bibentry_format_styles1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg ind:*, reg ind1:V, reg r9:V, reg all:cls, reg r10:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r11:V, reg p4:p(V +), reg paste:cls, reg dQuote:cls, reg bibentry_format_styles2:*, reg bibentry_format_styles3:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:V, reg bibentry_format_styles4:*, reg bibentry_format_styles5:V, reg c1:L, reg bibentry_format_styles7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r22:V |
    mkenv;
    st style = style;
    pmatch = ldf pmatch;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      tolower = ldf tolower;
      p = prom<V +>{
        style1 = ld style;
        style2 = force? style1;
        checkMissing(style2);
        return style2;
      };
      r1 = dyn tolower(p);
      return r1;
    };
    p3 = prom<V +>{
      tolower1 = ldf tolower;
      p2 = prom<V +>{
        bibentry_format_styles = ld bibentry_format_styles;
        bibentry_format_styles1 = force? bibentry_format_styles;
        checkMissing(bibentry_format_styles1);
        return bibentry_format_styles1;
      };
      r4 = dyn tolower1(p2);
      return r4;
    };
    r6 = dyn pmatch[, , nomatch](p1, p3, 0);
    check L5() else D1();
  D1():
    deopt 6 [r6];
  L5():
    st ind = r6;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r8):
    c = `as.logical`(r8);
    if c then L10() else L1();
  L6():
    ind = ld ind;
    check L8() else D2();
  L7():
    r7 = dyn base(<lang `==`(ind, 0)>);
    goto L0(r7);
  D2():
    deopt 10 [ind];
  L1():
    goto L2();
  L2():
    bibentry_format_styles4 = ld bibentry_format_styles;
    check L14() else D6();
  L8():
    ind1 = force? ind;
    checkMissing(ind1);
    r9 = `==`(ind1, 0);
    all = ldf all in base;
    r10 = dyn all(r9);
    check L9() else D3();
  L10():
    stop = ldf stop;
    check L11() else D4();
  D3():
    deopt 15 [r10];
  D4():
    deopt 17 [];
  D6():
    deopt 24 [bibentry_format_styles4];
  L9():
    goto L0(r10);
  L11():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        r11 = dyn sQuote("style");
        return r11;
      };
      p7 = prom<V +>{
        paste = ldf paste;
        p6 = prom<V +>{
          dQuote = ldf dQuote;
          p5 = prom<V +>{
            bibentry_format_styles2 = ld bibentry_format_styles;
            bibentry_format_styles3 = force? bibentry_format_styles2;
            checkMissing(bibentry_format_styles3);
            return bibentry_format_styles3;
          };
          r14 = dyn dQuote(p5);
          return r14;
        };
        r16 = dyn paste[, collapse](p6, ", ");
        return r16;
      };
      r18 = dyn gettextf("%s should be one of %s", p4, p7);
      return r18;
    };
    r20 = dyn stop[, domain](p8, NA_LGL);
    check L12() else D5();
  L14():
    bibentry_format_styles5 = force? bibentry_format_styles4;
    checkMissing(bibentry_format_styles5);
    c1 = `is.object`(bibentry_format_styles5);
    if c1 then L15() else L16(bibentry_format_styles5);
  D5():
    deopt 21 [r20];
  L3(dx1):
    popenv;
    return dx1;
  L12():
    goto L2();
  L15():
    dr = tryDispatchBuiltin.1("[", bibentry_format_styles5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(bibentry_format_styles7):
    ind2 = ld ind;
    check L18() else D7();
  D7():
    deopt 26 [bibentry_format_styles7, ind2];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L18():
    ind3 = force? ind2;
    __ = ldf `[` in base;
    r22 = dyn __(bibentry_format_styles7, ind3);
    goto L3(r22);
  }
}